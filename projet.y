%{
#include <stdio.h>
#include <string.h>
#include "machine.c"
#include  <math.h>
int yylex();
void yyerror(char *s);
extern FILE *yyin;
extern FILE *yyout;
extern int yylineno;
typedef struct Tmaillon Tmaillon;
Tmaillon *tete,*ptr;
char buffer[256];
char buffer2[256];
%}
%token ADD SUB DIV MUL POWER AND OR NOT MOD SUP SUPE INF INFE EQUAL DIFF AFFECT
%token PARO PARF CROO CROF ACCO ACCF 
%token DEL VIRGULE
%token INTEGER DOUBLE STRING CHAR BOOLEAN
%token CONSTANTE FONCTION IDENTIFIANT
%token BEGINPROG ENDPROG IF THEN ENDIF ELIF ENDELIF ELSE ENDELSE FOR BEGINFOR ENDFOR WHILE BEGINWHILE ENDWHILE INPUT OUTPUT INCREMENT DECREMENT FUNCTION_DECLARATION CONSTANTE_DECLARATION
%token INTEGER_DECLARATION DOUBLE_DECLARATION CHAR_DECLARATION STRING_DECLARATION BOOLEAN_DECLARATION TAB_DECLARATION STRUCT_DECLARATION
%left OR
%left AND
%left EQUAL DIFF
%left SUP SUPE INF INFE AFFECT
%left ADD SUB
%left MUL DIV MOD
%left NOT
%right POWER
%left PARO PARF
%type <entier> INTEGER;
%type <flottant> DOUBLE;
%type <caractere> CHAR;
%type <str> STRING;
%type <booleen> BOOLEAN;
%type <str> IDENTIFIANT;
%type <str> CONSTANTE
%type <str> expl 
%type <flottant> expc  
%type <flottant> expa 
%union{
double flottant;
int entier;
char caractere[3];
char str[100];
char booleen[5];
}
%%
prog :
    | BEGINPROG corp ENDPROG
;
corp:
| corp declaration | corp exp
;
declaration:
declaration_integer | declaration_double | declaration_char | declaration_string | declaration_boolean | declaration_constante
;
declaration_integer:
INTEGER_DECLARATION IDENTIFIANT AFFECT INTEGER DEL {printf("entier\n");strcpy(buffer,"");itoa($4,buffer,10);AJOUTER_ENTITE(tete,buffer,"int",$2);}
;
declaration_double:
DOUBLE_DECLARATION IDENTIFIANT AFFECT DOUBLE DEL {printf("double\n",$2);strcpy(buffer,"");snprintf(buffer, 256, "%f", $4);AJOUTER_ENTITE(tete,buffer,"double",$2);}
;
declaration_char:
CHAR_DECLARATION IDENTIFIANT AFFECT CHAR DEL{printf("char\n");AJOUTER_ENTITE(tete,$4,"char",$2);}
;
declaration_string:
STRING_DECLARATION IDENTIFIANT AFFECT STRING DEL{printf("string\n");AJOUTER_ENTITE(tete,$4,"string",$2);}
;
declaration_boolean:
BOOLEAN_DECLARATION IDENTIFIANT AFFECT BOOLEAN DEL {printf("boolean\n");AJOUTER_ENTITE(tete,$4,"boolean",$2);}
;
declaration_constante:
CONSTANTE_DECLARATION CONSTANTE AFFECT INTEGER DEL {printf("constante entiere\n");strcpy(buffer,"");itoa($4,buffer,10);AJOUTER_ENTITE(tete,buffer,"constante",$2);}|  CONSTANTE_DECLARATION CONSTANTE AFFECT DOUBLE DEL{printf("constante double\n");strcpy(buffer,"");snprintf(buffer, 256, "%f", $4);AJOUTER_ENTITE(tete,buffer,"constante",$2);}
;
exp:
|expa DEL{printf("%lf\n",$1);} | expc DEL{printf("%d\n",(int)$1);} | expl DEL{printf("%s\n",$1);}
;
expa:INTEGER{$$=$1;}
|DOUBLE{$$=$1;}
|expa ADD expa {$$=$1+$3;} 
|expa SUB expa {$$=$1-$3;} 
|expa MUL expa {$$=$1*$3;} 
|expa DIV expa {$$=$1/$3;} 
|expa POWER expa {$$=pow($1,$3);}
|INTEGER MOD INTEGER {$$=$1%$3;}
;
expc:
|INTEGER {$$=$1;}
|DOUBLE {$$=$1;}
|expc SUP expc {if($1>$3){$$=1;}else{$$=0;}} 
|expc INF expc {if($1<$3){$$=1;}else{$$=0;}} 
|expc SUPE expc{if($1>=$3){$$=1;}else{$$=0;}} 
|expc INFE expc{if($1<=$3){$$=1;}else{$$=0;}} 
|expc EQUAL expc {if($1==$3){$$=1;}else{$$=0;}} 
|expc DIFF expc {if($1!=$3){$$=1;}else{$$=0;}} 
;
expl:
|BOOLEAN {strcpy($$,$1);}
|expl AND expl{
if(strcmp($1,"TRUE")==0 && strcmp($3,"TRUE")==0){strcpy($$,"TRUE");}
else{strcpy($$,"FALSE");}
}  
|expl OR expl{
if(strcmp($1,"FALSE")==0 && strcmp($3,"FALSE")==0){strcpy($$,"FALSE");}
else{ strcpy($$,"TRUE");}
} 
|NOT expl{
if(strcmp($2,"FALSE")==0){strcpy($$,"TRUE");}
else{ strcpy($$,"FALSE");}
}
;
%%
void yyerror(char *s){
printf("Erreur syntaxique a la ligne : %d\n",yylineno);
}
int main()
{
 tete=CREATION_TABLE_SYMBOLES();
 yyin=fopen("test.txt","r");
 if(yyin==NULL){
 printf("Erreur d'ouverture de fichier");
 }else{
 yyparse();
 }
AFFICHER_TABLE_SYMBOLES(tete);
ptr=RECHERCHE_VALEUR_VARIABLE(tete,"c_pie");
printf("%s",ptr->nom);
fclose(yyin);
  return 0;
}