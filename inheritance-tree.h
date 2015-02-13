#ifndef __INHERITANCE_TREE_H__
#define __INHERITANCE_TREE_H__
#include "helper.h"
#include "cool-tree.h"
class InheritanceTree {
 public:
  struct Node {
   ClassP ast_node_; // pointes to the ast node of this class
   std::string name;
   MethodTypeSigTable method_tab;
   AttrTypeSigTable attr_tab;

   Node* parent;
   std::vector<Node*> children;

   Node(const std::string& v_name, ClassP v_class)
     : name(v_name),
       ast_node_(v_class) 
    {}
  };

  typedef std::unordered_map<std::string, Node*> NodeTable;

 private:
  NodeTable nodes_tab_;
  ClassesP user_classes_;
  ClassesP basic_classes_;
  Node* root_;
  
  StrSet basic_classes_str_set_;
  StrSet user_classes_str_set_;
  StrSet classes_str_set_;
 public:
  InheritanceTree(ProgramP ast_root);
  ~InheritanceTree();
  Node* GetRoot() { return root_; }

 private:
  ClassesP CreateBasicClasses();
  void CreateTree();
  void InitBasicClasses();
};

class LoopDetector {
 public:
  bool RecursiveHelper(typename InheritanceTree::Node* node,
                       StrSet& loop_nodes);

  bool operator()(typename InheritanceTree::NodeTable& nodes);

  const StrSet& GetLoopNodes() const {
    return loop_nodes_;
  }

 private:
  std::unordered_map<std::string, bool> instack_;
  std::unordered_map<std::string, bool> visited_;
  StrSet loop_nodes_;
};

#endif
