#ifndef __SEMANT_H__
#define __SEMANT_H__
#include <memory>
#include "helper.h"
#include "cool-tree.h"
#include "symboltab.h"
#include "inheritance-tree.h"

class SemanticChecker {
 public:
   SemanticChecker(InheritanceTree* tree);
   ~SemanticChecker();
  void TypeChecking();

 private:
  void TypeCheckingHelper(ExpressionP expr);
  void HandleObject(ExpressionP expr);
  const std::string* IDTypeInfoLookup(const std::string& name);

 private:
  InheritanceTree* inherit_tree_;
  std::unique_ptr<Scope> name_scope_;
  InheritanceTree::Node* curr_class_node_;
};
#endif
