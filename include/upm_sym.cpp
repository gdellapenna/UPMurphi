/*
* Universal Planner CGMurphi Release 3.0
* Copyright (C) 2007 - 2015: G. Della Penna, B. Intrigila, D. Magazzeni, F. Mercorio
*
* Read the file "license" distributed with these sources, or call
* UPMurphi with the -l switch for additional information.
* Current release developed by G. Della Penna (giuseppe.dellapenna@univaq.it)
*
*/

void
SymmetryClass::SetBestResult(int i, state * temp)
{
  if (!BestInitialized) {
    BestPermutedState = *temp;
    BestInitialized = TRUE;
  } else {
    switch (StateCmp(temp, &BestPermutedState)) {
      case -1:
        Perm.Add(i);
        BestPermutedState = *temp;
        break;
      case 1:
        Perm.Remove(i);
        break;
      case 0:
        // do nothing
        break;
      default:
        Error.Error("funny return value from StateCmp");
    }
  }
}

void state::Normalize()
{
  static SymmetryClass symmetry;

  symmetry.Normalize(this);
}

void state::MultisetSort()
{
  static SymmetryClass symmetry;

  symmetry.MultisetSort(this);
}
