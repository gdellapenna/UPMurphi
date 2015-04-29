/*
* Universal Planner CGMurphi Release 3.0
* Copyright (C) 2007 - 2015: G. Della Penna, B. Intrigila, D. Magazzeni, F. Mercorio
*
* Read the file "license" distributed with these sources, or call
* UPMurphi with the -l switch for additional information.
* Current release developed by G. Della Penna (giuseppe.dellapenna@univaq.it)
*
*/

/****************************************
  header that depend on constants
  which is generated in the middle of the compiled program:
  RULES_IN_WORLD
  ****************************************/
#include "upm_util_dep.hpp"

/****************************************
  supporting routines
  ****************************************/
#ifdef HASHC
#include "upm_hash.cpp"
#endif

#include "upm_util.cpp"
#include "upm_io.cpp"
#include "upm_sym.cpp"
#include "upm_state.cpp"
#include "upm_graph.cpp"
#include "upm_storage.cpp"
#include "upm_system.cpp"

/****************************************
  real numbers extension
  ****************************************/
#include "upm_real.cpp"	//im

/****************************************
  main routines
  ****************************************/

#include "upm_verifier.cpp"
