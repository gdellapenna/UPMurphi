/*
* Universal Planner CGMurphi Release 3.0
* Copyright (C) 2007 - 2015: G. Della Penna, B. Intrigila, D. Magazzeni, F. Mercorio
*
* Read the file "license" distributed with these sources, or call
* UPMurphi with the -l switch for additional information.
* Current release developed by G. Della Penna (giuseppe.dellapenna@univaq.it)
*
*/

#if 0
#define MEMTRACKALLOC fprintf(stderr,"---- MEMORY ALLOCATION: %s, %d\n",__FILE__, __LINE__);
#define DEBUGMARK fprintf(stderr,"---- HIGHLIGHT POINT HIT: %s, %d\n",__FILE__, __LINE__);
#define PAUSE {char dummy; cin >> dummy;}
#define BREAKPOINT(message) {cerr << endl << message; char dummy; cin >> dummy;}
#define LOG(message) {cerr << endl << __FILE__  << ":" << __LINE__ << ": " << message;}
#else
#define MEMTRACKALLOC
#define DEBUGMARK
#define PAUSE
#define BREAKPOINT(message)
#define LOG(message)
#endif

/*  Define this macro for pre 2.x G++ versions.
    It controls whether delete has a size argument,
    which is required by old g++ and generates a
    warning in new g++ compilers */

#ifdef OLDGPP
// g++ 1.x
#define OLD_GPP(arg) arg
#else
// g++ 2.x
#define OLD_GPP(arg)
#endif

/****************************************
  Default Value or Constant that can be set by user
 ****************************************/

/* number of times you can go around a while loop. */
#define DEF_LOOPMAX     1000

/* Default memory for Unix. */
//#define DEFAULT_MEM     8000000
#define DEFAULT_MEM (1000 * 0x100000L) //gdp: approx 1Gb

//#define DEFAULT_MEM_CTRL 8000000

// Uli: default number of bits for hash compaction and
//      suffix of trace info file
#ifdef HASHC
#define DEFAULT_BITS   40
#define TRACE_FILE     ".trace"
#endif

/* Default Maximum number of error to search when -finderrors is used */
#define DEFAULT_MAX_ERRORS 100

/* the size of search queues as a percentage
   of the maximum number of states */
#define gPercentActiveStates 0.1

// for use in tsprintf
#define BUFFER_SIZE 1024

//extra timespan added to action duration to set the next action time
#define DEFAULT_EPSILON_TIME_SEPARATION 0.001

#ifdef DISCRETIZATION
#define EPSILON_TIME_SEPARATION (double)min(DISCRETIZATION,DEFAULT_EPSILON_TIME_SEPARATION)
#endif

/****************************************
  Release information
 ****************************************/
/* last update */
#define INCLUDE_FILE_DATE "Mar 24 2015"

/* UPMurphi Version Number */
#define INCLUDE_FILE_VERSION "Universal Planner Murphi Release 3.0"

/****************************************
  Cached Murphi constants
 ****************************************/
//* gdp: length of split file segments */
#define SPLITFILE_LEN (1024 * 0x100000L)

#define RULE_INDEX_TYPE unsigned long

/****************************************
  main headers
****************************************/


#include "upm_verifier.hpp"

/****************************************
  other headers
  ****************************************/
#ifdef HASHC
#include "upm_hash.hpp"
#endif

#include "upm_sym.hpp"
#include "upm_util.hpp"

#include "upm_io.hpp"
#include "upm_state.hpp"
#include "upm_graph.hpp"
#include "upm_storage.hpp"
#include "upm_system.hpp"


/****************************************
  real numbers extension
  ****************************************/
#include "upm_real.hpp"	//im

