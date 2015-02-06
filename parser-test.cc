#include <iostream>
#include "cool-tree.h"
#include "helper.h"
using namespace std;
int curr_lineno = 1;
char* curr_filename;
extern int yyparse();
extern ProgramP ast_root;
extern FILE* yyin;
int main(int argc, char** argv) {
  cool_helper::Init(&argc, argv);

  for (int i = 1; i < argc; ++i) {
    curr_filename = argv[i];
    FILE* fin = fopen(curr_filename, "r");
    if (fin == nullptr) {
      cerr << "Could not open input file " << argv[argc-1] << ", skip." << endl;
      continue;
    }
    yyin = fin;
    yyparse();
    if (!ast_root) continue;
    ast_root->DumpWithTypes(cout, 0);
  }

  return 0;
}