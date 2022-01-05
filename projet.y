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
Tmaillon *tete;
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
%type <id> IDENTIFIANT;
%type <str> CONSTANTE
%type <str> expl 
%type <flottant> expa 
%union{
double flottant;
int entier;
char caractere[3];
char str[100];
char booleen[5];
char id[100];
}
%%
prog :
    | BEGINPROG corp ENDPROG
;
corp:
declaration | declaration corp | expa | expc | expl 
;
declaration:
declaration_integer | declaration_double | declaration_char | declaration_string | declaration_boolean | declaration_constante
;
declaration_integer:
INTEGER_DECLARATION IDENTIFIANT AFFECT INTEGER DEL {printf("entier\n");strcpy(buffer,"");itoa($4,buffer,10);AJOUTER_ENTITE(tete,buffer,"int",$2);}
;
declaration_double:
DOUBLE_DECLARATION IDENTIFIANT AFFECT DOUBLE DEL {printf("double\n");strcpy(buffer,"");snprintf(buffer, 256, "%f", $4);AJOUTER_ENTITE(tete,buffer,"double",$2);}
;
declaration_string:
STRING_DECLARATION IDENTIFIANT AFFECT STRING DEL{printf("string\n");AJOUTER_ENTITE(tete,$4,"string",$2);}
;
declaration_char:
CHAR_DECLARATION IDENTIFIANT AFFECT CHAR DEL{printf("char\n");AJOUTER_ENTITE(tete,$4,"char",$2);}
;
declaration_boolean:
BOOLEAN_DECLARATION IDENTIFIANT AFFECT BOOLEAN DEL {AJOUTER_ENTITE(tete,$4,"boolean",$2);}
;
declaration_constante:
CONSTANTE_DECLARATION CONSTANTE AFFECT INTEGER DEL {strcpy(buffer,"");itoa($4,buffer,10);AJOUTER_ENTITE(tete,buffer,"constante",$2);}|  CONSTANTE_DECLARATION CONSTANTE AFFECT DOUBLE DEL{strcpy(buffer,"");snprintf(buffer, 256, "%f", $4);AJOUTER_ENTITE(tete,buffer,"constante",$2);}
;
oppa:
ADD | DIV | SUB | MUL | POWER
;
expa:
INTEGER
|DOUBLE
|INTEGER ADD INTEGER {$$=$1+$3;} | DOUBLE ADD DOUBLE DEL{printf("%lf\n",$1+$3);} | DOUBLE ADD INTEGER DEL{printf("%lf\n",$1+$3);} | INTEGER ADD DOUBLE DEL{printf("%lf\n",$1+$3);}  
|INTEGER SUB INTEGER DEL {printf("%d\n",$1-$3);} | DOUBLE SUB DOUBLE DEL{printf("%lf\n",$1-$3);} | DOUBLE SUB INTEGER DEL{printf("%lf\n",$1-$3);} | INTEGER SUB DOUBLE DEL{printf("%lf\n",$1-$3);} 
|INTEGER MUL INTEGER {$$=$1+$3;} | DOUBLE MUL DOUBLE DEL{printf("%lf\n",$1*$3);} | DOUBLE MUL INTEGER DEL{printf("%lf\n",$1*$3);} | INTEGER MUL DOUBLE DEL{printf("%lf\n",$1*$3);} 
|INTEGER DIV INTEGER DEL {printf("%d\n",$1/$3);} | DOUBLE DIV DOUBLE DEL{printf("%lf\n",$1/$3);} | DOUBLE DIV INTEGER DEL{printf("%lf\n",$1/$3);} | INTEGER DIV DOUBLE DEL{printf("%lf\n",$1/$3);} 
|INTEGER MOD INTEGER DEL {printf("%d\n",$1%$3);} |
|INTEGER POWER INTEGER DEL {printf("%lf",pow($1,$3));}
|expa ADD expa {printf("1: %lf",$1+$3);}
;
expc:
INTEGER SUP INTEGER DEL {if($1>$3){printf("TRUE");}else{printf("FALSE");}} |INTEGER SUP DOUBLE DEL {if($1>$3){printf("TRUE");}else{printf("FALSE");}} |DOUBLE SUP INTEGER DEL {if($1>$3){printf("TRUE");}else{printf("FALSE");}} |DOUBLE SUP DOUBLE DEL {if($1>$3){printf("TRUE");}else{printf("FALSE");}} 
|INTEGER INF INTEGER DEL {if($1<$3){printf("TRUE");}else{printf("FALSE");}} |INTEGER INF DOUBLE DEL {if($1<$3){printf("TRUE");}else{printf("FALSE");}} |DOUBLE INF INTEGER DEL {if($1<$3){printf("TRUE");}else{printf("FALSE");}} |DOUBLE INF DOUBLE DEL {if($1<$3){printf("TRUE");}else{printf("FALSE");}} 
|INTEGER SUPE INTEGER DEL {if($1>=$3){printf("TRUE");}else{printf("FALSE");}} |INTEGER SUPE DOUBLE DEL {if($1>=$3){printf("TRUE");}else{printf("FALSE");}} |DOUBLE SUPE INTEGER DEL {if($1>=$3){printf("TRUE");}else{printf("FALSE");}} |DOUBLE SUPE DOUBLE DEL {if($1>=$3){printf("TRUE");}else{printf("FALSE");}} 
|INTEGER INFE INTEGER DEL {if($1<=$3){printf("TRUE");}else{printf("FALSE");}} |INTEGER INFE DOUBLE DEL {if($1<=$3){printf("TRUE");}else{printf("FALSE");}} |DOUBLE INFE INTEGER DEL {if($1<=$3){printf("TRUE");}else{printf("FALSE");}} |DOUBLE INFE DOUBLE DEL {if($1<=$3){printf("TRUE");}else{printf("FALSE");}} 
|INTEGER EQUAL INTEGER DEL {if($1==$3){printf("TRUE");}else{printf("FALSE");}} |INTEGER EQUAL DOUBLE DEL {if($1==$3){printf("TRUE");}else{printf("FALSE");}} |DOUBLE EQUAL INTEGER DEL {if($1==$3){printf("TRUE");}else{printf("FALSE");}} |DOUBLE EQUAL DOUBLE DEL {if($1==$3){printf("TRUE");}else{printf("FALSE");}}
|INTEGER DIFF INTEGER DEL {if($1!=$3){printf("TRUE");}else{printf("FALSE");}} |INTEGER EQUAL DOUBLE DEL {if($1!=$3){printf("TRUE");}else{printf("FALSE");}} |DOUBLE EQUAL INTEGER DEL {if($1!=$3){printf("TRUE");}else{printf("FALSE");}} |DOUBLE EQUAL DOUBLE DEL {if($1!=$3){printf("TRUE");}else{printf("FALSE");}} 
;
oppl:
AND | OR | NOT
;
expl:
|BOOLEAN {strcpy($$,$1);}
|BOOLEAN AND BOOLEAN{
if(strcmp($1,"TRUE")==0 && strcmp($3,"TRUE")==0){strcpy($$,"TRUE");}
else{ strcpy($$,"FALSE");}
}  
|BOOLEAN OR BOOLEAN{
if(strcmp($1,"FALSE")==0 && strcmp($3,"FALSE")==0){strcpy($$,"FALSE");}
else{ strcpy($$,"TRUE");}
} 
|NOT BOOLEAN{
if(strcmp($2,"FALSE")==0){strcpy($$,"TRUE");}
else{ strcpy($$,"FALSE");}
}
| expl oppl expl
;
%%
void yyerror(char *s){
printf("Erreur synthaxique a la ligne : %d\n",yylineno);
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
 fclose(yyin);
  return 0;
}