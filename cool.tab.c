/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 1



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     CLASS = 258,
     ELSE = 259,
     FI = 260,
     IF = 261,
     IN = 262,
     INHERITS = 263,
     LET = 264,
     LOOP = 265,
     POOL = 266,
     THEN = 267,
     WHILE = 268,
     CASE = 269,
     ESAC = 270,
     OF = 271,
     DARROW = 272,
     NEW = 273,
     ISVOID = 274,
     STR_CONST = 275,
     INT_CONST = 276,
     BOOL_CONST = 277,
     TYPEID = 278,
     OBJECTID = 279,
     ASSIGN = 280,
     NOT = 281,
     LE = 282,
     ERROR = 283,
     LET_P = 285
   };
#endif
/* Tokens.  */
#define CLASS 258
#define ELSE 259
#define FI 260
#define IF 261
#define IN 262
#define INHERITS 263
#define LET 264
#define LOOP 265
#define POOL 266
#define THEN 267
#define WHILE 268
#define CASE 269
#define ESAC 270
#define OF 271
#define DARROW 272
#define NEW 273
#define ISVOID 274
#define STR_CONST 275
#define INT_CONST 276
#define BOOL_CONST 277
#define TYPEID 278
#define OBJECTID 279
#define ASSIGN 280
#define NOT 281
#define LE 282
#define ERROR 283
#define LET_P 285




/* Copy the first part of user declarations.  */
#line 1 "cool.y"

#include <iostream> #include <string>
#include "symboltab.h"
#include "cool-tree.h"
#include "helper.h"
// #define YYLTYPE int
using namespace std;

void yyerror(char *s);
extern int yylex();
extern char* curr_filename;
ProgramP ast_root = nullptr;
extern int yylineno;
int err_cnt = 0;


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 17 "cool.y"
{
  bool boolean;
  SymbolP symbol;
  ProgramP program;
  ClassP class_;
  ClassesP classes;
  FeatureP feature;
  FeaturesP features;
  FormalP formal;
  FormalsP formals;
  CaseP case_;
  CasesP cases;
  ExpressionP expression;
  ExpressionsP expressions;
  char *error_msg;
}
/* Line 193 of yacc.c.  */
#line 187 "cool.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 212 "cool.tab.c"

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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
    YYLTYPE yyls;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   415

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  18
/* YYNRULES -- Number of rules.  */
#define YYNRULES  68
/* YYNRULES -- Number of states.  */
#define YYNSTATES  161

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   285

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      42,    43,    34,    32,    45,    33,    38,    35,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    44,    41,
      30,    31,     2,     2,    37,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    39,     2,    40,    36,     2,     2,     2,
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
      25,    26,    27,    28,     2,    29
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    17,    26,    29,    31,
      32,    35,    39,    43,    46,    56,    60,    61,    69,    71,
      72,    74,    78,    82,    86,    89,    93,    97,   100,   102,
     103,   105,   109,   113,   115,   121,   129,   135,   143,   147,
     151,   153,   156,   163,   167,   174,   179,   188,   196,   202,
     206,   210,   213,   219,   222,   225,   229,   233,   237,   241,
     244,   248,   252,   256,   259,   261,   263,   265,   267
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      47,     0,    -1,    48,    -1,    49,    -1,    48,    49,    -1,
       3,    23,    39,    50,    40,    41,    -1,     3,    23,     8,
      23,    39,    50,    40,    41,    -1,     1,    41,    -1,    51,
      -1,    -1,    52,    41,    -1,    51,    52,    41,    -1,    51,
       1,    41,    -1,     1,    41,    -1,    24,    42,    54,    43,
      44,    23,    39,    63,    40,    -1,    24,    44,    23,    -1,
      -1,    24,    44,    23,    25,    63,    53,     1,    -1,    55,
      -1,    -1,    56,    -1,    55,    45,    56,    -1,    55,    45,
       1,    -1,    24,    44,    23,    -1,    63,    41,    -1,    57,
      63,    41,    -1,    57,     1,    41,    -1,     1,    41,    -1,
      59,    -1,    -1,    63,    -1,    59,    45,    63,    -1,    59,
      45,     1,    -1,     1,    -1,    24,    44,    23,     7,    63,
      -1,    24,    44,    23,    25,    63,     7,    63,    -1,    24,
      44,    23,    45,    60,    -1,    24,    44,    23,    25,    63,
      45,    60,    -1,     1,     7,    63,    -1,     1,    45,    60,
      -1,    62,    -1,    61,    62,    -1,    24,    44,    23,    17,
      63,    41,    -1,    24,    25,    63,    -1,    63,    38,    24,
      42,    58,    43,    -1,    24,    42,    58,    43,    -1,    63,
      37,    23,    38,    24,    42,    58,    43,    -1,     6,    63,
      12,    63,     4,    63,     5,    -1,    13,    63,    10,    63,
      11,    -1,    39,    57,    40,    -1,    39,     1,    40,    -1,
       9,    60,    -1,    14,    63,    16,    61,    15,    -1,    19,
      63,    -1,    18,    23,    -1,    63,    32,    63,    -1,    63,
      33,    63,    -1,    63,    34,    63,    -1,    63,    35,    63,
      -1,    26,    63,    -1,    63,    30,    63,    -1,    63,    27,
      63,    -1,    63,    31,    63,    -1,    36,    63,    -1,    21,
      -1,    20,    -1,    22,    -1,    24,    -1,    42,    63,    43,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    82,    82,    88,    89,    92,    97,   101,   104,   105,
     108,   109,   110,   111,   114,   116,   121,   120,   127,   128,
     131,   132,   133,   136,   140,   144,   148,   149,   152,   153,
     156,   157,   159,   162,   168,   170,   172,   174,   176,   177,
     180,   181,   184,   192,   198,   202,   211,   217,   220,   223,
     224,   230,   233,   236,   239,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   253,   254,   255,   258,   261
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CLASS", "ELSE", "FI", "IF", "IN",
  "INHERITS", "LET", "LOOP", "POOL", "THEN", "WHILE", "CASE", "ESAC", "OF",
  "DARROW", "NEW", "ISVOID", "STR_CONST", "INT_CONST", "BOOL_CONST",
  "TYPEID", "OBJECTID", "ASSIGN", "NOT", "LE", "ERROR", "LET_P", "'<'",
  "'='", "'+'", "'-'", "'*'", "'/'", "'~'", "'@'", "'.'", "'{'", "'}'",
  "';'", "'('", "')'", "':'", "','", "$accept", "program", "class_list",
  "class", "features_list", "features", "feature", "@1", "formals_list",
  "formals", "formal", "semicolon_sep_exprs", "parameter_expr",
  "comma_sep_exprs", "let_expr", "cases", "case_", "expr", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   284,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   285,
      60,    61,    43,    45,    42,    47,   126,    64,    46,   123,
     125,    59,    40,    41,    58,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    46,    47,    48,    48,    49,    49,    49,    50,    50,
      51,    51,    51,    51,    52,    52,    53,    52,    54,    54,
      55,    55,    55,    56,    57,    57,    57,    57,    58,    58,
      59,    59,    59,    59,    60,    60,    60,    60,    60,    60,
      61,    61,    62,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     6,     8,     2,     1,     0,
       2,     3,     3,     2,     9,     3,     0,     7,     1,     0,
       1,     3,     3,     3,     2,     3,     3,     2,     1,     0,
       1,     3,     3,     1,     5,     7,     5,     7,     3,     3,
       1,     2,     6,     3,     6,     4,     8,     7,     5,     3,
       3,     2,     5,     2,     2,     3,     3,     3,     3,     2,
       3,     3,     3,     2,     1,     1,     1,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     3,     7,     0,     1,     4,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    13,
      19,     0,     0,     0,     0,    10,     0,     0,     0,    18,
      20,    15,     5,    12,    11,     0,     0,     0,     0,     0,
       6,    23,     0,    22,    21,     0,     0,     0,     0,     0,
       0,    65,    64,    66,    67,     0,     0,     0,     0,    16,
       0,     0,     0,     0,    51,     0,     0,    54,    53,     0,
       0,    59,    63,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    43,    33,     0,    28,    30,    50,
      27,     0,    49,     0,    24,    68,    61,    60,    62,    55,
      56,    57,    58,     0,     0,    17,     0,     0,    38,    39,
       0,     0,     0,     0,    40,    45,     0,    26,    25,     0,
       0,    14,     0,     0,     0,     0,    48,     0,    52,    41,
      32,    31,     0,     0,     0,    34,     0,    36,     0,     0,
      44,    47,     0,     0,     0,     0,    35,    37,     0,    46,
      42
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,     5,    15,    16,    17,    86,    28,    29,
      30,    74,    96,    97,    64,   123,   124,    98
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -121
static const yytype_int16 yypact[] =
{
      64,   -18,     5,    37,    31,  -121,  -121,    -6,  -121,  -121,
      28,    12,    32,    21,    26,    35,    23,    36,    12,  -121,
      48,    53,    42,    44,    47,  -121,    49,    46,    54,    55,
    -121,    66,  -121,  -121,  -121,    51,    75,    57,     2,   212,
    -121,  -121,    82,  -121,  -121,   212,     3,   212,   212,    83,
     212,  -121,  -121,  -121,   -20,   212,   212,   135,   212,   368,
      68,   277,    13,    67,  -121,   243,   297,  -121,   -23,   212,
      60,   368,   -23,    14,   103,   320,   306,   212,   212,   212,
     212,   212,   212,   212,    85,    86,   113,   212,   212,   212,
       3,    95,   212,    96,   368,  -121,    76,    81,   368,  -121,
    -121,    87,  -121,   332,  -121,  -121,   377,   377,   377,    22,
      22,   -23,   -23,    92,    89,  -121,   356,   225,   368,  -121,
       0,   268,    88,    -3,  -121,  -121,   166,  -121,  -121,   109,
      60,  -121,   212,   212,   212,     3,  -121,   111,  -121,  -121,
    -121,   368,    93,    94,   234,   368,   182,  -121,   121,    60,
    -121,  -121,   212,     3,   212,    97,   368,  -121,   344,  -121,
    -121
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -121,  -121,  -121,   142,   129,  -121,   134,  -121,  -121,  -121,
     114,  -121,  -120,  -121,   -89,  -121,    39,   -39
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -30
static const yytype_int16 yytable[] =
{
      59,   119,    10,    43,    62,    69,    61,   133,    65,    66,
     143,    68,   138,    13,    84,    85,    71,    72,    75,    76,
      89,   122,    70,     6,    23,   134,    27,    63,     7,   155,
      94,    -2,     1,    11,     2,   103,    14,     8,   106,   107,
     108,   109,   110,   111,   112,   135,   147,    14,   116,   117,
     118,    12,    -9,   121,    99,   100,    82,    83,    90,    84,
      85,    95,    19,    -8,   157,     1,    45,     2,    20,    46,
      21,    18,    27,    47,    48,    22,    31,    25,    49,    50,
      51,    52,    53,    32,    54,    33,    55,   141,    34,    35,
      36,    39,    40,   144,   145,   146,    56,    37,    41,    57,
      38,    42,    58,   -29,   101,    60,    67,    87,   113,    45,
     114,    91,    46,   156,   115,   158,    47,    48,   120,   125,
     122,    49,    50,    51,    52,    53,   126,    54,   127,    55,
     129,   130,   137,   142,   148,   149,    73,   150,   154,    56,
     159,    45,    57,   102,    46,    58,     9,    26,    47,    48,
      24,     0,    44,    49,    50,    51,    52,    53,     0,    54,
       0,    55,   139,     0,     0,     0,     0,   140,     0,     0,
       0,    56,    45,     0,    57,    46,     0,    58,     0,    47,
      48,     0,     0,     0,    49,    50,    51,    52,    53,   152,
      54,     0,    55,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    56,     0,     0,    57,     0,     0,    58,    77,
       0,     0,    78,    79,    80,    81,    82,    83,    45,    84,
      85,    46,     0,     0,     0,    47,    48,   153,     0,   132,
      49,    50,    51,    52,    53,     0,    54,     0,    55,   151,
       0,     0,     0,     0,     0,     0,     0,     0,    56,     0,
       0,    57,    77,    92,    58,    78,    79,    80,    81,    82,
      83,    77,    84,    85,    78,    79,    80,    81,    82,    83,
      77,    84,    85,    78,    79,    80,    81,    82,    83,   136,
      84,    85,     0,     0,     0,     0,     0,     0,     0,    88,
       0,     0,     0,     0,     0,    77,     0,     0,    78,    79,
      80,    81,    82,    83,    77,    84,    85,    78,    79,    80,
      81,    82,    83,    93,    84,    85,     0,     0,     0,     0,
       0,     0,     0,     0,    77,     0,     0,    78,    79,    80,
      81,    82,    83,    77,    84,    85,    78,    79,    80,    81,
      82,    83,     0,    84,    85,     0,     0,    77,     0,   105,
      78,    79,    80,    81,    82,    83,     0,    84,    85,    77,
       0,   104,    78,    79,    80,    81,    82,    83,     0,    84,
      85,    77,     0,   128,    78,    79,    80,    81,    82,    83,
       0,    84,    85,    77,     0,   160,    78,    79,    80,    81,
      82,    83,     0,    84,    85,    77,   131,     0,    78,    79,
      80,    81,    82,    83,   -30,    84,    85,   -30,   -30,    80,
      81,    82,    83,     0,    84,    85
};

static const yytype_int16 yycheck[] =
{
      39,    90,     8,     1,     1,    25,    45,     7,    47,    48,
     130,    50,    15,     1,    37,    38,    55,    56,    57,    58,
       7,    24,    42,    41,     1,    25,    24,    24,    23,   149,
      69,     0,     1,    39,     3,    74,    24,     0,    77,    78,
      79,    80,    81,    82,    83,    45,   135,    24,    87,    88,
      89,    23,    40,    92,    40,    41,    34,    35,    45,    37,
      38,     1,    41,    40,   153,     1,     6,     3,    42,     9,
      44,    39,    24,    13,    14,    40,    23,    41,    18,    19,
      20,    21,    22,    41,    24,    41,    26,   126,    41,    40,
      44,    25,    41,   132,   133,   134,    36,    43,    23,    39,
      45,    44,    42,    43,     1,    23,    23,    39,    23,     6,
      24,    44,     9,   152,     1,   154,    13,    14,    23,    43,
      24,    18,    19,    20,    21,    22,    45,    24,    41,    26,
      38,    42,    44,    24,    23,    42,     1,    43,    17,    36,
      43,     6,    39,    40,     9,    42,     4,    18,    13,    14,
      16,    -1,    38,    18,    19,    20,    21,    22,    -1,    24,
      -1,    26,   123,    -1,    -1,    -1,    -1,     1,    -1,    -1,
      -1,    36,     6,    -1,    39,     9,    -1,    42,    -1,    13,
      14,    -1,    -1,    -1,    18,    19,    20,    21,    22,     7,
      24,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    36,    -1,    -1,    39,    -1,    -1,    42,    27,
      -1,    -1,    30,    31,    32,    33,    34,    35,     6,    37,
      38,     9,    -1,    -1,    -1,    13,    14,    45,    -1,     4,
      18,    19,    20,    21,    22,    -1,    24,    -1,    26,     5,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,    -1,
      -1,    39,    27,    10,    42,    30,    31,    32,    33,    34,
      35,    27,    37,    38,    30,    31,    32,    33,    34,    35,
      27,    37,    38,    30,    31,    32,    33,    34,    35,    11,
      37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    30,    31,
      32,    33,    34,    35,    27,    37,    38,    30,    31,    32,
      33,    34,    35,    16,    37,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    -1,    30,    31,    32,
      33,    34,    35,    27,    37,    38,    30,    31,    32,    33,
      34,    35,    -1,    37,    38,    -1,    -1,    27,    -1,    43,
      30,    31,    32,    33,    34,    35,    -1,    37,    38,    27,
      -1,    41,    30,    31,    32,    33,    34,    35,    -1,    37,
      38,    27,    -1,    41,    30,    31,    32,    33,    34,    35,
      -1,    37,    38,    27,    -1,    41,    30,    31,    32,    33,
      34,    35,    -1,    37,    38,    27,    40,    -1,    30,    31,
      32,    33,    34,    35,    27,    37,    38,    30,    31,    32,
      33,    34,    35,    -1,    37,    38
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,    47,    48,    49,    41,    23,     0,    49,
       8,    39,    23,     1,    24,    50,    51,    52,    39,    41,
      42,    44,    40,     1,    52,    41,    50,    24,    54,    55,
      56,    23,    41,    41,    41,    40,    44,    43,    45,    25,
      41,    23,    44,     1,    56,     6,     9,    13,    14,    18,
      19,    20,    21,    22,    24,    26,    36,    39,    42,    63,
      23,    63,     1,    24,    60,    63,    63,    23,    63,    25,
      42,    63,    63,     1,    57,    63,    63,    27,    30,    31,
      32,    33,    34,    35,    37,    38,    53,    39,    12,     7,
      45,    44,    10,    16,    63,     1,    58,    59,    63,    40,
      41,     1,    40,    63,    41,    43,    63,    63,    63,    63,
      63,    63,    63,    23,    24,     1,    63,    63,    63,    60,
      23,    63,    24,    61,    62,    43,    45,    41,    41,    38,
      42,    40,     4,     7,    25,    45,    11,    44,    15,    62,
       1,    63,    24,    58,    63,    63,    63,    60,    23,    42,
      43,     5,     7,    45,    17,    58,    63,    60,    63,    43,
      41
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
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
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
		  Type, Value, Location); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;
/* Location data for the look-ahead symbol.  */
YYLTYPE yylloc;



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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;

  /* The location stack.  */
  YYLTYPE yylsa[YYINITDEPTH];
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;
  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[2];

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;
#if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 0;
#endif

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
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);
	yyls = yyls1;
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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);
	YYSTACK_RELOCATE (yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 83 "cool.y"
    { 
          (yyloc) = (yylsp[(1) - (1)]); ast_root = CreateProgram((yyvsp[(1) - (1)].classes), yylineno);
        ;}
    break;

  case 3:
#line 88 "cool.y"
    { (yyval.classes) = CreateSingleClasses((yyvsp[(1) - (1)].class_)); ;}
    break;

  case 4:
#line 89 "cool.y"
    { (yyval.classes) = AppendClass((yyvsp[(1) - (2)].classes), (yyvsp[(2) - (2)].class_)); ;}
    break;

  case 5:
#line 93 "cool.y"
    {
        (yyval.class_) = CreateClass((yyvsp[(2) - (6)].symbol), IdTable.AddString("Object"),
                         StrTable.AddString(curr_filename), (yyvsp[(4) - (6)].features), yylineno);
      ;}
    break;

  case 6:
#line 98 "cool.y"
    {
        (yyval.class_) = CreateClass((yyvsp[(2) - (8)].symbol), (yyvsp[(4) - (8)].symbol), StrTable.AddString(curr_filename), (yyvsp[(6) - (8)].features), yylineno);
      ;}
    break;

  case 7:
#line 101 "cool.y"
    { (yyval.class_) = NULL; ;}
    break;

  case 8:
#line 104 "cool.y"
    { (yyval.features) = (yyvsp[(1) - (1)].features); ;}
    break;

  case 9:
#line 105 "cool.y"
    { (yyval.features) = CreateNilFeatures(); ;}
    break;

  case 10:
#line 108 "cool.y"
    { (yyval.features) = CreateSingleFeatures((yyvsp[(1) - (2)].feature)); ;}
    break;

  case 11:
#line 109 "cool.y"
    { (yyval.features) = AppendFeature((yyvsp[(1) - (3)].features), (yyvsp[(2) - (3)].feature)); ;}
    break;

  case 12:
#line 110 "cool.y"
    { (yyval.features) = (yyvsp[(1) - (3)].features); ;}
    break;

  case 13:
#line 111 "cool.y"
    {  (yyval.features) = NULL; ;}
    break;

  case 14:
#line 115 "cool.y"
    { (yyval.feature) = CreateMethod((yyvsp[(1) - (9)].symbol), (yyvsp[(6) - (9)].symbol), (yyvsp[(3) - (9)].formals), (yyvsp[(8) - (9)].expression), yylineno); ;}
    break;

  case 15:
#line 117 "cool.y"
    {
          (yyval.feature) = CreateAttr((yyvsp[(1) - (3)].symbol), (yyvsp[(3) - (3)].symbol), CreateNoExpr(yylineno), yylineno);
        ;}
    break;

  case 16:
#line 121 "cool.y"
    { 
          (yyval.feature) = CreateAttr((yyvsp[(1) - (5)].symbol), (yyvsp[(3) - (5)].symbol), (yyvsp[(5) - (5)].expression), yylineno); 
        ;}
    break;

  case 17:
#line 124 "cool.y"
    { (yyval.feature) = NULL; ;}
    break;

  case 18:
#line 127 "cool.y"
    { (yyval.formals) = (yyvsp[(1) - (1)].formals); ;}
    break;

  case 19:
#line 128 "cool.y"
    { (yyval.formals) = CreateNilFormals(); ;}
    break;

  case 20:
#line 131 "cool.y"
    { (yyval.formals) = CreateSingleFormals((yyvsp[(1) - (1)].formal)); ;}
    break;

  case 21:
#line 132 "cool.y"
    { (yyval.formals) = AppendFormal((yyvsp[(1) - (3)].formals), (yyvsp[(3) - (3)].formal)); ;}
    break;

  case 22:
#line 133 "cool.y"
    { (yyval.formals) = (yyvsp[(1) - (3)].formals); ;}
    break;

  case 23:
#line 136 "cool.y"
    { (yyval.formal) = CreateFormal((yyvsp[(1) - (3)].symbol), (yyvsp[(3) - (3)].symbol)); ;}
    break;

  case 24:
#line 141 "cool.y"
    { 
                      (yyval.expressions) = CreateSingleExpressions((yyvsp[(1) - (2)].expression)); 
                    ;}
    break;

  case 25:
#line 145 "cool.y"
    { 
                      (yyval.expressions) = AppendExpression((yyvsp[(1) - (3)].expressions), (yyvsp[(2) - (3)].expression)); 
                    ;}
    break;

  case 26:
#line 148 "cool.y"
    { (yyval.expressions) = NULL; ;}
    break;

  case 27:
#line 149 "cool.y"
    { (yyval.expressions) = NULL; ;}
    break;

  case 28:
#line 152 "cool.y"
    { (yyval.expressions) = (yyvsp[(1) - (1)].expressions) ;}
    break;

  case 29:
#line 153 "cool.y"
    { (yyval.expressions) = CreateNilExpressions(); ;}
    break;

  case 30:
#line 156 "cool.y"
    { (yyval.expressions) = CreateSingleExpressions((yyvsp[(1) - (1)].expression)); ;}
    break;

  case 31:
#line 158 "cool.y"
    { (yyval.expressions) = AppendExpression((yyvsp[(1) - (3)].expressions), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 32:
#line 159 "cool.y"
    {
                  (yyval.expressions) = (yyvsp[(1) - (3)].expressions);
                ;}
    break;

  case 33:
#line 162 "cool.y"
    {
                  (yyval.expressions) = NULL;
                ;}
    break;

  case 34:
#line 169 "cool.y"
    { (yyval.expression) = CreateLet((yyvsp[(1) - (5)].symbol), (yyvsp[(3) - (5)].symbol), CreateNoExpr(yylineno),(yyvsp[(5) - (5)].expression), yylineno); ;}
    break;

  case 35:
#line 171 "cool.y"
    { (yyval.expression) = CreateLet((yyvsp[(1) - (7)].symbol), (yyvsp[(3) - (7)].symbol), (yyvsp[(5) - (7)].expression), (yyvsp[(7) - (7)].expression), yylineno); ;}
    break;

  case 36:
#line 173 "cool.y"
    { (yyval.expression) = CreateLet((yyvsp[(1) - (5)].symbol), (yyvsp[(3) - (5)].symbol), CreateNoExpr(yylineno), (yyvsp[(5) - (5)].expression)); ;}
    break;

  case 37:
#line 175 "cool.y"
    { (yyval.expression) = CreateLet((yyvsp[(1) - (7)].symbol), (yyvsp[(3) - (7)].symbol), (yyvsp[(5) - (7)].expression), (yyvsp[(7) - (7)].expression), yylineno); ;}
    break;

  case 38:
#line 176 "cool.y"
    { (yyval.expression) = NULL; ;}
    break;

  case 39:
#line 177 "cool.y"
    { (yyval.expression) = NULL; ;}
    break;

  case 40:
#line 180 "cool.y"
    { (yyval.cases) = CreateSingleCases((yyvsp[(1) - (1)].case_)); ;}
    break;

  case 41:
#line 181 "cool.y"
    { (yyval.cases) = AppendCase((yyvsp[(1) - (2)].cases), (yyvsp[(2) - (2)].case_)); ;}
    break;

  case 42:
#line 185 "cool.y"
    {
        (yyval.case_) = CreateCase((yyvsp[(1) - (6)].symbol), (yyvsp[(3) - (6)].symbol), (yyvsp[(5) - (6)].expression), yylineno);
      ;}
    break;

  case 43:
#line 193 "cool.y"
    {
        (yyval.expression) = CreateAssign((yyvsp[(1) - (3)].symbol), (yyvsp[(3) - (3)].expression), yylineno);
     ;}
    break;

  case 44:
#line 199 "cool.y"
    {
        (yyval.expression) = CreateDispatch((yyvsp[(3) - (6)].symbol), (yyvsp[(1) - (6)].expression), (yyvsp[(5) - (6)].expressions), yylineno);
     ;}
    break;

  case 45:
#line 203 "cool.y"
    {
        (yyval.expression) = CreateDispatch((yyvsp[(1) - (4)].symbol),
                            CreateObject(IdTable.AddString("self")),
                            (yyvsp[(3) - (4)].expressions),
                            yylineno);
     ;}
    break;

  case 46:
#line 212 "cool.y"
    { 
        (yyval.expression) = CreateStaticDispatch((yyvsp[(5) - (8)].symbol), (yyvsp[(3) - (8)].symbol), (yyvsp[(1) - (8)].expression), (yyvsp[(7) - (8)].expressions), yylineno); 
     ;}
    break;

  case 47:
#line 217 "cool.y"
    { (yyval.expression) = CreateCond((yyvsp[(2) - (7)].expression), (yyvsp[(4) - (7)].expression), (yyvsp[(6) - (7)].expression), yylineno); ;}
    break;

  case 48:
#line 220 "cool.y"
    { (yyval.expression) = CreateLoop((yyvsp[(2) - (5)].expression), (yyvsp[(4) - (5)].expression), yylineno); ;}
    break;

  case 49:
#line 223 "cool.y"
    { (yyval.expression) = CreateBlock((yyvsp[(2) - (3)].expressions), yylineno); ;}
    break;

  case 50:
#line 225 "cool.y"
    { 
        (yyval.expression) = NULL;
     ;}
    break;

  case 51:
#line 230 "cool.y"
    { (yyval.expression) = (yyvsp[(2) - (2)].expression); ;}
    break;

  case 52:
#line 233 "cool.y"
    { (yyval.expression) = CreateTypecase((yyvsp[(2) - (5)].expression), (yyvsp[(4) - (5)].cases), yylineno); ;}
    break;

  case 53:
#line 236 "cool.y"
    { (yyval.expression) = CreateIsVoid((yyvsp[(2) - (2)].expression), yylineno); ;}
    break;

  case 54:
#line 239 "cool.y"
    { (yyval.expression) = CreateNew((yyvsp[(2) - (2)].symbol), yylineno); ;}
    break;

  case 55:
#line 242 "cool.y"
    { (yyval.expression) = CreatePlus((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression), yylineno); ;}
    break;

  case 56:
#line 243 "cool.y"
    { (yyval.expression) = CreateSub((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression), yylineno); ;}
    break;

  case 57:
#line 244 "cool.y"
    { (yyval.expression) = CreateMul((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression), yylineno); ;}
    break;

  case 58:
#line 245 "cool.y"
    { (yyval.expression) = CreateDivide((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression), yylineno); ;}
    break;

  case 59:
#line 246 "cool.y"
    { (yyval.expression) = CreateComp((yyvsp[(2) - (2)].expression), yylineno); ;}
    break;

  case 60:
#line 247 "cool.y"
    { (yyval.expression) = CreateLt((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression), yylineno); ;}
    break;

  case 61:
#line 248 "cool.y"
    { (yyval.expression) = CreateLeq((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression), yylineno); ;}
    break;

  case 62:
#line 249 "cool.y"
    { (yyval.expression) = CreateEq((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression), yylineno); ;}
    break;

  case 63:
#line 250 "cool.y"
    { (yyval.expression) = CreateNeg((yyvsp[(2) - (2)].expression), yylineno); ;}
    break;

  case 64:
#line 253 "cool.y"
    { (yyval.expression) = CreateIntConst((yyvsp[(1) - (1)].symbol), yylineno); ;}
    break;

  case 65:
#line 254 "cool.y"
    { (yyval.expression) = CreateStringConst((yyvsp[(1) - (1)].symbol), yylineno); ;}
    break;

  case 66:
#line 255 "cool.y"
    { (yyval.expression) = CreateBoolConst((yyvsp[(1) - (1)].boolean), yylineno); ;}
    break;

  case 67:
#line 258 "cool.y"
    { (yyval.expression) = CreateObject((yyvsp[(1) - (1)].symbol), yylineno); ;}
    break;

  case 68:
#line 261 "cool.y"
    { (yyval.expression) = (yyvsp[(2) - (3)].expression); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 1981 "cool.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

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
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }

  yyerror_range[0] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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
		      yytoken, &yylval, &yylloc);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
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

  yyerror_range[0] = yylsp[1-yylen];
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
      if (yyn != YYPACT_NINF)
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

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the look-ahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
  *++yylsp = yyloc;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, &yylloc);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
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


#line 265 "cool.y"


void yyerror(char *s) {
  extern int curr_lineno;
  auto dump_token = [&]() {
    using namespace cool_helper;
    cerr << TokenToString(yychar);
    switch (yychar) {
      case (STR_CONST):
        cerr << " \"" << ToEscapedString(yylval.symbol->GetString())
            << "\"" << endl;
        break;

      case (INT_CONST):
        cerr << " = " << yylval.symbol->GetString() << endl;
        break;
      
      case (BOOL_CONST):
        cerr << " " << (yylval.boolean ? "true" : "false") << endl;
        break;

      case (TYPEID):
      case (OBJECTID):
        cerr << " = " << yylval.symbol->GetString() << endl;
        break;

      case (ERROR):
        if (yylval.error_msg[0] == 0) {
          cerr << " \"\\000\"" << endl;
        } else {
          cerr << " \""
              << ToEscapedString(yylval.error_msg)
              << "\"" << endl;
        }
        break;
        
      default:
        cerr << endl;
    }
  };

  cerr << "\"" << curr_filename << "\", line " << curr_lineno << ": " \
       << s << " at or near ";
  dump_token();
  ++err_cnt;
  if (err_cnt > 50) {
    cerr << "More than 50 errors" << endl;
    exit(1);
  }
}

