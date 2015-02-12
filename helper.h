#ifndef __HELPER_H__
#define __HELPER_H__
#include <string>
#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include "cool-tree.h"
#include "cool.tab.h"

namespace cool_helper {
extern int g_log_cerr;
std::string TokenToString(int tok);
void DumpCoolToken(std::ostream& out, int lineno, int token, YYSTYPE yylval);
void DumpLine(std::ostream& out, int n, int line);
void DumpType(std::ostream& out, int n, const std::string& type);
std::string ToEscapedString(const std::string& str);
void Init(int* argc, char *argv[]);
const char* PadSpace(int n);
} // namespace cool_helper

// common use type defined
typedef std::vector<std::string> TypeSignature; // contains a vector of type
typedef std::unordered_map<std::string, TypeSignature> MethodTypeSigTable; // a table maps method name to (arg1_type, arg2_type, ..., return_type)
typedef std::unordered_map<std::string, TypeSignature> AttrTypeSigTable; // a table maps attr name to attr_type
#endif
