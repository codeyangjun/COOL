#ifndef __HELPER_H__
#define __HELPER_H__
#include <string>
#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <unordered_set>
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

class SemantError {
 public:
  static SemantError* GetInstance(std::ostream& stream) { 
    if (serror_ == nullptr) {
      serror_ = new SemantError(stream);
    }
    return serror_;
  }

  std::ostream& Dump() {
    semant_errors_++;
    return error_stream_;
  }

  std::ostream& Dump(ClassP c) {
    semant_errors_++;
    return Dump(c->filename, c);
  }

  std::ostream& Dump(SymbolP filename, ClassP c) {
    error_stream_ << filename->GetString() << ":" << c->GetLine() << ": ";
    return Dump();
  }
void Abort() { error_stream_ << "Compilation halted due to static semantic errors."
                  << std::endl;
    exit(1);
  }

 private:
  SemantError(std::ostream& stream)
    : error_stream_(stream), semant_errors_(0) {}

  ~SemantError() { 
    delete serror_;
    serror_ = nullptr; 
  }

  std::ostream& error_stream_;
  int semant_errors_;

  static SemantError* serror_;
};

// common use type defined
typedef std::vector<std::string> TypeSignature; // contains a vector of type
typedef std::unordered_map<std::string, TypeSignature> MethodTypeSigTable; // a table maps method name to (arg1_type, arg2_type, ..., return_type)
typedef std::unordered_map<std::string, TypeSignature> AttrTypeSigTable; // a table maps attr name to attr_type
typedef std::unordered_set<std::string> StrSet;

// template
template<typename B, typename S>
bool IsSubClass(B* baseP) {
 return nullptr != dynamic_cast<S*>(baseP);
}
#endif
