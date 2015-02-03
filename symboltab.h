#ifndef __SYMBOL_TAB__
#define __SYMBOL_TAB__
#include <string>
#include <unordered_map>
typedef class Symbol* SymbolP;
class Symbol {
 private:
  std::string str_;
  int index_;

 public:
  Symbol(const std::string& str, int index) : str_(str), index_(index) {}
  Symbol(const Symbol& rhs) = delete;
  Symbol& operator=(const Symbol& rhs) = delete;
  int GetIndex() const { return index_; }
  const std::string& GetString() const { return str_; }
};

class SymbolTable {
 private:
   typedef std::unordered_map<std::string, SymbolP> Table;
 public:
  SymbolTable() : idx_cnt_(0) {}
  ~SymbolTable();
  SymbolP AddString(const std::string& str);
  SymbolP Lookup(const std::string& str);
  Table::iterator begin() { return table_.begin(); }
  Table::iterator end() { return table_.end(); }
 private:
  Table table_;
  int idx_cnt_;
};

#endif
