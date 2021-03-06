/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "projet.y"

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

/* Line 371 of yacc.c  */
#line 83 "y.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
     FUNCTION = 288,
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
     INC = 307,
     DEC = 308,
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
#define FUNCTION 288
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
#define INC 307
#define DEC 308
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
/* Line 387 of yacc.c  */
#line 43 "projet.y"

double flottant;
int entier;
char caractere[3];
char str[256];
char booleen[5];


/* Line 387 of yacc.c  */
#line 259 "y.tab.c"
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

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 287 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   782

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  152
/* YYNRULES -- Number of states.  */
#define YYNSTATES  320

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   317

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     8,     9,    12,    15,    18,    21,
      24,    27,    30,    33,    36,    38,    40,    42,    44,    46,
      48,    54,    60,    66,    72,    78,    84,    90,    91,    94,
      97,   100,   103,   105,   107,   109,   111,   112,   114,   115,
     117,   119,   121,   123,   129,   133,   139,   143,   149,   153,
     159,   163,   169,   173,   179,   183,   184,   188,   194,   195,
     197,   199,   205,   209,   215,   219,   225,   229,   235,   239,
     245,   249,   255,   259,   265,   269,   275,   279,   285,   289,
     295,   299,   305,   309,   315,   319,   320,   322,   326,   332,
     336,   342,   345,   350,   354,   360,   364,   370,   373,   378,
     379,   387,   396,   405,   406,   415,   425,   426,   430,   431,
     434,   437,   440,   443,   446,   449,   450,   453,   456,   459,
     462,   465,   468,   469,   483,   484,   487,   490,   493,   496,
     499,   502,   503,   511,   512,   515,   516,   524,   525,   529,
     530,   538,   539,   542,   545,   548,   551,   554,   564,   565,
     571,   572,   578
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      64,     0,    -1,    -1,    35,    65,    36,    -1,    -1,    65,
      66,    -1,    65,    73,    -1,    65,    81,    -1,    65,    86,
      -1,    65,    90,    -1,    65,    92,    -1,    65,    94,    -1,
      65,    88,    -1,    65,    97,    -1,    67,    -1,    68,    -1,
      69,    -1,    70,    -1,    71,    -1,    72,    -1,    56,    34,
      18,    27,    25,    -1,    57,    34,    18,    28,    25,    -1,
      58,    34,    18,    30,    25,    -1,    59,    34,    18,    29,
      25,    -1,    60,    34,    18,    31,    25,    -1,    55,    32,
      18,    27,    25,    -1,    55,    32,    18,    28,    25,    -1,
      -1,    77,    25,    -1,    79,    25,    -1,    80,    25,    -1,
      78,    25,    -1,    95,    -1,    96,    -1,    79,    -1,    80,
      -1,    -1,    34,    -1,    -1,    34,    -1,    27,    -1,    28,
      -1,    75,    -1,    19,    77,     3,    77,    20,    -1,    77,
       3,    77,    -1,    19,    77,     4,    77,    20,    -1,    77,
       4,    77,    -1,    19,    77,     6,    77,    20,    -1,    77,
       6,    77,    -1,    19,    77,     5,    77,    20,    -1,    77,
       5,    77,    -1,    19,    77,     7,    77,    20,    -1,    77,
       7,    77,    -1,    19,    27,    11,    27,    20,    -1,    27,
      11,    27,    -1,    -1,    76,    18,    77,    -1,    19,    34,
      18,    77,    20,    -1,    -1,    27,    -1,    28,    -1,    19,
      79,    12,    79,    20,    -1,    79,    12,    79,    -1,    19,
      79,    14,    79,    20,    -1,    79,    14,    79,    -1,    19,
      79,    13,    79,    20,    -1,    79,    13,    79,    -1,    19,
      79,    15,    79,    20,    -1,    79,    15,    79,    -1,    19,
      79,    16,    79,    20,    -1,    79,    16,    79,    -1,    19,
      79,    17,    79,    20,    -1,    79,    17,    79,    -1,    19,
      77,    12,    77,    20,    -1,    77,    12,    77,    -1,    19,
      77,    14,    77,    20,    -1,    77,    14,    77,    -1,    19,
      77,    13,    77,    20,    -1,    77,    13,    77,    -1,    19,
      77,    15,    77,    20,    -1,    77,    15,    77,    -1,    19,
      77,    16,    77,    20,    -1,    77,    16,    77,    -1,    19,
      77,    17,    77,    20,    -1,    77,    17,    77,    -1,    -1,
      31,    -1,    80,     8,    80,    -1,    19,    80,     8,    80,
      20,    -1,    80,     9,    80,    -1,    19,    80,     9,    80,
      20,    -1,    10,    80,    -1,    19,    10,    80,    20,    -1,
      79,     8,    79,    -1,    19,    79,     8,    79,    20,    -1,
      79,     9,    79,    -1,    19,    79,     9,    79,    20,    -1,
      10,    79,    -1,    10,    19,    79,    20,    -1,    -1,    37,
      19,    74,    20,    38,    84,    39,    -1,    37,    19,    74,
      20,    38,    84,    39,    82,    -1,    37,    19,    74,    20,
      38,    84,    39,    83,    -1,    -1,    40,    19,    74,    20,
      38,    84,    41,    83,    -1,    40,    19,    74,    20,    38,
      84,    41,    82,    83,    -1,    -1,    42,    84,    43,    -1,
      -1,    84,    73,    -1,    84,    66,    -1,    84,    81,    -1,
      84,    86,    -1,    84,    92,    -1,    84,    88,    -1,    -1,
      85,    73,    -1,    85,    66,    -1,    85,    81,    -1,    85,
      86,    -1,    85,    92,    -1,    85,    88,    -1,    -1,    44,
      19,    34,    26,    77,    26,    77,    26,    77,    20,    45,
      85,    46,    -1,    -1,    87,    73,    -1,    87,    66,    -1,
      87,    81,    -1,    87,    86,    -1,    87,    92,    -1,    87,
      88,    -1,    -1,    47,    19,    74,    20,    48,    87,    49,
      -1,    -1,    89,    66,    -1,    -1,    62,    34,    18,    23,
      89,    24,    25,    -1,    -1,    91,    27,    26,    -1,    -1,
      61,    34,    18,    21,    91,    22,    25,    -1,    -1,    93,
      73,    -1,    93,    81,    -1,    93,    86,    -1,    93,    66,
      -1,    93,    92,    -1,    54,    33,    19,    75,    20,    23,
      93,    24,    25,    -1,    -1,    52,    19,    34,    20,    25,
      -1,    -1,    53,    19,    34,    20,    25,    -1,    76,    18,
      50,    19,    29,    20,    25,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    51,    51,    52,    54,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    61,    61,    61,    61,    61,    61,
      64,    67,    70,    73,    76,    79,    79,    84,    85,    85,
      85,    85,    85,    85,    88,    88,    93,    94,    95,    96,
     100,   101,   102,   103,   103,   104,   104,   105,   105,   106,
     106,   107,   107,   108,   108,   113,   114,   114,   119,   120,
     121,   122,   122,   123,   123,   124,   124,   125,   125,   126,
     126,   127,   127,   128,   128,   129,   129,   130,   130,   131,
     131,   132,   132,   133,   133,   138,   139,   140,   144,   148,
     152,   156,   160,   164,   168,   172,   176,   180,   184,   192,
     193,   193,   193,   195,   196,   196,   198,   199,   201,   202,
     202,   202,   202,   202,   202,   207,   208,   208,   208,   208,
     208,   208,   210,   211,   216,   217,   217,   217,   217,   217,
     217,   219,   220,   225,   226,   228,   229,   231,   232,   234,
     235,   237,   238,   238,   238,   238,   238,   241,   246,   247,
     249,   250,   256
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ADD", "SUB", "DIV", "MUL", "POWER",
  "AND", "OR", "NOT", "MOD", "SUP", "SUPE", "INF", "INFE", "EQUAL", "DIFF",
  "AFFECT", "PARO", "PARF", "CROO", "CROF", "ACCO", "ACCF", "DEL",
  "VIRGULE", "INTEGER", "DOUBLE", "STRING", "CHAR", "BOOLEAN", "CONSTANTE",
  "FUNCTION", "IDENTIFIANT", "BEGINPROG", "ENDPROG", "IF", "THEN", "ENDIF",
  "ELIF", "ENDELIF", "ELSE", "ENDELSE", "FOR", "BEGINFOR", "ENDFOR",
  "WHILE", "BEGINWHILE", "ENDWHILE", "INPUT", "OUTPUT", "INC", "DEC",
  "FUNCTION_DECLARATION", "CONSTANTE_DECLARATION", "INTEGER_DECLARATION",
  "DOUBLE_DECLARATION", "CHAR_DECLARATION", "STRING_DECLARATION",
  "BOOLEAN_DECLARATION", "TAB_DECLARATION", "STRUCT_DECLARATION",
  "$accept", "prog", "corp", "declaration", "declaration_integer",
  "declaration_double", "declaration_char", "declaration_string",
  "declaration_boolean", "declaration_constante", "exp", "condition",
  "var", "var_declaration", "expa", "affectation", "expc", "expl", "if",
  "elif", "else", "corp_if", "corp_for", "for", "corp_while", "while",
  "corp_structure", "structure", "corp_tableau", "tableau",
  "corp_fonction", "fonction", "incrementation", "decrementation", "input", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    63,    64,    64,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    66,    66,    66,    66,    66,    66,
      67,    68,    69,    70,    71,    72,    72,    73,    73,    73,
      73,    73,    73,    73,    74,    74,    75,    75,    76,    76,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    78,    78,    78,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    81,
      81,    81,    81,    82,    82,    82,    83,    83,    84,    84,
      84,    84,    84,    84,    84,    85,    85,    85,    85,    85,
      85,    85,    86,    86,    87,    87,    87,    87,    87,    87,
      87,    88,    88,    89,    89,    90,    90,    91,    91,    92,
      92,    93,    93,    93,    93,    93,    93,    94,    95,    95,
      96,    96,    97
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     3,     0,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       5,     5,     5,     5,     5,     5,     5,     0,     2,     2,
       2,     2,     1,     1,     1,     1,     0,     1,     0,     1,
       1,     1,     1,     5,     3,     5,     3,     5,     3,     5,
       3,     5,     3,     5,     3,     0,     3,     5,     0,     1,
       1,     5,     3,     5,     3,     5,     3,     5,     3,     5,
       3,     5,     3,     5,     3,     5,     3,     5,     3,     5,
       3,     5,     3,     5,     3,     0,     1,     3,     5,     3,
       5,     2,     4,     3,     5,     3,     5,     2,     4,     0,
       7,     8,     8,     0,     8,     9,     0,     3,     0,     2,
       2,     2,     2,     2,     2,     0,     2,     2,     2,     2,
       2,     2,     0,    13,     0,     2,     2,     2,     2,     2,
       2,     0,     7,     0,     2,     0,     7,     0,     3,     0,
       7,     0,     2,     2,     2,     2,     2,     9,     0,     5,
       0,     5,     7
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     4,     0,    27,     1,    36,    36,    40,    41,    86,
      37,     3,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     5,    14,    15,    16,
      17,    18,    19,     6,    42,     0,     0,     0,     0,     0,
       7,     8,    12,     9,    10,    11,    32,    33,    13,    36,
      37,     0,    97,    91,    36,    36,    40,    37,     0,     0,
       0,     0,    36,     0,    36,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    36,    36,    36,    36,
      36,    36,    36,    36,    36,    36,    36,    36,    28,    31,
      36,    36,    36,    36,    36,    36,    36,    36,    29,    36,
      36,    30,     0,    91,     0,    36,    36,    36,    36,    36,
      36,    36,    36,    36,    36,    36,    36,    36,    36,    36,
      36,    36,    36,    36,    36,    36,    36,    54,     0,    34,
      35,     0,     0,     0,     0,    36,     0,     0,     0,     0,
       0,     0,     0,     0,    36,    40,    41,     0,    56,    44,
      46,    50,    48,    52,    74,    78,    76,    80,    82,    84,
      36,    93,    95,    62,    66,    64,    68,    70,    72,     0,
      87,    89,    98,    92,    54,     0,    44,    46,    50,    48,
      52,    74,    78,    76,    80,    82,    84,    93,    95,    62,
      66,    64,    68,    70,    72,    87,    89,     0,    36,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     137,   133,    40,     0,     0,     0,    53,    57,    43,    45,
      49,    47,    51,    73,    77,    75,    79,    81,    83,    94,
      96,    61,    65,    63,    67,    69,    71,    88,    90,   108,
       0,   124,   149,   151,     0,    25,    26,    20,    21,    22,
      23,    24,     0,     0,     0,    27,    36,    27,   141,     0,
       0,     0,   134,     0,   100,   110,   109,     0,   111,   112,
     114,   113,     0,   132,   126,   125,   127,   128,   130,   129,
      27,   140,   138,   136,   152,     0,   108,   101,   102,    36,
      36,     0,   145,   142,   143,   144,   146,    36,    27,     0,
     147,     0,   107,     0,     0,   115,   108,    27,    27,   123,
     117,   116,   118,   119,   121,   120,   103,   106,   104,   105
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,   265,    27,    28,    29,    30,    31,    32,
     266,   128,    34,   267,    51,    37,    38,    39,   268,   287,
     288,   255,   307,   269,   257,   270,   253,    43,   252,   271,
     280,    45,    46,    47,    48
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -306
static const yytype_int16 yypact[] =
{
      12,  -306,    23,     6,  -306,   128,   159,   237,   141,  -306,
      14,  -306,    30,    36,    51,    95,   108,    18,   100,    99,
     120,   126,   129,   130,   150,   151,  -306,  -306,  -306,  -306,
    -306,  -306,  -306,  -306,  -306,   170,   607,   164,   255,    92,
    -306,  -306,  -306,  -306,  -306,  -306,  -306,  -306,  -306,   380,
    -306,   685,   754,  -306,   543,   204,   281,   192,   700,   720,
       9,   167,   548,   177,   548,   186,   187,   203,   207,   211,
     221,   223,   224,   226,   229,   231,    -6,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,  -306,  -306,
      11,    11,    11,    11,    11,    11,    11,    11,  -306,   199,
     199,  -306,   710,   230,   238,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   502,   502,   502,
     502,   502,   502,   502,   502,   575,   575,  -306,   246,   730,
     110,   225,   256,   258,   265,   257,    71,   266,   269,   264,
     267,   271,   278,   277,   124,   292,  -306,   294,   593,   210,
     210,   307,   307,   307,   593,   593,   593,   593,   593,   593,
     209,   754,   754,  -306,  -306,  -306,  -306,   383,   383,   730,
    -306,   309,  -306,  -306,   298,   584,   176,   268,     7,    28,
      34,   622,   630,   640,   648,   658,   666,   736,   745,   300,
     301,   303,   304,   316,   438,   306,    49,   296,   112,   289,
     313,   314,   332,   328,   330,   331,   333,   334,   336,   337,
    -306,  -306,   353,   775,   339,   760,  -306,  -306,  -306,  -306,
    -306,  -306,  -306,  -306,  -306,  -306,  -306,  -306,  -306,  -306,
    -306,  -306,  -306,  -306,  -306,  -306,  -306,  -306,  -306,  -306,
      90,  -306,  -306,  -306,   342,  -306,  -306,  -306,  -306,  -306,
    -306,  -306,   -12,    32,   346,   288,   112,   323,  -306,   344,
     345,   348,  -306,   349,   -16,  -306,  -306,   368,  -306,  -306,
    -306,  -306,   119,  -306,  -306,  -306,  -306,  -306,  -306,  -306,
     489,  -306,  -306,  -306,  -306,   372,  -306,  -306,  -306,   112,
     112,   362,  -306,  -306,  -306,  -306,  -306,   548,   375,   676,
    -306,   373,  -306,   347,   363,  -306,  -306,   410,   445,  -306,
    -306,  -306,  -306,  -306,  -306,  -306,   -16,   371,  -306,  -306
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -306,  -306,  -306,     2,  -306,  -306,  -306,  -306,  -306,  -306,
      -1,   -63,   270,   401,    -3,  -306,    80,    66,     1,    94,
    -305,  -277,  -306,     3,  -306,     5,  -306,  -306,  -306,     4,
    -306,  -306,  -306,  -306,  -306
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -86
static const yytype_int16 yytable[] =
{
      36,   132,    33,    58,    40,    26,    41,    44,    42,   298,
     259,   318,   319,   144,    81,   260,     5,   125,   126,   -58,
     -58,   145,   146,     4,   285,     6,   286,   220,    50,   308,
     160,   -58,   -39,     7,     8,    81,   -58,     9,     7,     8,
      10,    81,    11,    12,   147,    50,    58,     1,   221,    62,
      13,    67,    58,    14,   222,    63,   261,    99,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,   238,
      64,    53,    60,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,    52,    59,    18,    19,    20,
      21,    22,    23,    77,    78,    79,    80,    81,   203,   204,
      99,   100,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,    65,    60,   256,   101,    99,   100,
     103,    60,    77,    78,    79,    80,    81,    66,   130,   102,
     130,   144,    68,    69,    52,    59,   -58,   -58,     5,   145,
     146,   213,   129,   144,   129,   290,    50,    49,   -58,   -60,
     -60,   212,   146,   -58,    70,     7,     8,    58,    50,     9,
      71,   -60,    50,    72,    73,   170,   171,   -58,   -58,    54,
     161,   162,   163,   164,   165,   166,   167,   168,    55,   169,
     169,    79,    80,    81,    74,    75,    56,     8,    76,    89,
       9,   195,   196,    57,   127,   240,   218,   187,   188,   189,
     190,   191,   192,   193,   194,   169,   169,   -58,   -58,     5,
     105,   131,   -58,   -58,    54,    79,    80,    81,    55,   -85,
     133,   134,   135,    55,   -85,   136,     7,     8,   160,   137,
       9,    56,     8,    50,   301,     9,    56,     8,    50,   138,
     215,   139,   140,    50,   141,   -59,   -59,   142,    61,   143,
     173,   198,    36,   272,    36,   262,   275,   -59,   276,   274,
     277,   279,   278,    90,    91,   174,   197,    92,    93,    94,
      95,    96,    97,    79,    80,    81,   199,    36,   200,   293,
      98,   294,   292,   295,   296,   201,   148,   299,   219,   -59,
     -59,    50,   104,   205,   207,    36,   208,   206,     5,   210,
     211,   -59,   209,    61,    36,    36,   311,     6,   312,   310,
     313,   315,   314,   214,    81,     7,     8,    99,   216,     9,
     231,   232,    10,   233,   234,    12,   237,   264,    92,    93,
      94,    95,    13,     5,   239,    14,   235,   241,   242,   243,
      15,    16,     6,    18,    19,    20,    21,    22,    23,    24,
       7,     8,   244,   245,     9,   246,   247,    10,   248,   249,
      12,   250,   251,   130,   104,   258,   263,    13,   254,   281,
      14,   282,   273,   283,   284,    15,    16,   129,    18,    19,
      20,    21,    22,    23,    24,     5,   289,   300,   -58,   -58,
      54,   297,   305,   304,     6,    92,    93,    94,    95,    55,
     -58,   306,     7,     8,    35,   202,     9,    56,     8,    10,
     317,     9,    12,   286,    50,     0,     0,     0,   302,    13,
       5,     0,    14,     0,     0,     0,     0,    15,    16,     6,
      18,    19,    20,    21,    22,    23,    24,     7,     8,     0,
       0,     9,     0,     0,    10,     0,     0,    12,     0,     0,
      92,    93,    94,    95,    13,     5,   309,    14,   236,     0,
       0,     0,    15,    16,     6,    18,    19,    20,    21,    22,
      23,    24,     7,     8,     0,     0,     9,     0,     0,    10,
       0,     0,    12,     0,     0,     0,   316,     0,     0,    13,
       0,     0,    14,     0,     0,     0,     0,    15,    16,     5,
      18,    19,    20,    21,    22,    23,    24,     0,     6,     0,
     -58,   -58,     0,   291,     0,     0,     7,     8,     0,     0,
       9,   160,   -58,    10,     0,     0,    12,     0,     0,     7,
       8,     0,     0,    13,     0,     0,    50,     0,     0,     0,
       0,    15,    16,     0,    18,    19,    20,    21,    22,    23,
      24,   -58,   -58,     5,     0,     0,   -58,   -58,     5,     0,
       0,     0,    49,   -85,     0,     0,     0,    55,   -58,     0,
       7,     8,     0,     0,     9,     7,     8,    50,     0,     9,
       0,     0,    50,   -58,   -58,     5,     0,    77,    78,    79,
      80,    81,     0,     0,    55,   -85,    77,    78,    79,    80,
      81,     0,     7,     8,   217,     0,     9,     0,     0,    50,
      77,    78,    79,    80,    81,     0,     0,     0,     0,    82,
      83,    84,    85,    86,    87,    77,    78,    79,    80,    81,
       0,     0,    88,    77,    78,    79,    80,    81,     0,     0,
       0,     0,   223,    77,    78,    79,    80,    81,     0,     0,
     224,    77,    78,    79,    80,    81,     0,     0,     0,     0,
     225,    77,    78,    79,    80,    81,     0,     0,   226,    77,
      78,    79,    80,    81,     0,     0,     0,     0,   227,    77,
      78,    79,    80,    81,     0,     0,   228,     0,    77,    78,
      79,    80,    81,     0,     0,     0,   303,    82,    83,    84,
      85,    86,    87,   106,   107,   108,   109,   110,     0,     0,
       0,     0,   111,   112,   113,   114,   115,   116,   117,   118,
       0,     0,   119,   120,   121,   122,   123,   124,   117,   118,
     172,     0,   119,   120,   121,   122,   123,   124,    90,    91,
       0,     0,    92,    93,    94,    95,    96,    97,    92,    93,
      94,    95,    96,    97,     0,     0,   229,    92,    93,    94,
      95,    96,    97,     0,     0,   230,    92,    93,    94,    95,
      96,    97,   119,   120,   121,   122,   123,   124,   106,   107,
     108,   109,   110
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-306)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       3,    64,     3,     6,     3,     3,     3,     3,     3,   286,
      22,   316,   317,    19,     7,    27,    10,     8,     9,     8,
       9,    27,    28,     0,    40,    19,    42,    20,    34,   306,
      19,    20,    18,    27,    28,     7,    25,    31,    27,    28,
      34,     7,    36,    37,    50,    34,    49,    35,    20,    19,
      44,    33,    55,    47,    20,    19,    24,     8,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    20,
      19,     5,     6,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,     5,     6,    55,    56,    57,
      58,    59,    60,     3,     4,     5,     6,     7,    27,    28,
       8,     9,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,    19,    49,    26,    25,     8,     9,
      54,    55,     3,     4,     5,     6,     7,    19,    62,    49,
      64,    19,    32,    34,    54,    55,     8,     9,    10,    27,
      28,   144,    62,    19,    64,    26,    34,    19,    20,     8,
       9,    27,    28,    25,    34,    27,    28,   160,    34,    31,
      34,    20,    34,    34,    34,    99,   100,     8,     9,    10,
      90,    91,    92,    93,    94,    95,    96,    97,    19,    99,
     100,     5,     6,     7,    34,    34,    27,    28,    18,    25,
      31,   125,   126,    34,    27,   198,    20,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,     8,     9,    10,
      18,    34,     8,     9,    10,     5,     6,     7,    19,    20,
      34,    34,    19,    19,    25,    18,    27,    28,    19,    18,
      31,    27,    28,    34,   297,    31,    27,    28,    34,    18,
     160,    18,    18,    34,    18,     8,     9,    18,    11,    18,
      20,    26,   255,   256,   257,   253,   257,    20,   257,   257,
     257,   257,   257,     8,     9,    27,    20,    12,    13,    14,
      15,    16,    17,     5,     6,     7,    20,   280,    20,   280,
      25,   280,   280,   280,   280,    20,   289,   290,    20,     8,
       9,    34,    11,    27,    30,   298,    29,    28,    10,    21,
      23,    20,    31,    11,   307,   308,   307,    19,   307,   307,
     307,   307,   307,    19,     7,    27,    28,     8,    20,    31,
      20,    20,    34,    20,    20,    37,    20,    39,    12,    13,
      14,    15,    44,    10,    38,    47,    20,    48,    25,    25,
      52,    53,    19,    55,    56,    57,    58,    59,    60,    61,
      27,    28,    20,    25,    31,    25,    25,    34,    25,    25,
      37,    25,    25,   297,    11,    23,    20,    44,    29,    25,
      47,    26,    49,    25,    25,    52,    53,   297,    55,    56,
      57,    58,    59,    60,    61,    10,    18,    25,     8,     9,
      10,    19,    45,    20,    19,    12,    13,    14,    15,    19,
      20,    38,    27,    28,     3,   135,    31,    27,    28,    34,
     316,    31,    37,    42,    34,    -1,    -1,    -1,    43,    44,
      10,    -1,    47,    -1,    -1,    -1,    -1,    52,    53,    19,
      55,    56,    57,    58,    59,    60,    61,    27,    28,    -1,
      -1,    31,    -1,    -1,    34,    -1,    -1,    37,    -1,    -1,
      12,    13,    14,    15,    44,    10,    46,    47,    20,    -1,
      -1,    -1,    52,    53,    19,    55,    56,    57,    58,    59,
      60,    61,    27,    28,    -1,    -1,    31,    -1,    -1,    34,
      -1,    -1,    37,    -1,    -1,    -1,    41,    -1,    -1,    44,
      -1,    -1,    47,    -1,    -1,    -1,    -1,    52,    53,    10,
      55,    56,    57,    58,    59,    60,    61,    -1,    19,    -1,
       8,     9,    -1,    24,    -1,    -1,    27,    28,    -1,    -1,
      31,    19,    20,    34,    -1,    -1,    37,    -1,    -1,    27,
      28,    -1,    -1,    44,    -1,    -1,    34,    -1,    -1,    -1,
      -1,    52,    53,    -1,    55,    56,    57,    58,    59,    60,
      61,     8,     9,    10,    -1,    -1,     8,     9,    10,    -1,
      -1,    -1,    19,    20,    -1,    -1,    -1,    19,    20,    -1,
      27,    28,    -1,    -1,    31,    27,    28,    34,    -1,    31,
      -1,    -1,    34,     8,     9,    10,    -1,     3,     4,     5,
       6,     7,    -1,    -1,    19,    20,     3,     4,     5,     6,
       7,    -1,    27,    28,    20,    -1,    31,    -1,    -1,    34,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      13,    14,    15,    16,    17,     3,     4,     5,     6,     7,
      -1,    -1,    25,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    20,     3,     4,     5,     6,     7,    -1,    -1,
      20,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      20,     3,     4,     5,     6,     7,    -1,    -1,    20,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    20,     3,
       4,     5,     6,     7,    -1,    -1,    20,    -1,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    20,    12,    13,    14,
      15,    16,    17,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    13,    14,    15,    16,    17,     8,     9,
      -1,    -1,    12,    13,    14,    15,    16,    17,     8,     9,
      20,    -1,    12,    13,    14,    15,    16,    17,     8,     9,
      -1,    -1,    12,    13,    14,    15,    16,    17,    12,    13,
      14,    15,    16,    17,    -1,    -1,    20,    12,    13,    14,
      15,    16,    17,    -1,    -1,    20,    12,    13,    14,    15,
      16,    17,    12,    13,    14,    15,    16,    17,     3,     4,
       5,     6,     7
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    35,    64,    65,     0,    10,    19,    27,    28,    31,
      34,    36,    37,    44,    47,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    66,    67,    68,    69,
      70,    71,    72,    73,    75,    76,    77,    78,    79,    80,
      81,    86,    88,    90,    92,    94,    95,    96,    97,    19,
      34,    77,    79,    80,    10,    19,    27,    34,    77,    79,
      80,    11,    19,    19,    19,    19,    19,    33,    32,    34,
      34,    34,    34,    34,    34,    34,    18,     3,     4,     5,
       6,     7,    12,    13,    14,    15,    16,    17,    25,    25,
       8,     9,    12,    13,    14,    15,    16,    17,    25,     8,
       9,    25,    79,    80,    11,    18,     3,     4,     5,     6,
       7,    12,    13,    14,    15,    16,    17,     8,     9,    12,
      13,    14,    15,    16,    17,     8,     9,    27,    74,    79,
      80,    34,    74,    34,    34,    19,    18,    18,    18,    18,
      18,    18,    18,    18,    19,    27,    28,    50,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      19,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      80,    80,    20,    20,    27,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    79,    79,    79,
      79,    79,    79,    79,    79,    80,    80,    20,    26,    20,
      20,    20,    75,    27,    28,    27,    28,    30,    29,    31,
      21,    23,    27,    77,    19,    79,    20,    20,    20,    20,
      20,    20,    20,    20,    20,    20,    20,    20,    20,    20,
      20,    20,    20,    20,    20,    20,    20,    20,    20,    38,
      77,    48,    25,    25,    20,    25,    25,    25,    25,    25,
      25,    25,    91,    89,    29,    84,    26,    87,    23,    22,
      27,    24,    66,    20,    39,    66,    73,    76,    81,    86,
      88,    92,    77,    49,    66,    73,    81,    86,    88,    92,
      93,    25,    26,    25,    25,    40,    42,    82,    83,    18,
      26,    24,    66,    73,    81,    86,    92,    19,    84,    77,
      25,    74,    43,    20,    20,    45,    38,    85,    84,    46,
      66,    73,    81,    86,    88,    92,    41,    82,    83,    83
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
        break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 20:
/* Line 1792 of yacc.c  */
#line 64 "projet.y"
    {printf("entier\n");strcpy(buffer,"");itoa((yyvsp[(4) - (5)].entier),buffer,10);AJOUTER_ENTITE(tete,buffer,"int",(yyvsp[(2) - (5)].str));}
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 67 "projet.y"
    {printf("double\n",(yyvsp[(2) - (5)].str));strcpy(buffer,"");snprintf(buffer, 256, "%f", (yyvsp[(4) - (5)].flottant));AJOUTER_ENTITE(tete,buffer,"double",(yyvsp[(2) - (5)].str));}
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 70 "projet.y"
    {printf("char\n");AJOUTER_ENTITE(tete,(yyvsp[(4) - (5)].caractere),"char",(yyvsp[(2) - (5)].str));}
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 73 "projet.y"
    {printf("string\n");AJOUTER_ENTITE(tete,(yyvsp[(4) - (5)].str),"string",(yyvsp[(2) - (5)].str));}
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 76 "projet.y"
    {printf("boolean\n");AJOUTER_ENTITE(tete,(yyvsp[(4) - (5)].booleen),"boolean",(yyvsp[(2) - (5)].str));}
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 79 "projet.y"
    {printf("constante entiere\n");strcpy(buffer,"");itoa((yyvsp[(4) - (5)].entier),buffer,10);AJOUTER_ENTITE(tete,buffer,"constante",(yyvsp[(2) - (5)].str));}
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 79 "projet.y"
    {printf("constante double\n");strcpy(buffer,"");snprintf(buffer, 256, "%f", (yyvsp[(4) - (5)].flottant));AJOUTER_ENTITE(tete,buffer,"constante",(yyvsp[(2) - (5)].str));}
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 85 "projet.y"
    {printf("%f\n",(yyvsp[(1) - (2)].flottant));}
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 85 "projet.y"
    {printf("%d\n",(int)(yyvsp[(1) - (2)].flottant));}
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 85 "projet.y"
    {printf("%s\n",(yyvsp[(1) - (2)].str));}
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 85 "projet.y"
    {}
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 94 "projet.y"
    {ptr=RECHERCHE_VALEUR_VARIABLE(tete,(yyvsp[(1) - (1)].str));if(ptr!=NULL){strcpy((yyval.str),ptr->value);}else{printf("Erreur! Undifined varaible '%s' in ligne '%d'",(yyvsp[(1) - (1)].str),yylineno);}}
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 96 "projet.y"
    {ptr=RECHERCHE_VALEUR_VARIABLE(tete,(yyvsp[(1) - (1)].str));if(ptr!=NULL){strcpy((yyval.str),ptr->nom);}else{printf("Erreur! Undifined varaible '%s' in ligne '%d'",(yyvsp[(1) - (1)].str),yylineno);}}
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 100 "projet.y"
    {(yyval.flottant)=(yyvsp[(1) - (1)].entier);}
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 101 "projet.y"
    {(yyval.flottant)=(yyvsp[(1) - (1)].flottant);}
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 102 "projet.y"
    {(yyval.flottant)=CONVERT_STRING_DOUBLE((yyvsp[(1) - (1)].str));}
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 103 "projet.y"
    {(yyval.flottant)=(yyvsp[(2) - (5)].flottant)+(yyvsp[(4) - (5)].flottant);}
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 103 "projet.y"
    {(yyval.flottant)=(yyvsp[(1) - (3)].flottant)+(yyvsp[(3) - (3)].flottant);}
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 104 "projet.y"
    {(yyval.flottant)=(yyvsp[(2) - (5)].flottant)-(yyvsp[(4) - (5)].flottant);}
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 104 "projet.y"
    {(yyval.flottant)=(yyvsp[(1) - (3)].flottant)-(yyvsp[(3) - (3)].flottant);}
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 105 "projet.y"
    {(yyval.flottant)=(yyvsp[(2) - (5)].flottant)*(yyvsp[(4) - (5)].flottant);}
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 105 "projet.y"
    {(yyval.flottant)=(yyvsp[(1) - (3)].flottant)*(yyvsp[(3) - (3)].flottant);}
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 106 "projet.y"
    {(yyval.flottant)=(yyvsp[(2) - (5)].flottant)/(yyvsp[(4) - (5)].flottant);}
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 106 "projet.y"
    {(yyval.flottant)=(yyvsp[(1) - (3)].flottant)/(yyvsp[(3) - (3)].flottant);}
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 107 "projet.y"
    {(yyval.flottant)=pow((yyvsp[(2) - (5)].flottant),(yyvsp[(4) - (5)].flottant));}
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 107 "projet.y"
    {(yyval.flottant)=pow((yyvsp[(1) - (3)].flottant),(yyvsp[(3) - (3)].flottant));}
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 108 "projet.y"
    {(yyval.flottant)=(yyvsp[(2) - (5)].entier)%(yyvsp[(4) - (5)].entier);}
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 108 "projet.y"
    {(yyval.flottant)=(yyvsp[(1) - (3)].entier)%(yyvsp[(3) - (3)].entier);}
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 114 "projet.y"
    {strcpy(buffer,"");snprintf(buffer, 256, "%f", (yyvsp[(3) - (3)].flottant));AJOUTER_ENTITE(tete,buffer,"double",(yyvsp[(1) - (3)].str));}
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 114 "projet.y"
    {strcpy(buffer,"");snprintf(buffer, 256, "%f", (yyvsp[(4) - (5)].flottant));AJOUTER_ENTITE(tete,buffer,"double",(yyvsp[(2) - (5)].str));}
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 120 "projet.y"
    {(yyval.flottant)=(yyvsp[(1) - (1)].entier);}
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 121 "projet.y"
    {(yyval.flottant)=(yyvsp[(1) - (1)].flottant);}
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 122 "projet.y"
    {if((yyvsp[(2) - (5)].flottant)>(yyvsp[(4) - (5)].flottant)){(yyval.flottant)=1;}else{(yyval.flottant)=0;}}
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 122 "projet.y"
    {if((yyvsp[(1) - (3)].flottant)>(yyvsp[(3) - (3)].flottant)){(yyval.flottant)=1;}else{(yyval.flottant)=0;}}
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 123 "projet.y"
    {if((yyvsp[(2) - (5)].flottant)<(yyvsp[(4) - (5)].flottant)){(yyval.flottant)=1;}else{(yyval.flottant)=0;}}
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 123 "projet.y"
    {if((yyvsp[(1) - (3)].flottant)<(yyvsp[(3) - (3)].flottant)){(yyval.flottant)=1;}else{(yyval.flottant)=0;}}
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 124 "projet.y"
    {if((yyvsp[(2) - (5)].flottant)>=(yyvsp[(4) - (5)].flottant)){(yyval.flottant)=1;}else{(yyval.flottant)=0;}}
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 124 "projet.y"
    {if((yyvsp[(1) - (3)].flottant)>=(yyvsp[(3) - (3)].flottant)){(yyval.flottant)=1;}else{(yyval.flottant)=0;}}
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 125 "projet.y"
    {if((yyvsp[(2) - (5)].flottant)<=(yyvsp[(4) - (5)].flottant)){(yyval.flottant)=1;}else{(yyval.flottant)=0;}}
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 125 "projet.y"
    {if((yyvsp[(1) - (3)].flottant)<=(yyvsp[(3) - (3)].flottant)){(yyval.flottant)=1;}else{(yyval.flottant)=0;}}
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 126 "projet.y"
    {if((yyvsp[(2) - (5)].flottant)==(yyvsp[(4) - (5)].flottant)){(yyval.flottant)=1;}else{(yyval.flottant)=0;}}
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 126 "projet.y"
    {if((yyvsp[(1) - (3)].flottant)==(yyvsp[(3) - (3)].flottant)){(yyval.flottant)=1;}else{(yyval.flottant)=0;}}
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 127 "projet.y"
    {if((yyvsp[(2) - (5)].flottant)!=(yyvsp[(4) - (5)].flottant)){(yyval.flottant)=1;}else{(yyval.flottant)=0;}}
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 127 "projet.y"
    {if((yyvsp[(1) - (3)].flottant)!=(yyvsp[(3) - (3)].flottant)){(yyval.flottant)=1;}else{(yyval.flottant)=0;}}
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 128 "projet.y"
    {if((yyvsp[(2) - (5)].flottant)>(yyvsp[(4) - (5)].flottant)){(yyval.flottant)=1;}else{(yyval.flottant)=0;}}
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 128 "projet.y"
    {if((yyvsp[(1) - (3)].flottant)>(yyvsp[(3) - (3)].flottant)){(yyval.flottant)=1;}else{(yyval.flottant)=0;}}
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 129 "projet.y"
    {if((yyvsp[(2) - (5)].flottant)<(yyvsp[(4) - (5)].flottant)){(yyval.flottant)=1;}else{(yyval.flottant)=0;}}
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 129 "projet.y"
    {if((yyvsp[(1) - (3)].flottant)<(yyvsp[(3) - (3)].flottant)){(yyval.flottant)=1;}else{(yyval.flottant)=0;}}
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 130 "projet.y"
    {if((yyvsp[(2) - (5)].flottant)>=(yyvsp[(4) - (5)].flottant)){(yyval.flottant)=1;}else{(yyval.flottant)=0;}}
    break;

  case 78:
/* Line 1792 of yacc.c  */
#line 130 "projet.y"
    {if((yyvsp[(1) - (3)].flottant)>=(yyvsp[(3) - (3)].flottant)){(yyval.flottant)=1;}else{(yyval.flottant)=0;}}
    break;

  case 79:
/* Line 1792 of yacc.c  */
#line 131 "projet.y"
    {if((yyvsp[(2) - (5)].flottant)<=(yyvsp[(4) - (5)].flottant)){(yyval.flottant)=1;}else{(yyval.flottant)=0;}}
    break;

  case 80:
/* Line 1792 of yacc.c  */
#line 131 "projet.y"
    {if((yyvsp[(1) - (3)].flottant)<=(yyvsp[(3) - (3)].flottant)){(yyval.flottant)=1;}else{(yyval.flottant)=0;}}
    break;

  case 81:
/* Line 1792 of yacc.c  */
#line 132 "projet.y"
    {if((yyvsp[(2) - (5)].flottant)==(yyvsp[(4) - (5)].flottant)){(yyval.flottant)=1;}else{(yyval.flottant)=0;}}
    break;

  case 82:
/* Line 1792 of yacc.c  */
#line 132 "projet.y"
    {if((yyvsp[(1) - (3)].flottant)==(yyvsp[(3) - (3)].flottant)){(yyval.flottant)=1;}else{(yyval.flottant)=0;}}
    break;

  case 83:
/* Line 1792 of yacc.c  */
#line 133 "projet.y"
    {if((yyvsp[(2) - (5)].flottant)!=(yyvsp[(4) - (5)].flottant)){(yyval.flottant)=1;}else{(yyval.flottant)=0;}}
    break;

  case 84:
/* Line 1792 of yacc.c  */
#line 133 "projet.y"
    {if((yyvsp[(1) - (3)].flottant)!=(yyvsp[(3) - (3)].flottant)){(yyval.flottant)=1;}else{(yyval.flottant)=0;}}
    break;

  case 86:
/* Line 1792 of yacc.c  */
#line 139 "projet.y"
    {strcpy((yyval.str),(yyvsp[(1) - (1)].booleen));}
    break;

  case 87:
/* Line 1792 of yacc.c  */
#line 140 "projet.y"
    {
if(strcmp((yyvsp[(1) - (3)].str),"TRUE")==0 && strcmp((yyvsp[(3) - (3)].str),"TRUE")==0){strcpy((yyval.str),"TRUE");}
else{strcpy((yyval.str),"FALSE");}
}
    break;

  case 88:
/* Line 1792 of yacc.c  */
#line 144 "projet.y"
    {
if(strcmp((yyvsp[(2) - (5)].str),"TRUE")==0 && strcmp((yyvsp[(4) - (5)].str),"TRUE")==0){strcpy((yyval.str),"TRUE");}
else{strcpy((yyval.str),"FALSE");}
}
    break;

  case 89:
/* Line 1792 of yacc.c  */
#line 148 "projet.y"
    {
if(strcmp((yyvsp[(1) - (3)].str),"FALSE")==0 && strcmp((yyvsp[(3) - (3)].str),"FALSE")==0){strcpy((yyval.str),"FALSE");}
else{ strcpy((yyval.str),"TRUE");}
}
    break;

  case 90:
/* Line 1792 of yacc.c  */
#line 152 "projet.y"
    {
if(strcmp((yyvsp[(2) - (5)].str),"FALSE")==0 && strcmp((yyvsp[(4) - (5)].str),"FALSE")==0){strcpy((yyval.str),"FALSE");}
else{ strcpy((yyval.str),"TRUE");}
}
    break;

  case 91:
/* Line 1792 of yacc.c  */
#line 156 "projet.y"
    {
if(strcmp((yyvsp[(2) - (2)].str),"FALSE")==0){strcpy((yyval.str),"TRUE");}
else{ strcpy((yyval.str),"FALSE");}
}
    break;

  case 92:
/* Line 1792 of yacc.c  */
#line 160 "projet.y"
    {
if(strcmp((yyvsp[(3) - (4)].str),"FALSE")==0){strcpy((yyval.str),"TRUE");}
else{ strcpy((yyval.str),"FALSE");}
}
    break;

  case 93:
/* Line 1792 of yacc.c  */
#line 164 "projet.y"
    {
if((yyvsp[(1) - (3)].flottant)==1 && (yyvsp[(3) - (3)].flottant)==1){strcpy((yyval.str),"TRUE");}
else{strcpy((yyval.str),"FALSE");}
}
    break;

  case 94:
/* Line 1792 of yacc.c  */
#line 168 "projet.y"
    {
if((yyvsp[(2) - (5)].flottant)==1 && (yyvsp[(4) - (5)].flottant)==1){strcpy((yyval.str),"TRUE");}
else{strcpy((yyval.str),"FALSE");}
}
    break;

  case 95:
/* Line 1792 of yacc.c  */
#line 172 "projet.y"
    {
if((yyvsp[(1) - (3)].flottant)==0 && (yyvsp[(3) - (3)].flottant)==0){strcpy((yyval.str),"FALSE");}
else{strcpy((yyval.str),"TRUE");}
}
    break;

  case 96:
/* Line 1792 of yacc.c  */
#line 176 "projet.y"
    {
if((yyvsp[(2) - (5)].flottant)==0 && (yyvsp[(4) - (5)].flottant)==0){strcpy((yyval.str),"FALSE");}
else{strcpy((yyval.str),"TRUE");}
}
    break;

  case 97:
/* Line 1792 of yacc.c  */
#line 180 "projet.y"
    {
if((yyvsp[(2) - (2)].flottant)==0){strcpy((yyval.str),"TRUE");}
else{strcpy((yyval.str),"FALSE");}
}
    break;

  case 98:
/* Line 1792 of yacc.c  */
#line 184 "projet.y"
    {
if((yyvsp[(3) - (4)].flottant)==0){strcpy((yyval.str),"TRUE");}
else{strcpy((yyval.str),"FALSE");}
}
    break;

  case 149:
/* Line 1792 of yacc.c  */
#line 247 "projet.y"
    { ptr=RECHERCHE_VALEUR_VARIABLE(tete,(yyvsp[(3) - (5)].str));if(ptr!=NULL){CONVERT_DOUBLE_STRING(ptr->value,(CONVERT_STRING_DOUBLE(ptr->value)+1));}else{printf("Erreur! Undifined varaible '%s' in ligne '%d'",(yyvsp[(3) - (5)].str),yylineno);}}
    break;

  case 151:
/* Line 1792 of yacc.c  */
#line 250 "projet.y"
    { ptr=RECHERCHE_VALEUR_VARIABLE(tete,(yyvsp[(3) - (5)].str));if(ptr!=NULL){CONVERT_DOUBLE_STRING(ptr->value,(CONVERT_STRING_DOUBLE(ptr->value)-1));}else{printf("Erreur! Undifined varaible '%s' in ligne '%d'",(yyvsp[(3) - (5)].str),yylineno);}}
    break;

  case 152:
/* Line 1792 of yacc.c  */
#line 256 "projet.y"
    {printf("%s\n",(yyvsp[(5) - (7)].str));scanf("%s",buffer);ptr=RECHERCHE_VALEUR_VARIABLE(tete,(yyvsp[(1) - (7)].str));if(ptr!=NULL){strcpy(ptr->value,buffer);}else{printf("Erreur! Undifined varaible '%s' in ligne '%d'",(yyvsp[(1) - (7)].str),yylineno);}}
    break;


/* Line 1792 of yacc.c  */
#line 2330 "y.tab.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2055 of yacc.c  */
#line 258 "projet.y"

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