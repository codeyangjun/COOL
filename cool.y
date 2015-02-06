%{
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
%type <program> program
%type <classes> class_list
%type <class_> class

%type <features> features_list
%type <features> features
%type <feature> feature


%type <cases> cases 
%type <case_> case_

%type <expressions> semicolon_sep_exprs

%type <expressions> parameter_expr
%type <expressions> comma_sep_exprs

%type <expression> expr

%type <expression> let_expr

%type <formals> formals_list
%type <formals> formals
%type <formal> formal

%%

program : class_list { 
                        @$ = @1; ast_root = CreateProgram($1, yylineno);
                     }
        ;

class_list : class { $$ = CreateSingleClasses($1); }
           | class_list class { $$ = AppendClass($1, $2); }
           ;

class : CLASS TYPEID '{' features_list '}' ';'
      {
        $$ = CreateClass($2, IdTable.AddString("Object"),
                         StrTable.AddString(curr_filename), $4, yylineno);
      }
      | CLASS TYPEID INHERITS TYPEID '{' features_list '}' ';'
      {
        $$ = CreateClass($2, $4, StrTable.AddString(curr_filename), $6, yylineno);
      }
      | error ';'
      ;

features_list : features { $$ = $1; }
              | { $$ = CreateNilFeatures(); }
              ;

features : feature ';' { $$ = CreateSingleFeatures($1); }
         | features feature ';' { $$ = AppendFeature($1, $2); }
         ;

feature : OBJECTID '(' formals_list ')' ':' TYPEID '{' expr '}'
        { $$ = CreateMethod($1, $6, $3, $8, yylineno); }
        | OBJECTID ':' TYPEID 
        {
          $$ = CreateAttr($1, $3, CreateNoExpr(yylineno), yylineno);
        }
        | OBJECTID ':' TYPEID ASSIGN expr
        { 
          $$ = CreateAttr($1, $3, $5, yylineno); 
        }
        | error { YYRECOVERING(); }
        ;

formals_list : formals { $$ = $1; }
            | { $$ = CreateNilFormals(); }
            ;

formals : formal { $$ = CreateSingleFormals($1); }
        | formals ',' formal { $$ = AppendFormal($1, $3); }
        ;

formal : OBJECTID ':' TYPEID { $$ = CreateFormal($1, $3); }
       ;


semicolon_sep_exprs : expr ';' { $$ = CreateSingleExpressions($1); }
                    | semicolon_sep_exprs expr ';'
                    { $$ = AppendExpression($1, $2); }
                    | semicolon_sep_exprs error ';' { YYRECOVERING(); }
                    | error ';' { YYRECOVERING(); }
                    ;

parameter_expr : comma_sep_exprs { $$ = $1 }
               | { $$ = CreateNilExpressions(); }
               ;

comma_sep_exprs : expr { $$ = CreateSingleExpressions($1); }
                | comma_sep_exprs ',' expr
                { $$ = AppendExpression($1, $3); }
                ;

/* recursively transform a let expression to a nested let expression */
let_expr : OBJECTID ':' TYPEID IN expr
         { $$ = CreateLet($1, $3, CreateNoExpr(yylineno),$5, yylineno); }
         | OBJECTID ':' TYPEID ASSIGN expr IN expr
         { $$ = CreateLet($1, $3, $5, $7, yylineno); }
         | OBJECTID ':' TYPEID ',' let_expr
         { $$ = CreateLet($1, $3, CreateNoExpr(yylineno), $5); }
         | OBJECTID ':' TYPEID ASSIGN expr ',' let_expr
         { $$ = CreateLet($1, $3, $5, $7, yylineno); }
         | error ',' let_expr { YYRECOVERING(); }
         ;

cases : case_ { $$ = CreateSingleCases($1); }
      | cases case_ { $$ = AppendCase($1, $2); }
      ;

case_ : OBJECTID ':' TYPEID DARROW expr ';'
      {
        $$ = CreateCase($1, $3, $5, yylineno);
      }
      ;

expr : OBJECTID ASSIGN expr
     {
      $$ = CreateAssign($1, $3, yylineno);
     }
     | expr '.' OBJECTID '(' parameter_expr ')'
     {
      $$ = CreateDispatch($3, $1, $5, yylineno);
     }
     | expr '@' TYPEID '.' OBJECTID '(' parameter_expr ')'
     { $$ = CreateStaticDispatch($5, $3, $1, $7, yylineno); }
     | IF expr THEN expr ELSE expr FI { $$ = CreateCond($2, $4, $6, yylineno); } 
     | WHILE expr LOOP expr POOL { $$ = CreateLoop($2, $4, yylineno); }
     | '{' semicolon_sep_exprs '}' { $$ = CreateBlock($2, yylineno); }
     | '{' error '}' { YYRECOVERING(); }
     | LET let_expr { $$ = $2; }
     | CASE expr OF cases ESAC { $$ = CreateTypecase($2, $4, yylineno); }
     | ISVOID expr { $$ = CreateIsVoid($2, yylineno); }
     | NEW TYPEID { $$ = CreateNew($2, yylineno); }
     | expr '+' expr { $$ = CreatePlus($1, $3, yylineno); }
     | expr '-' expr { $$ = CreateSub($1, $3, yylineno); }
     | expr '*' expr { $$ = CreateMul($1, $3, yylineno); }
     | expr '/' expr { $$ = CreateDivide($1, $3, yylineno); }
     | NOT expr { $$ = CreateComp($2, yylineno); }
     | expr '<' expr { $$ = CreateLt($1, $3, yylineno); }
     | expr LE expr { $$ = CreateLeq($1, $3, yylineno); }
     | expr '=' expr { $$ = CreateEq($1, $3, yylineno); }
     | '~' expr { $$ = CreateNeg($2, yylineno); }
     | INT_CONST { $$ = CreateIntConst($1, yylineno); }
     | STR_CONST { $$ = CreateStringConst($1, yylineno); }
     | BOOL_CONST { $$ = CreateBoolConst($1, yylineno); }
     | OBJECTID { $$ = CreateObject($1, yylineno); }
     | '(' expr ')' { $$ = $2; }
     ;

%%

void yyerror(char *s) {
  extern int curr_lineno;
  cerr << "\"" << curr_filename << "\", line " << curr_lineno << ": " \
       << s << " at or near "
       << cool_helper::TokenToString(yychar) << endl;
  ++err_cnt;
  if (err_cnt > 50) {
    cerr << "More than 50 errors" << endl;
    exit(1);
  }
}
