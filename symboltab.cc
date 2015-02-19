#include "symboltab.h"
#include "helper.h"
using namespace std;
using namespace cool_helper;

SymbolTable IdTable;
SymbolTable IntTable;
SymbolTable StrTable;

void Symbol::Dump(ostream& stream, int n) {
  stream << PadSpace(n) << str_ << endl;
}

SymbolTable::~SymbolTable() {
  for (auto& p : table_) {
    delete p.second;
  }
}

SymbolP
SymbolTable::AddString(const string& str) {
  if (!table_.count(str)) {
    table_[str] = new Symbol(str, idx_cnt_++);
  }
  return table_[str];
}

SymbolP
SymbolTable::Lookup(const string& str) {
  return table_.count(str) ? table_[str] : nullptr;
}

string*
Scope::LookupCurrentScope(const std::string& key) {
  if (scope_.empty()) {
    return nullptr;
  }
  auto* table = scope_.back();
  return table->count(key) ? &(*table)[key] : nullptr;
}

Scope::~Scope() {
  for (auto e : scope_) {
    delete e;
  }
}

void Scope::
EnterScope() {
 scope_.push_back(new Table);
}

void Scope::
ExitScope() {
  if (scope_.empty()) {
    CoolDumpError(cerr)
      << "scope is empty";
    exit(1);
  }
  delete scope_.back();
}

void Scope::
AddMapping(const std::string& key, const std::string& value) {
  if (scope_.empty()) {
    CoolDumpError(cerr)
      << "scope is empty, cannot add mapping" << endl;
    exit(1);
  }
  (*(scope_.back()))[key] = value;
}
