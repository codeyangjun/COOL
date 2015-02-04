#ifndef __HELPER_H__
#define __HELPER_H__
#include <string>
#include <iostream>
#include "cool-tree.h"
#include "cool.tab.h"

namespace cool_helper {
std::string TokenToString(int tok);
void DumpCoolToken(std::ostream& out, int lineno, int token, YYSTYPE yylval);
std::string ToEscapedString(const std::string& str);
} // namespace cool_helper

#endif
