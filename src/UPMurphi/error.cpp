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
#include <stdarg.h>
#include <iostream>
using namespace std;

/********************
  class Error_handler
  ********************/
Error_handler::Error_handler(void)
  :numerrors(0), numwarnings(0)
{
}

void Error_handler::vError(const char *fmt, va_list argp)
{
  cout.flush();
  fprintf(stderr, "%s:%d:", gFileName, gLineNum);
  vfprintf(stderr, fmt, argp);
  fprintf(stderr, "\n");
  numerrors++;
}

void Error_handler::Error(const char *fmt, ...)
{
  va_list argp;
  va_start(argp, fmt);
  vError(fmt, argp);
  va_end(argp);
}

bool Error_handler::CondError(const bool test, const char *fmt, ...)
{
  if (test) {
    va_list argp;
    va_start(argp, fmt);
    vError(fmt, argp);
    va_end(argp);
  }
  return test;
}

void Error_handler::FatalError(const char *fmt, ...)
{
  cout.flush();
  va_list argp;
  va_start(argp, fmt);
  vfprintf(stderr, fmt, argp);
  fprintf(stderr, "\n");
  fflush(stderr);
  va_end(argp);			/* This doesn\'t matter much, does it? */
  exit(1);
}

void Error_handler::vWarning(const char *fmt, va_list argp)
{
  if (args->warnings) {
	cout.flush();
	fprintf(stderr, "%s:%d: warning: ", gFileName, gLineNum);
	vfprintf(stderr, fmt, argp);
	fprintf(stderr, "\n");
	numwarnings++;
  }
}

void Error_handler::Warning(const char *fmt, ...)
{
  va_list argp;
  va_start(argp, fmt);
  vWarning(fmt, argp);
  va_end(argp);
}

bool Error_handler::CondWarning(const bool test, const char *fmt, ...)
{
  if (test) {
    va_list argp;
    va_start(argp, fmt);
    vWarning(fmt, argp);
    va_end(argp);
  }
  return test;
}

/********************
  declare Error_handler instances
  ********************/
Error_handler Error;

