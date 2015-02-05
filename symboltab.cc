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
