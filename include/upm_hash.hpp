/*
* Universal Planner CGMurphi Release 3.0
* Copyright (C) 2007 - 2015: G. Della Penna, B. Intrigila, D. Magazzeni, F. Mercorio
*
* Read the file "license" distributed with these sources, or call
* UPMurphi with the -l switch for additional information.
* Current release developed by G. Della Penna (giuseppe.dellapenna@univaq.it)
*
*/

class hash_function
{
 public:
  hash_function(int vec_size);
  ~hash_function();
  unsigned long *hash(state * s, bool valid);
 private:
  unsigned long *hashmatrix;
  int vec_size;
  unsigned char *oldvec;
  unsigned long key[3];
};
