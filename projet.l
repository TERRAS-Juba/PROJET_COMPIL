%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "projet.tab.h"
%}
%option noyywrap
%option yylineno

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
"CONST" {return (CONSTANT_DECLARATION);}
"FUNCTION" {return (FUNCTION_DECLARATION);}
"BeginProg" {return (BEGIN);}
"EndProg" {return (END);}
"INT" {return (INTEGER_DECLARATION);}
"DOUBLE" {return (DOUBLE_DECLARATION);}
"CHAR" {return (CHAR_DECLARATION);}
"STRING" {return (STRING_DECLARATION);}
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
"INCREMENT" {return (INCREMENT);}
"DECREMENT" {return (DECREMENT);}
"+" {return (ADD);}
"-" {return (SUB);}
"*" {return (MUL);}
"/" {return (DIV);}
"**" {return (POW);}
"AND" {return(AND);}
"OR" {return(OR);}
"NOT" {return(NOT);}
"MOD" {return(MOD);}
"<" {return(INF);}
">" {return (SUP);}
"<=" {return(INFE);}
">=" {return(SUPE);}
"==" {return(EQUAL);}
"<>" {return(DIFF);}
"(" {return (PARO);}
")" {return (PARF);}
"{" {return (ACCO);}
"}" {return (ACCF);}
"[" {return (CROO));}
"]" {return (CROF);}
";" {return(DEL);}
"," {return (VIRGULE);}
{integer} {return(INTEGER);} 
{double} {return(DOUBLE);} 
{string} {return(STRING);} 
{char} {return(CHAR);} 
{boolean} {return(BOOLEAN);} 
{COMMENTAIRE_LIGNE} {}
{COMMENTAIRE_PLUSIEURSC_LIGNE} {}
{constante} {return(CONSTANTE);}
{fonction} {return (FONCTION);}
{identifiant} {return (IDENTIFIANT);}
[ \n] {}
{ERREUR} {printf("Erreur lexicale au niveau de \"%s\" , ligne %d.\n",yytext,yylineno);exit(0); }
%%