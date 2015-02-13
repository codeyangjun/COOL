#include "inheritance-tree.h"
#include "symboltab.h"
using namespace std;


InheritanceTree::InheritanceTree(ProgramP ast_root)
  : user_classes_(ast_root->classes) {
  InitBasicClasses();
  CreateTree();
}

void
InheritanceTree::CreateTree() {
  // create node for basic classes
  for (auto p : *basic_classes_) {
    const auto& class_name = p->name->GetString();
    nodes_tab_[class_name] = new Node(class_name, p);
    basic_classes_str_set_.insert(class_name);
    classes_str_set_.insert(class_name);
    cout << class_name << endl;
  }

  // create link in basic classes node
  for (auto p : *basic_classes_) {
    const auto& class_name = p->name->GetString();
    const auto& parent_name = p->name->GetString();
    if (class_name == "Object") {
      continue;
    }

    if (!nodes_tab_.count(class_name)) {
      cerr << "nodes_tab_ cannot find " << class_name << endl;
      exit(1);
    }
    if (!nodes_tab_.count(parent_name)) {
      cerr << "nodes_tab_ cannot find " << parent_name << endl;
      exit(1);
    }

    auto parent_node = nodes_tab_[parent_name];
    auto curr_node = nodes_tab_[class_name];

    curr_node->parent = parent_node;
    parent_node->children.push_back(curr_node);
  }

  if (!nodes_tab_.count("Object")) {
    cerr << "nodes_tab_ cannot find Object" << endl;
    exit(1);
  }

  root_ = nodes_tab_["Object"];
  root_->parent = nullptr;

  // add user defined classes into tree and check whether there is a
  // redefinition
  auto semant_error = SemantError::GetInstance(cerr);
  for (auto p : *user_classes_) {
    const auto& class_name = p->name->GetString();
    if (nodes_tab_.count(class_name) || class_name == "SELF_TYPE") {
      if (basic_classes_str_set_.count(class_name)) {
        semant_error->Dump(p->filename, p)
          << "Redefinition of basic class " << class_name << endl;
      } else {
        semant_error->Dump(p->filename, p)
          << "Class " << class_name << " is previously defined." << endl;
      }
      semant_error->Abort();
    }

    nodes_tab_[class_name] = new Node(class_name, p);
    IdTable.AddString(class_name);
    user_classes_str_set_.insert(class_name);
    classes_str_set_.insert(class_name);
  }

  // Check whether Main class is defined
  if (!user_classes_str_set_.count("Main")) {
    semant_error->Dump() << "Class Main is not defined." << endl;
    semant_error->Abort();
  }

  // Check whether there is a class inherits from basic classes or
  // undefined classes
  for (auto p : *user_classes_) {
    const auto& curr_name = p->name->GetString();
    const auto& parent_name = p->parent->GetString();

    // inherits from basic classes except Object or IO
    if (parent_name != "Object" &&
        parent_name != "IO" &&
        basic_classes_str_set_.count(parent_name)) {
      semant_error->Dump(p->filename, p)
        << "Class " << curr_name
        << " cannot inherits from class " << parent_name << endl;
      semant_error->Abort();
    }

    // inherits from undefined classes
    if (!user_classes_str_set_.count(parent_name) &&
        !basic_classes_str_set_.count(parent_name)) {
      semant_error->Dump(p->filename, p)
        << "Class " << curr_name
        << " inherits from undefined class " << parent_name << "." << endl;
      semant_error->Abort();
    }
   
    // create link
    if (!nodes_tab_.count(parent_name)) {
      cerr << "nodes_tab_ cannot find " << parent_name << endl;
      exit(1);
    }

    if (!nodes_tab_.count(curr_name)) {
      cerr << "nodes_tab_ cannot find " << curr_name << endl;
      exit(1);
    }
    
    Node* parent_node = nodes_tab_[parent_name];
    Node* curr_node = nodes_tab_[curr_name];
    curr_node->parent = parent_node;
    parent_node->children.push_back(curr_node);

    cout << curr_name << "<-" << parent_name << endl;
  }

}

void
InheritanceTree::InitBasicClasses() {
  auto arg = IdTable.AddString("arg");
  auto arg2 = IdTable.AddString("arg2");
  auto Bool = IdTable.AddString("Bool");
  auto concat = IdTable.AddString("concat");
  auto cool_abort = IdTable.AddString("abort");
  auto copy = IdTable.AddString("copy");
  auto Int = IdTable.AddString("Int");
  auto in_int = IdTable.AddString("in_int");
  auto in_string = IdTable.AddString("in_string"); auto IO = IdTable.AddString("IO");
  auto length = IdTable.AddString("length");
  auto Main = IdTable.AddString("Main");
  auto main_meth = IdTable.AddString("main");
  auto No_class = IdTable.AddString("_no_class");
  auto No_type = IdTable.AddString("_no_type");
  auto Object = IdTable.AddString("Object");
  auto out_int = IdTable.AddString("out_int");
  auto out_string = IdTable.AddString("out_string");
  auto prim_slot = IdTable.AddString("_prim_slot");
  auto self = IdTable.AddString("self");
  auto SELF_TYPE = IdTable.AddString("SELF_TYPE");
  auto Str = IdTable.AddString("String");
  auto str_field = IdTable.AddString("_str_field");
  auto substr = IdTable.AddString("substr");
  auto type_name = IdTable.AddString("type_name");
  auto val = IdTable.AddString("_val");

  auto basic_fn = StrTable.AddString("<basic class>");

  ClassP Object_class =
    CreateClass(Object,
                No_class,
                basic_fn,
                AppendFeature(
                  AppendFeature(
                    CreateSingleFeatures(
                      CreateMethod(cool_abort, Object,
                                   CreateNilFormals(), CreateNoExpr())),
                    CreateMethod(type_name, Str,
                                 CreateNilFormals(), CreateNoExpr())
                    ),
                  CreateMethod(copy, SELF_TYPE,
                               CreateNilFormals(), CreateNoExpr())
                  )
                );

  ClassP IO_class =
    CreateClass(IO,
                Object,
                basic_fn,
                AppendFeature(
                  AppendFeature(
                    AppendFeature(
                      CreateSingleFeatures(
                        CreateMethod(out_string, SELF_TYPE,
                                     CreateSingleFormals(CreateFormal(arg, Str)),
                                     CreateNoExpr())
                      ),
                      CreateMethod(out_int, SELF_TYPE,
                                   CreateSingleFormals(CreateFormal(arg, Int)),
                                   CreateNoExpr())

                   ),
                   CreateMethod(in_string, Str, CreateNilFormals(),
                                CreateNoExpr())
                  ),
                  CreateMethod(in_int, Int, CreateNilFormals(), CreateNoExpr()) 
                )
               );

  ClassP Int_class =
    CreateClass(Int,
                Object,
                basic_fn,
                CreateSingleFeatures(CreateAttr(val, prim_slot, CreateNoExpr()))
               );

  ClassP Bool_class =
    CreateClass(Bool,
                Object,
                basic_fn,
                CreateSingleFeatures(
                  CreateAttr(val, prim_slot, CreateNoExpr())
                )
               );

  ClassP Str_class =
    CreateClass(
        Str,
        Object,
        basic_fn,
        AppendFeature(
          AppendFeature(
            AppendFeature(
              AppendFeature(
                CreateSingleFeatures(CreateAttr(val, Int, CreateNoExpr())),
                CreateAttr(str_field, prim_slot, CreateNoExpr())),
              CreateMethod(length, Int, CreateNilFormals(), CreateNoExpr())
            ),
           CreateMethod(concat,
                        Str,
                        CreateSingleFormals(CreateFormal(arg, Str)),
                        CreateNoExpr())
          ),
          CreateMethod(
                substr,
                Str,
                AppendFormal(CreateSingleFormals(CreateFormal(arg, Int)),
                             CreateFormal(arg2, Int)),
                CreateNoExpr())
        )
      );

  basic_classes_ = CreateSingleClasses(Object_class);
  basic_classes_ = AppendClass(basic_classes_, IO_class);
  basic_classes_ = AppendClass(basic_classes_, Int_class);
  basic_classes_ = AppendClass(basic_classes_, Bool_class);
  basic_classes_ = AppendClass(basic_classes_, Str_class);
}
