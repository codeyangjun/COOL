#ifndef __COOL_TREE_H__
#define __COOL_TREE_H__
#include <iostream>
#include <string>
#include <vector>

typedef std::string Type;

class TreeNode {
 protected:
  int line_number_;
  Type type_; 

 public:
  TreeNode() {}
  virtual ~TreeNode() {}
  virtual void Dump(std::ostream& stream, int n) = 0;
  void SetType(const Type& type) { type_ = type; }
  const Type& GetType() const { return type_; }
};

typedef class Program* ProgramP;
typedef class Class* ClassP;
typedef std::vector<ClassP> Classes;

class Program : public TreeNode {
 public:
  Classes classes;
  Program(const Classes& cl) : classes(cl) {}
  void Dump(std::ostream& stream, int n);
};


#endif
