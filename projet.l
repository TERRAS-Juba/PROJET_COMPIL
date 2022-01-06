%option noyywrap
%option yylineno
%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "y.tab.h"
%}
boolean TRUE|FALSE
integer (-)?[0-9]*|[0-9]*
double  (-)?[0-9]+([.][0-9]+)?|[0-9]+([.][0-9]+)?
string  ["][^"]*["]
char ['][a-zA-Z][']
COMMENTAIRE_LIGNE [*][*]([a-zA-Z]|[ ]|[*]|[0-9])*
COMMENTAIRE_PLUSIEURSC_LIGNE [*][-]([^-]|[-])*[-][*]
constante [c_].([a-zA-Z]|[0-9])*
fonction [f_].(([a-zA-Z]|[0-9])*)
identifiant ([a-zA-Z]|[0-9]|[_])*
ERREUR [^(\n\s\r)]

%%
[ \n] {}
"," {return (VIRGULE);}
"(" {return (PARO);}
")" {return (PARF);}
"{" {return (ACCO);}
"}" {return (ACCF);}
"[" {return (CROO);}
"]" {return (CROF);}
"FUNCTION" {return (FUNCTION_DECLARATION);}
"BeginProg" {return (BEGINPROG);}
"EndProg" {return (ENDPROG);}
"INT" {return (INTEGER_DECLARATION);}
"DOUBLE" {return (DOUBLE_DECLARATION);}
"CHAR" {return (CHAR_DECLARATION);}
"STRING" {return (STRING_DECLARATION);}
"CONST" {return (CONSTANTE_DECLARATION);}
"BOOLEAN" {return (BOOLEAN_DECLARATION);}
"TAB" {return (TAB_DECLARATION);}
"STRUCT" {return (STRUCT_DECLARATION);}
"IF" {return (IF);}
"then" {return (THEN);}
"EndIF" {return (ENDIF);}
"ELIF" {return (ELIF);}
"EndELIF" {return (ENDELIF);}
"ELSE" {return (ELSE);}
"EndELSE" {return (ENDELSE);}
"FOR" {return (FOR);}
"EndELSE" {return (ENDELSE);}
"BeginFOR" {return (BEGINFOR);}
"EndFOR" {return (ENDFOR);}
"WHILE" {return (WHILE);}
"BeginWHILE" {return (BEGINWHILE);}
"EndWHILE" {return (ENDWHILE);}
"INPUT" {return (INPUT);}
"OUTPUT" {return (OUTPUT);}
"INC" {return (INC);}
"DEC" {return (DEC);}
";" {return(DEL);}
{COMMENTAIRE_LIGNE} {}
{COMMENTAIRE_PLUSIEURSC_LIGNE} {}
"+" {return (ADD);}
"-" {return (SUB);}
"*" {return (MUL);}
"/" {return (DIV);}
"^" {return (POWER);}
"=" {return (AFFECT);}
"%" {return(MOD);}
"<" {return(INF);}
">" {return (SUP);}
"<=" {return(INFE);}
">=" {return(SUPE);}
"==" {return(EQUAL);}
"<>" {return(DIFF);}
"AND" {return(AND);}
"OR" {return(OR);}
"NOT" {return(NOT);}
{char} {sscanf(yytext,"%s",&yylval.caractere);return(CHAR);} 
{string} {sscanf(yytext,"%s",&yylval.str);return(STRING);}
{boolean} {sscanf(yytext,"%s",&yylval.booleen);return(BOOLEAN);} 
{integer} {yylval.entier=atoi(yytext);return(INTEGER);} 
{double} {sscanf(yytext,"%lf",&yylval.flottant);return(DOUBLE);} 
{fonction} {return (FONCTION);}
{constante} {sscanf(yytext,"%s",&yylval.str);return(CONSTANTE);}
{identifiant} {sscanf(yytext,"%s",&yylval.str);return (IDENTIFIANT);}
{ERREUR} {printf("Erreur lexicale au niveau de \"%s\" , ligne %d.\n",yytext,yylineno);exit(0); }
%%