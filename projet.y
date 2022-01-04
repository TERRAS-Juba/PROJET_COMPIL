%{
#include <stdio.h>
int yylex();
void yyerror(char *s);
extern FILE *yyin;
extern FILE *yyout;
extern int yylineno;
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
	| declaration | declaration corp
;
declaration:
	| declaration_integer | declaration_double | declaration_char | declaration_string | declaration_boolean | declaration_constante
;
declaration_integer:
	| INTEGER_DECLARATION IDENTIFIANT AFFECT INTEGER{printf("Une valeur entiere = %d\n",$4);} DEL
;
declaration_double:
	| DOUBLE_DECLARATION IDENTIFIANT AFFECT DOUBLE{printf("Une valeur double = %g\n",$4);} DEL
;
declaration_string:
	| STRING_DECLARATION IDENTIFIANT AFFECT STRING{printf("Une chaine de caractere = %s\n",$4);} DEL
;
declaration_char:
	| CHAR_DECLARATION IDENTIFIANT AFFECT CHAR{printf("Un caractere = %s\n",$4);} DEL
;
declaration_boolean:
	| BOOLEAN_DECLARATION IDENTIFIANT AFFECT BOOLEAN{printf("Un boolean = %s\n",$4);} DEL
;
declaration_constante:
	| CONSTANTE_DECLARATION CONSTANTE AFFECT INTEGER{printf("Une constante = %d\n",$4);} DEL |  CONSTANTE_DECLARATION CONSTANTE AFFECT DOUBLE{printf("Une constante = %lf\n",$4);} DEL
;

%%
void yyerror(char *s){
printf("Erreur synthaxique a la ligne : %d\n",yylineno);
}
int main()
{
  yyparse();
  return 0;
}