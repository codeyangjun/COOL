#include "inheritance-tree.h"
#include "symboltab.h"


InheritanceTree::InheritanceTree(ProgramP ast_root) {
  ;
}

ClassesP CreateBasicClasses() {
  auto arg = IdTable.AddString("arg");
  auto arg2 = IdTable.AddString("arg2");
  auto Bool = IdTable.AddString("Bool");
  auto concat = IdTable.AddString("concat");
  auto cool_abort = IdTable.AddString("abort");
  auto copy = IdTable.AddString("copy");
  auto Int = IdTable.AddString("Int");
  auto in_int = IdTable.AddString("in_int");
  auto in_string = IdTable.AddString("in_string");
  auto IO = IdTable.AddString("IO");
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

  ClassP object_class =
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
}
