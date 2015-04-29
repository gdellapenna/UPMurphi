/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     OPEN_BRAC = 258,
     CLOSE_BRAC = 259,
     OPEN_SQ = 260,
     CLOSE_SQ = 261,
     DEFINE = 262,
     PDDLDOMAIN = 263,
     REQS = 264,
     EQUALITY = 265,
     STRIPS = 266,
     ADL = 267,
     NEGATIVE_PRECONDITIONS = 268,
     TYPING = 269,
     DISJUNCTIVE_PRECONDS = 270,
     EXT_PRECS = 271,
     UNIV_PRECS = 272,
     QUANT_PRECS = 273,
     COND_EFFS = 274,
     FLUENTS = 275,
     TIME = 276,
     DURATIVE_ACTIONS = 277,
     DURATION_INEQUALITIES = 278,
     CONTINUOUS_EFFECTS = 279,
     DERIVED_PREDICATES = 280,
     TIMED_INITIAL_LITERALS = 281,
     PREFERENCES = 282,
     CONSTRAINTS = 283,
     ACTION = 284,
     PROCESS = 285,
     EVENT = 286,
     DURATIVE_ACTION = 287,
     DERIVED = 288,
     CONSTANTS = 289,
     PREDS = 290,
     FUNCTIONS = 291,
     TYPES = 292,
     ARGS = 293,
     PRE = 294,
     CONDITION = 295,
     PREFERENCE = 296,
     START_PRE = 297,
     END_PRE = 298,
     EFFECTS = 299,
     INITIAL_EFFECT = 300,
     FINAL_EFFECT = 301,
     INVARIANT = 302,
     DURATION = 303,
     AT_START = 304,
     AT_END = 305,
     OVER_ALL = 306,
     AND = 307,
     OR = 308,
     EXISTS = 309,
     FORALL = 310,
     IMPLY = 311,
     NOT = 312,
     WHEN = 313,
     EITHER = 314,
     PROBLEM = 315,
     FORDOMAIN = 316,
     INITIALLY = 317,
     OBJECTS = 318,
     GOALS = 319,
     EQ = 320,
     LENGTH = 321,
     SERIAL = 322,
     PARALLEL = 323,
     METRIC = 324,
     MINIMIZE = 325,
     MAXIMIZE = 326,
     HASHT = 327,
     DURATION_VAR = 328,
     TOTAL_TIME = 329,
     INCREASE = 330,
     DECREASE = 331,
     SCALE_UP = 332,
     SCALE_DOWN = 333,
     ASSIGN = 334,
     GREATER = 335,
     GREATEQ = 336,
     LESS = 337,
     LESSEQ = 338,
     Q = 339,
     COLON = 340,
     ALWAYS = 341,
     SOMETIME = 342,
     WITHIN = 343,
     ATMOSTONCE = 344,
     SOMETIMEAFTER = 345,
     SOMETIMEBEFORE = 346,
     ALWAYSWITHIN = 347,
     HOLDDURING = 348,
     HOLDAFTER = 349,
     ISVIOLATED = 350,
     BOGUS = 351,
     NAME = 352,
     FUNCTION_SYMBOL = 353,
     INTVAL = 354,
     FLOATVAL = 355,
     AT_TIME = 356,
     PLUS = 357,
     HYPHEN = 358,
     DIV = 359,
     MUL = 360,
     UMINUS = 361
   };
#endif
/* Tokens.  */
#define OPEN_BRAC 258
#define CLOSE_BRAC 259
#define OPEN_SQ 260
#define CLOSE_SQ 261
#define DEFINE 262
#define PDDLDOMAIN 263
#define REQS 264
#define EQUALITY 265
#define STRIPS 266
#define ADL 267
#define NEGATIVE_PRECONDITIONS 268
#define TYPING 269
#define DISJUNCTIVE_PRECONDS 270
#define EXT_PRECS 271
#define UNIV_PRECS 272
#define QUANT_PRECS 273
#define COND_EFFS 274
#define FLUENTS 275
#define TIME 276
#define DURATIVE_ACTIONS 277
#define DURATION_INEQUALITIES 278
#define CONTINUOUS_EFFECTS 279
#define DERIVED_PREDICATES 280
#define TIMED_INITIAL_LITERALS 281
#define PREFERENCES 282
#define CONSTRAINTS 283
#define ACTION 284
#define PROCESS 285
#define EVENT 286
#define DURATIVE_ACTION 287
#define DERIVED 288
#define CONSTANTS 289
#define PREDS 290
#define FUNCTIONS 291
#define TYPES 292
#define ARGS 293
#define PRE 294
#define CONDITION 295
#define PREFERENCE 296
#define START_PRE 297
#define END_PRE 298
#define EFFECTS 299
#define INITIAL_EFFECT 300
#define FINAL_EFFECT 301
#define INVARIANT 302
#define DURATION 303
#define AT_START 304
#define AT_END 305
#define OVER_ALL 306
#define AND 307
#define OR 308
#define EXISTS 309
#define FORALL 310
#define IMPLY 311
#define NOT 312
#define WHEN 313
#define EITHER 314
#define PROBLEM 315
#define FORDOMAIN 316
#define INITIALLY 317
#define OBJECTS 318
#define GOALS 319
#define EQ 320
#define LENGTH 321
#define SERIAL 322
#define PARALLEL 323
#define METRIC 324
#define MINIMIZE 325
#define MAXIMIZE 326
#define HASHT 327
#define DURATION_VAR 328
#define TOTAL_TIME 329
#define INCREASE 330
#define DECREASE 331
#define SCALE_UP 332
#define SCALE_DOWN 333
#define ASSIGN 334
#define GREATER 335
#define GREATEQ 336
#define LESS 337
#define LESSEQ 338
#define Q 339
#define COLON 340
#define ALWAYS 341
#define SOMETIME 342
#define WITHIN 343
#define ATMOSTONCE 344
#define SOMETIMEAFTER 345
#define SOMETIMEBEFORE 346
#define ALWAYSWITHIN 347
#define HOLDDURING 348
#define HOLDAFTER 349
#define ISVIOLATED 350
#define BOGUS 351
#define NAME 352
#define FUNCTION_SYMBOL 353
#define INTVAL 354
#define FLOATVAL 355
#define AT_TIME 356
#define PLUS 357
#define HYPHEN 358
#define DIV 359
#define MUL 360
#define UMINUS 361




/* Copy the first part of user declarations.  */
#line 17 "pddl+.yacc"

/*
Error reporting:
Intention is to provide error token on most bracket expressions,
so synchronisation can occur on next CLOSE_BRAC.
Hence error should be generated for innermost expression containing error.
Expressions which cause errors return a NULL values, and parser
always attempts to carry on.
This won't behave so well if CLOSE_BRAC is missing.

Naming conventions:
Generally, the names should be similar to the PDDL2.1 spec.
During development, they have also been based on older PDDL specs,
older PDDL+ and TIM parsers, and this shows in places.

All the names of fields in the semantic value type begin with t_
Corresponding categories in the grammar begin with c_
Corresponding classes have no prefix.

PDDL grammar       yacc grammar      type of corresponding semantic val.  

thing+             c_things          thing_list
(thing+)           c_thing_list      thing_list

*/

#include <cstdlib>
#include <cstdio>
#include <fstream>
#include <ctype.h>

// This is now copied locally to avoid relying on installation 
// of flex++.

//#include "FlexLexer.h"
//#include <FlexLexer.h>

#include "ptree.h"
#include "parse_error.h"

#define YYDEBUG 1 

int yyerror(char *);


extern int yylex();

using namespace PDDL2UPMurphi_parser;



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 68 "pddl+.yacc"
{
    parse_category* t_parse_category;

    effect_lists* t_effect_lists;
    effect* t_effect;
    simple_effect* t_simple_effect;
    cond_effect*   t_cond_effect;
    forall_effect* t_forall_effect;
    timed_effect* t_timed_effect;

    quantifier t_quantifier;
    metric_spec*  t_metric;
    optimization t_optimization;

    symbol* t_symbol;
    var_symbol*   t_var_symbol;
    pddl_type*    t_type;
    pred_symbol*  t_pred_symbol;
    func_symbol*  t_func_symbol;
    const_symbol* t_const_symbol;

    parameter_symbol_list* t_parameter_symbol_list;
    var_symbol_list* t_var_symbol_list;
    const_symbol_list* t_const_symbol_list;
    pddl_type_list* t_type_list;

    proposition* t_proposition;
    pred_decl* t_pred_decl;
    pred_decl_list* t_pred_decl_list;
    func_decl* t_func_decl;
    func_decl_list* t_func_decl_list;

    goal* t_goal;
    con_goal * t_con_goal;
    goal_list* t_goal_list;

    func_term* t_func_term;
    assignment* t_assignment;
    expression* t_expression;
    num_expression* t_num_expression;
    assign_op t_assign_op;
    comparison_op t_comparison_op;

    structure_def* t_structure_def;
    structure_store* t_structure_store;

    action* t_action_def;
    event* t_event_def;
    process* t_process_def;
    durative_action* t_durative_action_def;
    derivation_rule* t_derivation_rule;

    problem* t_problem;
    length_spec* t_length_spec;

    domain* t_domain;    

    pddl_req_flag t_pddl_req_flag;

    plan* t_plan;
    plan_step* t_step;

    int ival;
    double fval;

    char* cp;
    int t_dummy;

    var_symbol_table * vtab;
}
/* Line 193 of yacc.c.  */
#line 430 "pddl+.cpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 443 "pddl+.cpp"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  16
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   874

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  107
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  121
/* YYNRULES -- Number of rules.  */
#define YYNRULES  323
/* YYNRULES -- Number of states.  */
#define YYNSTATES  743

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   361

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     8,    14,    19,    22,    25,    28,
      31,    34,    37,    39,    44,    49,    54,    57,    58,    61,
      63,    68,    72,    74,    76,    78,    80,    83,    84,    89,
      93,    95,   100,   105,   107,   111,   112,   117,   122,   124,
     127,   128,   131,   132,   137,   142,   144,   147,   151,   152,
     154,   156,   158,   160,   165,   167,   169,   172,   173,   176,
     177,   184,   187,   190,   193,   194,   199,   202,   205,   208,
     209,   211,   213,   215,   217,   219,   224,   226,   228,   230,
     232,   235,   238,   241,   242,   247,   252,   257,   265,   271,
     273,   275,   278,   279,   284,   289,   295,   301,   305,   310,
     312,   314,   316,   318,   321,   324,   327,   328,   334,   340,
     346,   352,   358,   364,   370,   375,   378,   379,   381,   384,
     386,   388,   394,   400,   406,   412,   417,   424,   434,   444,
     446,   448,   450,   452,   455,   456,   461,   463,   468,   470,
     478,   484,   490,   496,   502,   508,   514,   519,   525,   531,
     537,   543,   545,   547,   553,   559,   561,   563,   565,   570,
     575,   577,   582,   587,   589,   591,   593,   595,   597,   599,
     601,   606,   614,   619,   625,   630,   638,   640,   645,   651,
     656,   664,   667,   668,   673,   679,   681,   684,   685,   690,
     698,   703,   708,   713,   719,   724,   730,   736,   743,   750,
     756,   758,   763,   768,   773,   779,   787,   793,   796,   797,
     800,   801,   803,   805,   807,   809,   814,   819,   824,   829,
     834,   839,   844,   849,   854,   859,   864,   867,   869,   871,
     873,   875,   877,   879,   881,   887,   900,   905,   918,   923,
     936,   941,   953,   958,   962,   966,   967,   969,   974,   977,
     978,   983,   988,   993,   999,  1004,  1006,  1008,  1010,  1012,
    1014,  1016,  1018,  1020,  1022,  1024,  1026,  1028,  1030,  1032,
    1034,  1036,  1038,  1040,  1042,  1044,  1046,  1051,  1056,  1069,
    1075,  1078,  1081,  1084,  1087,  1090,  1093,  1096,  1097,  1102,
    1107,  1109,  1114,  1120,  1125,  1133,  1139,  1145,  1147,  1149,
    1153,  1155,  1157,  1159,  1164,  1168,  1172,  1176,  1180,  1184,
    1186,  1189,  1191,  1194,  1197,  1201,  1205,  1206,  1210,  1212,
    1217,  1219,  1224,  1226
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     108,     0,    -1,   109,   210,    -1,   223,    -1,     3,     7,
     111,   110,     4,    -1,     3,     7,   111,     1,    -1,   112,
     110,    -1,   209,   110,    -1,   208,   110,    -1,   190,   110,
      -1,   191,   110,    -1,   192,   110,    -1,   194,    -1,     3,
       8,    97,     4,    -1,     3,     9,   113,     4,    -1,     3,
       9,     1,     4,    -1,   113,   207,    -1,    -1,   115,   114,
      -1,   115,    -1,     3,   116,   122,     4,    -1,     3,     1,
       4,    -1,    97,    -1,    65,    -1,    97,    -1,    97,    -1,
     119,   120,    -1,    -1,     3,   121,   122,     4,    -1,     3,
       1,     4,    -1,    97,    -1,   123,   103,   135,   122,    -1,
     123,   103,   133,   122,    -1,   123,    -1,    84,   129,   123,
      -1,    -1,   126,   103,   135,   124,    -1,   126,   103,   133,
     124,    -1,   126,    -1,   131,   125,    -1,    -1,   132,   126,
      -1,    -1,   136,   103,   135,   127,    -1,   136,   103,   133,
     127,    -1,   136,    -1,   128,   131,    -1,   128,    84,   130,
      -1,    -1,    97,    -1,    97,    -1,    97,    -1,    97,    -1,
       3,    59,   137,     4,    -1,    97,    -1,    97,    -1,   136,
     134,    -1,    -1,   137,   135,    -1,    -1,   138,     3,    65,
     171,   170,     4,    -1,   138,   164,    -1,   138,   163,    -1,
     138,   139,    -1,    -1,     3,   101,   138,     4,    -1,   142,
     140,    -1,   166,   140,    -1,   165,   140,    -1,    -1,   145,
      -1,   162,    -1,   161,    -1,   166,    -1,   165,    -1,     3,
      52,   144,     4,    -1,   143,    -1,   161,    -1,   162,    -1,
     167,    -1,   144,   161,    -1,   144,   162,    -1,   144,   167,
      -1,    -1,     3,    52,   140,     4,    -1,     3,    52,     1,
       4,    -1,     3,    52,   147,     4,    -1,     3,   185,     3,
     122,     4,   146,     4,    -1,     3,    58,   203,   146,     4,
      -1,   148,    -1,   167,    -1,   147,   146,    -1,    -1,     3,
      49,   149,     4,    -1,     3,    50,   149,     4,    -1,     3,
      75,   171,   169,     4,    -1,     3,    76,   171,   169,     4,
      -1,     3,     1,     4,    -1,     3,    52,   151,     4,    -1,
     150,    -1,   161,    -1,   162,    -1,   152,    -1,   151,   161,
      -1,   151,   162,    -1,   151,   152,    -1,    -1,     3,    79,
     171,   155,     4,    -1,     3,    75,   171,   155,     4,    -1,
       3,    76,   171,   155,     4,    -1,     3,    77,   171,   155,
       4,    -1,     3,    78,   171,   155,     4,    -1,     3,    75,
     171,   169,     4,    -1,     3,    76,   171,   169,     4,    -1,
       3,    52,   154,     4,    -1,   154,   153,    -1,    -1,   156,
      -1,    84,    73,    -1,   170,    -1,   171,    -1,     3,   102,
     155,   155,     4,    -1,     3,   103,   155,   155,     4,    -1,
       3,   105,   155,   155,     4,    -1,     3,   104,   155,   155,
       4,    -1,     3,    52,   160,     4,    -1,     3,   158,    84,
      73,   159,     4,    -1,     3,    49,     3,   158,    84,    73,
     159,     4,     4,    -1,     3,    50,     3,   158,    84,    73,
     159,     4,     4,    -1,    83,    -1,    81,    -1,    65,    -1,
     168,    -1,   160,   157,    -1,    -1,     3,    57,   187,     4,
      -1,   187,    -1,     3,    57,   189,     4,    -1,   189,    -1,
       3,   185,     3,   122,     4,   141,     4,    -1,     3,    58,
     181,   140,     4,    -1,     3,    79,   171,   168,     4,    -1,
       3,    75,   171,   168,     4,    -1,     3,    76,   171,   168,
       4,    -1,     3,    77,   171,   168,     4,    -1,     3,    78,
     171,   168,     4,    -1,     3,   103,   168,     4,    -1,     3,
     102,   168,   168,     4,    -1,     3,   103,   168,   168,     4,
      -1,     3,   105,   168,   168,     4,    -1,     3,   104,   168,
     168,     4,    -1,   170,    -1,   171,    -1,     3,   105,    72,
     168,     4,    -1,     3,   105,   168,    72,     4,    -1,    72,
      -1,    99,    -1,   100,    -1,     3,    98,   128,     4,    -1,
       3,    97,   128,     4,    -1,    98,    -1,     3,    98,   128,
       4,    -1,     3,    97,   128,     4,    -1,    98,    -1,    80,
      -1,    81,    -1,    82,    -1,    83,    -1,    65,    -1,   178,
      -1,     3,    52,   182,     4,    -1,     3,   185,     3,   122,
       4,   174,     4,    -1,     3,    41,   180,     4,    -1,     3,
      41,    97,   180,     4,    -1,     3,    52,   177,     4,    -1,
       3,   185,     3,   122,     4,   176,     4,    -1,   180,    -1,
       3,    41,   180,     4,    -1,     3,    41,    97,   180,     4,
      -1,     3,    52,   177,     4,    -1,     3,   185,     3,   122,
       4,   176,     4,    -1,   177,   175,    -1,    -1,     3,    41,
     181,     4,    -1,     3,    41,    97,   181,     4,    -1,   181,
      -1,   179,   180,    -1,    -1,     3,    52,   179,     4,    -1,
       3,   185,     3,   122,     4,   180,     4,    -1,     3,    50,
     181,     4,    -1,     3,    86,   181,     4,    -1,     3,    87,
     181,     4,    -1,     3,    88,   170,   181,     4,    -1,     3,
      89,   181,     4,    -1,     3,    90,   181,   181,     4,    -1,
       3,    91,   181,   181,     4,    -1,     3,    92,   170,   181,
     181,     4,    -1,     3,    93,   170,   170,   181,     4,    -1,
       3,    94,   170,   181,     4,    -1,   187,    -1,     3,    57,
     181,     4,    -1,     3,    52,   183,     4,    -1,     3,    53,
     183,     4,    -1,     3,    56,   181,   181,     4,    -1,     3,
     184,     3,   122,     4,   181,     4,    -1,     3,   173,   168,
     168,     4,    -1,   182,   174,    -1,    -1,   183,   181,    -1,
      -1,   185,    -1,   186,    -1,    55,    -1,    54,    -1,     3,
     117,   128,     4,    -1,     3,   117,   122,     4,    -1,     3,
     118,   128,     4,    -1,     3,    35,   114,     4,    -1,     3,
      35,     1,     4,    -1,     3,    36,   119,     4,    -1,     3,
      36,     1,     4,    -1,     3,    28,   180,     4,    -1,     3,
      28,     1,     4,    -1,     3,    28,   175,     4,    -1,     3,
      28,     1,     4,    -1,   194,   195,    -1,   195,    -1,   198,
      -1,   199,    -1,   200,    -1,   201,    -1,   197,    -1,    33,
      -1,     3,   196,   188,   181,     4,    -1,     3,    29,    97,
     206,     3,   122,     4,    39,   174,    44,   141,     4,    -1,
       3,    29,     1,     4,    -1,     3,    31,    97,   206,     3,
     122,     4,    39,   181,    44,   141,     4,    -1,     3,    31,
       1,     4,    -1,     3,    30,    97,   206,     3,   122,     4,
      39,   181,    44,   153,     4,    -1,     3,    30,     1,     4,
      -1,     3,    32,    97,   206,     3,   122,     4,    48,   157,
     202,     4,    -1,     3,    32,     1,     4,    -1,   202,    44,
     146,    -1,   202,    40,   203,    -1,    -1,   205,    -1,     3,
      52,   204,     4,    -1,   204,   203,    -1,    -1,     3,    49,
     181,     4,    -1,     3,    50,   181,     4,    -1,     3,    51,
     181,     4,    -1,     3,    41,    97,   205,     4,    -1,     3,
      41,   205,     4,    -1,    38,    -1,    10,    -1,    11,    -1,
      14,    -1,    13,    -1,    15,    -1,    16,    -1,    17,    -1,
      19,    -1,    20,    -1,    22,    -1,    21,    -1,    12,    -1,
      18,    -1,    23,    -1,    24,    -1,    25,    -1,    26,    -1,
      27,    -1,    28,    -1,    97,    -1,     3,    34,   124,     4,
      -1,     3,    37,   127,     4,    -1,     3,     7,     3,    60,
      97,     4,     3,    61,    97,     4,   211,     4,    -1,     3,
       7,     3,    60,     1,    -1,   112,   211,    -1,   212,   211,
      -1,   213,   211,    -1,   215,   211,    -1,   193,   211,    -1,
     216,   211,    -1,   217,   211,    -1,    -1,     3,    63,   124,
       4,    -1,     3,    62,   138,     4,    -1,    64,    -1,     3,
     214,   174,     4,    -1,     3,    69,   218,   219,     4,    -1,
       3,    69,     1,     4,    -1,     3,    66,    67,    99,    68,
      99,     4,    -1,     3,    66,    67,    99,     4,    -1,     3,
      66,    68,    99,     4,    -1,    70,    -1,    71,    -1,     3,
     220,     4,    -1,   172,    -1,   170,    -1,    74,    -1,     3,
      95,    97,     4,    -1,     3,    74,     4,    -1,   102,   219,
     221,    -1,   103,   219,   219,    -1,   105,   219,   222,    -1,
     104,   219,   219,    -1,   219,    -1,   219,   221,    -1,   219,
      -1,   219,   222,    -1,   224,   223,    -1,    21,   100,   223,
      -1,    21,    99,   223,    -1,    -1,   227,    85,   225,    -1,
     225,    -1,   226,     5,   227,     6,    -1,   226,    -1,     3,
      97,   125,     4,    -1,   100,    -1,    99,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   240,   240,   243,   247,   249,   256,   257,   258,   259,
     261,   263,   265,   268,   273,   280,   287,   288,   293,   295,
     300,   302,   310,   318,   320,   328,   333,   335,   339,   341,
     348,   361,   369,   377,   389,   391,   397,   405,   414,   419,
     420,   424,   425,   433,   440,   449,   455,   457,   459,   466,
     472,   476,   480,   484,   489,   496,   501,   503,   507,   509,
     513,   518,   520,   522,   525,   529,   535,   536,   538,   540,
     549,   550,   551,   552,   553,   557,   558,   562,   564,   566,
     573,   574,   575,   577,   581,   583,   591,   593,   601,   606,
     609,   616,   617,   621,   623,   625,   629,   633,   640,   641,
     645,   647,   649,   656,   657,   658,   660,   665,   667,   669,
     671,   673,   678,   684,   690,   695,   696,   700,   701,   703,
     704,   708,   710,   712,   714,   719,   721,   724,   727,   733,
     734,   735,   743,   747,   750,   754,   759,   766,   771,   776,
     781,   786,   788,   790,   792,   794,   799,   801,   803,   805,
     807,   809,   810,   814,   816,   818,   824,   825,   828,   831,
     833,   851,   853,   855,   861,   862,   863,   864,   865,   877,
     879,   881,   888,   890,   892,   894,   898,   903,   905,   907,
     909,   916,   919,   923,   925,   927,   932,   935,   939,   941,
     944,   946,   948,   950,   952,   954,   956,   958,   960,   962,
     967,   969,   973,   975,   978,   981,   984,   990,   993,   997,
    1000,  1004,  1005,  1009,  1016,  1023,  1028,  1033,  1038,  1040,
    1047,  1049,  1056,  1058,  1065,  1067,  1074,  1075,  1079,  1080,
    1081,  1082,  1083,  1087,  1093,  1102,  1113,  1120,  1131,  1137,
    1147,  1153,  1168,  1175,  1177,  1179,  1183,  1185,  1190,  1193,
    1197,  1199,  1201,  1203,  1208,  1213,  1218,  1219,  1221,  1222,
    1224,  1226,  1227,  1228,  1229,  1230,  1232,  1236,  1245,  1248,
    1251,  1253,  1255,  1257,  1259,  1261,  1267,  1271,  1276,  1283,
    1290,  1291,  1292,  1293,  1294,  1296,  1297,  1298,  1301,  1304,
    1307,  1310,  1314,  1316,  1323,  1326,  1330,  1337,  1338,  1343,
    1344,  1345,  1346,  1347,  1349,  1353,  1354,  1355,  1356,  1360,
    1361,  1366,  1367,  1373,  1376,  1378,  1381,  1385,  1389,  1395,
    1399,  1405,  1413,  1414
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "OPEN_BRAC", "CLOSE_BRAC", "OPEN_SQ",
  "CLOSE_SQ", "DEFINE", "PDDLDOMAIN", "REQS", "EQUALITY", "STRIPS", "ADL",
  "NEGATIVE_PRECONDITIONS", "TYPING", "DISJUNCTIVE_PRECONDS", "EXT_PRECS",
  "UNIV_PRECS", "QUANT_PRECS", "COND_EFFS", "FLUENTS", "TIME",
  "DURATIVE_ACTIONS", "DURATION_INEQUALITIES", "CONTINUOUS_EFFECTS",
  "DERIVED_PREDICATES", "TIMED_INITIAL_LITERALS", "PREFERENCES",
  "CONSTRAINTS", "ACTION", "PROCESS", "EVENT", "DURATIVE_ACTION",
  "DERIVED", "CONSTANTS", "PREDS", "FUNCTIONS", "TYPES", "ARGS", "PRE",
  "CONDITION", "PREFERENCE", "START_PRE", "END_PRE", "EFFECTS",
  "INITIAL_EFFECT", "FINAL_EFFECT", "INVARIANT", "DURATION", "AT_START",
  "AT_END", "OVER_ALL", "AND", "OR", "EXISTS", "FORALL", "IMPLY", "NOT",
  "WHEN", "EITHER", "PROBLEM", "FORDOMAIN", "INITIALLY", "OBJECTS",
  "GOALS", "EQ", "LENGTH", "SERIAL", "PARALLEL", "METRIC", "MINIMIZE",
  "MAXIMIZE", "HASHT", "DURATION_VAR", "TOTAL_TIME", "INCREASE",
  "DECREASE", "SCALE_UP", "SCALE_DOWN", "ASSIGN", "GREATER", "GREATEQ",
  "LESS", "LESSEQ", "Q", "COLON", "ALWAYS", "SOMETIME", "WITHIN",
  "ATMOSTONCE", "SOMETIMEAFTER", "SOMETIMEBEFORE", "ALWAYSWITHIN",
  "HOLDDURING", "HOLDAFTER", "ISVIOLATED", "BOGUS", "NAME",
  "FUNCTION_SYMBOL", "INTVAL", "FLOATVAL", "AT_TIME", "PLUS", "HYPHEN",
  "DIV", "MUL", "UMINUS", "$accept", "mystartsymbol", "c_domain",
  "c_preamble", "c_domain_name", "c_domain_require_def", "c_reqs",
  "c_pred_decls", "c_pred_decl", "c_new_pred_symbol", "c_pred_symbol",
  "c_init_pred_symbol", "c_func_decls", "c_func_decl", "c_new_func_symbol",
  "c_typed_var_list", "c_var_symbol_list", "c_typed_consts",
  "c_const_symbols", "c_new_const_symbols", "c_typed_types",
  "c_parameter_symbols", "c_declaration_var_symbol", "c_var_symbol",
  "c_const_symbol", "c_new_const_symbol", "c_either_type",
  "c_new_primitive_type", "c_primitive_type", "c_new_primitive_types",
  "c_primitive_types", "c_init_els", "c_timed_initial_literal",
  "c_effects", "c_effect", "c_a_effect", "c_p_effect", "c_p_effects",
  "c_conj_effect", "c_da_effect", "c_da_effects", "c_timed_effect",
  "c_a_effect_da", "c_p_effect_da", "c_p_effects_da", "c_f_assign_da",
  "c_proc_effect", "c_proc_effects", "c_f_exp_da", "c_binary_expr_da",
  "c_duration_constraint", "c_d_op", "c_d_value", "c_duration_constraints",
  "c_neg_simple_effect", "c_pos_simple_effect", "c_init_neg_simple_effect",
  "c_init_pos_simple_effect", "c_forall_effect", "c_cond_effect",
  "c_assignment", "c_f_exp", "c_f_exp_t", "c_number", "c_f_head",
  "c_ground_f_head", "c_comparison_op", "c_pre_goal_descriptor",
  "c_pref_con_goal", "c_pref_goal", "c_pref_con_goal_list",
  "c_pref_goal_descriptor", "c_constraint_goal_list", "c_constraint_goal",
  "c_goal_descriptor", "c_pre_goal_descriptor_list", "c_goal_list",
  "c_quantifier", "c_forall", "c_exists", "c_proposition",
  "c_derived_proposition", "c_init_proposition", "c_predicates",
  "c_functions_def", "c_constraints_def", "c_constraints_probdef",
  "c_structure_defs", "c_structure_def", "c_rule_head",
  "c_derivation_rule", "c_action_def", "c_event_def", "c_process_def",
  "c_durative_action_def", "c_da_def_body", "c_da_gd", "c_da_gds",
  "c_timed_gd", "c_args_head", "c_require_key", "c_domain_constants",
  "c_type_names", "c_problem", "c_problem_body", "c_objects",
  "c_initial_state", "c_goals", "c_goal_spec", "c_metric_spec",
  "c_length_spec", "c_optimization", "c_ground_f_exp",
  "c_binary_ground_f_exp", "c_binary_ground_f_pexps",
  "c_binary_ground_f_mexps", "c_plan", "c_step_t_d", "c_step_d", "c_step",
  "c_float", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   107,   108,   108,   109,   109,   110,   110,   110,   110,
     110,   110,   110,   111,   112,   112,   113,   113,   114,   114,
     115,   115,   116,   117,   117,   118,   119,   119,   120,   120,
     121,   122,   122,   122,   123,   123,   124,   124,   124,   125,
     125,   126,   126,   127,   127,   127,   128,   128,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   136,   137,   137,
     138,   138,   138,   138,   138,   139,   140,   140,   140,   140,
     141,   141,   141,   141,   141,   142,   142,   143,   143,   143,
     144,   144,   144,   144,   145,   145,   146,   146,   146,   146,
     146,   147,   147,   148,   148,   148,   148,   148,   149,   149,
     150,   150,   150,   151,   151,   151,   151,   152,   152,   152,
     152,   152,   153,   153,   153,   154,   154,   155,   155,   155,
     155,   156,   156,   156,   156,   157,   157,   157,   157,   158,
     158,   158,   159,   160,   160,   161,   162,   163,   164,   165,
     166,   167,   167,   167,   167,   167,   168,   168,   168,   168,
     168,   168,   168,   169,   169,   169,   170,   170,   171,   171,
     171,   172,   172,   172,   173,   173,   173,   173,   173,   174,
     174,   174,   175,   175,   175,   175,   175,   176,   176,   176,
     176,   177,   177,   178,   178,   178,   179,   179,   180,   180,
     180,   180,   180,   180,   180,   180,   180,   180,   180,   180,
     181,   181,   181,   181,   181,   181,   181,   182,   182,   183,
     183,   184,   184,   185,   186,   187,   188,   189,   190,   190,
     191,   191,   192,   192,   193,   193,   194,   194,   195,   195,
     195,   195,   195,   196,   197,   198,   198,   199,   199,   200,
     200,   201,   201,   202,   202,   202,   203,   203,   204,   204,
     205,   205,   205,   205,   205,   206,   207,   207,   207,   207,
     207,   207,   207,   207,   207,   207,   207,   207,   207,   207,
     207,   207,   207,   207,   207,   207,   208,   209,   210,   210,
     211,   211,   211,   211,   211,   211,   211,   211,   212,   213,
     214,   215,   216,   216,   217,   217,   217,   218,   218,   219,
     219,   219,   219,   219,   219,   220,   220,   220,   220,   221,
     221,   222,   222,   223,   223,   223,   223,   224,   224,   225,
     225,   226,   227,   227
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     5,     4,     2,     2,     2,     2,
       2,     2,     1,     4,     4,     4,     2,     0,     2,     1,
       4,     3,     1,     1,     1,     1,     2,     0,     4,     3,
       1,     4,     4,     1,     3,     0,     4,     4,     1,     2,
       0,     2,     0,     4,     4,     1,     2,     3,     0,     1,
       1,     1,     1,     4,     1,     1,     2,     0,     2,     0,
       6,     2,     2,     2,     0,     4,     2,     2,     2,     0,
       1,     1,     1,     1,     1,     4,     1,     1,     1,     1,
       2,     2,     2,     0,     4,     4,     4,     7,     5,     1,
       1,     2,     0,     4,     4,     5,     5,     3,     4,     1,
       1,     1,     1,     2,     2,     2,     0,     5,     5,     5,
       5,     5,     5,     5,     4,     2,     0,     1,     2,     1,
       1,     5,     5,     5,     5,     4,     6,     9,     9,     1,
       1,     1,     1,     2,     0,     4,     1,     4,     1,     7,
       5,     5,     5,     5,     5,     5,     4,     5,     5,     5,
       5,     1,     1,     5,     5,     1,     1,     1,     4,     4,
       1,     4,     4,     1,     1,     1,     1,     1,     1,     1,
       4,     7,     4,     5,     4,     7,     1,     4,     5,     4,
       7,     2,     0,     4,     5,     1,     2,     0,     4,     7,
       4,     4,     4,     5,     4,     5,     5,     6,     6,     5,
       1,     4,     4,     4,     5,     7,     5,     2,     0,     2,
       0,     1,     1,     1,     1,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     2,     1,     1,     1,
       1,     1,     1,     1,     5,    12,     4,    12,     4,    12,
       4,    11,     4,     3,     3,     0,     1,     4,     2,     0,
       4,     4,     4,     5,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     4,    12,     5,
       2,     2,     2,     2,     2,     2,     2,     0,     4,     4,
       1,     4,     5,     4,     7,     5,     5,     1,     1,     3,
       1,     1,     1,     4,     3,     3,     3,     3,     3,     1,
       2,     1,     2,     2,     3,     3,     0,     3,     1,     4,
       1,     4,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     316,     0,     0,   323,   322,     0,     0,     3,   316,   318,
     320,     0,     0,    40,   316,   316,     1,     0,     2,     0,
     313,     0,     0,     0,     0,    51,     0,    40,   315,   314,
       0,     0,   317,     0,     5,     0,     0,     0,     0,     0,
       0,    12,   227,   232,   228,   229,   230,   231,     0,     0,
     321,    39,     0,   319,     0,     0,     0,     0,     0,     0,
       0,   233,    42,     0,     0,    57,     0,     4,     6,     9,
      10,    11,     0,   226,     8,     7,     0,    13,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    52,     0,    38,    42,     0,     0,     0,    19,     0,
       0,     0,    45,     0,     0,   279,     0,    15,    14,   256,
     257,   267,   259,   258,   260,   261,   262,   268,   263,   264,
     266,   265,   269,   270,   271,   272,   273,   274,   275,    16,
     223,     0,   187,   213,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   222,   236,   255,     0,   240,     0,
     238,     0,   242,     0,   276,     0,    41,   219,     0,    22,
      35,   218,    18,   221,     0,   220,    26,   277,    54,     0,
      56,    23,    24,    35,     0,     0,   200,     0,     0,     0,
       0,     0,   156,   157,     0,     0,     0,     0,     0,     0,
       0,    35,    35,    35,    35,    35,     0,    55,    42,    42,
      21,     0,     0,    33,     0,    30,    35,    57,    57,     0,
     210,   210,   214,     0,     0,   168,   164,   165,   166,   167,
      48,     0,     0,   211,   212,   234,     0,   190,   188,   186,
     191,   192,     0,   194,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    59,    37,    36,    49,    35,    20,
       0,    29,     0,    44,    43,   216,     0,     0,     0,     0,
       0,     0,   160,     0,   151,   152,    35,     0,   193,   195,
     196,     0,     0,   199,     0,     0,     0,     0,     0,     0,
      34,    35,    35,    28,   202,   209,   203,     0,   201,   215,
       0,    46,    48,    48,     0,     0,     0,     0,     0,     0,
       0,   197,   198,     0,     0,     0,     0,     0,    53,    58,
      32,    31,   204,    50,    47,     0,     0,     0,     0,     0,
       0,   206,     0,   287,   189,     0,     0,   169,   185,     0,
       0,     0,   245,   159,   158,     0,   146,     0,     0,     0,
       0,     0,   287,   287,     0,   287,   287,   287,   287,   287,
       0,   208,     0,     0,     0,     0,     0,     0,   134,   131,
     130,   129,     0,     0,   147,   148,   150,   149,   205,     0,
      64,    42,   290,     0,     0,     0,   280,   284,   278,   281,
     282,   283,   285,   286,     0,     0,     0,    35,     0,     0,
      70,    72,    71,    74,    73,   136,     0,     0,     0,     0,
       0,     0,     0,   241,     0,     0,     0,     0,     0,   176,
       0,     0,     0,     0,     0,   297,   298,     0,     0,     0,
     183,   170,   207,     0,     0,     0,     0,     0,   235,   116,
       0,     0,   239,   237,     0,     0,   125,   133,     0,     0,
     244,   246,     0,   243,    89,    90,   225,     0,   182,     0,
     224,     0,   289,    63,    62,    61,   138,   288,     0,     0,
     293,     0,   302,   163,   301,   300,     0,   291,   184,     0,
       0,     0,     0,    69,    76,    77,    78,    69,    69,    79,
       0,     0,    69,    35,     0,     0,     0,     0,     0,     0,
       0,   132,     0,     0,     0,     0,   249,     0,     0,     0,
      92,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    35,     0,     0,    25,    64,    48,   295,     0,   296,
       0,     0,    48,    48,     0,     0,     0,     0,     0,   292,
       0,    85,    83,     0,     0,    84,    66,    68,    67,   135,
       0,     0,   114,   115,     0,   155,     0,     0,     0,     0,
     126,     0,     0,     0,     0,     0,     0,     0,    97,     0,
       0,    99,   102,   100,   101,     0,     0,     0,     0,     0,
       0,     0,     0,    35,     0,   172,   174,   181,     0,     0,
       0,     0,     0,     0,     0,   304,     0,     0,     0,     0,
       0,     0,     0,   299,   171,     0,     0,     0,   140,     0,
       0,   112,   113,     0,     0,     0,   254,   250,   251,   252,
     247,   248,   106,     0,     0,     0,     0,     0,    93,    94,
      86,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   173,     0,   137,     0,    65,   217,   294,   303,
     162,   161,   309,   305,   306,   308,   311,   307,     0,    75,
      80,    81,    82,     0,     0,     0,     0,     0,   253,     0,
       0,     0,     0,     0,     0,    88,     0,   142,    95,   143,
      96,   144,   145,   141,     0,     0,     0,    60,   310,   312,
     139,     0,     0,   127,   128,     0,    98,   105,   103,   104,
       0,     0,     0,   117,   119,   120,     0,     0,     0,     0,
       0,     0,     0,   182,     0,   175,   153,   154,     0,     0,
       0,     0,   118,   108,   109,   110,   111,   107,    87,     0,
       0,     0,    35,     0,     0,     0,     0,     0,   177,   179,
       0,     0,     0,     0,     0,   178,     0,   121,   122,   124,
     123,     0,   180
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,    36,    24,   342,    79,    97,    98,   160,
     220,   516,   100,   166,   206,   202,   203,    92,    26,    93,
     101,   260,   248,   314,   291,    94,   198,   170,   199,   102,
     279,   410,   453,   472,   389,   473,   474,   595,   390,   443,
     566,   444,   560,   561,   659,   562,   397,   484,   692,   693,
     332,   362,   490,   401,   475,   476,   454,   455,   477,   478,
     479,   491,   546,   264,   265,   465,   221,   326,   577,   676,
     510,   327,   179,   303,   328,   386,   256,   222,   427,   224,
     176,   104,   456,    38,    39,    40,   343,    41,    42,    66,
      43,    44,    45,    46,    47,   363,   440,   557,   441,   147,
     129,    48,    49,    18,   344,   345,   346,   375,   347,   348,
     349,   417,   642,   528,   643,   647,     7,     8,     9,    10,
      11
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -524
static const yytype_int16 yypact[] =
{
      53,    99,   170,  -524,  -524,    46,    48,  -524,    77,  -524,
      62,   -27,    68,   -11,    77,    77,  -524,   217,  -524,   138,
    -524,   180,   241,   242,   263,  -524,   253,   -11,  -524,  -524,
     290,   309,  -524,   212,  -524,   684,   295,   329,   329,   329,
     329,   334,  -524,  -524,  -524,  -524,  -524,  -524,   329,   329,
    -524,  -524,   300,  -524,   371,   400,   293,    27,    38,    58,
      81,  -524,   280,   323,   285,  -524,   387,  -524,  -524,  -524,
    -524,  -524,   326,  -524,  -524,  -524,    91,  -524,   384,   542,
     399,   278,   425,   431,   404,   440,   404,   447,   404,   449,
     404,  -524,   469,   374,   280,   479,    96,   484,   506,   531,
     225,   538,    92,   -16,   534,  -524,   540,  -524,  -524,  -524,
    -524,  -524,  -524,  -524,  -524,  -524,  -524,  -524,  -524,  -524,
    -524,  -524,  -524,  -524,  -524,  -524,  -524,  -524,  -524,  -524,
    -524,   534,  -524,  -524,   534,   534,   202,   534,   534,   534,
     202,   202,   202,   572,  -524,  -524,  -524,   577,  -524,   605,
    -524,   607,  -524,   620,  -524,    33,  -524,  -524,   608,  -524,
     548,  -524,  -524,  -524,   107,  -524,  -524,  -524,  -524,    33,
    -524,  -524,  -524,   548,   544,   625,  -524,   630,   636,   303,
     638,   639,  -524,  -524,   534,   640,   534,   534,   534,   202,
     534,   548,   548,   548,   548,   548,   575,  -524,   280,   280,
    -524,   560,   641,   555,   656,  -524,   548,  -524,  -524,   660,
    -524,  -524,  -524,   534,   534,   129,  -524,  -524,  -524,  -524,
    -524,    69,   664,  -524,  -524,  -524,   611,  -524,  -524,  -524,
    -524,  -524,   669,  -524,   686,   687,   534,   534,   688,   690,
     691,   692,   694,   695,  -524,  -524,  -524,  -524,   548,  -524,
      33,  -524,   696,  -524,  -524,  -524,   377,   396,   534,   698,
     130,   415,  -524,    69,  -524,  -524,   548,   571,  -524,  -524,
    -524,   699,   700,  -524,   702,   683,   685,   697,   675,   122,
    -524,   548,   548,  -524,  -524,  -524,  -524,   721,  -524,  -524,
     629,  -524,  -524,  -524,    69,    69,    69,    69,   731,   733,
     734,  -524,  -524,   735,   737,   534,   534,   738,  -524,  -524,
    -524,  -524,  -524,  -524,  -524,   168,   208,    69,    44,    69,
      69,  -524,   534,   739,  -524,   409,   701,  -524,  -524,   703,
     704,   324,  -524,  -524,  -524,   740,  -524,   742,   745,   746,
     747,   272,   739,   739,   748,   739,   739,   739,   739,   739,
     101,  -524,   750,   751,   752,   751,   753,   754,  -524,  -524,
    -524,  -524,   659,   190,  -524,  -524,  -524,  -524,  -524,   360,
    -524,   280,  -524,   379,   172,   737,  -524,  -524,  -524,  -524,
    -524,  -524,  -524,  -524,   534,   755,   452,   548,   181,   756,
    -524,  -524,  -524,  -524,  -524,  -524,   135,   757,   758,   -13,
     -13,   464,   693,  -524,   760,   761,   763,   495,   764,  -524,
     466,   765,   666,   671,   767,  -524,  -524,    29,   768,   769,
    -524,  -524,  -524,   770,   405,   772,   534,   773,  -524,  -524,
      85,    85,  -524,  -524,   674,   705,  -524,  -524,    69,    14,
    -524,  -524,   267,  -524,  -524,  -524,  -524,   102,  -524,   774,
    -524,   140,  -524,  -524,  -524,  -524,  -524,  -524,   111,   775,
    -524,   533,  -524,  -524,  -524,  -524,   776,  -524,  -524,   737,
     777,   604,   778,   780,  -524,  -524,  -524,   780,   780,  -524,
     -16,   781,   780,   548,   468,   378,     3,     3,   711,   713,
     783,  -524,   109,   534,   534,   534,  -524,   784,   787,   787,
    -524,   760,    85,    85,    85,    85,    85,   788,   702,   789,
     501,   548,   791,    85,  -524,  -524,  -524,  -524,   679,  -524,
     792,   706,  -524,  -524,    29,    29,    29,    29,   793,  -524,
     794,  -524,  -524,    85,    85,  -524,  -524,  -524,  -524,  -524,
     795,   796,  -524,  -524,   707,  -524,   797,   798,    69,    69,
    -524,   298,   801,   802,   803,   804,   805,   504,  -524,   446,
     806,  -524,  -524,  -524,  -524,   807,   512,   761,    50,    50,
      69,    69,    69,   548,   809,  -524,  -524,  -524,   810,   708,
     811,   202,   523,   211,   812,  -524,   813,   213,   214,    29,
      29,    29,    29,  -524,  -524,   545,    69,    69,  -524,   751,
      66,  -524,  -524,   814,   815,   816,  -524,  -524,  -524,  -524,
    -524,  -524,  -524,    85,    85,    85,    85,    85,  -524,  -524,
    -524,  -524,   817,   436,   818,   819,   820,   821,   822,   823,
     824,   825,  -524,   827,  -524,   828,  -524,  -524,  -524,  -524,
    -524,  -524,    29,  -524,  -524,  -524,    29,  -524,   609,  -524,
    -524,  -524,  -524,   829,    69,   720,   830,   831,  -524,   568,
      47,    47,    47,    47,    47,  -524,    66,  -524,  -524,  -524,
    -524,  -524,  -524,  -524,   761,   561,   832,  -524,  -524,  -524,
    -524,   833,   834,  -524,  -524,   632,  -524,  -524,  -524,  -524,
     573,   722,   835,  -524,  -524,  -524,   836,   837,   838,   839,
      82,   840,   110,  -524,   842,  -524,  -524,  -524,    47,    47,
      47,    47,  -524,  -524,  -524,  -524,  -524,  -524,  -524,   702,
     843,   570,   548,    47,    47,    47,    47,   844,  -524,  -524,
     845,   846,   847,   848,   849,  -524,   827,  -524,  -524,  -524,
    -524,   850,  -524
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -524,  -524,  -524,   183,  -524,   566,  -524,   759,  -524,  -524,
     728,  -524,  -524,  -524,  -524,  -171,   598,  -169,   841,   762,
     410,  -232,  -524,  -524,   234,  -524,  -143,  -524,  -154,  -524,
    -524,   340,  -524,  -222,  -350,  -524,  -524,  -524,  -524,  -523,
    -524,  -524,   359,  -524,  -524,   200,   376,  -524,  -224,  -524,
     460,   220,    73,  -524,  -336,  -328,  -524,  -524,  -337,  -322,
    -392,  -218,  -378,  -132,  -230,  -524,  -524,  -313,   493,   127,
     161,  -524,  -524,   -56,   -97,  -524,   654,  -524,   -80,  -524,
    -341,  -524,   354,  -524,  -524,  -524,  -524,  -524,   826,  -524,
    -524,  -524,  -524,  -524,  -524,  -524,  -309,  -524,  -438,   355,
    -524,  -524,  -524,  -524,   385,  -524,  -524,  -524,  -524,  -524,
    -524,  -524,  -406,  -524,   227,   224,   306,  -524,   851,  -524,
     853
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -70
static const yytype_int16 yytable[] =
{
      82,   143,   209,   263,   184,   398,   544,   175,   188,   189,
     190,   466,   395,   445,   395,   208,   393,   391,   393,   391,
     239,   240,   241,   242,   243,   392,   207,   392,    83,   245,
     246,   394,   461,   394,   178,   252,   196,   180,   181,    85,
     185,   186,   187,   621,   622,   298,    16,   261,   336,   171,
     690,    17,   359,   623,   553,   492,     1,   237,    22,    87,
     315,   316,   418,   493,   494,   495,   496,    21,   360,   261,
     361,    23,   261,   422,     2,   545,   317,   318,   319,   320,
      19,   172,    89,   395,   481,   261,    25,   232,   485,   234,
     235,   236,   105,   238,   223,   299,   282,   158,     2,   335,
     337,   338,   339,   462,   174,    81,    12,   281,   204,   547,
     310,   311,   551,    81,   605,   517,   258,   259,   589,   590,
     591,   592,   545,   229,    84,   309,   308,   463,   182,   183,
     197,   691,   395,   -23,   289,    86,   395,   395,   654,   271,
     272,   395,   262,   182,   183,   262,   182,   183,   262,   182,
     183,   701,     3,     4,   682,    88,   530,   395,   395,   285,
     285,   287,   563,   563,   262,   182,   183,   262,   182,   183,
     564,   564,   333,   414,   445,   445,     3,     4,    90,   518,
     262,   182,   183,   262,   644,   645,   646,   429,   106,   168,
     625,   627,   567,   159,   403,   169,    13,   512,   384,   508,
     486,   487,   411,   652,   205,   513,   552,   719,   329,   330,
     430,   431,   334,   -23,   290,   637,   423,   640,   641,   197,
      68,    69,    70,    71,    30,   340,   -23,    25,   164,   165,
     404,    74,    75,   424,   405,    13,   133,   514,   425,   426,
     646,   515,   415,   416,    19,   352,   171,    27,   611,   653,
      33,   536,   290,   385,   395,   537,   538,    50,   395,   650,
     540,    27,   393,   391,    34,    25,    35,   651,   497,    14,
      15,   392,   568,   569,   570,   571,   572,   394,   172,     3,
       4,    55,   445,   581,   583,   464,    99,   419,   -27,   -27,
     587,   588,   290,    52,    80,   290,    81,   290,   290,    67,
     369,   182,   183,   596,   597,    25,    81,   228,    25,    54,
      25,    25,   541,   409,    20,    53,   498,   499,   395,   500,
      28,    29,   133,   688,    95,   501,    96,   449,   131,   482,
     132,   689,    35,   133,   370,   371,   372,    72,   373,   492,
     578,   374,   502,   503,   504,   505,   506,   493,   494,   495,
     624,   626,   628,   629,   630,    57,    58,    59,    60,    61,
      76,   406,   507,   407,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   356,   357,    77,   358,    91,   624,   626,
     174,   284,   655,   660,   661,   662,   663,   664,   107,   359,
     103,   509,   464,   464,   464,   464,   554,   555,   556,   174,
     286,    78,   631,   130,   -17,   360,   470,   361,   471,   -69,
     -17,   -17,   -17,   -17,   -17,   -17,   -17,   -17,   -17,   -17,
     -17,   -17,   -17,   -17,   -17,   -17,   -17,   -17,   -17,   144,
     695,   695,   695,   695,   695,   145,   681,   696,   697,   698,
     699,   149,   146,   151,   148,   153,   412,   413,   700,   635,
     350,   150,   574,   152,   409,   325,   421,   464,   464,   464,
     464,   351,   211,   212,   133,   213,   214,   331,   436,   451,
     452,   396,   542,   154,   215,   292,   293,   155,   695,   695,
     695,   695,   339,   157,   723,   724,   725,   726,   161,   216,
     217,   218,   219,   695,   695,   695,   695,   -17,   612,   731,
     732,   733,   734,   425,   407,   576,   172,   439,   610,    96,
     464,   171,   292,   293,   464,   442,   620,   294,   295,   296,
     297,   613,   614,   615,   616,   617,   451,   636,   694,   694,
     694,   694,   694,   292,   293,   163,   447,   174,   294,   295,
     296,   666,   167,   172,   177,   131,   108,   448,   648,   649,
     133,   730,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   685,   686,   407,   729,   191,   694,   694,   694,   694,
     192,   134,   135,   136,   137,   138,   139,   140,   141,   142,
      37,   694,   694,   694,   694,   704,   210,   211,   212,   133,
     213,   214,   702,    37,    37,    37,    37,   520,   193,   215,
     194,   131,   200,   703,    37,    37,   133,   253,   254,   434,
     435,   603,   604,   195,   216,   217,   218,   219,   521,   225,
     522,   523,   201,   226,   244,   524,   525,   526,   527,   128,
     227,   172,   230,   231,   233,   249,   720,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   532,   247,   250,   133,
     251,   425,   426,   727,   255,   409,   425,   266,   300,   171,
     292,   293,   267,   268,   171,   708,   709,   710,   711,   533,
     534,   504,   505,   506,   533,   534,   504,   505,   506,   425,
     269,   270,   273,    55,   274,   275,   276,   171,   277,   278,
     283,   172,   288,   301,   302,    81,   172,   613,   614,   615,
     616,   617,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,   304,   307,   305,   312,   313,   376,   377,   172,
     379,   380,   381,   382,   383,   321,   306,   322,   323,   324,
     325,   331,   341,   402,   364,   353,   365,   354,   355,   366,
     367,   368,   378,   387,   388,   396,   399,   400,   488,   420,
     428,   432,   433,   439,   442,   458,   438,   446,   450,   457,
     459,   460,   467,   468,   469,   480,   483,   511,   584,   519,
     529,   531,   535,   471,   548,   539,   549,   550,   558,   489,
     559,   573,   682,   575,   579,   712,   585,   593,   594,   598,
     599,   601,   602,   586,   551,   514,   606,   607,   608,   609,
     618,   619,   600,   632,   633,   634,   638,   639,   656,   657,
     658,   665,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   173,   677,   680,   683,   684,   705,   706,   707,   713,
     714,   715,   716,   717,   718,   722,   280,   728,   735,   736,
     737,   738,   739,   740,   742,   582,   156,   162,   565,   687,
     543,   437,   408,   741,   721,   257,   580,    73,    51,   678,
     679,     0,     0,    32,    31
};

static const yytype_int16 yycheck[] =
{
      56,    81,   173,   221,   136,   355,     3,   104,   140,   141,
     142,   417,   353,   405,   355,   169,   353,   353,   355,   355,
     191,   192,   193,   194,   195,   353,   169,   355,     1,   198,
     199,   353,     3,   355,   131,   206,     3,   134,   135,     1,
     137,   138,   139,   566,   567,   263,     0,     3,     4,    65,
       3,     3,    65,     3,   492,    41,     3,   189,    85,     1,
     292,   293,   375,    49,    50,    51,    52,     5,    81,     3,
      83,     3,     3,   386,    21,    72,   294,   295,   296,   297,
       3,    97,     1,   424,   425,     3,    97,   184,     3,   186,
     187,   188,     1,   190,   174,   266,   250,     1,    21,   317,
     318,   319,   320,    74,     3,     3,     7,   250,     1,   487,
     281,   282,     3,     3,   552,     4,   213,   214,   524,   525,
     526,   527,    72,   179,    97,   279,     4,    98,    99,   100,
      97,    84,   473,     4,     4,    97,   477,   478,    72,   236,
     237,   482,    98,    99,   100,    98,    99,   100,    98,    99,
     100,   674,    99,   100,    72,    97,   469,   498,   499,   256,
     257,   258,   498,   499,    98,    99,   100,    98,    99,   100,
     498,   499,     4,     1,   566,   567,    99,   100,    97,    68,
      98,    99,   100,    98,   590,   591,   592,    52,    97,    97,
     568,   569,   501,    97,     4,   103,    97,    57,    97,    97,
     430,   431,   371,   595,    97,    65,    97,    97,   305,   306,
      75,    76,     4,    84,    84,     4,   387,     4,     4,    97,
      37,    38,    39,    40,     7,   322,    97,    97,     3,     4,
      40,    48,    49,    52,    44,    97,    55,    97,    57,    58,
     646,   101,    70,    71,     3,   325,    65,    13,   557,   599,
       8,   473,    84,   350,   595,   477,   478,     4,   599,   595,
     482,    27,   599,   599,     1,    97,     3,   595,     1,    99,
     100,   599,   502,   503,   504,   505,   506,   599,    97,    99,
     100,     9,   674,   513,   516,   417,     1,   384,     3,     4,
     522,   523,    84,     3,     1,    84,     3,    84,    84,     4,
      28,    99,   100,   533,   534,    97,     3,     4,    97,    97,
      97,    97,   483,   369,     8,     6,    49,    50,   659,    52,
      14,    15,    55,   659,     1,    58,     3,   407,    50,   426,
      52,   659,     3,    55,    62,    63,    64,     3,    66,    41,
     511,    69,    75,    76,    77,    78,    79,    49,    50,    51,
     568,   569,   570,   571,   572,    29,    30,    31,    32,    33,
      60,     1,   442,     3,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    49,    50,     4,    52,    97,   596,   597,
       3,     4,   600,   613,   614,   615,   616,   617,     4,    65,
       3,   447,   524,   525,   526,   527,   493,   494,   495,     3,
       4,     1,   573,     4,     4,    81,     1,    83,     3,     4,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,     4,
     660,   661,   662,   663,   664,     4,   654,   661,   662,   663,
     664,    86,    38,    88,     4,    90,    67,    68,   666,   581,
      41,     4,   508,     4,   510,     3,     4,   589,   590,   591,
     592,    52,    53,    54,    55,    56,    57,     3,     4,     3,
       4,     3,     4,     4,    65,    97,    98,   103,   708,   709,
     710,   711,   700,     4,   708,   709,   710,   711,     4,    80,
      81,    82,    83,   723,   724,   725,   726,    97,    52,   723,
     724,   725,   726,    57,     3,     4,    97,     3,     4,     3,
     642,    65,    97,    98,   646,     3,     4,   102,   103,   104,
     105,    75,    76,    77,    78,    79,     3,     4,   660,   661,
     662,   663,   664,    97,    98,     4,    41,     3,   102,   103,
     104,   105,     4,    97,     4,    50,     4,    52,     3,     4,
      55,   722,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,     3,     4,     3,     4,     3,   708,   709,   710,   711,
       3,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      24,   723,   724,   725,   726,   675,    52,    53,    54,    55,
      56,    57,    41,    37,    38,    39,    40,    74,     3,    65,
       3,    50,     4,    52,    48,    49,    55,   207,   208,   399,
     400,   548,   549,     3,    80,    81,    82,    83,    95,     4,
      97,    98,    84,     3,    59,   102,   103,   104,   105,    97,
       4,    97,     4,     4,     4,     4,   702,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    52,    97,   103,    55,
       4,    57,    58,   719,     4,   721,    57,     3,    97,    65,
      97,    98,    61,     4,    65,   102,   103,   104,   105,    75,
      76,    77,    78,    79,    75,    76,    77,    78,    79,    57,
       4,     4,     4,     9,     4,     4,     4,    65,     4,     4,
       4,    97,     4,     4,     4,     3,    97,    75,    76,    77,
      78,    79,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    39,    48,    39,     4,    97,   342,   343,    97,
     345,   346,   347,   348,   349,     4,    39,     4,     4,     4,
       3,     3,     3,    84,     4,    44,     4,    44,    44,     4,
       4,     4,     4,     3,     3,     3,     3,     3,    84,     4,
       4,     4,     4,     3,     3,    99,    73,     4,     4,     4,
      99,     4,     4,     4,     4,     3,     3,     3,    99,     4,
       4,     4,     4,     3,    73,     4,    73,     4,     4,    84,
       3,     3,    72,     4,     3,    73,     4,     4,     4,     4,
       4,     4,     4,    97,     3,    97,     4,     4,     4,     4,
       4,     4,   105,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       3,   103,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     3,   248,     4,     4,     4,
       4,     4,     4,     4,     4,   515,    94,    98,   499,   659,
     484,   401,   369,   736,   703,   211,   512,    41,    27,   642,
     646,    -1,    -1,    22,    21
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    21,    99,   100,   108,   109,   223,   224,   225,
     226,   227,     7,    97,    99,   100,     0,     3,   210,     3,
     223,     5,    85,     3,   111,    97,   125,   131,   223,   223,
       7,   227,   225,     8,     1,     3,   110,   112,   190,   191,
     192,   194,   195,   197,   198,   199,   200,   201,   208,   209,
       4,   125,     3,     6,    97,     9,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,   196,     4,   110,   110,
     110,   110,     3,   195,   110,   110,    60,     4,     1,   113,
       1,     3,   180,     1,    97,     1,    97,     1,    97,     1,
      97,    97,   124,   126,   132,     1,     3,   114,   115,     1,
     119,   127,   136,     3,   188,     1,    97,     4,     4,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    97,   207,
       4,    50,    52,    55,    86,    87,    88,    89,    90,    91,
      92,    93,    94,   185,     4,     4,    38,   206,     4,   206,
       4,   206,     4,   206,     4,   103,   126,     4,     1,    97,
     116,     4,   114,     4,     3,     4,   120,     4,    97,   103,
     134,    65,    97,   117,     3,   181,   187,     4,   181,   179,
     181,   181,    99,   100,   170,   181,   181,   181,   170,   170,
     170,     3,     3,     3,     3,     3,     3,    97,   133,   135,
       4,    84,   122,   123,     1,    97,   121,   133,   135,   122,
      52,    53,    54,    56,    57,    65,    80,    81,    82,    83,
     117,   173,   184,   185,   186,     4,     3,     4,     4,   180,
       4,     4,   181,     4,   181,   181,   181,   170,   181,   122,
     122,   122,   122,   122,    59,   124,   124,    97,   129,     4,
     103,     4,   122,   127,   127,     4,   183,   183,   181,   181,
     128,     3,    98,   168,   170,   171,     3,    61,     4,     4,
       4,   181,   181,     4,     4,     4,     4,     4,     4,   137,
     123,   133,   135,     4,     4,   181,     4,   181,     4,     4,
      84,   131,    97,    98,   102,   103,   104,   105,   168,   122,
      97,     4,     4,   180,    39,    39,    39,    48,     4,   135,
     122,   122,     4,    97,   130,   128,   128,   168,   168,   168,
     168,     4,     4,     4,     4,     3,   174,   178,   181,   181,
     181,     3,   157,     4,     4,   168,     4,   168,   168,   168,
     181,     3,   112,   193,   211,   212,   213,   215,   216,   217,
      41,    52,   185,    44,    44,    44,    49,    50,    52,    65,
      81,    83,   158,   202,     4,     4,     4,     4,     4,    28,
      62,    63,    64,    66,    69,   214,   211,   211,     4,   211,
     211,   211,   211,   211,    97,   181,   182,     3,     3,   141,
     145,   161,   162,   165,   166,   187,     3,   153,   141,     3,
       3,   160,    84,     4,    40,    44,     1,     3,   175,   180,
     138,   124,    67,    68,     1,    70,    71,   218,   174,   181,
       4,     4,   174,   122,    52,    57,    58,   185,     4,    52,
      75,    76,     4,     4,   158,   158,     4,   157,    73,     3,
     203,   205,     3,   146,   148,   167,     4,    41,    52,   185,
       4,     3,     4,   139,   163,   164,   189,     4,    99,    99,
       4,     3,    74,    98,   170,   172,   219,     4,     4,     4,
       1,     3,   140,   142,   143,   161,   162,   165,   166,   167,
       3,   187,   181,     3,   154,     3,   171,   171,    84,    84,
     159,   168,    41,    49,    50,    51,    52,     1,    49,    50,
      52,    58,    75,    76,    77,    78,    79,   185,    97,   180,
     177,     3,    57,    65,    97,   101,   118,     4,    68,     4,
      74,    95,    97,    98,   102,   103,   104,   105,   220,     4,
     174,     4,    52,    75,    76,     4,   140,   140,   140,     4,
     140,   122,     4,   153,     3,    72,   169,   169,    73,    73,
       4,     3,    97,   205,   181,   181,   181,   204,     4,     3,
     149,   150,   152,   161,   162,   149,   147,   203,   171,   171,
     171,   171,   171,     3,   180,     4,     4,   175,   122,     3,
     189,   171,   138,   128,    99,     4,    97,   128,   128,   219,
     219,   219,   219,     4,     4,   144,   171,   171,     4,     4,
     105,     4,     4,   159,   159,   205,     4,     4,     4,     4,
       4,   203,    52,    75,    76,    77,    78,    79,     4,     4,
       4,   146,   146,     3,   168,   169,   168,   169,   168,   168,
     168,   122,     4,     4,     4,   170,     4,     4,     4,     4,
       4,     4,   219,   221,   219,   219,   219,   222,     3,     4,
     161,   162,   167,   141,    72,   168,     4,     4,     4,   151,
     171,   171,   171,   171,   171,     4,   105,     4,     4,     4,
       4,     4,     4,     4,     4,     3,   176,     4,   221,   222,
       4,   168,    72,     4,     4,     3,     4,   152,   161,   162,
       3,    84,   155,   156,   170,   171,   155,   155,   155,   155,
     168,   146,    41,    52,   185,     4,     4,     4,   102,   103,
     104,   105,    73,     4,     4,     4,     4,     4,     4,    97,
     180,   177,     3,   155,   155,   155,   155,   180,     4,     4,
     122,   155,   155,   155,   155,     4,     4,     4,     4,     4,
       4,   176,     4
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 240 "pddl+.yacc"
    {top_thing= (yyvsp[(1) - (2)].t_domain); current_analysis->the_domain= (yyvsp[(1) - (2)].t_domain); top_thing= (yyvsp[(2) - (2)].t_problem);
    current_analysis->the_problem= (yyvsp[(2) - (2)].t_problem); requires(E_TYPING);
    ;}
    break;

  case 3:
#line 243 "pddl+.yacc"
    {top_thing= (yyvsp[(1) - (1)].t_plan); ;}
    break;

  case 4:
#line 248 "pddl+.yacc"
    {(yyval.t_domain)= (yyvsp[(4) - (5)].t_domain); (yyval.t_domain)->name= (yyvsp[(3) - (5)].cp);delete [] (yyvsp[(3) - (5)].cp);;}
    break;

  case 5:
#line 250 "pddl+.yacc"
    {yyerrok; (yyval.t_domain)=static_cast<domain*>(NULL);
       	log_error(E_FATAL,"Syntax error in domain"); ;}
    break;

  case 6:
#line 256 "pddl+.yacc"
    {(yyval.t_domain)= (yyvsp[(2) - (2)].t_domain); (yyval.t_domain)->req= (yyvsp[(1) - (2)].t_pddl_req_flag);;}
    break;

  case 7:
#line 257 "pddl+.yacc"
    {(yyval.t_domain)= (yyvsp[(2) - (2)].t_domain); (yyval.t_domain)->types= (yyvsp[(1) - (2)].t_type_list);;}
    break;

  case 8:
#line 258 "pddl+.yacc"
    {(yyval.t_domain)= (yyvsp[(2) - (2)].t_domain); (yyval.t_domain)->constants= (yyvsp[(1) - (2)].t_const_symbol_list);;}
    break;

  case 9:
#line 259 "pddl+.yacc"
    {(yyval.t_domain)= (yyvsp[(2) - (2)].t_domain); 
                                       (yyval.t_domain)->predicates= (yyvsp[(1) - (2)].t_pred_decl_list); ;}
    break;

  case 10:
#line 261 "pddl+.yacc"
    {(yyval.t_domain)= (yyvsp[(2) - (2)].t_domain); 
                                       (yyval.t_domain)->functions= (yyvsp[(1) - (2)].t_func_decl_list); ;}
    break;

  case 11:
#line 263 "pddl+.yacc"
    {(yyval.t_domain)= (yyvsp[(2) - (2)].t_domain);
   										(yyval.t_domain)->constraints = (yyvsp[(1) - (2)].t_con_goal);;}
    break;

  case 12:
#line 265 "pddl+.yacc"
    {(yyval.t_domain)= new domain((yyvsp[(1) - (1)].t_structure_store)); ;}
    break;

  case 13:
#line 268 "pddl+.yacc"
    {(yyval.cp)=(yyvsp[(3) - (4)].cp);;}
    break;

  case 14:
#line 274 "pddl+.yacc"
    {
	// Stash in analysis object --- we need to refer to it during parse
	//   but domain object is not created yet,
	current_analysis->req |= (yyvsp[(3) - (4)].t_pddl_req_flag);
	(yyval.t_pddl_req_flag)=(yyvsp[(3) - (4)].t_pddl_req_flag);
    ;}
    break;

  case 15:
#line 281 "pddl+.yacc"
    {yyerrok; 
       log_error(E_FATAL,"Syntax error in requirements declaration.");
       (yyval.t_pddl_req_flag)= 0; ;}
    break;

  case 16:
#line 287 "pddl+.yacc"
    { (yyval.t_pddl_req_flag)= (yyvsp[(1) - (2)].t_pddl_req_flag) | (yyvsp[(2) - (2)].t_pddl_req_flag); ;}
    break;

  case 17:
#line 288 "pddl+.yacc"
    { (yyval.t_pddl_req_flag)= 0; ;}
    break;

  case 18:
#line 294 "pddl+.yacc"
    {(yyval.t_pred_decl_list)=(yyvsp[(2) - (2)].t_pred_decl_list); (yyval.t_pred_decl_list)->push_front((yyvsp[(1) - (2)].t_pred_decl));;}
    break;

  case 19:
#line 296 "pddl+.yacc"
    {  (yyval.t_pred_decl_list)=new pred_decl_list;
           (yyval.t_pred_decl_list)->push_front((yyvsp[(1) - (1)].t_pred_decl)); ;}
    break;

  case 20:
#line 301 "pddl+.yacc"
    {(yyval.t_pred_decl)= new pred_decl((yyvsp[(2) - (4)].t_pred_symbol),(yyvsp[(3) - (4)].t_var_symbol_list),current_analysis->var_tab_stack.pop());;}
    break;

  case 21:
#line 303 "pddl+.yacc"
    {yyerrok; 
        // hope someone makes this error someday
        log_error(E_FATAL,"Syntax error in predicate declaration.");
	(yyval.t_pred_decl)= NULL; ;}
    break;

  case 22:
#line 311 "pddl+.yacc"
    { (yyval.t_pred_symbol)=current_analysis->pred_tab.symbol_put((yyvsp[(1) - (1)].cp));
           current_analysis->var_tab_stack.push(
           				current_analysis->buildPredTab());
           delete [] (yyvsp[(1) - (1)].cp); ;}
    break;

  case 23:
#line 318 "pddl+.yacc"
    { (yyval.t_pred_symbol)=current_analysis->pred_tab.symbol_ref("="); 
	      requires(E_EQUALITY); ;}
    break;

  case 24:
#line 320 "pddl+.yacc"
    { (yyval.t_pred_symbol)=current_analysis->pred_tab.symbol_get((yyvsp[(1) - (1)].cp)); delete [] (yyvsp[(1) - (1)].cp); ;}
    break;

  case 25:
#line 328 "pddl+.yacc"
    { (yyval.t_pred_symbol)=current_analysis->pred_tab.symbol_get((yyvsp[(1) - (1)].cp)); delete [] (yyvsp[(1) - (1)].cp);;}
    break;

  case 26:
#line 334 "pddl+.yacc"
    {(yyval.t_func_decl_list)=(yyvsp[(1) - (2)].t_func_decl_list); (yyval.t_func_decl_list)->push_back((yyvsp[(2) - (2)].t_func_decl));;}
    break;

  case 27:
#line 335 "pddl+.yacc"
    { (yyval.t_func_decl_list)=new func_decl_list; ;}
    break;

  case 28:
#line 340 "pddl+.yacc"
    {(yyval.t_func_decl)= new func_decl((yyvsp[(2) - (4)].t_func_symbol),(yyvsp[(3) - (4)].t_var_symbol_list),current_analysis->var_tab_stack.pop());;}
    break;

  case 29:
#line 342 "pddl+.yacc"
    {yyerrok; 
	 log_error(E_FATAL,"Syntax error in functor declaration.");
	 (yyval.t_func_decl)= NULL; ;}
    break;

  case 30:
#line 349 "pddl+.yacc"
    { (yyval.t_func_symbol)=current_analysis->func_tab.symbol_put((yyvsp[(1) - (1)].cp));
           current_analysis->var_tab_stack.push(
           		current_analysis->buildFuncTab()); 
           delete [] (yyvsp[(1) - (1)].cp); ;}
    break;

  case 31:
#line 362 "pddl+.yacc"
    {  
      (yyval.t_var_symbol_list)= (yyvsp[(1) - (4)].t_var_symbol_list);
      (yyval.t_var_symbol_list)->set_types((yyvsp[(3) - (4)].t_type));           /* Set types for variables */
      (yyval.t_var_symbol_list)->splice((yyval.t_var_symbol_list)->end(),*(yyvsp[(4) - (4)].t_var_symbol_list));   /* Join lists */ 
      delete (yyvsp[(4) - (4)].t_var_symbol_list);                   /* Delete (now empty) list */
      requires(E_TYPING);
   ;}
    break;

  case 32:
#line 370 "pddl+.yacc"
    {  
      (yyval.t_var_symbol_list)= (yyvsp[(1) - (4)].t_var_symbol_list);
      (yyval.t_var_symbol_list)->set_either_types((yyvsp[(3) - (4)].t_type_list));    /* Set types for variables */
      (yyval.t_var_symbol_list)->splice((yyval.t_var_symbol_list)->end(),*(yyvsp[(4) - (4)].t_var_symbol_list));   /* Join lists */ 
      delete (yyvsp[(4) - (4)].t_var_symbol_list);                   /* Delete (now empty) list */
      requires(E_TYPING);
   ;}
    break;

  case 33:
#line 378 "pddl+.yacc"
    {
       (yyval.t_var_symbol_list)= (yyvsp[(1) - (1)].t_var_symbol_list);
   ;}
    break;

  case 34:
#line 390 "pddl+.yacc"
    {(yyval.t_var_symbol_list)=(yyvsp[(3) - (3)].t_var_symbol_list); (yyvsp[(3) - (3)].t_var_symbol_list)->push_front((yyvsp[(2) - (3)].t_var_symbol)); ;}
    break;

  case 35:
#line 391 "pddl+.yacc"
    {(yyval.t_var_symbol_list)= new var_symbol_list; ;}
    break;

  case 36:
#line 398 "pddl+.yacc"
    {  
      (yyval.t_const_symbol_list)= (yyvsp[(1) - (4)].t_const_symbol_list);
      (yyvsp[(1) - (4)].t_const_symbol_list)->set_types((yyvsp[(3) - (4)].t_type));           /* Set types for constants */
      (yyvsp[(1) - (4)].t_const_symbol_list)->splice((yyvsp[(1) - (4)].t_const_symbol_list)->end(),*(yyvsp[(4) - (4)].t_const_symbol_list)); /* Join lists */ 
      delete (yyvsp[(4) - (4)].t_const_symbol_list);                   /* Delete (now empty) list */
      requires(E_TYPING);
   ;}
    break;

  case 37:
#line 406 "pddl+.yacc"
    {  
      (yyval.t_const_symbol_list)= (yyvsp[(1) - (4)].t_const_symbol_list);
      (yyvsp[(1) - (4)].t_const_symbol_list)->set_either_types((yyvsp[(3) - (4)].t_type_list));
      (yyvsp[(1) - (4)].t_const_symbol_list)->splice((yyvsp[(1) - (4)].t_const_symbol_list)->end(),*(yyvsp[(4) - (4)].t_const_symbol_list));
      delete (yyvsp[(4) - (4)].t_const_symbol_list);
      requires(E_TYPING);
   ;}
    break;

  case 38:
#line 414 "pddl+.yacc"
    {(yyval.t_const_symbol_list)= (yyvsp[(1) - (1)].t_const_symbol_list);;}
    break;

  case 39:
#line 419 "pddl+.yacc"
    {(yyval.t_const_symbol_list)=(yyvsp[(2) - (2)].t_const_symbol_list); (yyvsp[(2) - (2)].t_const_symbol_list)->push_front((yyvsp[(1) - (2)].t_const_symbol));;}
    break;

  case 40:
#line 420 "pddl+.yacc"
    {(yyval.t_const_symbol_list)=new const_symbol_list;;}
    break;

  case 41:
#line 424 "pddl+.yacc"
    {(yyval.t_const_symbol_list)=(yyvsp[(2) - (2)].t_const_symbol_list); (yyvsp[(2) - (2)].t_const_symbol_list)->push_front((yyvsp[(1) - (2)].t_const_symbol));;}
    break;

  case 42:
#line 425 "pddl+.yacc"
    {(yyval.t_const_symbol_list)=new const_symbol_list;;}
    break;

  case 43:
#line 434 "pddl+.yacc"
    {  
       (yyval.t_type_list)= (yyvsp[(1) - (4)].t_type_list);
       (yyval.t_type_list)->set_types((yyvsp[(3) - (4)].t_type));           /* Set types for constants */
       (yyval.t_type_list)->splice((yyval.t_type_list)->end(),*(yyvsp[(4) - (4)].t_type_list)); /* Join lists */ 
       delete (yyvsp[(4) - (4)].t_type_list);                   /* Delete (now empty) list */
   ;}
    break;

  case 44:
#line 441 "pddl+.yacc"
    {  
   // This parse needs to be excluded, we think (DPL&MF: 6/9/01)
       (yyval.t_type_list)= (yyvsp[(1) - (4)].t_type_list);
       (yyval.t_type_list)->set_either_types((yyvsp[(3) - (4)].t_type_list));
       (yyval.t_type_list)->splice((yyvsp[(1) - (4)].t_type_list)->end(),*(yyvsp[(4) - (4)].t_type_list));
       delete (yyvsp[(4) - (4)].t_type_list);
   ;}
    break;

  case 45:
#line 450 "pddl+.yacc"
    { (yyval.t_type_list)= (yyvsp[(1) - (1)].t_type_list); ;}
    break;

  case 46:
#line 456 "pddl+.yacc"
    {(yyval.t_parameter_symbol_list)=(yyvsp[(1) - (2)].t_parameter_symbol_list); (yyval.t_parameter_symbol_list)->push_back((yyvsp[(2) - (2)].t_const_symbol)); ;}
    break;

  case 47:
#line 458 "pddl+.yacc"
    {(yyval.t_parameter_symbol_list)=(yyvsp[(1) - (3)].t_parameter_symbol_list); (yyval.t_parameter_symbol_list)->push_back((yyvsp[(3) - (3)].t_var_symbol)); ;}
    break;

  case 48:
#line 459 "pddl+.yacc"
    {(yyval.t_parameter_symbol_list)= new parameter_symbol_list;;}
    break;

  case 49:
#line 466 "pddl+.yacc"
    { (yyval.t_var_symbol)= current_analysis->var_tab_stack.top()->symbol_put((yyvsp[(1) - (1)].cp)); delete [] (yyvsp[(1) - (1)].cp); ;}
    break;

  case 50:
#line 472 "pddl+.yacc"
    { (yyval.t_var_symbol)= current_analysis->var_tab_stack.symbol_get((yyvsp[(1) - (1)].cp)); delete [] (yyvsp[(1) - (1)].cp); ;}
    break;

  case 51:
#line 476 "pddl+.yacc"
    { (yyval.t_const_symbol)= current_analysis->const_tab.symbol_get((yyvsp[(1) - (1)].cp)); delete [] (yyvsp[(1) - (1)].cp); ;}
    break;

  case 52:
#line 480 "pddl+.yacc"
    { (yyval.t_const_symbol)= current_analysis->const_tab.symbol_put((yyvsp[(1) - (1)].cp)); delete [] (yyvsp[(1) - (1)].cp);;}
    break;

  case 53:
#line 485 "pddl+.yacc"
    { (yyval.t_type_list)= (yyvsp[(3) - (4)].t_type_list); ;}
    break;

  case 54:
#line 490 "pddl+.yacc"
    { (yyval.t_type)= current_analysis->pddl_type_tab.symbol_ref((yyvsp[(1) - (1)].cp)); delete [] (yyvsp[(1) - (1)].cp);;}
    break;

  case 55:
#line 497 "pddl+.yacc"
    { (yyval.t_type)= current_analysis->pddl_type_tab.symbol_ref((yyvsp[(1) - (1)].cp)); delete [] (yyvsp[(1) - (1)].cp);;}
    break;

  case 56:
#line 502 "pddl+.yacc"
    {(yyval.t_type_list)= (yyvsp[(1) - (2)].t_type_list); (yyval.t_type_list)->push_back((yyvsp[(2) - (2)].t_type));;}
    break;

  case 57:
#line 503 "pddl+.yacc"
    {(yyval.t_type_list)= new pddl_type_list;;}
    break;

  case 58:
#line 508 "pddl+.yacc"
    {(yyval.t_type_list)= (yyvsp[(1) - (2)].t_type_list); (yyval.t_type_list)->push_back((yyvsp[(2) - (2)].t_type));;}
    break;

  case 59:
#line 509 "pddl+.yacc"
    {(yyval.t_type_list)= new pddl_type_list;;}
    break;

  case 60:
#line 514 "pddl+.yacc"
    { (yyval.t_effect_lists)=(yyvsp[(1) - (6)].t_effect_lists);
	  (yyval.t_effect_lists)->assign_effects.push_back(new assignment((yyvsp[(4) - (6)].t_func_term),E_ASSIGN,(yyvsp[(5) - (6)].t_num_expression)));  
          requires(E_FLUENTS); 
	;}
    break;

  case 61:
#line 519 "pddl+.yacc"
    { (yyval.t_effect_lists)=(yyvsp[(1) - (2)].t_effect_lists); (yyval.t_effect_lists)->add_effects.push_back((yyvsp[(2) - (2)].t_simple_effect)); ;}
    break;

  case 62:
#line 521 "pddl+.yacc"
    { (yyval.t_effect_lists)=(yyvsp[(1) - (2)].t_effect_lists); (yyval.t_effect_lists)->del_effects.push_back((yyvsp[(2) - (2)].t_simple_effect)); ;}
    break;

  case 63:
#line 523 "pddl+.yacc"
    { (yyval.t_effect_lists)=(yyvsp[(1) - (2)].t_effect_lists); (yyval.t_effect_lists)->timed_effects.push_back((yyvsp[(2) - (2)].t_timed_effect)); ;}
    break;

  case 64:
#line 525 "pddl+.yacc"
    { (yyval.t_effect_lists)= new effect_lists;;}
    break;

  case 65:
#line 530 "pddl+.yacc"
    { requires(E_TIMED_INITIAL_LITERALS); 
   		(yyval.t_timed_effect)=new timed_initial_literal((yyvsp[(3) - (4)].t_effect_lists),(yyvsp[(2) - (4)].fval));;}
    break;

  case 66:
#line 535 "pddl+.yacc"
    {(yyval.t_effect_lists)=(yyvsp[(2) - (2)].t_effect_lists); (yyval.t_effect_lists)->append_effects((yyvsp[(1) - (2)].t_effect_lists)); delete (yyvsp[(1) - (2)].t_effect_lists);;}
    break;

  case 67:
#line 536 "pddl+.yacc"
    {(yyval.t_effect_lists)=(yyvsp[(2) - (2)].t_effect_lists); (yyval.t_effect_lists)->cond_effects.push_front((yyvsp[(1) - (2)].t_cond_effect)); 
                                      requires(E_COND_EFFS);;}
    break;

  case 68:
#line 538 "pddl+.yacc"
    {(yyval.t_effect_lists)=(yyvsp[(2) - (2)].t_effect_lists); (yyval.t_effect_lists)->forall_effects.push_front((yyvsp[(1) - (2)].t_forall_effect));
                                      requires(E_COND_EFFS);;}
    break;

  case 69:
#line 540 "pddl+.yacc"
    {(yyval.t_effect_lists)=new effect_lists(); ;}
    break;

  case 70:
#line 549 "pddl+.yacc"
    {(yyval.t_effect_lists)= (yyvsp[(1) - (1)].t_effect_lists);;}
    break;

  case 71:
#line 550 "pddl+.yacc"
    {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->add_effects.push_front((yyvsp[(1) - (1)].t_simple_effect));;}
    break;

  case 72:
#line 551 "pddl+.yacc"
    {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->del_effects.push_front((yyvsp[(1) - (1)].t_simple_effect));;}
    break;

  case 73:
#line 552 "pddl+.yacc"
    {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->cond_effects.push_front((yyvsp[(1) - (1)].t_cond_effect));;}
    break;

  case 74:
#line 553 "pddl+.yacc"
    {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->forall_effects.push_front((yyvsp[(1) - (1)].t_forall_effect));;}
    break;

  case 75:
#line 557 "pddl+.yacc"
    {(yyval.t_effect_lists)= (yyvsp[(3) - (4)].t_effect_lists);;}
    break;

  case 76:
#line 558 "pddl+.yacc"
    {(yyval.t_effect_lists)= (yyvsp[(1) - (1)].t_effect_lists);;}
    break;

  case 77:
#line 563 "pddl+.yacc"
    {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->del_effects.push_front((yyvsp[(1) - (1)].t_simple_effect));;}
    break;

  case 78:
#line 565 "pddl+.yacc"
    {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->add_effects.push_front((yyvsp[(1) - (1)].t_simple_effect));;}
    break;

  case 79:
#line 567 "pddl+.yacc"
    {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->assign_effects.push_front((yyvsp[(1) - (1)].t_assignment));
         requires(E_FLUENTS);;}
    break;

  case 80:
#line 573 "pddl+.yacc"
    {(yyval.t_effect_lists)= (yyvsp[(1) - (2)].t_effect_lists); (yyval.t_effect_lists)->del_effects.push_back((yyvsp[(2) - (2)].t_simple_effect));;}
    break;

  case 81:
#line 574 "pddl+.yacc"
    {(yyval.t_effect_lists)= (yyvsp[(1) - (2)].t_effect_lists); (yyval.t_effect_lists)->add_effects.push_back((yyvsp[(2) - (2)].t_simple_effect));;}
    break;

  case 82:
#line 575 "pddl+.yacc"
    {(yyval.t_effect_lists)= (yyvsp[(1) - (2)].t_effect_lists); (yyval.t_effect_lists)->assign_effects.push_back((yyvsp[(2) - (2)].t_assignment));
                                     requires(E_FLUENTS); ;}
    break;

  case 83:
#line 577 "pddl+.yacc"
    { (yyval.t_effect_lists)= new effect_lists; ;}
    break;

  case 84:
#line 582 "pddl+.yacc"
    { (yyval.t_effect_lists)=(yyvsp[(3) - (4)].t_effect_lists); ;}
    break;

  case 85:
#line 584 "pddl+.yacc"
    {yyerrok; (yyval.t_effect_lists)=NULL;
	 log_error(E_FATAL,"Syntax error in (and ...)");
	;}
    break;

  case 86:
#line 592 "pddl+.yacc"
    { (yyval.t_effect_lists)=(yyvsp[(3) - (4)].t_effect_lists); ;}
    break;

  case 87:
#line 597 "pddl+.yacc"
    { (yyval.t_effect_lists)= new effect_lists; 
          (yyval.t_effect_lists)->forall_effects.push_back(
	       new forall_effect((yyvsp[(6) - (7)].t_effect_lists), (yyvsp[(4) - (7)].t_var_symbol_list), current_analysis->var_tab_stack.pop())); 
          requires(E_COND_EFFS);;}
    break;

  case 88:
#line 602 "pddl+.yacc"
    { (yyval.t_effect_lists)= new effect_lists;
	  (yyval.t_effect_lists)->cond_effects.push_back(
	       new cond_effect((yyvsp[(3) - (5)].t_goal),(yyvsp[(4) - (5)].t_effect_lists)));
          requires(E_COND_EFFS); ;}
    break;

  case 89:
#line 607 "pddl+.yacc"
    { (yyval.t_effect_lists)=new effect_lists;
          (yyval.t_effect_lists)->timed_effects.push_back((yyvsp[(1) - (1)].t_timed_effect)); ;}
    break;

  case 90:
#line 610 "pddl+.yacc"
    { (yyval.t_effect_lists)= new effect_lists;
	  (yyval.t_effect_lists)->assign_effects.push_front((yyvsp[(1) - (1)].t_assignment));
          requires(E_FLUENTS); ;}
    break;

  case 91:
#line 616 "pddl+.yacc"
    { (yyval.t_effect_lists)=(yyvsp[(1) - (2)].t_effect_lists); (yyvsp[(1) - (2)].t_effect_lists)->append_effects((yyvsp[(2) - (2)].t_effect_lists)); delete (yyvsp[(2) - (2)].t_effect_lists); ;}
    break;

  case 92:
#line 617 "pddl+.yacc"
    { (yyval.t_effect_lists)= new effect_lists; ;}
    break;

  case 93:
#line 622 "pddl+.yacc"
    {(yyval.t_timed_effect)=new timed_effect((yyvsp[(3) - (4)].t_effect_lists),E_AT_START);;}
    break;

  case 94:
#line 624 "pddl+.yacc"
    {(yyval.t_timed_effect)=new timed_effect((yyvsp[(3) - (4)].t_effect_lists),E_AT_END);;}
    break;

  case 95:
#line 626 "pddl+.yacc"
    {(yyval.t_timed_effect)=new timed_effect(new effect_lists,E_CONTINUOUS);
         (yyval.t_timed_effect)->effs->assign_effects.push_front(
	     new assignment((yyvsp[(3) - (5)].t_func_term),E_INCREASE,(yyvsp[(4) - (5)].t_expression))); ;}
    break;

  case 96:
#line 630 "pddl+.yacc"
    {(yyval.t_timed_effect)=new timed_effect(new effect_lists,E_CONTINUOUS);
         (yyval.t_timed_effect)->effs->assign_effects.push_front(
	     new assignment((yyvsp[(3) - (5)].t_func_term),E_DECREASE,(yyvsp[(4) - (5)].t_expression))); ;}
    break;

  case 97:
#line 634 "pddl+.yacc"
    {yyerrok; (yyval.t_timed_effect)=NULL;
	log_error(E_FATAL,"Syntax error in timed effect"); ;}
    break;

  case 98:
#line 640 "pddl+.yacc"
    {(yyval.t_effect_lists)= (yyvsp[(3) - (4)].t_effect_lists);;}
    break;

  case 99:
#line 641 "pddl+.yacc"
    {(yyval.t_effect_lists)= (yyvsp[(1) - (1)].t_effect_lists);;}
    break;

  case 100:
#line 646 "pddl+.yacc"
    {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->del_effects.push_front((yyvsp[(1) - (1)].t_simple_effect));;}
    break;

  case 101:
#line 648 "pddl+.yacc"
    {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->add_effects.push_front((yyvsp[(1) - (1)].t_simple_effect));;}
    break;

  case 102:
#line 650 "pddl+.yacc"
    {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->assign_effects.push_front((yyvsp[(1) - (1)].t_assignment));
         requires(E_FLUENTS);;}
    break;

  case 103:
#line 656 "pddl+.yacc"
    {(yyval.t_effect_lists)= (yyvsp[(1) - (2)].t_effect_lists); (yyval.t_effect_lists)->del_effects.push_back((yyvsp[(2) - (2)].t_simple_effect));;}
    break;

  case 104:
#line 657 "pddl+.yacc"
    {(yyval.t_effect_lists)= (yyvsp[(1) - (2)].t_effect_lists); (yyval.t_effect_lists)->add_effects.push_back((yyvsp[(2) - (2)].t_simple_effect));;}
    break;

  case 105:
#line 658 "pddl+.yacc"
    {(yyval.t_effect_lists)= (yyvsp[(1) - (2)].t_effect_lists); (yyval.t_effect_lists)->assign_effects.push_back((yyvsp[(2) - (2)].t_assignment));
                                     requires(E_FLUENTS); ;}
    break;

  case 106:
#line 660 "pddl+.yacc"
    { (yyval.t_effect_lists)= new effect_lists; ;}
    break;

  case 107:
#line 666 "pddl+.yacc"
    { (yyval.t_assignment)= new assignment((yyvsp[(3) - (5)].t_func_term),E_ASSIGN,(yyvsp[(4) - (5)].t_expression)); ;}
    break;

  case 108:
#line 668 "pddl+.yacc"
    { (yyval.t_assignment)= new assignment((yyvsp[(3) - (5)].t_func_term),E_INCREASE,(yyvsp[(4) - (5)].t_expression)); ;}
    break;

  case 109:
#line 670 "pddl+.yacc"
    { (yyval.t_assignment)= new assignment((yyvsp[(3) - (5)].t_func_term),E_DECREASE,(yyvsp[(4) - (5)].t_expression)); ;}
    break;

  case 110:
#line 672 "pddl+.yacc"
    { (yyval.t_assignment)= new assignment((yyvsp[(3) - (5)].t_func_term),E_SCALE_UP,(yyvsp[(4) - (5)].t_expression)); ;}
    break;

  case 111:
#line 674 "pddl+.yacc"
    { (yyval.t_assignment)= new assignment((yyvsp[(3) - (5)].t_func_term),E_SCALE_DOWN,(yyvsp[(4) - (5)].t_expression)); ;}
    break;

  case 112:
#line 679 "pddl+.yacc"
    {(yyval.t_effect_lists)=new effect_lists; 
         timed_effect * te = new timed_effect(new effect_lists,E_CONTINUOUS);
         (yyval.t_effect_lists)->timed_effects.push_front(te);
         te->effs->assign_effects.push_front(
	     new assignment((yyvsp[(3) - (5)].t_func_term),E_INCREASE,(yyvsp[(4) - (5)].t_expression))); ;}
    break;

  case 113:
#line 685 "pddl+.yacc"
    {(yyval.t_effect_lists)=new effect_lists; 
         timed_effect * te = new timed_effect(new effect_lists,E_CONTINUOUS);
         (yyval.t_effect_lists)->timed_effects.push_front(te);
         te->effs->assign_effects.push_front(
	     new assignment((yyvsp[(3) - (5)].t_func_term),E_DECREASE,(yyvsp[(4) - (5)].t_expression))); ;}
    break;

  case 114:
#line 691 "pddl+.yacc"
    {(yyval.t_effect_lists) = (yyvsp[(3) - (4)].t_effect_lists);;}
    break;

  case 115:
#line 695 "pddl+.yacc"
    { (yyval.t_effect_lists)=(yyvsp[(1) - (2)].t_effect_lists); (yyvsp[(1) - (2)].t_effect_lists)->append_effects((yyvsp[(2) - (2)].t_effect_lists)); delete (yyvsp[(2) - (2)].t_effect_lists); ;}
    break;

  case 116:
#line 696 "pddl+.yacc"
    { (yyval.t_effect_lists)= new effect_lists; ;}
    break;

  case 117:
#line 700 "pddl+.yacc"
    {(yyval.t_expression)= (yyvsp[(1) - (1)].t_expression);;}
    break;

  case 118:
#line 701 "pddl+.yacc"
    {(yyval.t_expression)= new special_val_expr(E_DURATION_VAR);
                    requires( E_DURATION_INEQUALITIES );;}
    break;

  case 119:
#line 703 "pddl+.yacc"
    { (yyval.t_expression)=(yyvsp[(1) - (1)].t_num_expression); ;}
    break;

  case 120:
#line 704 "pddl+.yacc"
    { (yyval.t_expression)= (yyvsp[(1) - (1)].t_func_term); ;}
    break;

  case 121:
#line 709 "pddl+.yacc"
    { (yyval.t_expression)= new plus_expression((yyvsp[(3) - (5)].t_expression),(yyvsp[(4) - (5)].t_expression)); ;}
    break;

  case 122:
#line 711 "pddl+.yacc"
    { (yyval.t_expression)= new minus_expression((yyvsp[(3) - (5)].t_expression),(yyvsp[(4) - (5)].t_expression)); ;}
    break;

  case 123:
#line 713 "pddl+.yacc"
    { (yyval.t_expression)= new mul_expression((yyvsp[(3) - (5)].t_expression),(yyvsp[(4) - (5)].t_expression)); ;}
    break;

  case 124:
#line 715 "pddl+.yacc"
    { (yyval.t_expression)= new div_expression((yyvsp[(3) - (5)].t_expression),(yyvsp[(4) - (5)].t_expression)); ;}
    break;

  case 125:
#line 720 "pddl+.yacc"
    { (yyval.t_goal)= new conj_goal((yyvsp[(3) - (4)].t_goal_list)); ;}
    break;

  case 126:
#line 722 "pddl+.yacc"
    { (yyval.t_goal)= new timed_goal(new comparison((yyvsp[(2) - (6)].t_comparison_op),
        			new special_val_expr(E_DURATION_VAR),(yyvsp[(5) - (6)].t_expression)),E_AT_START); ;}
    break;

  case 127:
#line 725 "pddl+.yacc"
    { (yyval.t_goal) = new timed_goal(new comparison((yyvsp[(4) - (9)].t_comparison_op),
					new special_val_expr(E_DURATION_VAR),(yyvsp[(7) - (9)].t_expression)),E_AT_START);;}
    break;

  case 128:
#line 728 "pddl+.yacc"
    { (yyval.t_goal) = new timed_goal(new comparison((yyvsp[(4) - (9)].t_comparison_op),
					new special_val_expr(E_DURATION_VAR),(yyvsp[(7) - (9)].t_expression)),E_AT_END);;}
    break;

  case 129:
#line 733 "pddl+.yacc"
    {(yyval.t_comparison_op)= E_LESSEQ; requires(E_DURATION_INEQUALITIES);;}
    break;

  case 130:
#line 734 "pddl+.yacc"
    {(yyval.t_comparison_op)= E_GREATEQ; requires(E_DURATION_INEQUALITIES);;}
    break;

  case 131:
#line 735 "pddl+.yacc"
    {(yyval.t_comparison_op)= E_EQUALS; ;}
    break;

  case 132:
#line 743 "pddl+.yacc"
    {(yyval.t_expression)= (yyvsp[(1) - (1)].t_expression); ;}
    break;

  case 133:
#line 748 "pddl+.yacc"
    { (yyval.t_goal_list)=(yyvsp[(1) - (2)].t_goal_list); (yyval.t_goal_list)->push_back((yyvsp[(2) - (2)].t_goal)); ;}
    break;

  case 134:
#line 750 "pddl+.yacc"
    { (yyval.t_goal_list)= new goal_list; ;}
    break;

  case 135:
#line 755 "pddl+.yacc"
    { (yyval.t_simple_effect)= new simple_effect((yyvsp[(3) - (4)].t_proposition)); ;}
    break;

  case 136:
#line 760 "pddl+.yacc"
    { (yyval.t_simple_effect)= new simple_effect((yyvsp[(1) - (1)].t_proposition)); ;}
    break;

  case 137:
#line 767 "pddl+.yacc"
    { (yyval.t_simple_effect)= new simple_effect((yyvsp[(3) - (4)].t_proposition)); ;}
    break;

  case 138:
#line 772 "pddl+.yacc"
    { (yyval.t_simple_effect)= new simple_effect((yyvsp[(1) - (1)].t_proposition)); ;}
    break;

  case 139:
#line 777 "pddl+.yacc"
    { (yyval.t_forall_effect)= new forall_effect((yyvsp[(6) - (7)].t_effect_lists), (yyvsp[(4) - (7)].t_var_symbol_list), current_analysis->var_tab_stack.pop());;}
    break;

  case 140:
#line 782 "pddl+.yacc"
    { (yyval.t_cond_effect)= new cond_effect((yyvsp[(3) - (5)].t_goal),(yyvsp[(4) - (5)].t_effect_lists)); ;}
    break;

  case 141:
#line 787 "pddl+.yacc"
    { (yyval.t_assignment)= new assignment((yyvsp[(3) - (5)].t_func_term),E_ASSIGN,(yyvsp[(4) - (5)].t_expression)); ;}
    break;

  case 142:
#line 789 "pddl+.yacc"
    { (yyval.t_assignment)= new assignment((yyvsp[(3) - (5)].t_func_term),E_INCREASE,(yyvsp[(4) - (5)].t_expression)); ;}
    break;

  case 143:
#line 791 "pddl+.yacc"
    { (yyval.t_assignment)= new assignment((yyvsp[(3) - (5)].t_func_term),E_DECREASE,(yyvsp[(4) - (5)].t_expression)); ;}
    break;

  case 144:
#line 793 "pddl+.yacc"
    { (yyval.t_assignment)= new assignment((yyvsp[(3) - (5)].t_func_term),E_SCALE_UP,(yyvsp[(4) - (5)].t_expression)); ;}
    break;

  case 145:
#line 795 "pddl+.yacc"
    { (yyval.t_assignment)= new assignment((yyvsp[(3) - (5)].t_func_term),E_SCALE_DOWN,(yyvsp[(4) - (5)].t_expression)); ;}
    break;

  case 146:
#line 800 "pddl+.yacc"
    { (yyval.t_expression)= new uminus_expression((yyvsp[(3) - (4)].t_expression)); requires(E_FLUENTS); ;}
    break;

  case 147:
#line 802 "pddl+.yacc"
    { (yyval.t_expression)= new plus_expression((yyvsp[(3) - (5)].t_expression),(yyvsp[(4) - (5)].t_expression)); requires(E_FLUENTS); ;}
    break;

  case 148:
#line 804 "pddl+.yacc"
    { (yyval.t_expression)= new minus_expression((yyvsp[(3) - (5)].t_expression),(yyvsp[(4) - (5)].t_expression)); requires(E_FLUENTS); ;}
    break;

  case 149:
#line 806 "pddl+.yacc"
    { (yyval.t_expression)= new mul_expression((yyvsp[(3) - (5)].t_expression),(yyvsp[(4) - (5)].t_expression)); requires(E_FLUENTS); ;}
    break;

  case 150:
#line 808 "pddl+.yacc"
    { (yyval.t_expression)= new div_expression((yyvsp[(3) - (5)].t_expression),(yyvsp[(4) - (5)].t_expression)); requires(E_FLUENTS); ;}
    break;

  case 151:
#line 809 "pddl+.yacc"
    { (yyval.t_expression)=(yyvsp[(1) - (1)].t_num_expression); ;}
    break;

  case 152:
#line 810 "pddl+.yacc"
    { (yyval.t_expression)= (yyvsp[(1) - (1)].t_func_term); requires(E_FLUENTS); ;}
    break;

  case 153:
#line 815 "pddl+.yacc"
    { (yyval.t_expression)= new mul_expression(new special_val_expr(E_HASHT),(yyvsp[(4) - (5)].t_expression)); ;}
    break;

  case 154:
#line 817 "pddl+.yacc"
    { (yyval.t_expression)= new mul_expression((yyvsp[(3) - (5)].t_expression), new special_val_expr(E_HASHT)); ;}
    break;

  case 155:
#line 819 "pddl+.yacc"
    { (yyval.t_expression)= new special_val_expr(E_HASHT); ;}
    break;

  case 156:
#line 824 "pddl+.yacc"
    { (yyval.t_num_expression)=new int_expression((yyvsp[(1) - (1)].ival));   ;}
    break;

  case 157:
#line 825 "pddl+.yacc"
    { (yyval.t_num_expression)=new float_expression((yyvsp[(1) - (1)].fval)); ;}
    break;

  case 158:
#line 829 "pddl+.yacc"
    { (yyval.t_func_term)=new func_term( current_analysis->func_tab.symbol_get((yyvsp[(2) - (4)].cp)), (yyvsp[(3) - (4)].t_parameter_symbol_list)); delete [] (yyvsp[(2) - (4)].cp); ;}
    break;

  case 159:
#line 832 "pddl+.yacc"
    { (yyval.t_func_term)=new func_term( current_analysis->func_tab.symbol_get((yyvsp[(2) - (4)].cp)), (yyvsp[(3) - (4)].t_parameter_symbol_list)); delete [] (yyvsp[(2) - (4)].cp); ;}
    break;

  case 160:
#line 834 "pddl+.yacc"
    { (yyval.t_func_term)=new func_term( current_analysis->func_tab.symbol_get((yyvsp[(1) - (1)].cp)),
                            new parameter_symbol_list); delete [] (yyvsp[(1) - (1)].cp);;}
    break;

  case 161:
#line 852 "pddl+.yacc"
    { (yyval.t_func_term)=new func_term( current_analysis->func_tab.symbol_get((yyvsp[(2) - (4)].cp)), (yyvsp[(3) - (4)].t_parameter_symbol_list)); delete [] (yyvsp[(2) - (4)].cp); ;}
    break;

  case 162:
#line 854 "pddl+.yacc"
    { (yyval.t_func_term)=new func_term( current_analysis->func_tab.symbol_get((yyvsp[(2) - (4)].cp)), (yyvsp[(3) - (4)].t_parameter_symbol_list)); delete [] (yyvsp[(2) - (4)].cp); ;}
    break;

  case 163:
#line 856 "pddl+.yacc"
    { (yyval.t_func_term)=new func_term( current_analysis->func_tab.symbol_get((yyvsp[(1) - (1)].cp)),
                            new parameter_symbol_list); delete [] (yyvsp[(1) - (1)].cp);;}
    break;

  case 164:
#line 861 "pddl+.yacc"
    { (yyval.t_comparison_op)= E_GREATER; ;}
    break;

  case 165:
#line 862 "pddl+.yacc"
    { (yyval.t_comparison_op)= E_GREATEQ; ;}
    break;

  case 166:
#line 863 "pddl+.yacc"
    { (yyval.t_comparison_op)= E_LESS; ;}
    break;

  case 167:
#line 864 "pddl+.yacc"
    { (yyval.t_comparison_op)= E_LESSEQ; ;}
    break;

  case 168:
#line 865 "pddl+.yacc"
    { (yyval.t_comparison_op)= E_EQUALS; ;}
    break;

  case 169:
#line 878 "pddl+.yacc"
    {(yyval.t_goal)= (yyvsp[(1) - (1)].t_goal);;}
    break;

  case 170:
#line 880 "pddl+.yacc"
    {(yyval.t_goal) = new conj_goal((yyvsp[(3) - (4)].t_goal_list));;}
    break;

  case 171:
#line 883 "pddl+.yacc"
    {(yyval.t_goal)= new qfied_goal(E_FORALL,(yyvsp[(4) - (7)].t_var_symbol_list),(yyvsp[(6) - (7)].t_goal),current_analysis->var_tab_stack.pop());
        requires(E_UNIV_PRECS);;}
    break;

  case 172:
#line 889 "pddl+.yacc"
    {(yyval.t_con_goal) = new preference((yyvsp[(3) - (4)].t_con_goal));requires(E_PREFERENCES);;}
    break;

  case 173:
#line 891 "pddl+.yacc"
    {(yyval.t_con_goal) = new preference((yyvsp[(3) - (5)].cp),(yyvsp[(4) - (5)].t_con_goal));requires(E_PREFERENCES);;}
    break;

  case 174:
#line 893 "pddl+.yacc"
    {(yyval.t_con_goal) = new conj_goal((yyvsp[(3) - (4)].t_goal_list));;}
    break;

  case 175:
#line 896 "pddl+.yacc"
    {(yyval.t_con_goal)= new qfied_goal(E_FORALL,(yyvsp[(4) - (7)].t_var_symbol_list),(yyvsp[(6) - (7)].t_con_goal),current_analysis->var_tab_stack.pop());
                requires(E_UNIV_PRECS);;}
    break;

  case 176:
#line 899 "pddl+.yacc"
    {(yyval.t_con_goal) = (yyvsp[(1) - (1)].t_con_goal);;}
    break;

  case 177:
#line 904 "pddl+.yacc"
    {(yyval.t_con_goal) = new preference((yyvsp[(3) - (4)].t_con_goal));requires(E_PREFERENCES);;}
    break;

  case 178:
#line 906 "pddl+.yacc"
    {(yyval.t_con_goal) = new preference((yyvsp[(3) - (5)].cp),(yyvsp[(4) - (5)].t_con_goal));requires(E_PREFERENCES);;}
    break;

  case 179:
#line 908 "pddl+.yacc"
    {(yyval.t_con_goal) = new conj_goal((yyvsp[(3) - (4)].t_goal_list));;}
    break;

  case 180:
#line 911 "pddl+.yacc"
    {(yyval.t_con_goal)= new qfied_goal(E_FORALL,(yyvsp[(4) - (7)].t_var_symbol_list),(yyvsp[(6) - (7)].t_con_goal),current_analysis->var_tab_stack.pop());
                requires(E_UNIV_PRECS);;}
    break;

  case 181:
#line 917 "pddl+.yacc"
    {(yyval.t_goal_list)=(yyvsp[(1) - (2)].t_goal_list); (yyvsp[(1) - (2)].t_goal_list)->push_back((yyvsp[(2) - (2)].t_con_goal));;}
    break;

  case 182:
#line 919 "pddl+.yacc"
    {(yyval.t_goal_list)= new goal_list;;}
    break;

  case 183:
#line 924 "pddl+.yacc"
    {(yyval.t_goal)= new preference((yyvsp[(3) - (4)].t_goal)); requires(E_PREFERENCES);;}
    break;

  case 184:
#line 926 "pddl+.yacc"
    {(yyval.t_goal)= new preference((yyvsp[(3) - (5)].cp),(yyvsp[(4) - (5)].t_goal)); requires(E_PREFERENCES);;}
    break;

  case 185:
#line 928 "pddl+.yacc"
    {(yyval.t_goal)=(yyvsp[(1) - (1)].t_goal);;}
    break;

  case 186:
#line 933 "pddl+.yacc"
    {(yyval.t_goal_list) = (yyvsp[(1) - (2)].t_goal_list); (yyval.t_goal_list)->push_back((yyvsp[(2) - (2)].t_con_goal));;}
    break;

  case 187:
#line 935 "pddl+.yacc"
    {(yyval.t_goal_list) = new goal_list;;}
    break;

  case 188:
#line 940 "pddl+.yacc"
    {(yyval.t_con_goal)= new conj_goal((yyvsp[(3) - (4)].t_goal_list));;}
    break;

  case 189:
#line 942 "pddl+.yacc"
    {(yyval.t_con_goal) = new qfied_goal(E_FORALL,(yyvsp[(4) - (7)].t_var_symbol_list),(yyvsp[(6) - (7)].t_con_goal),current_analysis->var_tab_stack.pop());
        requires(E_UNIV_PRECS);;}
    break;

  case 190:
#line 945 "pddl+.yacc"
    {(yyval.t_con_goal) = new constraint_goal(E_ATEND,(yyvsp[(3) - (4)].t_goal));;}
    break;

  case 191:
#line 947 "pddl+.yacc"
    {(yyval.t_con_goal) = new constraint_goal(E_ALWAYS,(yyvsp[(3) - (4)].t_goal));;}
    break;

  case 192:
#line 949 "pddl+.yacc"
    {(yyval.t_con_goal) = new constraint_goal(E_SOMETIME,(yyvsp[(3) - (4)].t_goal));;}
    break;

  case 193:
#line 951 "pddl+.yacc"
    {(yyval.t_con_goal) = new constraint_goal(E_WITHIN,(yyvsp[(4) - (5)].t_goal),NULL,(yyvsp[(3) - (5)].t_num_expression)->double_value(),0.0);delete (yyvsp[(3) - (5)].t_num_expression);;}
    break;

  case 194:
#line 953 "pddl+.yacc"
    {(yyval.t_con_goal) = new constraint_goal(E_ATMOSTONCE,(yyvsp[(3) - (4)].t_goal));;}
    break;

  case 195:
#line 955 "pddl+.yacc"
    {(yyval.t_con_goal) = new constraint_goal(E_SOMETIMEAFTER,(yyvsp[(4) - (5)].t_goal),(yyvsp[(3) - (5)].t_goal));;}
    break;

  case 196:
#line 957 "pddl+.yacc"
    {(yyval.t_con_goal) = new constraint_goal(E_SOMETIMEBEFORE,(yyvsp[(4) - (5)].t_goal),(yyvsp[(3) - (5)].t_goal));;}
    break;

  case 197:
#line 959 "pddl+.yacc"
    {(yyval.t_con_goal) = new constraint_goal(E_ALWAYSWITHIN,(yyvsp[(5) - (6)].t_goal),(yyvsp[(4) - (6)].t_goal),(yyvsp[(3) - (6)].t_num_expression)->double_value(),0.0);delete (yyvsp[(3) - (6)].t_num_expression);;}
    break;

  case 198:
#line 961 "pddl+.yacc"
    {(yyval.t_con_goal) = new constraint_goal(E_HOLDDURING,(yyvsp[(5) - (6)].t_goal),NULL,(yyvsp[(4) - (6)].t_num_expression)->double_value(),(yyvsp[(3) - (6)].t_num_expression)->double_value());delete (yyvsp[(3) - (6)].t_num_expression);delete (yyvsp[(4) - (6)].t_num_expression);;}
    break;

  case 199:
#line 963 "pddl+.yacc"
    {(yyval.t_con_goal) = new constraint_goal(E_HOLDAFTER,(yyvsp[(4) - (5)].t_goal),NULL,0.0,(yyvsp[(3) - (5)].t_num_expression)->double_value());delete (yyvsp[(3) - (5)].t_num_expression);;}
    break;

  case 200:
#line 968 "pddl+.yacc"
    {(yyval.t_goal)= new simple_goal((yyvsp[(1) - (1)].t_proposition),E_POS);;}
    break;

  case 201:
#line 970 "pddl+.yacc"
    {(yyval.t_goal)= new neg_goal((yyvsp[(3) - (4)].t_goal));simple_goal * s = dynamic_cast<simple_goal *>((yyvsp[(3) - (4)].t_goal));
       if(s && s->getProp()->head->getName()=="=") {requires(E_EQUALITY);} 
       else{requires(E_NEGATIVE_PRECONDITIONS);};;}
    break;

  case 202:
#line 974 "pddl+.yacc"
    {(yyval.t_goal)= new conj_goal((yyvsp[(3) - (4)].t_goal_list));;}
    break;

  case 203:
#line 976 "pddl+.yacc"
    {(yyval.t_goal)= new disj_goal((yyvsp[(3) - (4)].t_goal_list));
        requires(E_DISJUNCTIVE_PRECONDS);;}
    break;

  case 204:
#line 979 "pddl+.yacc"
    {(yyval.t_goal)= new imply_goal((yyvsp[(3) - (5)].t_goal),(yyvsp[(4) - (5)].t_goal));
        requires(E_DISJUNCTIVE_PRECONDS);;}
    break;

  case 205:
#line 983 "pddl+.yacc"
    {(yyval.t_goal)= new qfied_goal((yyvsp[(2) - (7)].t_quantifier),(yyvsp[(4) - (7)].t_var_symbol_list),(yyvsp[(6) - (7)].t_goal),current_analysis->var_tab_stack.pop());;}
    break;

  case 206:
#line 985 "pddl+.yacc"
    {(yyval.t_goal)= new comparison((yyvsp[(2) - (5)].t_comparison_op),(yyvsp[(3) - (5)].t_expression),(yyvsp[(4) - (5)].t_expression)); 
        requires(E_FLUENTS);;}
    break;

  case 207:
#line 991 "pddl+.yacc"
    {(yyval.t_goal_list)=(yyvsp[(1) - (2)].t_goal_list); (yyvsp[(1) - (2)].t_goal_list)->push_back((yyvsp[(2) - (2)].t_goal));;}
    break;

  case 208:
#line 993 "pddl+.yacc"
    {(yyval.t_goal_list)= new goal_list;;}
    break;

  case 209:
#line 998 "pddl+.yacc"
    {(yyval.t_goal_list)=(yyvsp[(1) - (2)].t_goal_list); (yyvsp[(1) - (2)].t_goal_list)->push_back((yyvsp[(2) - (2)].t_goal));;}
    break;

  case 210:
#line 1000 "pddl+.yacc"
    {(yyval.t_goal_list)= new goal_list;;}
    break;

  case 211:
#line 1004 "pddl+.yacc"
    {(yyval.t_quantifier)=(yyvsp[(1) - (1)].t_quantifier);;}
    break;

  case 212:
#line 1005 "pddl+.yacc"
    {(yyval.t_quantifier)=(yyvsp[(1) - (1)].t_quantifier);;}
    break;

  case 213:
#line 1010 "pddl+.yacc"
    {(yyval.t_quantifier)=E_FORALL; 
        current_analysis->var_tab_stack.push(
        		current_analysis->buildForallTab());;}
    break;

  case 214:
#line 1017 "pddl+.yacc"
    {(yyval.t_quantifier)=E_EXISTS;
        current_analysis->var_tab_stack.push(
        	current_analysis->buildExistsTab());;}
    break;

  case 215:
#line 1024 "pddl+.yacc"
    {(yyval.t_proposition)=new proposition((yyvsp[(2) - (4)].t_pred_symbol),(yyvsp[(3) - (4)].t_parameter_symbol_list));;}
    break;

  case 216:
#line 1029 "pddl+.yacc"
    {(yyval.t_proposition) = new proposition((yyvsp[(2) - (4)].t_pred_symbol),(yyvsp[(3) - (4)].t_var_symbol_list));;}
    break;

  case 217:
#line 1034 "pddl+.yacc"
    {(yyval.t_proposition)=new proposition((yyvsp[(2) - (4)].t_pred_symbol),(yyvsp[(3) - (4)].t_parameter_symbol_list));;}
    break;

  case 218:
#line 1039 "pddl+.yacc"
    {(yyval.t_pred_decl_list)= (yyvsp[(3) - (4)].t_pred_decl_list);;}
    break;

  case 219:
#line 1041 "pddl+.yacc"
    {yyerrok; (yyval.t_pred_decl_list)=NULL;
	 log_error(E_FATAL,"Syntax error in (:predicates ...)");
	;}
    break;

  case 220:
#line 1048 "pddl+.yacc"
    {(yyval.t_func_decl_list)= (yyvsp[(3) - (4)].t_func_decl_list);;}
    break;

  case 221:
#line 1050 "pddl+.yacc"
    {yyerrok; (yyval.t_func_decl_list)=NULL;
	 log_error(E_FATAL,"Syntax error in (:functions ...)");
	;}
    break;

  case 222:
#line 1057 "pddl+.yacc"
    {(yyval.t_con_goal) = (yyvsp[(3) - (4)].t_con_goal);;}
    break;

  case 223:
#line 1059 "pddl+.yacc"
    {yyerrok; (yyval.t_con_goal)=NULL;
      log_error(E_FATAL,"Syntax error in (:constraints ...)");
      ;}
    break;

  case 224:
#line 1066 "pddl+.yacc"
    {(yyval.t_con_goal) = (yyvsp[(3) - (4)].t_con_goal);;}
    break;

  case 225:
#line 1068 "pddl+.yacc"
    {yyerrok; (yyval.t_con_goal)=NULL;
      log_error(E_FATAL,"Syntax error in (:constraints ...)");
      ;}
    break;

  case 226:
#line 1074 "pddl+.yacc"
    { (yyval.t_structure_store)=(yyvsp[(1) - (2)].t_structure_store); (yyval.t_structure_store)->push_back((yyvsp[(2) - (2)].t_structure_def)); ;}
    break;

  case 227:
#line 1075 "pddl+.yacc"
    { (yyval.t_structure_store)= new structure_store; (yyval.t_structure_store)->push_back((yyvsp[(1) - (1)].t_structure_def)); ;}
    break;

  case 228:
#line 1079 "pddl+.yacc"
    { (yyval.t_structure_def)= (yyvsp[(1) - (1)].t_action_def); ;}
    break;

  case 229:
#line 1080 "pddl+.yacc"
    { (yyval.t_structure_def)= (yyvsp[(1) - (1)].t_event_def); requires(E_TIME); ;}
    break;

  case 230:
#line 1081 "pddl+.yacc"
    { (yyval.t_structure_def)= (yyvsp[(1) - (1)].t_process_def); requires(E_TIME); ;}
    break;

  case 231:
#line 1082 "pddl+.yacc"
    { (yyval.t_structure_def)= (yyvsp[(1) - (1)].t_durative_action_def); requires(E_DURATIVE_ACTIONS); ;}
    break;

  case 232:
#line 1083 "pddl+.yacc"
    { (yyval.t_structure_def)= (yyvsp[(1) - (1)].t_derivation_rule); requires(E_DERIVED_PREDICATES);;}
    break;

  case 233:
#line 1087 "pddl+.yacc"
    {(yyval.t_dummy)= 0; 
    	current_analysis->var_tab_stack.push(
    					current_analysis->buildRuleTab());;}
    break;

  case 234:
#line 1098 "pddl+.yacc"
    {(yyval.t_derivation_rule) = new derivation_rule((yyvsp[(3) - (5)].t_proposition),(yyvsp[(4) - (5)].t_goal),current_analysis->var_tab_stack.pop());;}
    break;

  case 235:
#line 1110 "pddl+.yacc"
    { (yyval.t_action_def)= current_analysis->buildAction(current_analysis->op_tab.symbol_put((yyvsp[(3) - (12)].cp)),
			(yyvsp[(6) - (12)].t_var_symbol_list),(yyvsp[(9) - (12)].t_goal),(yyvsp[(11) - (12)].t_effect_lists),
			current_analysis->var_tab_stack.pop()); delete [] (yyvsp[(3) - (12)].cp); ;}
    break;

  case 236:
#line 1114 "pddl+.yacc"
    {yyerrok; 
	 log_error(E_FATAL,"Syntax error in action declaration.");
	 (yyval.t_action_def)= NULL; ;}
    break;

  case 237:
#line 1127 "pddl+.yacc"
    {(yyval.t_event_def)= current_analysis->buildEvent(current_analysis->op_tab.symbol_put((yyvsp[(3) - (12)].cp)),
		   (yyvsp[(6) - (12)].t_var_symbol_list),(yyvsp[(9) - (12)].t_goal),(yyvsp[(11) - (12)].t_effect_lists),
		   current_analysis->var_tab_stack.pop()); delete [] (yyvsp[(3) - (12)].cp);;}
    break;

  case 238:
#line 1132 "pddl+.yacc"
    {yyerrok; 
	 log_error(E_FATAL,"Syntax error in event declaration.");
	 (yyval.t_event_def)= NULL; ;}
    break;

  case 239:
#line 1144 "pddl+.yacc"
    {(yyval.t_process_def)= current_analysis->buildProcess(current_analysis->op_tab.symbol_put((yyvsp[(3) - (12)].cp)),
		     (yyvsp[(6) - (12)].t_var_symbol_list),(yyvsp[(9) - (12)].t_goal),(yyvsp[(11) - (12)].t_effect_lists),
                     current_analysis->var_tab_stack.pop()); delete [] (yyvsp[(3) - (12)].cp);;}
    break;

  case 240:
#line 1148 "pddl+.yacc"
    {yyerrok; 
	 log_error(E_FATAL,"Syntax error in process declaration.");
	 (yyval.t_process_def)= NULL; ;}
    break;

  case 241:
#line 1160 "pddl+.yacc"
    { (yyval.t_durative_action_def)= (yyvsp[(10) - (11)].t_durative_action_def);
      (yyval.t_durative_action_def)->name= current_analysis->op_tab.symbol_put((yyvsp[(3) - (11)].cp));
      (yyval.t_durative_action_def)->symtab= current_analysis->var_tab_stack.pop();
      (yyval.t_durative_action_def)->parameters= (yyvsp[(6) - (11)].t_var_symbol_list);
      (yyval.t_durative_action_def)->dur_constraint= (yyvsp[(9) - (11)].t_goal); 
      delete [] (yyvsp[(3) - (11)].cp);
    ;}
    break;

  case 242:
#line 1169 "pddl+.yacc"
    {yyerrok; 
	 log_error(E_FATAL,"Syntax error in durative-action declaration.");
	 (yyval.t_durative_action_def)= NULL; ;}
    break;

  case 243:
#line 1176 "pddl+.yacc"
    {(yyval.t_durative_action_def)=(yyvsp[(1) - (3)].t_durative_action_def); (yyval.t_durative_action_def)->effects=(yyvsp[(3) - (3)].t_effect_lists);;}
    break;

  case 244:
#line 1178 "pddl+.yacc"
    {(yyval.t_durative_action_def)=(yyvsp[(1) - (3)].t_durative_action_def); (yyval.t_durative_action_def)->precondition=(yyvsp[(3) - (3)].t_goal);;}
    break;

  case 245:
#line 1179 "pddl+.yacc"
    {(yyval.t_durative_action_def)= current_analysis->buildDurativeAction();;}
    break;

  case 246:
#line 1184 "pddl+.yacc"
    { (yyval.t_goal)=(yyvsp[(1) - (1)].t_goal); ;}
    break;

  case 247:
#line 1186 "pddl+.yacc"
    { (yyval.t_goal)= new conj_goal((yyvsp[(3) - (4)].t_goal_list)); ;}
    break;

  case 248:
#line 1191 "pddl+.yacc"
    { (yyval.t_goal_list)=(yyvsp[(1) - (2)].t_goal_list); (yyval.t_goal_list)->push_back((yyvsp[(2) - (2)].t_goal)); ;}
    break;

  case 249:
#line 1193 "pddl+.yacc"
    { (yyval.t_goal_list)= new goal_list; ;}
    break;

  case 250:
#line 1198 "pddl+.yacc"
    {(yyval.t_goal)= new timed_goal((yyvsp[(3) - (4)].t_goal),E_AT_START);;}
    break;

  case 251:
#line 1200 "pddl+.yacc"
    {(yyval.t_goal)= new timed_goal((yyvsp[(3) - (4)].t_goal),E_AT_END);;}
    break;

  case 252:
#line 1202 "pddl+.yacc"
    {(yyval.t_goal)= new timed_goal((yyvsp[(3) - (4)].t_goal),E_OVER_ALL);;}
    break;

  case 253:
#line 1204 "pddl+.yacc"
    {timed_goal * tg = dynamic_cast<timed_goal *>((yyvsp[(4) - (5)].t_goal));
		(yyval.t_goal) = new timed_goal(new preference((yyvsp[(3) - (5)].cp),tg->clearGoal()),tg->getTime());
			delete tg;
			requires(E_PREFERENCES);;}
    break;

  case 254:
#line 1209 "pddl+.yacc"
    {(yyval.t_goal) = new preference((yyvsp[(3) - (4)].t_goal));requires(E_PREFERENCES);;}
    break;

  case 255:
#line 1213 "pddl+.yacc"
    {(yyval.t_dummy)= 0; current_analysis->var_tab_stack.push(
    				current_analysis->buildOpTab());;}
    break;

  case 256:
#line 1218 "pddl+.yacc"
    {(yyval.t_pddl_req_flag)= E_EQUALITY;;}
    break;

  case 257:
#line 1219 "pddl+.yacc"
    {(yyval.t_pddl_req_flag)= E_STRIPS;;}
    break;

  case 258:
#line 1221 "pddl+.yacc"
    {(yyval.t_pddl_req_flag)= E_TYPING;;}
    break;

  case 259:
#line 1223 "pddl+.yacc"
    {(yyval.t_pddl_req_flag)= E_NEGATIVE_PRECONDITIONS;;}
    break;

  case 260:
#line 1225 "pddl+.yacc"
    {(yyval.t_pddl_req_flag)= E_DISJUNCTIVE_PRECONDS;;}
    break;

  case 261:
#line 1226 "pddl+.yacc"
    {(yyval.t_pddl_req_flag)= E_EXT_PRECS;;}
    break;

  case 262:
#line 1227 "pddl+.yacc"
    {(yyval.t_pddl_req_flag)= E_UNIV_PRECS;;}
    break;

  case 263:
#line 1228 "pddl+.yacc"
    {(yyval.t_pddl_req_flag)= E_COND_EFFS;;}
    break;

  case 264:
#line 1229 "pddl+.yacc"
    {(yyval.t_pddl_req_flag)= E_FLUENTS;;}
    break;

  case 265:
#line 1231 "pddl+.yacc"
    {(yyval.t_pddl_req_flag)= E_DURATIVE_ACTIONS;;}
    break;

  case 266:
#line 1232 "pddl+.yacc"
    {(yyval.t_pddl_req_flag)= E_TIME |
                      E_FLUENTS |
                      E_DURATIVE_ACTIONS; ;}
    break;

  case 267:
#line 1236 "pddl+.yacc"
    {(yyval.t_pddl_req_flag)= E_STRIPS |
		      E_TYPING | 
		      E_NEGATIVE_PRECONDITIONS |
		      E_DISJUNCTIVE_PRECONDS |
		      E_EQUALITY |
		      E_EXT_PRECS |
		      E_UNIV_PRECS |
		      E_COND_EFFS;;}
    break;

  case 268:
#line 1245 "pddl+.yacc"
    {(yyval.t_pddl_req_flag)= E_EXT_PRECS |
		      E_UNIV_PRECS;;}
    break;

  case 269:
#line 1249 "pddl+.yacc"
    {(yyval.t_pddl_req_flag)= E_DURATION_INEQUALITIES;;}
    break;

  case 270:
#line 1252 "pddl+.yacc"
    {(yyval.t_pddl_req_flag)= E_CONTINUOUS_EFFECTS;;}
    break;

  case 271:
#line 1254 "pddl+.yacc"
    {(yyval.t_pddl_req_flag) = E_DERIVED_PREDICATES;;}
    break;

  case 272:
#line 1256 "pddl+.yacc"
    {(yyval.t_pddl_req_flag) = E_TIMED_INITIAL_LITERALS;;}
    break;

  case 273:
#line 1258 "pddl+.yacc"
    {(yyval.t_pddl_req_flag) = E_PREFERENCES;;}
    break;

  case 274:
#line 1260 "pddl+.yacc"
    {(yyval.t_pddl_req_flag) = E_CONSTRAINTS;;}
    break;

  case 275:
#line 1262 "pddl+.yacc"
    {log_error(E_WARNING,"Unrecognised requirements declaration ");
       (yyval.t_pddl_req_flag)= 0; delete [] (yyvsp[(1) - (1)].cp);;}
    break;

  case 276:
#line 1268 "pddl+.yacc"
    {(yyval.t_const_symbol_list)=(yyvsp[(3) - (4)].t_const_symbol_list);;}
    break;

  case 277:
#line 1272 "pddl+.yacc"
    {(yyval.t_type_list)=(yyvsp[(3) - (4)].t_type_list); requires(E_TYPING);;}
    break;

  case 278:
#line 1282 "pddl+.yacc"
    {(yyval.t_problem)=(yyvsp[(11) - (12)].t_problem); (yyval.t_problem)->name = (yyvsp[(5) - (12)].cp); (yyval.t_problem)->domain_name = (yyvsp[(9) - (12)].cp);;}
    break;

  case 279:
#line 1284 "pddl+.yacc"
    {yyerrok; (yyval.t_problem)=NULL;
       	log_error(E_FATAL,"Syntax error in problem definition."); ;}
    break;

  case 280:
#line 1290 "pddl+.yacc"
    {(yyval.t_problem)=(yyvsp[(2) - (2)].t_problem); (yyval.t_problem)->req= (yyvsp[(1) - (2)].t_pddl_req_flag);;}
    break;

  case 281:
#line 1291 "pddl+.yacc"
    {(yyval.t_problem)=(yyvsp[(2) - (2)].t_problem); (yyval.t_problem)->objects= (yyvsp[(1) - (2)].t_const_symbol_list);;}
    break;

  case 282:
#line 1292 "pddl+.yacc"
    {(yyval.t_problem)=(yyvsp[(2) - (2)].t_problem); (yyval.t_problem)->initial_state= (yyvsp[(1) - (2)].t_effect_lists);;}
    break;

  case 283:
#line 1293 "pddl+.yacc"
    {(yyval.t_problem)=(yyvsp[(2) - (2)].t_problem); (yyval.t_problem)->the_goal= (yyvsp[(1) - (2)].t_goal);;}
    break;

  case 284:
#line 1295 "pddl+.yacc"
    {(yyval.t_problem)=(yyvsp[(2) - (2)].t_problem); (yyval.t_problem)->constraints = (yyvsp[(1) - (2)].t_con_goal);;}
    break;

  case 285:
#line 1296 "pddl+.yacc"
    {(yyval.t_problem)=(yyvsp[(2) - (2)].t_problem); (yyval.t_problem)->metric= (yyvsp[(1) - (2)].t_metric);;}
    break;

  case 286:
#line 1297 "pddl+.yacc"
    {(yyval.t_problem)=(yyvsp[(2) - (2)].t_problem); (yyval.t_problem)->length= (yyvsp[(1) - (2)].t_length_spec);;}
    break;

  case 287:
#line 1298 "pddl+.yacc"
    {(yyval.t_problem)=new problem;;}
    break;

  case 288:
#line 1301 "pddl+.yacc"
    {(yyval.t_const_symbol_list)=(yyvsp[(3) - (4)].t_const_symbol_list);;}
    break;

  case 289:
#line 1304 "pddl+.yacc"
    {(yyval.t_effect_lists)=(yyvsp[(3) - (4)].t_effect_lists);;}
    break;

  case 290:
#line 1307 "pddl+.yacc"
    {(yyval.vtab) = current_analysis->buildOpTab();;}
    break;

  case 291:
#line 1310 "pddl+.yacc"
    {(yyval.t_goal)=(yyvsp[(3) - (4)].t_goal);delete (yyvsp[(2) - (4)].vtab);;}
    break;

  case 292:
#line 1315 "pddl+.yacc"
    { (yyval.t_metric)= new metric_spec((yyvsp[(3) - (5)].t_optimization),(yyvsp[(4) - (5)].t_expression)); ;}
    break;

  case 293:
#line 1317 "pddl+.yacc"
    {yyerrok; 
        log_error(E_FATAL,"Syntax error in metric declaration.");
        (yyval.t_metric)= NULL; ;}
    break;

  case 294:
#line 1324 "pddl+.yacc"
    {(yyval.t_length_spec)= new length_spec(E_BOTH,(yyvsp[(4) - (7)].ival),(yyvsp[(6) - (7)].ival));;}
    break;

  case 295:
#line 1327 "pddl+.yacc"
    {(yyval.t_length_spec) = new length_spec(E_SERIAL,(yyvsp[(4) - (5)].ival));;}
    break;

  case 296:
#line 1331 "pddl+.yacc"
    {(yyval.t_length_spec) = new length_spec(E_PARALLEL,(yyvsp[(4) - (5)].ival));;}
    break;

  case 297:
#line 1337 "pddl+.yacc"
    {(yyval.t_optimization)= E_MINIMIZE;;}
    break;

  case 298:
#line 1338 "pddl+.yacc"
    {(yyval.t_optimization)= E_MAXIMIZE;;}
    break;

  case 299:
#line 1343 "pddl+.yacc"
    {(yyval.t_expression)= (yyvsp[(2) - (3)].t_expression);;}
    break;

  case 300:
#line 1344 "pddl+.yacc"
    {(yyval.t_expression)= (yyvsp[(1) - (1)].t_func_term);;}
    break;

  case 301:
#line 1345 "pddl+.yacc"
    {(yyval.t_expression)= (yyvsp[(1) - (1)].t_num_expression);;}
    break;

  case 302:
#line 1346 "pddl+.yacc"
    { (yyval.t_expression)= new special_val_expr(E_TOTAL_TIME); ;}
    break;

  case 303:
#line 1348 "pddl+.yacc"
    {(yyval.t_expression) = new violation_term((yyvsp[(3) - (4)].cp));;}
    break;

  case 304:
#line 1349 "pddl+.yacc"
    { (yyval.t_expression)= new special_val_expr(E_TOTAL_TIME); ;}
    break;

  case 305:
#line 1353 "pddl+.yacc"
    { (yyval.t_expression)= new plus_expression((yyvsp[(2) - (3)].t_expression),(yyvsp[(3) - (3)].t_expression)); ;}
    break;

  case 306:
#line 1354 "pddl+.yacc"
    { (yyval.t_expression)= new minus_expression((yyvsp[(2) - (3)].t_expression),(yyvsp[(3) - (3)].t_expression)); ;}
    break;

  case 307:
#line 1355 "pddl+.yacc"
    { (yyval.t_expression)= new mul_expression((yyvsp[(2) - (3)].t_expression),(yyvsp[(3) - (3)].t_expression)); ;}
    break;

  case 308:
#line 1356 "pddl+.yacc"
    { (yyval.t_expression)= new div_expression((yyvsp[(2) - (3)].t_expression),(yyvsp[(3) - (3)].t_expression)); ;}
    break;

  case 309:
#line 1360 "pddl+.yacc"
    {(yyval.t_expression) = (yyvsp[(1) - (1)].t_expression);;}
    break;

  case 310:
#line 1362 "pddl+.yacc"
    {(yyval.t_expression) = new plus_expression((yyvsp[(1) - (2)].t_expression),(yyvsp[(2) - (2)].t_expression));;}
    break;

  case 311:
#line 1366 "pddl+.yacc"
    {(yyval.t_expression) = (yyvsp[(1) - (1)].t_expression);;}
    break;

  case 312:
#line 1368 "pddl+.yacc"
    {(yyval.t_expression) = new mul_expression((yyvsp[(1) - (2)].t_expression),(yyvsp[(2) - (2)].t_expression));;}
    break;

  case 313:
#line 1374 "pddl+.yacc"
    {(yyval.t_plan)= (yyvsp[(2) - (2)].t_plan); 
         (yyval.t_plan)->push_front((yyvsp[(1) - (2)].t_step)); ;}
    break;

  case 314:
#line 1377 "pddl+.yacc"
    {(yyval.t_plan) = (yyvsp[(3) - (3)].t_plan);(yyval.t_plan)->insertTime((yyvsp[(2) - (3)].fval));;}
    break;

  case 315:
#line 1379 "pddl+.yacc"
    {(yyval.t_plan) = (yyvsp[(3) - (3)].t_plan);(yyval.t_plan)->insertTime((yyvsp[(2) - (3)].ival));;}
    break;

  case 316:
#line 1381 "pddl+.yacc"
    {(yyval.t_plan)= new plan;;}
    break;

  case 317:
#line 1386 "pddl+.yacc"
    {(yyval.t_step)=(yyvsp[(3) - (3)].t_step); 
         (yyval.t_step)->start_time_given=1; 
         (yyval.t_step)->start_time=(yyvsp[(1) - (3)].fval);;}
    break;

  case 318:
#line 1390 "pddl+.yacc"
    {(yyval.t_step)=(yyvsp[(1) - (1)].t_step);
	 (yyval.t_step)->start_time_given=0;;}
    break;

  case 319:
#line 1396 "pddl+.yacc"
    {(yyval.t_step)= (yyvsp[(1) - (4)].t_step); 
	 (yyval.t_step)->duration_given=1;
         (yyval.t_step)->duration= (yyvsp[(3) - (4)].fval);;}
    break;

  case 320:
#line 1400 "pddl+.yacc"
    {(yyval.t_step)= (yyvsp[(1) - (1)].t_step);
         (yyval.t_step)->duration_given=0;;}
    break;

  case 321:
#line 1406 "pddl+.yacc"
    {(yyval.t_step)= new plan_step( 
              current_analysis->op_tab.symbol_get((yyvsp[(2) - (4)].cp)), 
	      (yyvsp[(3) - (4)].t_const_symbol_list)); delete [] (yyvsp[(2) - (4)].cp);
      ;}
    break;

  case 322:
#line 1413 "pddl+.yacc"
    {(yyval.fval)= (yyvsp[(1) - (1)].fval);;}
    break;

  case 323:
#line 1414 "pddl+.yacc"
    {(yyval.fval)= (float) (yyvsp[(1) - (1)].ival);;}
    break;


/* Line 1267 of yacc.c.  */
#line 4149 "pddl+.cpp"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 1417 "pddl+.yacc"


#include <cstdio>
#include <iostream>
int line_no= 1;
using std::istream;
#include "lex.yy.cc"

namespace PDDL2UPMurphi_parser {
extern yyFlexLexer* yfl;
};


int yyerror(char * s)
{
    return 0;
}

int yylex()
{
    return yfl->yylex();
}

