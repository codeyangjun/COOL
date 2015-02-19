#include "semant.h"
using namespace std;

SemanticChecker::SemanticChecker(InheritanceTree* tree)
  : inherit_tree_(tree),
    name_scope_(new Scope),
    curr_class_node_(nullptr) {
 ;
}

SemanticChecker::~SemanticChecker() {
  ;
}

void SemanticChecker::TypeChecking() {
  auto* user_classes = inherit_tree_->GetUserClasses();
  auto* semant_error = SemantError::GetInstance(cerr);
  for (auto* curr_class : (*user_classes)) {
    const auto& class_name = curr_class->name->GetString();
    curr_class_node_ = inherit_tree_->LookupNode(class_name);
    if (!curr_class_node_) {
      CoolDumpError(cerr)
        << "cannot find InheritanceTree Node " << class_name << endl;
      exit(1);
    }
    // create a scope for current class
    name_scope_->EnterScope();
    name_scope_->AddMapping("self", "SELF_TYPE");
    for (auto* feature : *(curr_class->features)) {
      if (IsSubClass<Feature, Attr>(feature)) {
        auto* attr = static_cast<Attr*>(feature);
        if (IsSubClass<Expression,NoExpr>(attr->init)) {
          continue;
        }
        const auto& attr_name = attr->name->GetString();
        TypeCheckingHelper(attr->init);
        string attr_decl_type = attr->type_decl->GetString();
        string attr_init_type = attr->init->GetType();

        if (attr_init_type == "_no_type") {
          CoolDumpError(cerr)
            << "NO TYPE" << endl;
          exit(1);
        }
        
        bool res = false;
        
        if (attr_decl_type == "SELF_TYPE" &&
            attr_init_type != "SELF_TYPE") {
          res = false;
        } else {
          attr_decl_type =
            attr_decl_type == "SELF_TYPE" ? class_name : attr_decl_type;
          attr_init_type =
            attr_init_type == "SELF_TYPE" ? class_name : attr_init_type;
          res = inherit_tree_->IsConformed(attr_init_type, attr_decl_type);
        }

        if (!res) {
          semant_error->Dump(curr_class->filename, curr_class)
            << "Inferred type " << attr_init_type << " of initialization of "
            << "attribute " << attr_name
            << " does not conform to declared type "
            << attr_decl_type << "." << endl;
        }

      } else if (IsSubClass<Feature, Method>(feature)) {
        auto* method = static_cast<Method*>(feature);
        // create a new scope for formals
        name_scope_->EnterScope();
        StrSet id_names_set;
        for (auto* formal : *(method->formals)) {
          const auto& id_name = formal->name->GetString();
          const auto& id_type = formal->type_decl->GetString();
          if (id_names_set.count(id_name)) {
            semant_error->Dump(curr_class->filename, curr_class)
              << "Formal paramter " << id_name << " is multiple defined."
              << endl;
          }
          id_names_set.insert(id_name);
        }
        TypeCheckingHelper(method->expression);
        name_scope_->ExitScope();
        
        string ret_type = method->return_type->GetString();
        string expr_type = method->expression->GetType();

        bool res = false;

        if (ret_type == "SELF_TYPE" && expr_type != "SELF_TYPE") {
          res = false;
        } else {
          ret_type =
            ret_type == "SELF_TYPE" ? class_name : ret_type;
          expr_type =
            expr_type == "SELF_TYPE" ? class_name : expr_type;
          res = inherit_tree_->IsConformed(expr_type, ret_type);
        }

        if (!res) {
          semant_error->Dump(curr_class->filename, curr_class)
            << "Inferred return type " << expr_type
            << " of method " << method->name->GetString()
            << " does not conform to declared return type "
            << ret_type << "." << endl;
        }
      }
    }
    name_scope_->ExitScope();
  }
}

void SemanticChecker::
TypeCheckingHelper(ExpressionP expr) {
  ;
}

