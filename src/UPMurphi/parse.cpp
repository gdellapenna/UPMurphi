/*
* Universal Planner CGMurphi Release 3.0
* Copyright (C) 2007 - 2015: G. Della Penna, B. Intrigila, D. Magazzeni, F. Mercorio
*
* Read the file "license" distributed with these sources, or call
* UPMurphi with the -l switch for additional information.
* Current release developed by G. Della Penna (giuseppe.dellapenna@univaq.it)
*
*/


#include "mu.hpp"

/********************
  variable declarations
  ********************/
int gLineNum = 1;
char *gFileName;
extern char *yytext;		/* lex\'s token matched. */
int offset = 0;

/********************
  void yyerror(char *s)
  ********************/
void yyerror(const char *s)
{
  Error.Error("%s. Last token read was \'%s\'", s, yytext);
}

/********************
  bool matchparams(char *name, ste *formals, exprlist *actuals)
  -- matching type for the parameters
  ********************/
bool matchparams(char *name, ste * formals, exprlist * actuals)
{
  bool match = TRUE;
  for (;
       formals != NULL && actuals != NULL;
       formals = formals->getnext(), actuals = actuals->next) {
    param *f = (param *) formals->getvalue();
    if (!actuals->undefined) {
      expr *e = actuals->e;
      if (!type_equal(f->gettype(), e->gettype())) {
        if (!(type_equal(f->gettype(), realtype)
              && type_equal(e->gettype(), inttype))) {
          Error.Error("Actual parameter to %s has wrong type.", name);
          match = FALSE;
        }
      }
      if (f->getparamclass() == param::Var) {
        if (Error.CondError(!e->islvalue(),
                            "Non-variable expression can't be passed to VAR parameter of %s.",
                            name))
          match = FALSE;
        if (Error.CondError(f->gettype() != e->gettype(),
                            "Var parameter to %s has wrong type.", name))
          match = FALSE;
      }
    } else {
      if (f->getparamclass() == param::Var) {
        Error.Error
        ("UNDEFINED value can't be passed to VAR parameter of %s.",
         name);
        match = FALSE;
      }
    }
  }
  if ((formals != NULL && actuals == NULL) ||
      (actuals != NULL && formals == NULL)) {
    Error.Error("Wrong number of parameters to function %s.", name);
    match = FALSE;
  }
  return match;
}

/********************
  bool type_equal(typedecl *a, typedecl *b)
  -- whether two types should be considered compatible.
  ********************/
bool type_equal(typedecl * a, typedecl * b)
{
  stelist *member;

//   if ( ( a->gettypeclass() == typedecl::Error_type ) ||
//        ( b->gettypeclass() == typedecl::Error_type ) )
//     return TRUE;

  // added by Uli
  if (a->gettype()->gettypeclass() == typedecl::MultiSetID
      && b->gettype()->gettypeclass() != typedecl::MultiSetID)
    return FALSE;
  if (a->gettype()->gettypeclass() != typedecl::MultiSetID
      && b->gettype()->gettypeclass() == typedecl::MultiSetID)
    return FALSE;
  if (a->gettype()->gettypeclass() == typedecl::MultiSetID
      && b->gettype()->gettypeclass() == typedecl::MultiSetID)
    return 0 ==
           strcmp(((multisetidtypedecl *) a)->getparentname(),
                  ((multisetidtypedecl *) b)->getparentname());
  // end added by Uli

  if ((a->gettype()->gettypeclass() == typedecl::Enum
       || a->gettype()->gettypeclass() == typedecl::Scalarset)
      && b->gettype()->gettypeclass() == typedecl::Union) {
    for (member = ((uniontypedecl *) b->gettype())->getunionmembers();
         member != NULL; member = member->next)
      if (a->gettype() == member->s->getvalue())
        return TRUE;
    return FALSE;
  }

  if (a->gettype()->gettypeclass() == typedecl::Union
      && (b->gettype()->gettypeclass() == typedecl::Enum
          || b->gettype()->gettypeclass() == typedecl::Scalarset)) {
    for (member = ((uniontypedecl *) a->gettype())->getunionmembers();
         member != NULL; member = member->next)
      if (b->gettype() == member->s->getvalue())
        return TRUE;
    return FALSE;
  }

  return (a->gettype() == b->gettype());
}

