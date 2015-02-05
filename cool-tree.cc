#include "cool-tree.h"
#include "helper.h"
using namespace std;
using namespace cool_helper;

void Program::
Dump(ostream& stream, int n) {
  stream << PadSpace(n) << "program\n";
  for (const auto& p : *classes) {
    p->Dump(stream, n+2);
  }
}

void Class::
Dump(ostream& stream, int n) {
  stream << PadSpace(n) << "class_\n";
  name->Dump(stream, n + 2);
  parent->Dump(stream, n + 2);
  for (auto& p : *features) {
    p->Dump(stream, n + 2);
  }
  filename->Dump(stream, n + 2);
}

void Method::
Dump(ostream& stream, int n) {
  stream << PadSpace(n) << "method\n";

  name->Dump(stream, n + 2);

  for (auto& p : *formals) {
    p->Dump(stream, n + 2);
  }

  return_type->Dump(stream, n + 2);

  for (auto& p : *expressions) {
    p->Dump(stream, n + 2);
  }
}

void Attr::
Dump(ostream& stream, int n) {
  stream << PadSpace(n) << "attr\n";
  name->Dump(stream, n + 2);
  type_decl->Dump(stream, n + 2);
  init->Dump(stream, n + 2);
}

void Formal::
Dump(ostream& stream, int n) {
  stream << PadSpace(n) << "formal\n";
  name->Dump(stream, n + 2);
  type_decl->Dump(stream, n + 2);
}

void Case::
Dump(ostream& stream, int n) {
  stream << PadSpace(n) << "branch\n";
  name->Dump(stream, n + 2);
  type_decl->Dump(stream, n + 2);
}

void Assign::
Dump(ostream& stream, int n) {
  stream << PadSpace(n) << "assign\n";
  name->Dump(stream, n + 2);
  expression->Dump(stream, n + 2);
}

void StaticDispatch::
Dump(ostream& stream, int n) {
  stream << PadSpace(n) << "static_dispatch\n";
  expression->Dump(stream, n + 2);
  type_name->Dump(stream, n + 2);
  name->Dump(stream, n + 2);
  for (auto& p : *actual_exprs) {
    p->Dump(stream, n + 2);
  }
}

void Dispatch::
Dump(ostream& stream, int n) {
  stream << PadSpace(n) << "dispatch\n";
  expression->Dump(stream, n + 2);
  name->Dump(stream, n + 2);
  for (auto& p : *actual_exprs) {
    p->Dump(stream, n + 2);
  }
}

void Cond::
Dump(ostream& stream, int n) {
  stream << PadSpace(n) << "cond\n";
  pred->Dump(stream, n + 2);
  then_exp->Dump(stream, n + 2);
  else_exp->Dump(stream, n + 2);
}

void Loop::
Dump(ostream& stream, int n) {
  stream << PadSpace(n) << "loop\n";
  pred->Dump(stream, n + 2);
  body->Dump(stream, n + 2);
}

void Typcase::
Dump(ostream& stream, int n) {
  stream << PadSpace(n) << "typcase\n";
  expression->Dump(stream, n + 2);
  for (auto& p : *cases) {
    p->Dump(stream, n + 2);
  }
}

void Block::
Dump(ostream& stream, int n) {
  stream << PadSpace(n) << "block\n";
  for (auto& p : *body) {
    p->Dump(stream, n + 2);
  }
}
