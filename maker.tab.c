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
     BGIN = 258,
     END = 259,
     CBEGIN = 260,
     CEND = 261,
     REAL = 262,
     ID = 263,
     TYPE = 264,
     Class_ID = 265,
     Class_Type = 266,
     IF = 267,
     ELSE = 268,
     WHILE = 269,
     FOR = 270,
     CMP = 271,
     NR = 272,
     CONNECT = 273,
     VOID = 274,
     RETURN = 275,
     ASSIGN = 276,
     TRUTH_VALUE = 277,
     PRINT = 278,
     TYPE_FUNCTION = 279,
     STRING = 280,
     CHAR = 281
   };
#endif
/* Tokens.  */
#define BGIN 258
#define END 259
#define CBEGIN 260
#define CEND 261
#define REAL 262
#define ID 263
#define TYPE 264
#define Class_ID 265
#define Class_Type 266
#define IF 267
#define ELSE 268
#define WHILE 269
#define FOR 270
#define CMP 271
#define NR 272
#define CONNECT 273
#define VOID 274
#define RETURN 275
#define ASSIGN 276
#define TRUTH_VALUE 277
#define PRINT 278
#define TYPE_FUNCTION 279
#define STRING 280
#define CHAR 281




/* Copy the first part of user declarations.  */
#line 1 "maker.y"

#include <iostream>
#include <cstring>
#include <vector>
#include <stack>
#include <stdbool.h>
#include <fstream>
#include "ASTNode.h"
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
extern int yylex();
void yyerror(const char * s);
class SymTable* current;
class SymTable* domeniul_caruia_ii_apartine_varabila;
class SymTable* functia_apelata;
std::vector<SymTable*> Vector_Tabele;
int errorCount = 0;
std::stack<IdInfo*> param_checker;
std::stack<IdInfo*>Temp_stack;
std::vector<int>array_size;
string array_name;
string nr;


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
#line 26 "maker.y"
{
     char* string;
     class ASTNode* ListOfNodes;
}
/* Line 193 of yacc.c.  */
#line 178 "maker.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */
#line 31 "maker.y"

     

/* Line 216 of yacc.c.  */
#line 193 "maker.tab.c"

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
#define YYFINAL  24
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   283

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  66
/* YYNRULES -- Number of rules.  */
#define YYNRULES  129
/* YYNRULES -- Number of states.  */
#define YYNSTATES  243

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   281

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    31,     2,     2,
      33,    34,    29,    27,    39,    28,    37,    30,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    38,    32,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    35,     2,    36,     2,     2,     2,     2,     2,     2,
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
      25,    26
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,    11,    12,    13,    19,    23,    26,
      29,    31,    33,    35,    36,    39,    43,    46,    48,    49,
      63,    64,    65,    77,    80,    82,    84,    86,    90,    95,
      96,   102,   106,   108,   110,   112,   115,   119,   122,   126,
     128,   129,   132,   136,   138,   140,   142,   144,   146,   148,
     150,   152,   154,   156,   158,   160,   162,   164,   166,   168,
     172,   176,   182,   188,   192,   196,   197,   201,   202,   208,
     209,   217,   218,   219,   229,   230,   231,   232,   233,   234,
     251,   252,   253,   268,   273,   278,   280,   282,   284,   286,
     290,   298,   300,   304,   312,   314,   317,   318,   327,   329,
     330,   332,   335,   337,   338,   343,   346,   348,   349,   351,
     355,   358,   360,   361,   363,   367,   371,   375,   379,   383,
     387,   391,   393,   395,   397,   399,   403,   405,   407,   409
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      41,     0,    -1,    91,    94,    45,    42,    -1,    45,    42,
      -1,    -1,    -1,     3,    43,    62,    44,     4,    -1,    52,
      46,    47,    -1,    52,    47,    -1,    52,    46,    -1,    52,
      -1,    47,    -1,    46,    -1,    -1,    67,    32,    -1,    67,
      32,    46,    -1,    47,    48,    -1,    48,    -1,    -1,     9,
       8,    49,    33,   100,    34,     5,    63,    20,   105,    32,
       6,    32,    -1,    -1,    -1,    19,     8,    50,    33,   100,
      34,     5,    64,    51,     6,    32,    -1,    52,    53,    -1,
      53,    -1,    54,    -1,    55,    -1,     9,     8,    32,    -1,
       9,     8,    56,    32,    -1,    -1,    35,    58,    36,    57,
      56,    -1,    35,    58,    36,    -1,   105,    -1,    60,    -1,
      61,    -1,     9,     8,    -1,     9,     8,    56,    -1,    66,
      32,    -1,    66,    32,    62,    -1,    64,    -1,    -1,    65,
      32,    -1,    65,    32,    64,    -1,    67,    -1,    70,    -1,
      73,    -1,    76,    -1,    82,    -1,    88,    -1,    85,    -1,
      86,    -1,    67,    -1,    70,    -1,    73,    -1,    76,    -1,
      82,    -1,    88,    -1,    85,    -1,    86,    -1,     8,    21,
     105,    -1,     8,    21,    89,    -1,     8,    37,     8,    21,
     105,    -1,     8,    37,     8,    21,    89,    -1,    68,    21,
     105,    -1,    68,    21,    89,    -1,    -1,     8,    69,    56,
      -1,    -1,     8,    71,    33,   103,    34,    -1,    -1,     8,
      37,     8,    72,    33,   103,    34,    -1,    -1,    -1,    14,
      33,    89,    34,     5,    74,    64,    75,     6,    -1,    -1,
      -1,    -1,    -1,    -1,    12,    33,    89,    34,     5,    77,
      64,    78,     6,    79,    13,     5,    80,    63,    81,     6,
      -1,    -1,    -1,    15,    33,    67,    32,    89,    32,    87,
      32,    34,     5,    83,    64,    84,     6,    -1,    23,    33,
     105,    34,    -1,    24,    33,   105,    34,    -1,    67,    -1,
     105,    -1,    59,    -1,    96,    -1,    33,    89,    34,    -1,
      33,    89,    34,    18,    33,    89,    34,    -1,    90,    -1,
     105,    16,   105,    -1,    33,   105,    34,    18,    33,   105,
      34,    -1,    92,    -1,    91,    92,    -1,    -1,    11,    10,
      38,     5,    93,    45,     6,    32,    -1,    95,    -1,    -1,
      97,    -1,    95,    97,    -1,    99,    -1,    -1,    10,     8,
      98,    32,    -1,    10,     8,    -1,   101,    -1,    -1,   102,
      -1,   101,    39,   102,    -1,     9,     8,    -1,   104,    -1,
      -1,   105,    -1,   104,    39,   105,    -1,   105,    27,   105,
      -1,   105,    29,   105,    -1,   105,    28,   105,    -1,   105,
      30,   105,    -1,   105,    31,   105,    -1,    33,   105,    34,
      -1,    22,    -1,    17,    -1,     7,    -1,     8,    -1,     8,
      37,     8,    -1,    68,    -1,    70,    -1,    25,    -1,    26,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    42,    42,    43,    47,    54,    46,    60,    61,    62,
      63,    64,    65,    66,    68,    69,    70,    71,    74,    73,
      98,   112,    97,   118,   119,   121,   122,   125,   128,   132,
     132,   133,   135,   140,   141,   144,   147,   155,   156,   158,
     159,   161,   162,   164,   165,   166,   167,   168,   169,   170,
     171,   173,   174,   175,   176,   177,   178,   179,   180,   182,
     185,   188,   194,   200,   201,   203,   203,   206,   205,   268,
     267,   344,   352,   343,   363,   371,   374,   378,   386,   362,
     397,   405,   396,   415,   417,   418,   419,   422,   423,   426,
     427,   428,   430,   431,   433,   434,   438,   437,   454,   455,
     459,   460,   463,   466,   466,   468,   471,   472,   474,   475,
     479,   483,   484,   486,   528,   571,   572,   573,   574,   575,
     576,   577,   587,   589,   591,   600,   612,   622,   623,   625
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BGIN", "END", "CBEGIN", "CEND", "REAL",
  "ID", "TYPE", "Class_ID", "Class_Type", "IF", "ELSE", "WHILE", "FOR",
  "CMP", "NR", "CONNECT", "VOID", "RETURN", "ASSIGN", "TRUTH_VALUE",
  "PRINT", "TYPE_FUNCTION", "STRING", "CHAR", "'+'", "'-'", "'*'", "'/'",
  "'%'", "';'", "'('", "')'", "'['", "']'", "'.'", "':'", "','", "$accept",
  "progr", "main", "@1", "@2", "global_classes_declaration",
  "assign_generator", "functions_generator", "functions", "@3", "@4", "@5",
  "variables_generator", "variables", "fundamentals", "arr", "arr_list",
  "@6", "size", "variables_interior", "fundamentals_interior",
  "arr_interior", "list_main", "list_else", "list", "statement",
  "statement_main", "assign_node", "ID_Array", "@7", "function_call_node",
  "@8", "@9", "while_node", "@10", "@11", "if_node", "@12", "@13", "@14",
  "@15", "@16", "for_node", "@17", "@18", "print_node",
  "type_fucntion_node", "expression_for", "declarations_interior",
  "boolean_expression", "y", "classes", "class", "@19",
  "class_initialize_initial", "class_initialize",
  "class_initialize_interior", "class_instance", "@20",
  "class_instance_interior", "list_param_epsilon", "list_param", "param",
  "call_list_epsilon", "call_list", "e", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,    43,    45,    42,
      47,    37,    59,    40,    41,    91,    93,    46,    58,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    40,    41,    41,    43,    44,    42,    45,    45,    45,
      45,    45,    45,    45,    46,    46,    47,    47,    49,    48,
      50,    51,    48,    52,    52,    53,    53,    54,    55,    57,
      56,    56,    58,    59,    59,    60,    61,    62,    62,    63,
      63,    64,    64,    65,    65,    65,    65,    65,    65,    65,
      65,    66,    66,    66,    66,    66,    66,    66,    66,    67,
      67,    67,    67,    67,    67,    69,    68,    71,    70,    72,
      70,    74,    75,    73,    77,    78,    79,    80,    81,    76,
      83,    84,    82,    85,    86,    87,    87,    88,    88,    89,
      89,    89,    90,    90,    91,    91,    93,    92,    94,    94,
      95,    95,    96,    98,    97,    99,   100,   100,   101,   101,
     102,   103,   103,   104,   104,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     2,     0,     0,     5,     3,     2,     2,
       1,     1,     1,     0,     2,     3,     2,     1,     0,    13,
       0,     0,    11,     2,     1,     1,     1,     3,     4,     0,
       5,     3,     1,     1,     1,     2,     3,     2,     3,     1,
       0,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     5,     5,     3,     3,     0,     3,     0,     5,     0,
       7,     0,     0,     9,     0,     0,     0,     0,     0,    16,
       0,     0,    14,     4,     4,     1,     1,     1,     1,     3,
       7,     1,     3,     7,     1,     2,     0,     8,     1,     0,
       1,     2,     1,     0,     4,     2,     1,     0,     1,     3,
       2,     1,     0,     1,     3,     3,     3,     3,     3,     3,
       3,     1,     1,     1,     1,     3,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      13,    65,     0,     0,     0,     0,     0,    12,    11,    17,
      10,    24,    25,    26,     0,     0,    99,    94,     0,     0,
       0,    18,     0,    20,     1,     4,     3,     0,    16,     9,
       8,    23,    14,     0,     0,    95,    13,    98,   100,   123,
     124,   122,   121,   128,   129,     0,   126,   127,    60,    91,
      59,     0,     0,    66,    27,     0,     0,     0,     0,     0,
      18,     7,    15,    64,    63,   103,     0,   101,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    32,   107,    28,    96,   107,    65,     0,     0,     0,
       0,     0,     0,     0,    87,    33,    34,     5,     0,    51,
      52,    53,    54,    55,    57,    58,    56,    88,   102,     0,
       2,   125,   112,    89,   120,    92,   115,   117,   116,   118,
     119,    62,    61,     0,    31,     0,     0,   106,   108,    13,
       0,     0,    35,   105,     0,     0,     0,     0,     0,     0,
      37,   104,     0,     0,   111,   113,     0,     0,   120,     0,
     110,     0,     0,     0,     0,    69,    36,     0,     0,     0,
       0,     0,     0,     6,    38,   112,    68,     0,     0,     0,
      30,    40,   109,     0,     0,     0,     0,     0,    83,    84,
       0,   114,     0,     0,     0,    39,     0,    43,    44,    45,
      46,    47,    49,    50,    48,    97,    21,    74,    71,     0,
      70,    90,    93,     0,    41,     0,     0,     0,     0,     0,
      42,     0,    75,    72,   124,    85,   126,     0,    86,     0,
      22,     0,     0,     0,     0,     0,    76,    73,   125,     0,
      19,     0,    80,     0,     0,    77,    81,    40,     0,    78,
      82,     0,    79
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,    26,    59,   139,     6,     7,     8,     9,    55,
      58,   205,    10,    11,    12,    13,    53,   149,    80,    94,
      95,    96,    97,   184,   185,   186,    98,   187,    46,    20,
      47,    69,   142,   189,   207,   222,   190,   206,   221,   231,
     237,   241,   191,   234,   238,   192,   193,   217,   194,    48,
      49,    16,    17,   129,    36,    37,   107,    38,   109,   108,
     126,   127,   128,   143,   144,   158
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -160
static const yytype_int16 yypact[] =
{
     194,    37,    11,    19,    20,    38,    47,  -160,    12,  -160,
      72,  -160,  -160,  -160,    45,    57,    13,  -160,    18,    74,
      50,    44,    48,  -160,  -160,  -160,  -160,    84,  -160,    12,
      12,  -160,    95,    18,    96,  -160,    72,    89,  -160,  -160,
      65,  -160,  -160,  -160,  -160,    18,  -160,  -160,  -160,  -160,
      91,    92,   135,  -160,  -160,    98,   100,   123,   101,   176,
    -160,    12,  -160,  -160,    91,  -160,    47,  -160,   127,   105,
     110,    81,   135,   135,   135,   135,   135,   135,    18,   135,
     109,    25,   137,  -160,  -160,   137,    51,   143,   145,   122,
     126,   129,   132,   133,  -160,  -160,  -160,  -160,   138,  -160,
    -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,   140,
    -160,   134,   135,   151,   157,    25,    94,    94,   148,   148,
    -160,  -160,    91,   187,   141,   175,   153,   154,  -160,    72,
     160,   188,    50,  -160,    18,    18,    95,   135,   135,   191,
     176,  -160,   165,   167,   171,    25,   178,   179,  -160,    50,
    -160,   214,   137,   221,   215,    92,  -160,   196,    91,   197,
     200,   195,   211,  -160,  -160,   135,  -160,   135,    18,   135,
    -160,   176,  -160,   201,   176,   223,   230,    18,  -160,  -160,
     202,    25,   209,   219,   224,  -160,   220,  -160,  -160,  -160,
    -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,  -160,   228,
    -160,  -160,  -160,   135,   176,   245,   176,   176,   156,   227,
    -160,   229,  -160,  -160,    36,  -160,    57,   231,    25,   256,
    -160,   258,   259,   260,   232,   235,  -160,  -160,    -3,   264,
    -160,   257,  -160,   266,   176,  -160,  -160,   176,   267,  -160,
    -160,   268,  -160
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -160,  -160,   206,  -160,  -160,   -33,    10,    17,     9,  -160,
    -160,  -160,  -160,   265,  -160,  -160,   -16,  -160,  -160,  -160,
    -160,  -160,   136,    40,  -159,  -160,  -160,     1,     0,  -160,
     -57,  -160,  -160,   -53,  -160,  -160,   -51,  -160,  -160,  -160,
    -160,  -160,   -50,  -160,  -160,   -47,   -46,  -160,   -45,   -29,
    -160,  -160,   262,  -160,  -160,  -160,  -160,   242,  -160,  -160,
     198,  -160,   128,   116,  -160,   -11
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -70
static const yytype_int16 yytable[] =
{
      15,    14,   100,    66,    63,    56,   101,    50,   102,   103,
      15,    14,   104,   105,   106,   196,    70,    28,    78,    21,
      29,    27,    64,    34,     3,    39,    40,    30,    23,    22,
     -69,     4,    15,    14,    71,    41,    15,    14,    24,    28,
      42,    81,    62,    43,    44,   210,    61,   212,   213,   121,
      25,    45,    73,    74,    75,    76,    77,    18,    18,    15,
      99,   115,   116,   117,   118,   119,   120,   122,   123,   -67,
      28,   -65,    18,   223,    19,   236,    54,    32,    33,    52,
       1,     2,    51,   100,   -67,    52,    57,   101,   131,   102,
     103,     4,    60,   104,   105,   106,   153,    72,   -67,    34,
     -65,   145,    68,     1,    65,   157,   159,    72,    73,    74,
      75,    76,    77,    78,   188,   114,   156,   188,    73,    74,
      75,    76,    77,    75,    76,    77,   161,   162,    84,    15,
      14,    82,    83,   170,    85,   111,    15,   160,   112,   182,
      15,    99,    39,    40,   113,   124,   125,   188,   199,   188,
     188,   132,    41,   133,   145,   134,   181,    42,   183,   135,
      43,    44,   136,    39,   214,   137,   138,   -69,    79,   146,
     140,    15,   141,    41,    15,   147,   -29,   188,    42,    77,
     188,    43,    44,   150,    86,    87,    88,   151,    89,    79,
      90,    91,   209,   152,   154,   163,   155,   218,   165,    92,
      93,   166,     1,     2,    15,     3,    15,    15,   216,   215,
     167,   168,   169,     4,    73,    74,    75,    76,    77,   171,
     174,   148,    73,    74,    75,    76,    77,   173,   197,   178,
     175,   176,   177,   195,    15,   198,   200,    15,    73,    74,
      75,    76,    77,   201,   203,   179,    73,    74,    75,    76,
      77,   211,   204,   202,    73,    74,    75,    76,    77,   219,
     208,   220,   225,   224,   226,   227,   229,   230,   228,   232,
     233,   235,   110,   240,   242,    31,   164,   239,    35,    67,
     172,   180,     0,   130
};

static const yytype_int16 yycheck[] =
{
       0,     0,    59,    36,    33,    21,    59,    18,    59,    59,
      10,    10,    59,    59,    59,   174,    45,     8,    21,     8,
      10,     9,    33,    10,    11,     7,     8,    10,     8,    10,
      33,    19,    32,    32,    45,    17,    36,    36,     0,    30,
      22,    52,    32,    25,    26,   204,    29,   206,   207,    78,
       3,    33,    27,    28,    29,    30,    31,    21,    21,    59,
      59,    72,    73,    74,    75,    76,    77,    78,    79,    33,
      61,    35,    21,    37,    37,   234,    32,    32,    21,    35,
       8,     9,     8,   140,    33,    35,    38,   140,    37,   140,
     140,    19,     8,   140,   140,   140,   129,    16,    33,    10,
      35,   112,    37,     8,     8,   134,   135,    16,    27,    28,
      29,    30,    31,    21,   171,    34,   132,   174,    27,    28,
      29,    30,    31,    29,    30,    31,   137,   138,     5,   129,
     129,    33,    32,   149,    33,     8,   136,   136,    33,   168,
     140,   140,     7,     8,    34,    36,     9,   204,   177,   206,
     207,     8,    17,     8,   165,    33,   167,    22,   169,    33,
      25,    26,    33,     7,     8,    33,    33,    33,    33,    18,
      32,   171,    32,    17,   174,    18,    35,   234,    22,    31,
     237,    25,    26,     8,     8,     9,    10,    34,    12,    33,
      14,    15,   203,    39,    34,     4,     8,   208,    33,    23,
      24,    34,     8,     9,   204,    11,   206,   207,   208,   208,
      39,    33,    33,    19,    27,    28,    29,    30,    31,     5,
       5,    34,    27,    28,    29,    30,    31,     6,     5,    34,
      34,    34,    32,    32,   234,     5,    34,   237,    27,    28,
      29,    30,    31,    34,    20,    34,    27,    28,    29,    30,
      31,     6,    32,    34,    27,    28,    29,    30,    31,    32,
      32,    32,     6,    32,     6,     6,    34,    32,     8,     5,
      13,     5,    66,     6,     6,    10,   140,   237,    16,    37,
     152,   165,    -1,    85
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     8,     9,    11,    19,    41,    45,    46,    47,    48,
      52,    53,    54,    55,    67,    68,    91,    92,    21,    37,
      69,     8,    10,     8,     0,     3,    42,     9,    48,    46,
      47,    53,    32,    21,    10,    92,    94,    95,    97,     7,
       8,    17,    22,    25,    26,    33,    68,    70,    89,    90,
     105,     8,    35,    56,    32,    49,    56,    38,    50,    43,
       8,    47,    46,    89,   105,     8,    45,    97,    37,    71,
      89,   105,    16,    27,    28,    29,    30,    31,    21,    33,
      58,   105,    33,    32,     5,    33,     8,     9,    10,    12,
      14,    15,    23,    24,    59,    60,    61,    62,    66,    67,
      70,    73,    76,    82,    85,    86,    88,    96,    99,    98,
      42,     8,    33,    34,    34,   105,   105,   105,   105,   105,
     105,    89,   105,   105,    36,     9,   100,   101,   102,    93,
     100,    37,     8,     8,    33,    33,    33,    33,    33,    44,
      32,    32,    72,   103,   104,   105,    18,    18,    34,    57,
       8,    34,    39,    45,    34,     8,    56,    89,   105,    89,
      67,   105,   105,     4,    62,    33,    34,    39,    33,    33,
      56,     5,   102,     6,     5,    34,    34,    32,    34,    34,
     103,   105,    89,   105,    63,    64,    65,    67,    70,    73,
      76,    82,    85,    86,    88,    32,    64,     5,     5,    89,
      34,    34,    34,    20,    32,    51,    77,    74,    32,   105,
      64,     6,    64,    64,     8,    67,    68,    87,   105,    32,
      32,    78,    75,    37,    32,     6,     6,     6,     8,    34,
      32,    79,     5,    13,    83,     5,    64,    80,    84,    63,
       6,    81,     6
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
#line 42 "maker.y"
    {if(errorCount==0)cout<<"The Program is Correct!"<<endl;;}
    break;

  case 3:
#line 43 "maker.y"
    {if(errorCount==0)cout<<"The Program is Correct!"<<endl;;}
    break;

  case 4:
#line 47 "maker.y"
    {SymTable* currentmain;     
           currentmain = new SymTable("main");
           currentmain->assign_stack_above(current->return_stack_above());
           currentmain->add_above(current);
           current=currentmain;  
           Vector_Tabele.push_back(current);
          ;}
    break;

  case 5:
#line 54 "maker.y"
    {current->set_body((yyvsp[(3) - (3)].ListOfNodes));
               ;}
    break;

  case 6:
#line 56 "maker.y"
    {
                     current=current->next_domain_scope();
                    ;}
    break;

  case 14:
#line 68 "maker.y"
    {(yyvsp[(1) - (2)].ListOfNodes)->run();;}
    break;

  case 15:
#line 69 "maker.y"
    {(yyvsp[(1) - (3)].ListOfNodes)->run();;}
    break;

  case 18:
#line 74 "maker.y"
    { current->check_existance_for_declaration((yyvsp[(1) - (2)].string), (yyvsp[(2) - (2)].string) , "func" , errorCount , yylineno , array_size);
                  class SymTable* function_scope;
                  function_scope=new SymTable((yyvsp[(2) - (2)].string));
                  function_scope->assign_stack_above(current->return_stack_above());
                  function_scope->add_above(current);
                  IdInfo* variabila;
                  variabila=function_scope->get_function_core();
                  variabila->name=(yyvsp[(2) - (2)].string);
                  variabila->type=(yyvsp[(1) - (2)].string);
                  variabila->idType="func";
                  current->add_bellow(function_scope);
                  current=function_scope;
                  Vector_Tabele.push_back(current);
                ;}
    break;

  case 19:
#line 89 "maker.y"
    {
                                                                           class ASTNode* func_return;
                                                                           func_return=new ASTNode((yyvsp[(2) - (13)].string) , "<-" , (yyvsp[(10) - (13)].ListOfNodes) ,current, &errorCount, yylineno);
                                                                           class ASTNode* list_return;
                                                                           list_return=new ASTNode("sequence" , (yyvsp[(8) - (13)].ListOfNodes) , func_return , &errorCount , current);
                                                                           current->set_body(list_return);
                                                                           current=current->next_domain_scope();
                                                                           ;}
    break;

  case 20:
#line 98 "maker.y"
    { current->check_existance_for_declaration((yyvsp[(1) - (2)].string), (yyvsp[(2) - (2)].string) , "func" , errorCount , yylineno , array_size);
                  class SymTable* function_scope;
                  function_scope=new SymTable((yyvsp[(2) - (2)].string));
                  function_scope->assign_stack_above(current->return_stack_above());
                  function_scope->add_above(current);
                  IdInfo* variabila;
                  variabila=function_scope->get_function_core();
                  variabila->name=(yyvsp[(2) - (2)].string);
                  variabila->type=(yyvsp[(1) - (2)].string);
                  variabila->idType="func";
                  current->add_bellow(function_scope);
                  current=function_scope;
                  Vector_Tabele.push_back(current);
                ;}
    break;

  case 21:
#line 112 "maker.y"
    {    current->set_body((yyvsp[(8) - (8)].ListOfNodes));;}
    break;

  case 22:
#line 113 "maker.y"
    {
                                    current=current->next_domain_scope();
                                   ;}
    break;

  case 27:
#line 125 "maker.y"
    {current->check_existance_for_declaration((yyvsp[(1) - (3)].string), (yyvsp[(2) - (3)].string) , "var" , errorCount , yylineno, array_size);;}
    break;

  case 28:
#line 128 "maker.y"
    {current->check_existance_for_declaration((yyvsp[(1) - (4)].string), (yyvsp[(2) - (4)].string) , "array" , errorCount , yylineno , array_size);
                              ;}
    break;

  case 29:
#line 132 "maker.y"
    {array_name+='['+nr+']';;}
    break;

  case 31:
#line 133 "maker.y"
    {array_name+='['+nr+']';;}
    break;

  case 32:
#line 135 "maker.y"
    {array_size.push_back((yyvsp[(1) - (1)].ListOfNodes)->evaluatei());
        nr=to_string((yyvsp[(1) - (1)].ListOfNodes)->evaluatei());
     ;}
    break;

  case 35:
#line 144 "maker.y"
    {current->check_existance_for_declaration((yyvsp[(1) - (2)].string), (yyvsp[(2) - (2)].string) , "var" , errorCount , yylineno , array_size);;}
    break;

  case 36:
#line 147 "maker.y"
    {current->check_existance_for_declaration((yyvsp[(1) - (3)].string), (yyvsp[(2) - (3)].string) , "array" , errorCount , yylineno , array_size);
                                   array_size.clear();
                                   for(int i=0 ; i<array_size.size();++i){
                                        cout<<array_size[i]<<endl;
                                   };
                                   ;}
    break;

  case 37:
#line 155 "maker.y"
    {(yyval.ListOfNodes)=new ASTNode("final_sequence" , (yyvsp[(1) - (2)].ListOfNodes) , &errorCount , yylineno, current);;}
    break;

  case 38:
#line 156 "maker.y"
    {(yyval.ListOfNodes)=new ASTNode("sequence" , (yyvsp[(1) - (3)].ListOfNodes) ,(yyvsp[(3) - (3)].ListOfNodes) , &errorCount , current);;}
    break;

  case 39:
#line 158 "maker.y"
    {(yyval.ListOfNodes)=(yyvsp[(1) - (1)].ListOfNodes);;}
    break;

  case 40:
#line 159 "maker.y"
    {(yyval.ListOfNodes)=new ASTNode();;}
    break;

  case 41:
#line 161 "maker.y"
    {(yyval.ListOfNodes)=new ASTNode("final_sequence" , (yyvsp[(1) - (2)].ListOfNodes) , &errorCount , yylineno, current);;}
    break;

  case 42:
#line 162 "maker.y"
    {(yyval.ListOfNodes)=new ASTNode("sequence" , (yyvsp[(1) - (3)].ListOfNodes) ,(yyvsp[(3) - (3)].ListOfNodes) , &errorCount , current);;}
    break;

  case 43:
#line 164 "maker.y"
    {(yyval.ListOfNodes)=(yyvsp[(1) - (1)].ListOfNodes);;}
    break;

  case 44:
#line 165 "maker.y"
    {(yyval.ListOfNodes)=(yyvsp[(1) - (1)].ListOfNodes);;}
    break;

  case 45:
#line 166 "maker.y"
    {(yyval.ListOfNodes)=(yyvsp[(1) - (1)].ListOfNodes);;}
    break;

  case 46:
#line 167 "maker.y"
    {(yyval.ListOfNodes)=(yyvsp[(1) - (1)].ListOfNodes);;}
    break;

  case 47:
#line 168 "maker.y"
    {(yyval.ListOfNodes)=(yyvsp[(1) - (1)].ListOfNodes);;}
    break;

  case 48:
#line 169 "maker.y"
    {(yyval.ListOfNodes)=new ASTNode();;}
    break;

  case 49:
#line 170 "maker.y"
    {(yyval.ListOfNodes)=(yyvsp[(1) - (1)].ListOfNodes);;}
    break;

  case 50:
#line 171 "maker.y"
    {(yyval.ListOfNodes)=(yyvsp[(1) - (1)].ListOfNodes);;}
    break;

  case 51:
#line 173 "maker.y"
    {(yyval.ListOfNodes)=(yyvsp[(1) - (1)].ListOfNodes);(yyval.ListOfNodes)->run();;}
    break;

  case 52:
#line 174 "maker.y"
    {(yyval.ListOfNodes)=(yyvsp[(1) - (1)].ListOfNodes);(yyval.ListOfNodes)->run();;}
    break;

  case 53:
#line 175 "maker.y"
    {(yyval.ListOfNodes)=(yyvsp[(1) - (1)].ListOfNodes);(yyval.ListOfNodes)->run();;}
    break;

  case 54:
#line 176 "maker.y"
    {(yyval.ListOfNodes)=(yyvsp[(1) - (1)].ListOfNodes);(yyval.ListOfNodes)->run();;}
    break;

  case 55:
#line 177 "maker.y"
    {(yyval.ListOfNodes)=(yyvsp[(1) - (1)].ListOfNodes);(yyval.ListOfNodes)->run();;}
    break;

  case 56:
#line 178 "maker.y"
    {(yyval.ListOfNodes)=new ASTNode();;}
    break;

  case 57:
#line 179 "maker.y"
    {(yyval.ListOfNodes)=(yyvsp[(1) - (1)].ListOfNodes);(yyval.ListOfNodes)->run();;}
    break;

  case 58:
#line 180 "maker.y"
    {(yyval.ListOfNodes)=(yyvsp[(1) - (1)].ListOfNodes);(yyval.ListOfNodes)->run();;}
    break;

  case 59:
#line 182 "maker.y"
    {
                         (yyval.ListOfNodes)=new ASTNode((yyvsp[(1) - (3)].string) , "<-" , (yyvsp[(3) - (3)].ListOfNodes) ,current, &errorCount, yylineno);
                         ;}
    break;

  case 60:
#line 185 "maker.y"
    {
                         (yyval.ListOfNodes)=new ASTNode((yyvsp[(1) - (3)].string) , "<-" , (yyvsp[(3) - (3)].ListOfNodes) ,current, &errorCount, yylineno);
                         ;}
    break;

  case 61:
#line 188 "maker.y"
    {
                         string buff1=(yyvsp[(1) - (5)].string);
                         string buff3=(yyvsp[(3) - (5)].string);
                         string class_mem=buff1+'.'+buff3;
                         (yyval.ListOfNodes)=new ASTNode(class_mem , "<-" , (yyvsp[(5) - (5)].ListOfNodes) ,current, &errorCount, yylineno);
                         ;}
    break;

  case 62:
#line 194 "maker.y"
    {
                         string buff1=(yyvsp[(1) - (5)].string);
                         string buff3=(yyvsp[(3) - (5)].string);
                         string class_mem=buff1+'.'+buff3;
                         (yyval.ListOfNodes)=new ASTNode(class_mem , "<-" , (yyvsp[(5) - (5)].ListOfNodes) ,current, &errorCount, yylineno);
                         ;}
    break;

  case 63:
#line 200 "maker.y"
    {string copie=array_name;(yyval.ListOfNodes)=new ASTNode(copie , "<-" , (yyvsp[(3) - (3)].ListOfNodes) ,current, &errorCount, yylineno);array_name.clear();;}
    break;

  case 64:
#line 201 "maker.y"
    {(yyval.ListOfNodes)=new ASTNode(array_name , "<-" , (yyvsp[(3) - (3)].ListOfNodes) ,current, &errorCount, yylineno);array_name.clear();;}
    break;

  case 65:
#line 203 "maker.y"
    {array_name=(yyvsp[(1) - (1)].string);;}
    break;

  case 67:
#line 206 "maker.y"
    {
                    if(!param_checker.empty()){
                         std::stack<IdInfo*> buff;
                         while(!param_checker.empty()){
                         Temp_stack.push(param_checker.top());
                         param_checker.pop();
                         }
                    }
                    SymTable* tmp=nullptr;
                    SymTable*globol;
                    stack<SymTable*> search=current->return_stack_above();
                    while(!search.empty()){
                         if(strcmp(search.top()->get_dom_name(), "global")==0){
                              globol=search.top();
                         }
                         search.pop();
                    }
                    stack<SymTable*> copy=globol->return_stack_bellow();
                    while(!copy.empty()){
                         if(strcmp(copy.top()->get_dom_name(),(yyvsp[(1) - (1)].string))==0){
                              
                         tmp=copy.top();
                         functia_apelata=tmp;
                         }
                         copy.pop();
                    }
                    if(tmp==nullptr){
                         errorCount++;
                         yyerror("Nu exista aceasta functie");
                    }
                    else{
                         stack<IdInfo*> inversion=tmp->get_function_params();
                         while(!inversion.empty()){
                              param_checker.push(inversion.top());
                              inversion.pop();
                         }
                          stack<IdInfo*> func_params=param_checker;
                         while(!func_params.empty()){
                              func_params.pop();
                         }
                    }
               
              ;}
    break;

  case 68:
#line 249 "maker.y"
    {
                                  if(!param_checker.empty()){
                                   errorCount++;
                                   yyerror("Not enough parameters in function call");
                                   while(!param_checker.empty()){
                                        cout<<param_checker.top()->name<<endl;
                                        param_checker.pop();
                                   }
                                  }
                                  (yyval.ListOfNodes)=new ASTNode("func_call" , functia_apelata->get_body() , functia_apelata->get_function_core() , &errorCount , yylineno , current);
                                  if(!Temp_stack.empty()){
                                   while(!Temp_stack.empty()){
                                        param_checker.push(Temp_stack.top());
                                        Temp_stack.pop();
                                   }
                                  }
                                 ;}
    break;

  case 69:
#line 268 "maker.y"
    {
                     if(!param_checker.empty()){
                         while(!param_checker.empty()){
                         Temp_stack.push(param_checker.top());
                         param_checker.pop();
                         }
                    }
                    string buff1=(yyvsp[(1) - (3)].string);
                    string buff3=(yyvsp[(3) - (3)].string);
                    string class_mem=buff1+'.'+buff3;
               domeniul_caruia_ii_apartine_varabila=current->check_existance_for_use(class_mem.c_str() , errorCount , yylineno);
               if(domeniul_caruia_ii_apartine_varabila!=nullptr)
                    {
                         SymTable* tmp=nullptr;
                         SymTable*globol;
                         stack<SymTable*> search=current->return_stack_above();
                         while(!search.empty()){
                              if(strcmp(search.top()->get_dom_name(), "global")==0){
                                   globol=search.top();
                              }
                              search.pop();
                         }
                         stack<SymTable*>copy_stack=globol->return_stack_bellow();
                         while(!copy_stack.empty()){
                              if(strcmp(copy_stack.top()->get_dom_name(),(current->get_IdInfo_Type((yyvsp[(1) - (3)].string))).c_str())==0){
                                   tmp=copy_stack.top();
                                   domeniul_caruia_ii_apartine_varabila=tmp;
                              }
                              copy_stack.pop();
                         }
                         if(tmp==nullptr){
                              errorCount++;
                              yyerror("Nu exista clasa");
                         }
                         else{
                         stack<SymTable*>stacks=tmp->return_stack_bellow();
                         while(!stacks.empty()){
                              if(strcmp(stacks.top()->get_dom_name(), (yyvsp[(3) - (3)].string))==0){
                                   tmp=stacks.top();
                                   functia_apelata=stacks.top();
                              }
                              stacks.pop();
                         }
                         if(tmp==nullptr){
                              errorCount++;
                              yyerror("Nu exista functia");
                         }
                         stack<IdInfo*> inversion=functia_apelata->get_function_params();
                         while(!inversion.empty()){
                              param_checker.push(inversion.top());
                              inversion.pop();
                         }
                         }
                       
                    }
              ;}
    break;

  case 70:
#line 324 "maker.y"
    {
                                 if(!param_checker.empty()){
                                   errorCount++;
                                   yyerror("Not enough parameters in function call");
                                   while(!param_checker.empty()){
                                        cout<<param_checker.top()->name<<endl;
                                        param_checker.pop();
                                   }
                                  }
                                  (yyval.ListOfNodes)=new ASTNode("func_call" , functia_apelata->get_body() , functia_apelata->get_function_core() , &errorCount , yylineno , current);
                                  if(!Temp_stack.empty()){
                                   while(!Temp_stack.empty()){
                                        param_checker.push(Temp_stack.top());
                                        Temp_stack.pop();
                                   }
                                  }
                                 ;}
    break;

  case 71:
#line 344 "maker.y"
    {
                    SymTable* currentCTRL;     
                    currentCTRL = new SymTable((yyvsp[(1) - (5)].string));
                    currentCTRL->assign_stack_above(current->return_stack_above());
                    currentCTRL->add_above(current);
                    current=currentCTRL;
                    Vector_Tabele.push_back(current);
               ;}
    break;

  case 72:
#line 352 "maker.y"
    {
                              
                              current->set_body((yyvsp[(7) - (7)].ListOfNodes));
                              ;}
    break;

  case 73:
#line 357 "maker.y"
    {
                                        (yyval.ListOfNodes)=new ASTNode("while" , (yyvsp[(3) - (9)].ListOfNodes) , (yyvsp[(7) - (9)].ListOfNodes) , &errorCount , yylineno);
                                        current=current->next_domain_scope();
                                   ;}
    break;

  case 74:
#line 363 "maker.y"
    {
                         SymTable* currentCTRL;     
                         currentCTRL = new SymTable((yyvsp[(1) - (5)].string));
                         currentCTRL->assign_stack_above(current->return_stack_above());
                         currentCTRL->add_above(current);
                         current=currentCTRL;
                         Vector_Tabele.push_back(current);
                    ;}
    break;

  case 75:
#line 371 "maker.y"
    {
                              current->set_body((yyvsp[(7) - (7)].ListOfNodes));
                         ;}
    break;

  case 76:
#line 374 "maker.y"
    {
                                        current=current->next_domain_scope();
                                   ;}
    break;

  case 77:
#line 378 "maker.y"
    {
                                   SymTable* currentCTRL;     
                                   currentCTRL = new SymTable((yyvsp[(1) - (12)].string));
                                   currentCTRL->assign_stack_above(current->return_stack_above());
                                   currentCTRL->add_above(current);
                                   current=currentCTRL;
                                   Vector_Tabele.push_back(current);
                              ;}
    break;

  case 78:
#line 386 "maker.y"
    {
                                                       current->set_body((yyvsp[(14) - (14)].ListOfNodes));
                                                  ;}
    break;

  case 79:
#line 389 "maker.y"
    {
                                   class ASTNode* combine;
                                   combine=new ASTNode((yyvsp[(7) - (16)].ListOfNodes) , (yyvsp[(14) - (16)].ListOfNodes) , &errorCount);
                                   (yyval.ListOfNodes)=new ASTNode("if" , (yyvsp[(3) - (16)].ListOfNodes) , combine , &errorCount , yylineno);
                                   current=current->next_domain_scope();
                              ;}
    break;

  case 80:
#line 397 "maker.y"
    {
                 SymTable* currentCTRL;     
                 currentCTRL = new SymTable((yyvsp[(1) - (10)].string));
                 currentCTRL->assign_stack_above(current->return_stack_above());
                 currentCTRL->add_above(current);
                 current=currentCTRL;
                 Vector_Tabele.push_back(current);
               ;}
    break;

  case 81:
#line 405 "maker.y"
    {current->set_body((yyvsp[(12) - (12)].ListOfNodes));;}
    break;

  case 82:
#line 406 "maker.y"
    {
                 class ASTNode* combination1;
                 combination1=new ASTNode((yyvsp[(3) - (14)].ListOfNodes) , (yyvsp[(5) - (14)].ListOfNodes) , &errorCount);
                 class ASTNode* combination2;
                 combination2=new ASTNode((yyvsp[(12) - (14)].ListOfNodes) , (yyvsp[(7) - (14)].ListOfNodes) , &errorCount);
                 (yyval.ListOfNodes)=new ASTNode("for", combination1 , combination2 , &errorCount , yylineno );
                 current=current->next_domain_scope();
               ;}
    break;

  case 83:
#line 415 "maker.y"
    {(yyval.ListOfNodes)=new ASTNode((yyvsp[(1) - (4)].string) , (yyvsp[(3) - (4)].ListOfNodes) , &errorCount , yylineno);;}
    break;

  case 84:
#line 417 "maker.y"
    {(yyval.ListOfNodes)=new ASTNode((yyvsp[(1) - (4)].string) , (yyvsp[(3) - (4)].ListOfNodes) , &errorCount , yylineno);;}
    break;

  case 85:
#line 418 "maker.y"
    {(yyval.ListOfNodes)=(yyvsp[(1) - (1)].ListOfNodes);;}
    break;

  case 86:
#line 419 "maker.y"
    {(yyval.ListOfNodes)=(yyvsp[(1) - (1)].ListOfNodes);;}
    break;

  case 89:
#line 426 "maker.y"
    {(yyval.ListOfNodes)=(yyvsp[(2) - (3)].ListOfNodes);;}
    break;

  case 90:
#line 427 "maker.y"
    {(yyval.ListOfNodes)=new ASTNode((yyvsp[(4) - (7)].string) , (yyvsp[(2) - (7)].ListOfNodes) , (yyvsp[(6) - (7)].ListOfNodes) , &errorCount);;}
    break;

  case 91:
#line 428 "maker.y"
    {(yyval.ListOfNodes)=(yyvsp[(1) - (1)].ListOfNodes);;}
    break;

  case 92:
#line 430 "maker.y"
    {(yyval.ListOfNodes)=new ASTNode((yyvsp[(2) - (3)].string) , (yyvsp[(1) - (3)].ListOfNodes) , (yyvsp[(3) - (3)].ListOfNodes) , &errorCount);;}
    break;

  case 93:
#line 431 "maker.y"
    {(yyval.ListOfNodes)=new ASTNode((yyvsp[(4) - (7)].string) , (yyvsp[(2) - (7)].ListOfNodes) , (yyvsp[(6) - (7)].ListOfNodes) , &errorCount);;}
    break;

  case 96:
#line 438 "maker.y"
    {
            current->check_existance_for_declaration((yyvsp[(1) - (4)].string), (yyvsp[(2) - (4)].string) , "class" , errorCount , yylineno , array_size);
            SymTable* class_scope;
            class_scope=new SymTable((yyvsp[(2) - (4)].string));
            class_scope->assign_stack_above(current->return_stack_above());
            class_scope->add_above(current);
            current->add_bellow(class_scope);
            current=class_scope;
            Vector_Tabele.push_back(current);
          ;}
    break;

  case 97:
#line 449 "maker.y"
    {
            current=current->next_domain_scope();
          ;}
    break;

  case 103:
#line 466 "maker.y"
    {current->check_existance_for_class_instance((yyvsp[(1) - (2)].string) , (yyvsp[(2) - (2)].string), errorCount , yylineno);;}
    break;

  case 105:
#line 468 "maker.y"
    {current->check_existance_for_class_instance((yyvsp[(1) - (2)].string) , (yyvsp[(2) - (2)].string), errorCount , yylineno);;}
    break;

  case 110:
#line 479 "maker.y"
    {current->check_existance_for_declaration((yyvsp[(1) - (2)].string), (yyvsp[(2) - (2)].string) , "param" , errorCount , yylineno , array_size);
                 current->add_function_params(current->get_that_variable((yyvsp[(2) - (2)].string)));
                ;}
    break;

  case 113:
#line 487 "maker.y"
    {
                    if(param_checker.empty()){
                         errorCount++;
                         yyerror("The number of parameters in the call doesnt match the number of params in the fucntion");
                    }
                    else{
                    class IdInfo* temp;
                    temp=param_checker.top();
                         if(temp->type==(yyvsp[(1) - (1)].ListOfNodes)->get_type()){
                              if(strcmp((yyvsp[(1) - (1)].ListOfNodes)->get_type_for_main() , "int")==0){
                                   class Value val((yyvsp[(1) - (1)].ListOfNodes)->evaluatei());
                                   temp->value=val;
                                   param_checker.pop();
                              }
                              else if(strcmp((yyvsp[(1) - (1)].ListOfNodes)->get_type_for_main() , "float")==0){
                                   class Value val((yyvsp[(1) - (1)].ListOfNodes)->evaluatef());
                                   temp->value=val;
                                   param_checker.pop();
                              }
                              else if(strcmp((yyvsp[(1) - (1)].ListOfNodes)->get_type_for_main() , "string")==0){
                                   class Value val((yyvsp[(1) - (1)].ListOfNodes)->evaluates());
                                   temp->value=val;
                                   param_checker.pop();
                              }
                               else if(strcmp((yyvsp[(1) - (1)].ListOfNodes)->get_type_for_main() , "bool")==0){
                                   class Value val((yyvsp[(1) - (1)].ListOfNodes)->evaluateb());
                                   temp->value=val;
                                   param_checker.pop();
                              }
                              else{
                                   errorCount++;
                                   yyerror("Unkown Parameter type");
                              }
                         }
                         else{
                              errorCount++;
                              yyerror("Parameter missmatch");
                              param_checker.pop();
                         }
                    }
               ;}
    break;

  case 114:
#line 528 "maker.y"
    {
               if(param_checker.empty()){
                    errorCount++;
                    yyerror("The number of parameters in the call doesnt match the number of params in the fucntion");
               }
               else{
                    class IdInfo* temp;
                    temp=param_checker.top();
                    if(temp->type==(yyvsp[(3) - (3)].ListOfNodes)->get_type()){
                         if(strcmp((yyvsp[(3) - (3)].ListOfNodes)->get_type_for_main() , "int")==0){
                              class Value val((yyvsp[(3) - (3)].ListOfNodes)->evaluatei());
                              temp->value=val;
                              param_checker.pop();
                              }
                         else if (strcmp((yyvsp[(3) - (3)].ListOfNodes)->get_type_for_main() , "float")==0){
                              class Value val((yyvsp[(3) - (3)].ListOfNodes)->evaluatef());
                              temp->value=val;
                              param_checker.pop();
                         }
                         else if (strcmp((yyvsp[(3) - (3)].ListOfNodes)->get_type_for_main() , "string")==0){
                              class Value val((yyvsp[(3) - (3)].ListOfNodes)->evaluates());
                              temp->value=val;
                              param_checker.pop();
                         }
                         else if (strcmp((yyvsp[(3) - (3)].ListOfNodes)->get_type_for_main() , "bool")==0){
                              class Value val((yyvsp[(3) - (3)].ListOfNodes)->evaluateb());
                              temp->value=val;
                              param_checker.pop();
                         }
                         else{
                                   errorCount++;
                                   yyerror("Unkown Parameter type");
                              }
                    }
                    else{
                              errorCount++;
                              yyerror("Parameter missmatch");
                              param_checker.pop();
                         }
                    }
               ;}
    break;

  case 115:
#line 571 "maker.y"
    {(yyval.ListOfNodes)=new ASTNode("+" , (yyvsp[(1) - (3)].ListOfNodes) , (yyvsp[(3) - (3)].ListOfNodes) , &errorCount);;}
    break;

  case 116:
#line 572 "maker.y"
    {(yyval.ListOfNodes)=new ASTNode("*" , (yyvsp[(1) - (3)].ListOfNodes) , (yyvsp[(3) - (3)].ListOfNodes) , &errorCount);;}
    break;

  case 117:
#line 573 "maker.y"
    {(yyval.ListOfNodes)=new ASTNode("-" , (yyvsp[(1) - (3)].ListOfNodes) , (yyvsp[(3) - (3)].ListOfNodes) , &errorCount);;}
    break;

  case 118:
#line 574 "maker.y"
    {(yyval.ListOfNodes)=new ASTNode("/" , (yyvsp[(1) - (3)].ListOfNodes) , (yyvsp[(3) - (3)].ListOfNodes) , &errorCount);;}
    break;

  case 119:
#line 575 "maker.y"
    {(yyval.ListOfNodes)=new ASTNode("%" , (yyvsp[(1) - (3)].ListOfNodes) , (yyvsp[(3) - (3)].ListOfNodes) , &errorCount);;}
    break;

  case 120:
#line 576 "maker.y"
    {(yyval.ListOfNodes)=(yyvsp[(2) - (3)].ListOfNodes);;}
    break;

  case 121:
#line 577 "maker.y"
    {    
                    if(strcmp((yyvsp[(1) - (1)].string) ,"TRUE")==0){
                         Value val(true);     
                         (yyval.ListOfNodes)=new ASTNode(val , "bool", &errorCount);
                    }
                    else{
                         Value val(false);   
                         (yyval.ListOfNodes)=new ASTNode(val , "bool", &errorCount);
                    }
               ;}
    break;

  case 122:
#line 587 "maker.y"
    {Value val(atoi(yytext));
               (yyval.ListOfNodes)=new ASTNode(val , "int" , &errorCount);;}
    break;

  case 123:
#line 589 "maker.y"
    {Value val((float)atof(yytext));
               (yyval.ListOfNodes)=new ASTNode(val , "float" , &errorCount);;}
    break;

  case 124:
#line 591 "maker.y"
    {
               domeniul_caruia_ii_apartine_varabila=current->check_existance_for_use((yyvsp[(1) - (1)].string) , errorCount , yylineno);
               if(domeniul_caruia_ii_apartine_varabila!=nullptr){
                    (yyval.ListOfNodes)=new ASTNode( domeniul_caruia_ii_apartine_varabila->get_that_variable((yyvsp[(1) - (1)].string)), &errorCount , yylineno);//??? MAybe it will work like this?
               }
               else{
                    (yyval.ListOfNodes)=new ASTNode();
               }
              ;}
    break;

  case 125:
#line 600 "maker.y"
    {
               string buff1=(yyvsp[(1) - (3)].string);
               string buff3=(yyvsp[(3) - (3)].string);
               string class_mem=buff1+'.'+buff3;
               domeniul_caruia_ii_apartine_varabila=current->check_existance_for_use(class_mem.c_str() , errorCount , yylineno);
               if(domeniul_caruia_ii_apartine_varabila!=nullptr){
               (yyval.ListOfNodes)=new ASTNode( domeniul_caruia_ii_apartine_varabila->get_that_variable(class_mem.c_str()), &errorCount , yylineno);
               }
               else{
                    (yyval.ListOfNodes)=new ASTNode();
               }
               ;}
    break;

  case 126:
#line 612 "maker.y"
    {
               domeniul_caruia_ii_apartine_varabila=current->check_existance_for_use(array_name.c_str() , errorCount , yylineno);
               if(domeniul_caruia_ii_apartine_varabila!=nullptr){
                    (yyval.ListOfNodes)=new ASTNode( domeniul_caruia_ii_apartine_varabila->get_that_variable(array_name.c_str()), &errorCount , yylineno);
               }
               else{
                    (yyval.ListOfNodes)=new ASTNode();
               }
               array_name.clear();
               ;}
    break;

  case 127:
#line 622 "maker.y"
    {(yyval.ListOfNodes)=(yyvsp[(1) - (1)].ListOfNodes);;}
    break;

  case 128:
#line 623 "maker.y"
    {Value val((yyvsp[(1) - (1)].string));     
               (yyval.ListOfNodes)=new ASTNode(val , "string" , &errorCount);;}
    break;

  case 129:
#line 625 "maker.y"
    {
     Value val((yyvsp[(1) - (1)].string));     
     (yyval.ListOfNodes)=new ASTNode(val , "char" , &errorCount);;}
    break;


/* Line 1267 of yacc.c.  */
#line 2481 "maker.tab.c"
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


#line 630 "maker.y"

void yyerror(const char * s){
     cout << "error:" << s << " at line: " << yylineno << endl;
}
     
int main(int argc, char** argv){
     yyin=fopen(argv[1],"r");
     current = new SymTable("global");
     Vector_Tabele.push_back(current);
     yyparse();
     streambuf* StandardOutput = std::cout.rdbuf();
     ofstream file("global.txt");
     if (!file.is_open()) {
          cout<< "Error opening file" << endl;
          return 1;
     }
     cout.rdbuf(file.rdbuf());
     for (auto i : Vector_Tabele){
          if(i->get_dom_name()=="global"){
          i->printVars();
          }
     }
     file.close();
     cout.rdbuf(StandardOutput);
     file.open("Other_scope.txt");
     if (!file.is_open()) {
          cout<< "Error opening file" << endl;
          return 1;
     }
     cout.rdbuf(file.rdbuf());
     for (auto i : Vector_Tabele){
          if(i->get_dom_name()!="global"){
          i->printVars();
          }
     }
     file.close();
     cout.rdbuf(StandardOutput);
     file.open("fucntions.txt");
     if (!file.is_open()) {
          cout<< "Error opening file" << endl;
          return 1;
     }
     cout.rdbuf(file.rdbuf());
     for (auto i : Vector_Tabele){
          i->printFunct();
          delete i;
     }
     file.close();
     cout.rdbuf(StandardOutput);
} 
