#ifndef __INHERITANCE_TREE_H__
#define __INHERITANCE_TREE_H__
#include "helper.h"
#include "cool-tree.h"

class InheritanceTree {
 public:
  struct Node {
   ClassP cool_tree_node_; // pointes to the ast node of this class
   std::string name;
   MethodTypeSigTable method_tab;
   AttrTypeSigTable attr_tab;

   Node* parent;
   std::vector<Node*> children;
  };

  typedef std::unordered_map<std::string, Node*> NodeTable;

 private:
  NodeTable nodes_tab_;
  ClassesP user_classes_;
  ClassesP basic_classes_;
  Node* root_;

 public:
  InheritanceTree(ProgramP ast_root);
  ~InheritanceTree();
  Node* GetRoot() { return root_; }

 private:
  ClassesP CreateBasicClasses();
};
#endif
