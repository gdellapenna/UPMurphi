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
  The Main() function:
  int main(int argc, char **argv)
  Note that Global Variables are in control.h
  ****************************************/

//UPMURPHI_BEGIN
int main(int argc, char **argv)
{
  args = new argclass(argc, argv);
  MEMTRACKALLOC
  Stats = new StatsManager();
  Storage = new StorageManager();
  MEMTRACKALLOC
  Algorithm = new AlgorithmManager();
  MEMTRACKALLOC


  if (args->main_alg.mode != argmain_alg::Nothing) Algorithm->Plan();

  cout.flush();
#ifdef HASHC
  if (args->trace_file.value)
    delete TraceFile;
#endif
  delete Algorithm; //gdp: fix: begin destruction chain
  delete Stats;
  delete Storage;

  /*---------*/
  exit(0);
}
//UPMURPHI_END