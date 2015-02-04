#include <iostream>
#include "cool-tree.h"
#include "cool.tab.h"
#include "helper.h"
using namespace std;

int curr_lineno = 1;
char* curr_filename = "<stdin>";
FILE *fin;

extern int yylex();
extern FILE* yyin;
extern int yy_flex_debug;

YYSTYPE yylval;

int main(int argc, char **argv) {
  if (argc < 2) {
    cerr << "need a input file" << endl;
    exit(1);
  }

  yy_flex_debug = 0;

  FILE* fin = fopen(argv[argc-1], "r");
  if (fin == nullptr) {
    cerr << "Could not open input file " << argv[argc-1] << endl;
    exit(1);
  }

  yyin = fin;

  cout << "#name\t" << argv[argc-1] << endl;
  int token = 0;
  while ((token = yylex()) != 0) {
    cool_helper::DumpCoolToken(cout, curr_lineno, token, yylval);
  }
  fclose(yyin);
  exit(0);

}
