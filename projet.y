%{
#include <stdio.h>
#include <string.h>
#include "machine.c"
#include  <math.h>
int yylex();
void yyerror(char *s);
extern FILE *yyin;
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
%token CONSTANTE FUNCTION IDENTIFIANT
%token BEGINPROG ENDPROG IF THEN ENDIF ELIF ENDELIF ELSE ENDELSE FOR BEGINFOR ENDFOR WHILE BEGINWHILE ENDWHILE INPUT OUTPUT INC DEC FUNCTION_DECLARATION CONSTANTE_DECLARATION
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
%type <str> var 
%type <str> var_declaration 
%type <flottant> expc  
%type <flottant> expa 
%union{
double flottant;
int entier;
char caractere[3];
char str[256];
char booleen[5];
}
%%
prog :
    | BEGINPROG corp ENDPROG
;
corp:
| corp declaration | corp exp | corp if | corp for | corp structure | corp tableau | corp fonction | corp while | corp input
;
/*============================*/
/* Les declarations*/
/*============================*/
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
/*============================*/
/* Les expression*/
/*============================*/
exp:
|expa DEL{printf("%f\n",$1);} | expc DEL{printf("%d\n",(int)$1);} | expl DEL{printf("%s\n",$1);}| affectation DEL{} |incrementation | decrementation
;
condition:
expc | expl 
;
/*============================*/
/* Les variables*/
/*============================*/
var:
|IDENTIFIANT {ptr=RECHERCHE_VALEUR_VARIABLE(tete,$1);if(ptr!=NULL){strcpy($$,ptr->value);}else{printf("Erreur! Undifined varaible '%s' in ligne '%d'",$1,yylineno);}};
var_declaration:
|IDENTIFIANT {ptr=RECHERCHE_VALEUR_VARIABLE(tete,$1);if(ptr!=NULL){strcpy($$,ptr->nom);}else{printf("Erreur! Undifined varaible '%s' in ligne '%d'",$1,yylineno);}};
/*============================*/
/* Les expression arithmetiques */
/*============================*/
expa:INTEGER{$$=$1;}
|DOUBLE{$$=$1;}
|var{$$=CONVERT_STRING_DOUBLE($1);}
|PARO expa ADD expa PARF {$$=$2+$4;}|expa ADD expa{$$=$1+$3;} 
|PARO expa SUB expa PARF {$$=$2-$4;}|expa SUB expa {$$=$1-$3;}
|PARO expa MUL expa PARF {$$=$2*$4;}|expa MUL expa {$$=$1*$3;} 
|PARO expa DIV expa PARF {$$=$2/$4;}|expa DIV expa {$$=$1/$3;} 
|PARO expa POWER expa PARF {$$=pow($2,$4);}|expa POWER expa {$$=pow($1,$3);}
|PARO INTEGER MOD INTEGER PARF {$$=$2%$4;}|INTEGER MOD INTEGER {$$=$1%$3;}
;
/*============================*/
/* L'affectation */
/*============================*/
affectation:
| var_declaration AFFECT expa{strcpy(buffer,"");snprintf(buffer, 256, "%f", $3);AJOUTER_ENTITE(tete,buffer,"double",$1);} | PARO IDENTIFIANT AFFECT expa PARF {strcpy(buffer,"");snprintf(buffer, 256, "%f", $4);AJOUTER_ENTITE(tete,buffer,"double",$2);} 
;
/*==============================*/
/* Les expression de comparaison */
/*==============================*/
expc:
|INTEGER {$$=$1;}
|DOUBLE {$$=$1;}
| PARO expc SUP expc PARF {if($2>$4){$$=1;}else{$$=0;}} |expc SUP expc {if($1>$3){$$=1;}else{$$=0;}} 
| PARO expc INF expc PARF {if($2<$4){$$=1;}else{$$=0;}} |expc INF expc {if($1<$3){$$=1;}else{$$=0;}} 
| PARO expc SUPE expc PARF {if($2>=$4){$$=1;}else{$$=0;}} |expc SUPE expc{if($1>=$3){$$=1;}else{$$=0;}} 
| PARO expc INFE expc PARF {if($2<=$4){$$=1;}else{$$=0;}}|expc INFE expc{if($1<=$3){$$=1;}else{$$=0;}} 
| PARO expc EQUAL expc PARF {if($2==$4){$$=1;}else{$$=0;}}|expc EQUAL expc {if($1==$3){$$=1;}else{$$=0;}} 
| PARO expc DIFF expc PARF {if($2!=$4){$$=1;}else{$$=0;}}|expc DIFF expc {if($1!=$3){$$=1;}else{$$=0;}} 
| PARO expa SUP expa PARF {if($2>$4){$$=1;}else{$$=0;}}|expa SUP expa {if($1>$3){$$=1;}else{$$=0;}}
| PARO expa INF expa PARF {if($2<$4){$$=1;}else{$$=0;}}|expa INF expa {if($1<$3){$$=1;}else{$$=0;}} 
| PARO expa SUPE expa PARF {if($2>=$4){$$=1;}else{$$=0;}}|expa SUPE expa {if($1>=$3){$$=1;}else{$$=0;}} 
| PARO expa INFE expa PARF {if($2<=$4){$$=1;}else{$$=0;}}|expa INFE expa {if($1<=$3){$$=1;}else{$$=0;}} 
| PARO expa EQUAL expa PARF {if($2==$4){$$=1;}else{$$=0;}}|expa EQUAL expa {if($1==$3){$$=1;}else{$$=0;}} 
| PARO expa DIFF expa PARF {if($2!=$4){$$=1;}else{$$=0;}}|expa DIFF expa {if($1!=$3){$$=1;}else{$$=0;}} 
;
/*============================*/
/* Les expression logiques */
/*============================*/
expl:
|BOOLEAN {strcpy($$,$1);}
|expl AND expl{
if(strcmp($1,"TRUE")==0 && strcmp($3,"TRUE")==0){strcpy($$,"TRUE");}
else{strcpy($$,"FALSE");}
}
|PARO expl AND expl PARF{
if(strcmp($2,"TRUE")==0 && strcmp($4,"TRUE")==0){strcpy($$,"TRUE");}
else{strcpy($$,"FALSE");}
} 
|expl OR expl{
if(strcmp($1,"FALSE")==0 && strcmp($3,"FALSE")==0){strcpy($$,"FALSE");}
else{ strcpy($$,"TRUE");}
} 
|PARO expl OR expl PARF{
if(strcmp($2,"FALSE")==0 && strcmp($4,"FALSE")==0){strcpy($$,"FALSE");}
else{ strcpy($$,"TRUE");}
} 
|NOT expl{
if(strcmp($2,"FALSE")==0){strcpy($$,"TRUE");}
else{ strcpy($$,"FALSE");}
}
|PARO NOT expl PARF{
if(strcmp($3,"FALSE")==0){strcpy($$,"TRUE");}
else{ strcpy($$,"FALSE");}
}
|expc AND expc{
if($1==1 && $3==1){strcpy($$,"TRUE");}
else{strcpy($$,"FALSE");}
}
|PARO expc AND expc PARF{
if($2==1 && $4==1){strcpy($$,"TRUE");}
else{strcpy($$,"FALSE");}
} 
|expc OR expc{
if($1==0 && $3==0){strcpy($$,"FALSE");}
else{strcpy($$,"TRUE");}
}
|PARO expc OR expc PARF{
if($2==0 && $4==0){strcpy($$,"FALSE");}
else{strcpy($$,"TRUE");}
}
|NOT expc{
if($2==0){strcpy($$,"TRUE");}
else{strcpy($$,"FALSE");}
}
|NOT PARO expc PARF{
if($3==0){strcpy($$,"TRUE");}
else{strcpy($$,"FALSE");}
}
;
/*==============================*/
/* Les IF/ELSE */
/*==============================*/
if:
| IF PARO condition PARF THEN corp_if ENDIF| IF PARO condition PARF THEN corp_if ENDIF elif | IF PARO condition PARF THEN corp_if ENDIF else
;
elif:
| ELIF PARO condition PARF THEN corp_if ENDELIF else| ELIF PARO condition PARF THEN corp_if ENDELIF elif else
;
else:
|ELSE corp_if ENDELSE
;
corp_if:
|corp_if exp | corp_if declaration | corp_if if | corp_if for | corp_if tableau | corp_if while
;
/*==============================*/
/* La boucle pour */
/*==============================*/
corp_for:
| corp_for exp | corp_for declaration |corp_for if | corp_for for | corp_for tableau | corp_for while
;
for:
| FOR PARO IDENTIFIANT VIRGULE expa VIRGULE expa VIRGULE expa PARF BEGINFOR corp_for ENDFOR
;
/*==============================*/
/* La boucle while */
/*==============================*/
corp_while:
| corp_while exp | corp_while declaration |corp_while if | corp_while for | corp_while tableau | corp_while while
;
while:
| WHILE PARO condition PARF BEGINWHILE corp_while ENDWHILE
;
/*==============================*/
/* Structure*/
/*==============================*/
corp_structure:
| corp_structure declaration
;
structure:
| STRUCT_DECLARATION IDENTIFIANT AFFECT ACCO corp_structure ACCF DEL
;
corp_tableau:
|corp_tableau INTEGER VIRGULE
;
tableau:
| TAB_DECLARATION IDENTIFIANT AFFECT CROO corp_tableau CROF DEL
;
corp_fonction: 
| corp_fonction exp | corp_fonction if | corp_fonction for | corp_fonction declaration | corp_fonction tableau
;
fonction:
FUNCTION_DECLARATION FUNCTION PARO var PARF ACCO corp_fonction ACCF DEL
;
/*==============================*/
/* Incrementation / Decrementation*/
/*==============================*/
incrementation:
|INC PARO IDENTIFIANT PARF DEL{ ptr=RECHERCHE_VALEUR_VARIABLE(tete,$3);if(ptr!=NULL){CONVERT_DOUBLE_STRING(ptr->value,(CONVERT_STRING_DOUBLE(ptr->value)+1));}else{printf("Erreur! Undifined varaible '%s' in ligne '%d'",$3,yylineno);}}
;
decrementation:
|DEC PARO IDENTIFIANT PARF DEL{ ptr=RECHERCHE_VALEUR_VARIABLE(tete,$3);if(ptr!=NULL){CONVERT_DOUBLE_STRING(ptr->value,(CONVERT_STRING_DOUBLE(ptr->value)-1));}else{printf("Erreur! Undifined varaible '%s' in ligne '%d'",$3,yylineno);}}
;
/*==============================*/
/* Input*/
/*==============================*/
input:
var_declaration AFFECT INPUT PARO STRING PARF DEL {printf("%s\n",$5);scanf("%s",buffer);ptr=RECHERCHE_VALEUR_VARIABLE(tete,$1);if(ptr!=NULL){strcpy(ptr->value,buffer);}else{printf("Erreur! Undifined varaible '%s' in ligne '%d'",$1,yylineno);}}
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
fclose(yyin);
  return 0;
}