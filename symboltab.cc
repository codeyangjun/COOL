#include "symboltab.h"
using namespace std;
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
