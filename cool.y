%{
#include <iostream>
#include <string>
#include "symboltab.h"
#include "cool-tree.h"
#define YYLTYPE int

using namespace std;

void yyerror(const std::string& msg);
int yylex();


extern char* curr_filename;
ProgramP ast_root;

%}

%union {
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

/* Terminals Declarations */
%token CLASS 258 ELSE 259 FI 260 IF 261 IN 262 
%token INHERITS 263 LET 264 LOOP 265 POOL 266 THEN 267 WHILE 268
%token CASE 269 ESAC 270 OF 271 DARROW 272 NEW 273 ISVOID 274
%token <symbol>  STR_CONST 275 INT_CONST 276 
%token <boolean> BOOL_CONST 277
%token <symbol>  TYPEID 278 OBJECTID 279 
%token ASSIGN 280 NOT 281 LE 282 ERROR 283

/* Nonterminals Declarations */
/*
%type <program> program
%type <classes> class_list
%type <class_> class

%type <features> features_list
%type <features> features
%type <feature> feature

%type <formals> formals_list
%type <formals> formals
%type <formal> formal

%type <cases> cases 
%type <case_> case_

%type <expressions> expression_list
%type <expressions> semicolon_sep_exprs

%type <expressions> parameter_expr
%type <expressions> comma_sep_exprs

%type <expression> expr

%type <expression> let_expr

%right ASSIGN
%right NOT
%nonassoc LE '<' '='
%left '+' '-'
%left '*' '/'
%left ISVOID
%left '~'
%left '@'
%left '.'
*/
%%

a:
;

%%

void yyerror(const std::string& msg) {
}
