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
     ERROR = 283
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




/* Copy the first part of user declarations.  */
#line 1 "cool.y"

#include <iostream>
#include <string>
#include "symboltab.h"
#include "cool-tree.h"
// #define YYLTYPE int

using namespace std;

void yyerror(const std::string& msg);
extern int yylex();


extern char* curr_filename;
ProgramP ast_root;



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
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
#line 19 "cool.y"
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
#define YYLAST   355

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  17
/* YYNRULES -- Number of rules.  */
#define YYNRULES  61
/* YYNRULES -- Number of states.  */
#define YYNSTATES  148

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   284

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      32,    33,    40,    38,    35,    39,    36,    41,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    34,    31,
      42,    43,     2,     2,    37,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    29,     2,    30,    44,     2,     2,     2,
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
      25,    26,    27,    28,     2
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    17,    26,    29,    31,
      32,    35,    39,    49,    53,    59,    61,    63,    64,    66,
      70,    74,    77,    81,    85,    88,    90,    91,    93,    97,
     103,   111,   117,   125,   129,   131,   134,   141,   145,   152,
     161,   169,   175,   179,   183,   186,   192,   195,   198,   202,
     206,   210,   214,   217,   221,   225,   229,   232,   234,   236,
     238,   240
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      46,     0,    -1,    47,    -1,    48,    -1,    47,    48,    -1,
       3,    23,    29,    49,    30,    31,    -1,     3,    23,     8,
      23,    29,    49,    30,    31,    -1,     1,    31,    -1,    50,
      -1,    -1,    51,    31,    -1,    50,    51,    31,    -1,    24,
      32,    52,    33,    34,    23,    29,    61,    30,    -1,    24,
      34,    23,    -1,    24,    34,    23,    25,    61,    -1,     1,
      -1,    53,    -1,    -1,    54,    -1,    53,    35,    54,    -1,
      24,    34,    23,    -1,    61,    31,    -1,    55,    61,    31,
      -1,    55,     1,    31,    -1,     1,    31,    -1,    57,    -1,
      -1,    61,    -1,    57,    35,    61,    -1,    24,    34,    23,
       7,    61,    -1,    24,    34,    23,    25,    61,     7,    61,
      -1,    24,    34,    23,    35,    58,    -1,    24,    34,    23,
      25,    61,    35,    58,    -1,     1,    35,    58,    -1,    60,
      -1,    59,    60,    -1,    24,    34,    23,    17,    61,    31,
      -1,    24,    25,    61,    -1,    61,    36,    24,    32,    56,
      33,    -1,    61,    37,    23,    36,    24,    32,    56,    33,
      -1,     6,    61,    12,    61,     4,    61,     5,    -1,    13,
      61,    10,    61,    11,    -1,    29,    55,    30,    -1,    29,
       1,    30,    -1,     9,    58,    -1,    14,    61,    16,    59,
      15,    -1,    19,    61,    -1,    18,    23,    -1,    61,    38,
      61,    -1,    61,    39,    61,    -1,    61,    40,    61,    -1,
      61,    41,    61,    -1,    26,    61,    -1,    61,    42,    61,
      -1,    61,    27,    61,    -1,    61,    43,    61,    -1,    44,
      61,    -1,    21,    -1,    20,    -1,    22,    -1,    24,    -1,
      32,    61,    33,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    73,    73,    76,    77,    80,    84,    88,    91,    92,
      95,    96,    99,   101,   102,   103,   106,   107,   110,   111,
     114,   118,   119,   121,   122,   125,   126,   129,   130,   135,
     136,   138,   140,   142,   145,   146,   149,   152,   153,   154,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177
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
  "TYPEID", "OBJECTID", "ASSIGN", "NOT", "LE", "ERROR", "'{'", "'}'",
  "';'", "'('", "')'", "':'", "','", "'.'", "'@'", "'+'", "'-'", "'*'",
  "'/'", "'<'", "'='", "'~'", "$accept", "program", "class_list", "class",
  "features_list", "features", "feature", "formals_list", "formals",
  "formal", "semicolon_sep_exprs", "parameter_expr", "comma_sep_exprs",
  "let_expr", "cases", "case_", "expr", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   284,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   123,
     125,    59,    40,    41,    58,    44,    46,    64,    43,    45,
      42,    47,    60,    61,   126
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    45,    46,    47,    47,    48,    48,    48,    49,    49,
      50,    50,    51,    51,    51,    51,    52,    52,    53,    53,
      54,    55,    55,    55,    55,    56,    56,    57,    57,    58,
      58,    58,    58,    58,    59,    59,    60,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     6,     8,     2,     1,     0,
       2,     3,     9,     3,     5,     1,     1,     0,     1,     3,
       3,     2,     3,     3,     2,     1,     0,     1,     3,     5,
       7,     5,     7,     3,     1,     2,     6,     3,     6,     8,
       7,     5,     3,     3,     2,     5,     2,     2,     3,     3,
       3,     3,     2,     3,     3,     3,     2,     1,     1,     1,
       1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     3,     7,     0,     1,     4,
       0,     0,     0,    15,     0,     0,     0,     0,     0,    17,
       0,     0,     0,    10,     0,     0,     0,    16,    18,    13,
       5,    11,     0,     0,     0,     0,     0,     6,    20,     0,
      19,     0,     0,     0,     0,     0,     0,    58,    57,    59,
      60,     0,     0,     0,     0,    14,     0,     0,     0,     0,
      44,     0,     0,    47,    46,     0,    52,     0,     0,     0,
       0,    56,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    37,    43,    24,
       0,    42,     0,    21,    61,    54,     0,     0,    48,    49,
      50,    51,    53,    55,     0,     0,    33,     0,     0,     0,
       0,    34,    23,    22,    26,     0,    12,     0,     0,     0,
       0,    41,     0,    45,    35,     0,    25,    27,     0,     0,
      29,     0,    31,     0,    38,     0,    26,    40,     0,     0,
       0,    28,     0,    30,    32,     0,    39,    36
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,     5,    15,    16,    17,    26,    27,    28,
      68,   125,   126,    60,   110,   111,   127
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -83
static const yytype_int16 yypact[] =
{
      18,   -22,     0,    28,    50,   -83,   -83,     6,   -83,   -83,
       7,     1,    -7,   -83,    22,    31,     3,    17,     1,    13,
      35,    32,    38,   -83,    41,    39,    29,    42,   -83,    49,
     -83,   -83,    48,    57,    51,    13,   123,   -83,   -83,    61,
     -83,   123,     2,   123,   123,    63,   123,   -83,   -83,   -83,
      62,   123,    87,   123,   123,   312,    65,   202,    56,    58,
     -83,   168,   219,   -83,   312,   123,   312,   -18,    46,   236,
     253,   312,   123,    71,    74,   123,   123,   123,   123,   123,
     123,   123,   123,     2,    75,   123,    79,   312,   -83,   -83,
      83,   -83,   270,   -83,   -83,   312,    78,    81,   312,   312,
     312,   312,   312,   312,   287,    85,   -83,    -1,   185,    84,
      -4,   -83,   -83,   -83,   123,    91,   -83,   123,   123,   123,
       2,   -83,    97,   -83,   -83,   100,    95,   312,   102,   133,
     312,   150,   -83,   118,   -83,   123,   123,   -83,   123,     2,
     123,   312,   106,   312,   -83,   304,   -83,   -83
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -83,   -83,   -83,   136,   128,   -83,   132,   -83,   -83,   115,
     -83,    15,   -83,   -82,   -83,    43,   -36
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -10
static const yytype_int16 yytable[] =
{
      55,   106,    13,    58,    13,    57,   118,    61,    62,     6,
      64,   123,    88,    89,    10,    66,    69,    70,    71,     1,
     109,     2,    18,     7,   119,    14,    59,    14,     8,    87,
      12,    -9,    92,    -8,   120,    11,    95,    25,   132,    98,
      99,   100,   101,   102,   103,   104,   105,    90,    23,   108,
      -2,     1,    41,     2,    19,    42,    20,   144,    29,    43,
      44,    21,    34,    30,    45,    46,    47,    48,    49,    31,
      50,    32,    51,    33,    36,    52,    91,    35,    53,    37,
      38,   129,   130,   131,    56,    39,    63,    65,    67,   117,
      54,    83,    84,    41,    81,    96,    42,    97,   107,   141,
      43,    44,   143,   109,   145,    45,    46,    47,    48,    49,
     114,    50,    72,    51,   112,   128,    52,   115,   122,    53,
     133,    73,    74,    75,    76,    77,    78,    79,    80,    41,
     135,    54,    42,   134,   136,   140,    43,    44,   137,   146,
       9,    45,    46,    47,    48,    49,    24,    50,    22,    51,
      40,   142,    52,   124,     0,    53,     0,   138,     0,     0,
      72,     0,     0,     0,     0,     0,     0,    54,     0,    73,
      74,    75,    76,    77,    78,    79,    80,    72,    85,     0,
       0,     0,     0,     0,     0,   139,    73,    74,    75,    76,
      77,    78,    79,    80,     0,    72,   121,     0,     0,     0,
       0,     0,     0,     0,    73,    74,    75,    76,    77,    78,
      79,    80,    72,     0,    82,     0,     0,     0,     0,     0,
       0,    73,    74,    75,    76,    77,    78,    79,    80,    72,
       0,     0,     0,     0,     0,    86,     0,     0,    73,    74,
      75,    76,    77,    78,    79,    80,    72,     0,     0,     0,
       0,     0,     0,     0,     0,    73,    74,    75,    76,    77,
      78,    79,    80,    72,     0,     0,     0,    93,     0,     0,
       0,     0,    73,    74,    75,    76,    77,    78,    79,    80,
      72,     0,     0,     0,     0,     0,    94,     0,     0,    73,
      74,    75,    76,    77,    78,    79,    80,    72,     0,     0,
       0,   113,     0,     0,     0,     0,    73,    74,    75,    76,
      77,    78,    79,    80,    72,     0,     0,   116,     0,     0,
       0,     0,     0,    73,    74,    75,    76,    77,    78,    79,
      80,    72,     0,     0,     0,   147,     0,     0,     0,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    73,    74,
      75,    76,    77,    78,    79,    80
};

static const yytype_int16 yycheck[] =
{
      36,    83,     1,     1,     1,    41,     7,    43,    44,    31,
      46,    15,    30,    31,     8,    51,    52,    53,    54,     1,
      24,     3,    29,    23,    25,    24,    24,    24,     0,    65,
      23,    30,    68,    30,    35,    29,    72,    24,   120,    75,
      76,    77,    78,    79,    80,    81,    82,     1,    31,    85,
       0,     1,     6,     3,    32,     9,    34,   139,    23,    13,
      14,    30,    33,    31,    18,    19,    20,    21,    22,    31,
      24,    30,    26,    34,    25,    29,    30,    35,    32,    31,
      23,   117,   118,   119,    23,    34,    23,    25,     1,     4,
      44,    35,    34,     6,    29,    24,     9,    23,    23,   135,
      13,    14,   138,    24,   140,    18,    19,    20,    21,    22,
      32,    24,    27,    26,    31,    24,    29,    36,    34,    32,
      23,    36,    37,    38,    39,    40,    41,    42,    43,     6,
      35,    44,     9,    33,    32,    17,    13,    14,     5,    33,
       4,    18,    19,    20,    21,    22,    18,    24,    16,    26,
      35,   136,    29,   110,    -1,    32,    -1,     7,    -1,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,    36,
      37,    38,    39,    40,    41,    42,    43,    27,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    -1,    27,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    36,    37,    38,    39,    40,    41,
      42,    43,    27,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    36,    37,    38,    39,    40,    41,    42,    43,    27,
      -1,    -1,    -1,    -1,    -1,    16,    -1,    -1,    36,    37,
      38,    39,    40,    41,    42,    43,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    36,    37,    38,    39,    40,
      41,    42,    43,    27,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    36,    37,    38,    39,    40,    41,    42,    43,
      27,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    36,
      37,    38,    39,    40,    41,    42,    43,    27,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    36,    37,    38,    39,
      40,    41,    42,    43,    27,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    36,    37,    38,    39,    40,    41,    42,
      43,    27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    27,
      36,    37,    38,    39,    40,    41,    42,    43,    36,    37,
      38,    39,    40,    41,    42,    43
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,    46,    47,    48,    31,    23,     0,    48,
       8,    29,    23,     1,    24,    49,    50,    51,    29,    32,
      34,    30,    51,    31,    49,    24,    52,    53,    54,    23,
      31,    31,    30,    34,    33,    35,    25,    31,    23,    34,
      54,     6,     9,    13,    14,    18,    19,    20,    21,    22,
      24,    26,    29,    32,    44,    61,    23,    61,     1,    24,
      58,    61,    61,    23,    61,    25,    61,     1,    55,    61,
      61,    61,    27,    36,    37,    38,    39,    40,    41,    42,
      43,    29,    12,    35,    34,    10,    16,    61,    30,    31,
       1,    30,    61,    31,    33,    61,    24,    23,    61,    61,
      61,    61,    61,    61,    61,    61,    58,    23,    61,    24,
      59,    60,    31,    31,    32,    36,    30,     4,     7,    25,
      35,    11,    34,    15,    60,    56,    57,    61,    24,    61,
      61,    61,    58,    23,    33,    35,    32,     5,     7,    35,
      17,    61,    56,    61,    58,    61,    33,    31
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
#line 73 "cool.y"
    { (yyloc) = (yylsp[(1) - (1)]); ast_root = CreateProgram((yyvsp[(1) - (1)].classes)); ;}
    break;

  case 3:
#line 76 "cool.y"
    { (yyval.classes) = CreateSingleClasses((yyvsp[(1) - (1)].class_)); ;}
    break;

  case 4:
#line 77 "cool.y"
    { (yyval.classes) = AppendClass((yyvsp[(1) - (2)].classes), (yyvsp[(2) - (2)].class_)); ;}
    break;

  case 5:
#line 81 "cool.y"
    {
        (yyval.class_) = CreateClass((yyvsp[(2) - (6)].symbol), IdTable.AddString("Object"), StrTable.AddString(curr_filename), (yyvsp[(4) - (6)].features));
      ;}
    break;

  case 6:
#line 85 "cool.y"
    {
        (yyval.class_) = CreateClass((yyvsp[(2) - (8)].symbol), (yyvsp[(4) - (8)].symbol), StrTable.AddString(curr_filename), (yyvsp[(6) - (8)].features));
      ;}
    break;

  case 8:
#line 91 "cool.y"
    { (yyval.features) = (yyvsp[(1) - (1)].features); ;}
    break;

  case 9:
#line 92 "cool.y"
    { (yyval.features) = CreateNilFeatures(); ;}
    break;

  case 10:
#line 95 "cool.y"
    { (yyval.features) = CreateSingleFeatures((yyvsp[(1) - (2)].feature)); ;}
    break;

  case 11:
#line 96 "cool.y"
    { (yyval.features) = AppendFeature((yyvsp[(1) - (3)].features), (yyvsp[(2) - (3)].feature)); ;}
    break;

  case 12:
#line 100 "cool.y"
    { (yyval.feature) = CreateMethod((yyvsp[(1) - (9)].symbol), (yyvsp[(6) - (9)].symbol), (yyvsp[(3) - (9)].formals), (yyvsp[(8) - (9)].expression)); ;}
    break;

  case 13:
#line 101 "cool.y"
    { (yyval.feature) = CreateAttr((yyvsp[(1) - (3)].symbol), (yyvsp[(3) - (3)].symbol), CreateNoExpr()); ;}
    break;

  case 14:
#line 102 "cool.y"
    { (yyval.feature) = CreateAttr((yyvsp[(1) - (5)].symbol), (yyvsp[(3) - (5)].symbol), (yyvsp[(5) - (5)].expression)); ;}
    break;

  case 15:
#line 103 "cool.y"
    { YYRECOVERING(); ;}
    break;

  case 16:
#line 106 "cool.y"
    { (yyval.formals) = (yyvsp[(1) - (1)].formals); ;}
    break;

  case 17:
#line 107 "cool.y"
    { (yyval.formals) = CreateNilFormals(); ;}
    break;

  case 18:
#line 110 "cool.y"
    { (yyval.formals) = CreateSingleFormals((yyvsp[(1) - (1)].formal)); ;}
    break;

  case 19:
#line 111 "cool.y"
    { (yyval.formals) = AppendFormal((yyvsp[(1) - (3)].formals), (yyvsp[(3) - (3)].formal)); ;}
    break;

  case 20:
#line 114 "cool.y"
    { (yyval.formal) = CreateFormal((yyvsp[(1) - (3)].symbol), (yyvsp[(3) - (3)].symbol)); ;}
    break;

  case 21:
#line 118 "cool.y"
    { (yyval.expressions) = CreateSingleExpressions((yyvsp[(1) - (2)].expression)); ;}
    break;

  case 22:
#line 120 "cool.y"
    { (yyval.expressions) = AppendExpression((yyvsp[(1) - (3)].expressions), (yyvsp[(2) - (3)].expression)); ;}
    break;

  case 23:
#line 121 "cool.y"
    { YYRECOVERING(); ;}
    break;

  case 24:
#line 122 "cool.y"
    { YYRECOVERING(); ;}
    break;

  case 25:
#line 125 "cool.y"
    { (yyval.expressions) = (yyvsp[(1) - (1)].expressions) ;}
    break;

  case 26:
#line 126 "cool.y"
    { (yyval.expressions) = CreateNilExpressions(); ;}
    break;

  case 27:
#line 129 "cool.y"
    { (yyval.expressions) = CreateSingleExpressions((yyvsp[(1) - (1)].expression)); ;}
    break;

  case 28:
#line 131 "cool.y"
    { (yyval.expressions) = AppendExpression((yyvsp[(1) - (3)].expressions), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 29:
#line 135 "cool.y"
    { (yyval.expression) = CreateLet((yyvsp[(1) - (5)].symbol), (yyvsp[(3) - (5)].symbol), CreateNoExpr(), (yyvsp[(5) - (5)].expression)); ;}
    break;

  case 30:
#line 137 "cool.y"
    { (yyval.expression) = CreateLet((yyvsp[(1) - (7)].symbol), (yyvsp[(3) - (7)].symbol), (yyvsp[(5) - (7)].expression), (yyvsp[(7) - (7)].expression)); ;}
    break;

  case 31:
#line 139 "cool.y"
    { (yyval.expression) = CreateLet((yyvsp[(1) - (5)].symbol), (yyvsp[(3) - (5)].symbol), CreateNoExpr(), (yyvsp[(5) - (5)].expression)); ;}
    break;

  case 32:
#line 141 "cool.y"
    { (yyval.expression) = CreateLet((yyvsp[(1) - (7)].symbol), (yyvsp[(3) - (7)].symbol), (yyvsp[(5) - (7)].expression), (yyvsp[(7) - (7)].expression)); ;}
    break;

  case 33:
#line 142 "cool.y"
    { YYRECOVERING(); ;}
    break;

  case 34:
#line 145 "cool.y"
    { (yyval.cases) = CreateSingleCases((yyvsp[(1) - (1)].case_)); ;}
    break;

  case 35:
#line 146 "cool.y"
    { (yyval.cases) = AppendCase((yyvsp[(1) - (2)].cases), (yyvsp[(2) - (2)].case_)); ;}
    break;

  case 36:
#line 149 "cool.y"
    { (yyval.case_) = CreateCase((yyvsp[(1) - (6)].symbol), (yyvsp[(3) - (6)].symbol), (yyvsp[(5) - (6)].expression)); ;}
    break;

  case 37:
#line 152 "cool.y"
    { (yyval.expression) = CreateAssign((yyvsp[(1) - (3)].symbol), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 38:
#line 153 "cool.y"
    { (yyval.expression) = CreateDispatch((yyvsp[(3) - (6)].symbol), (yyvsp[(1) - (6)].expression), (yyvsp[(5) - (6)].expressions)); ;}
    break;

  case 39:
#line 155 "cool.y"
    { (yyval.expression) = CreateStaticDispatch((yyvsp[(5) - (8)].symbol), (yyvsp[(3) - (8)].symbol), (yyvsp[(1) - (8)].expression), (yyvsp[(7) - (8)].expressions)); ;}
    break;

  case 40:
#line 156 "cool.y"
    { (yyval.expression) = CreateCond((yyvsp[(2) - (7)].expression), (yyvsp[(4) - (7)].expression), (yyvsp[(6) - (7)].expression)); ;}
    break;

  case 41:
#line 157 "cool.y"
    { (yyval.expression) = CreateLoop((yyvsp[(2) - (5)].expression), (yyvsp[(4) - (5)].expression)); ;}
    break;

  case 42:
#line 158 "cool.y"
    { (yyval.expression) = CreateBlock((yyvsp[(2) - (3)].expressions)); ;}
    break;

  case 43:
#line 159 "cool.y"
    { YYRECOVERING(); ;}
    break;

  case 44:
#line 160 "cool.y"
    { (yyval.expression) = (yyvsp[(2) - (2)].expression); ;}
    break;

  case 45:
#line 161 "cool.y"
    { (yyval.expression) = CreateTypecase((yyvsp[(2) - (5)].expression), (yyvsp[(4) - (5)].cases)); ;}
    break;

  case 46:
#line 162 "cool.y"
    { (yyval.expression) = CreateIsVoid((yyvsp[(2) - (2)].expression)); ;}
    break;

  case 47:
#line 163 "cool.y"
    { (yyval.expression) = CreateNew((yyvsp[(2) - (2)].symbol)); ;}
    break;

  case 48:
#line 164 "cool.y"
    { (yyval.expression) = CreatePlus((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 49:
#line 165 "cool.y"
    { (yyval.expression) = CreateSub((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 50:
#line 166 "cool.y"
    { (yyval.expression) = CreateMul((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 51:
#line 167 "cool.y"
    { (yyval.expression) = CreateDivide((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 52:
#line 168 "cool.y"
    { (yyval.expression) = CreateComp((yyvsp[(2) - (2)].expression)); ;}
    break;

  case 53:
#line 169 "cool.y"
    { (yyval.expression) = CreateLt((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 54:
#line 170 "cool.y"
    { (yyval.expression) = CreateLeq((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 55:
#line 171 "cool.y"
    { (yyval.expression) = CreateEq((yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression)); ;}
    break;

  case 56:
#line 172 "cool.y"
    { (yyval.expression) = CreateNeg((yyvsp[(2) - (2)].expression)); ;}
    break;

  case 57:
#line 173 "cool.y"
    { (yyval.expression) = CreateIntConst((yyvsp[(1) - (1)].symbol)); ;}
    break;

  case 58:
#line 174 "cool.y"
    { (yyval.expression) = CreateStringConst((yyvsp[(1) - (1)].symbol)); ;}
    break;

  case 59:
#line 175 "cool.y"
    { (yyval.expression) = CreateBoolConst((yyvsp[(1) - (1)].boolean));;}
    break;

  case 60:
#line 176 "cool.y"
    { (yyval.expression) = CreateObject((yyvsp[(1) - (1)].symbol)); ;}
    break;

  case 61:
#line 177 "cool.y"
    { (yyval.expression) = (yyvsp[(2) - (3)].expression); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 1890 "cool.tab.c"
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


#line 180 "cool.y"


void yyerror(const std::string& msg) {
}

