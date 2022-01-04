/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ADD = 258,
     SUB = 259,
     DIV = 260,
     MUL = 261,
     POWER = 262,
     AND = 263,
     OR = 264,
     NOT = 265,
     MOD = 266,
     SUP = 267,
     SUPE = 268,
     INF = 269,
     INFE = 270,
     EQUAL = 271,
     DIFF = 272,
     AFFECT = 273,
     PARO = 274,
     PARF = 275,
     CROO = 276,
     CROF = 277,
     ACCO = 278,
     ACCF = 279,
     DEL = 280,
     VIRGULE = 281,
     INTEGER = 282,
     DOUBLE = 283,
     STRING = 284,
     CHAR = 285,
     BOOLEAN = 286,
     CONSTANTE = 287,
     FONCTION = 288,
     IDENTIFIANT = 289,
     BEGINPROG = 290,
     ENDPROG = 291,
     IF = 292,
     THEN = 293,
     ENDIF = 294,
     ELIF = 295,
     ENDELIF = 296,
     ELSE = 297,
     ENDELSE = 298,
     FOR = 299,
     BEGINFOR = 300,
     ENDFOR = 301,
     WHILE = 302,
     BEGINWHILE = 303,
     ENDWHILE = 304,
     INPUT = 305,
     OUTPUT = 306,
     INCREMENT = 307,
     DECREMENT = 308,
     FUNCTION_DECLARATION = 309,
     CONSTANTE_DECLARATION = 310,
     INTEGER_DECLARATION = 311,
     DOUBLE_DECLARATION = 312,
     CHAR_DECLARATION = 313,
     STRING_DECLARATION = 314,
     BOOLEAN_DECLARATION = 315,
     TAB_DECLARATION = 316,
     STRUCT_DECLARATION = 317
   };
#endif
/* Tokens.  */
#define ADD 258
#define SUB 259
#define DIV 260
#define MUL 261
#define POWER 262
#define AND 263
#define OR 264
#define NOT 265
#define MOD 266
#define SUP 267
#define SUPE 268
#define INF 269
#define INFE 270
#define EQUAL 271
#define DIFF 272
#define AFFECT 273
#define PARO 274
#define PARF 275
#define CROO 276
#define CROF 277
#define ACCO 278
#define ACCF 279
#define DEL 280
#define VIRGULE 281
#define INTEGER 282
#define DOUBLE 283
#define STRING 284
#define CHAR 285
#define BOOLEAN 286
#define CONSTANTE 287
#define FONCTION 288
#define IDENTIFIANT 289
#define BEGINPROG 290
#define ENDPROG 291
#define IF 292
#define THEN 293
#define ENDIF 294
#define ELIF 295
#define ENDELIF 296
#define ELSE 297
#define ENDELSE 298
#define FOR 299
#define BEGINFOR 300
#define ENDFOR 301
#define WHILE 302
#define BEGINWHILE 303
#define ENDWHILE 304
#define INPUT 305
#define OUTPUT 306
#define INCREMENT 307
#define DECREMENT 308
#define FUNCTION_DECLARATION 309
#define CONSTANTE_DECLARATION 310
#define INTEGER_DECLARATION 311
#define DOUBLE_DECLARATION 312
#define CHAR_DECLARATION 313
#define STRING_DECLARATION 314
#define BOOLEAN_DECLARATION 315
#define TAB_DECLARATION 316
#define STRUCT_DECLARATION 317



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 2058 of yacc.c  */
#line 30 "projet.y"

double flottant;
int entier;
char caractere[3];
char str[100];
char booleen[5];


/* Line 2058 of yacc.c  */
#line 190 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
