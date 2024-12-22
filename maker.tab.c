/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "maker.y"

#include <iostream>
#include <cstring>
#include <vector>
#include <stack>
#include "ASTNode.h"
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
extern int yylex();
void yyerror(const char * s);
class SymTable* current;
class SymTable* domeniul_caruia_ii_apartine_varabila;
std::vector<SymTable*> Vector_Tabele;
int errorCount = 0;

#line 88 "maker.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "maker.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_BGIN = 3,                       /* BGIN  */
  YYSYMBOL_END = 4,                        /* END  */
  YYSYMBOL_ASSIGN = 5,                     /* ASSIGN  */
  YYSYMBOL_NR = 6,                         /* NR  */
  YYSYMBOL_TRUTH_VALUE = 7,                /* TRUTH_VALUE  */
  YYSYMBOL_CBEGIN = 8,                     /* CBEGIN  */
  YYSYMBOL_CEND = 9,                       /* CEND  */
  YYSYMBOL_REAL = 10,                      /* REAL  */
  YYSYMBOL_CONNECT = 11,                   /* CONNECT  */
  YYSYMBOL_PRINT = 12,                     /* PRINT  */
  YYSYMBOL_TYPE_FUNCTION = 13,             /* TYPE_FUNCTION  */
  YYSYMBOL_ID = 14,                        /* ID  */
  YYSYMBOL_TYPE = 15,                      /* TYPE  */
  YYSYMBOL_Class_ID = 16,                  /* Class_ID  */
  YYSYMBOL_Class_Type = 17,                /* Class_Type  */
  YYSYMBOL_IF = 18,                        /* IF  */
  YYSYMBOL_ELSE = 19,                      /* ELSE  */
  YYSYMBOL_WHILE = 20,                     /* WHILE  */
  YYSYMBOL_FOR = 21,                       /* FOR  */
  YYSYMBOL_CMP = 22,                       /* CMP  */
  YYSYMBOL_INC = 23,                       /* INC  */
  YYSYMBOL_DEC = 24,                       /* DEC  */
  YYSYMBOL_25_ = 25,                       /* '+'  */
  YYSYMBOL_26_ = 26,                       /* '-'  */
  YYSYMBOL_27_ = 27,                       /* '*'  */
  YYSYMBOL_28_ = 28,                       /* '/'  */
  YYSYMBOL_29_ = 29,                       /* '('  */
  YYSYMBOL_30_ = 30,                       /* ')'  */
  YYSYMBOL_31_ = 31,                       /* ';'  */
  YYSYMBOL_32_ = 32,                       /* '['  */
  YYSYMBOL_33_ = 33,                       /* ']'  */
  YYSYMBOL_34_ = 34,                       /* ':'  */
  YYSYMBOL_35_ = 35,                       /* ','  */
  YYSYMBOL_YYACCEPT = 36,                  /* $accept  */
  YYSYMBOL_progr = 37,                     /* progr  */
  YYSYMBOL_main = 38,                      /* main  */
  YYSYMBOL_39_1 = 39,                      /* $@1  */
  YYSYMBOL_global_classes_declaration = 40, /* global_classes_declaration  */
  YYSYMBOL_functions_generator = 41,       /* functions_generator  */
  YYSYMBOL_functions = 42,                 /* functions  */
  YYSYMBOL_43_2 = 43,                      /* $@2  */
  YYSYMBOL_variables_generator = 44,       /* variables_generator  */
  YYSYMBOL_variables = 45,                 /* variables  */
  YYSYMBOL_fundamentals = 46,              /* fundamentals  */
  YYSYMBOL_arr = 47,                       /* arr  */
  YYSYMBOL_arr_list = 48,                  /* arr_list  */
  YYSYMBOL_variables_interior = 49,        /* variables_interior  */
  YYSYMBOL_fundamentals_interior = 50,     /* fundamentals_interior  */
  YYSYMBOL_arr_interior = 51,              /* arr_interior  */
  YYSYMBOL_list = 52,                      /* list  */
  YYSYMBOL_list_for_else = 53,             /* list_for_else  */
  YYSYMBOL_statement = 54,                 /* statement  */
  YYSYMBOL_55_3 = 55,                      /* $@3  */
  YYSYMBOL_56_4 = 56,                      /* $@4  */
  YYSYMBOL_57_5 = 57,                      /* $@5  */
  YYSYMBOL_58_6 = 58,                      /* $@6  */
  YYSYMBOL_59_7 = 59,                      /* $@7  */
  YYSYMBOL_60_8 = 60,                      /* $@8  */
  YYSYMBOL_61_9 = 61,                      /* $@9  */
  YYSYMBOL_62_10 = 62,                     /* $@10  */
  YYSYMBOL_63_11 = 63,                     /* $@11  */
  YYSYMBOL_64_12 = 64,                     /* $@12  */
  YYSYMBOL_inc_dec = 65,                   /* inc_dec  */
  YYSYMBOL_declarations_interior = 66,     /* declarations_interior  */
  YYSYMBOL_boolean_expression = 67,        /* boolean_expression  */
  YYSYMBOL_condition = 68,                 /* condition  */
  YYSYMBOL_classes = 69,                   /* classes  */
  YYSYMBOL_class = 70,                     /* class  */
  YYSYMBOL_71_13 = 71,                     /* $@13  */
  YYSYMBOL_class_initialize_initial = 72,  /* class_initialize_initial  */
  YYSYMBOL_class_initialize = 73,          /* class_initialize  */
  YYSYMBOL_class_initialize_interior = 74, /* class_initialize_interior  */
  YYSYMBOL_class_instance = 75,            /* class_instance  */
  YYSYMBOL_76_14 = 76,                     /* $@14  */
  YYSYMBOL_class_instance_interior = 77,   /* class_instance_interior  */
  YYSYMBOL_list_param = 78,                /* list_param  */
  YYSYMBOL_param = 79,                     /* param  */
  YYSYMBOL_call_list = 80,                 /* call_list  */
  YYSYMBOL_statement_for_call_list = 81,   /* statement_for_call_list  */
  YYSYMBOL_82_15 = 82,                     /* $@15  */
  YYSYMBOL_83_16 = 83,                     /* $@16  */
  YYSYMBOL_84_17 = 84,                     /* $@17  */
  YYSYMBOL_e = 85                          /* e  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 22 "maker.y"

     

#line 211 "maker.tab.c"


#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  15
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   237

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  90
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  184

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   279


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      29,    30,    27,    25,    35,    26,     2,    28,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    34,    31,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    32,     2,    33,     2,     2,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    31,    31,    32,    36,    35,    51,    52,    53,    54,
      57,    58,    61,    60,    78,    79,    81,    82,    85,    88,
      91,    92,    94,    95,    98,   101,   104,   105,   107,   108,
     110,   110,   128,   128,   146,   146,   165,   164,   181,   191,
     197,   180,   213,   231,   246,   212,   261,   262,   263,   266,
     267,   270,   271,   274,   275,   276,   277,   280,   283,   284,
     288,   287,   306,   307,   311,   312,   315,   318,   318,   320,
     323,   324,   328,   331,   332,   333,   334,   338,   337,   357,
     357,   376,   375,   396,   397,   398,   399,   400,   401,   402,
     403
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "BGIN", "END",
  "ASSIGN", "NR", "TRUTH_VALUE", "CBEGIN", "CEND", "REAL", "CONNECT",
  "PRINT", "TYPE_FUNCTION", "ID", "TYPE", "Class_ID", "Class_Type", "IF",
  "ELSE", "WHILE", "FOR", "CMP", "INC", "DEC", "'+'", "'-'", "'*'", "'/'",
  "'('", "')'", "';'", "'['", "']'", "':'", "','", "$accept", "progr",
  "main", "$@1", "global_classes_declaration", "functions_generator",
  "functions", "$@2", "variables_generator", "variables", "fundamentals",
  "arr", "arr_list", "variables_interior", "fundamentals_interior",
  "arr_interior", "list", "list_for_else", "statement", "$@3", "$@4",
  "$@5", "$@6", "$@7", "$@8", "$@9", "$@10", "$@11", "$@12", "inc_dec",
  "declarations_interior", "boolean_expression", "condition", "classes",
  "class", "$@13", "class_initialize_initial", "class_initialize",
  "class_initialize_interior", "class_instance", "$@14",
  "class_instance_interior", "list_param", "param", "call_list",
  "statement_for_call_list", "$@15", "$@16", "$@17", "e", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-99)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-82)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      86,     9,    33,    58,   101,    53,   -99,    87,   -99,   -99,
     -99,    86,   -99,    55,    32,   -99,   -99,   -99,   102,   -99,
      53,   -99,   114,   -99,   -99,   112,   107,   106,   135,   136,
     -99,   131,   101,   114,   -99,   120,   149,   -99,   -99,   145,
     156,   179,   177,   183,   169,   170,   171,   -99,   -99,   -99,
      49,   172,   -99,   -99,   -99,   -99,   -99,   -99,   173,   187,
       8,   -99,    87,     2,     2,   195,   175,   173,   -99,     0,
       0,   192,   -99,   176,   -99,   178,   -99,   -99,   200,   149,
     201,   -99,   -99,   -99,     2,    -6,    29,     2,   204,     3,
     -99,   -99,     2,     4,   -99,    14,     7,   207,   -99,   -99,
     136,   -99,   182,    51,     2,     2,     2,     2,   -99,   -99,
     168,   -99,    -2,    63,   -99,   168,   133,   185,   208,     2,
     209,   -99,    76,   -99,   -99,    82,    82,   -99,   -99,   211,
     186,   -99,     3,     2,     2,   -99,   -99,   168,   -99,     2,
     188,     2,   213,     3,   -99,   168,   162,   140,   136,   136,
     144,   -99,   168,   -99,    65,   -99,    99,   113,     2,   -99,
     -99,   -99,   151,   202,     2,   214,   155,   -99,   210,   136,
     -99,   136,   216,   100,   -99,   -99,   -99,   196,   193,   218,
     -99,   136,   126,   -99
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       9,     0,     0,     0,     0,     8,    11,     7,    15,    16,
      17,     9,    58,    12,     0,     1,     4,     3,     0,    10,
       6,    14,    63,    59,    18,     0,     0,     0,     0,     0,
      12,     0,     0,    62,    64,     0,     0,    19,    60,     0,
       0,    32,     0,     0,     0,     0,     0,    51,    22,    23,
       0,     0,    46,    52,    66,    67,     2,    65,    21,     0,
       0,    70,     9,     0,     0,    30,     0,    24,    69,     0,
       0,     0,     5,     0,    26,     0,    20,    72,     0,     0,
       0,    88,    89,    90,     0,     0,     0,     0,     0,     0,
      25,    56,     0,     0,    53,     0,     0,     0,    27,    68,
       0,    71,     0,     0,     0,     0,     0,     0,    47,    48,
      31,    35,    90,     0,    75,    73,     0,     0,     0,     0,
       0,    42,     0,    61,    87,    83,    85,    84,    86,    77,
       0,    33,     0,     0,     0,    54,    38,    55,    36,     0,
       0,     0,     0,     0,    76,    74,     0,     0,     0,     0,
       0,    13,    78,    82,     0,    57,     0,     0,     0,    80,
      39,    37,     0,     0,     0,     0,     0,    40,     0,    29,
      43,    28,     0,     0,    41,    49,    50,     0,     0,     0,
      44,     0,     0,    45
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -99,   -99,   197,   -99,   -10,   221,     6,   -99,   -99,   223,
     -99,   -99,   -23,   -99,   -99,   -99,   -98,   -99,   -50,   -99,
     -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,   161,   115,   -99,   222,   -99,   -99,   -99,   -99,   203,
     -99,   -99,   -99,   158,    91,   103,   -99,   -99,   -99,   -59
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,    17,    29,     4,     5,     6,    26,     7,     8,
       9,    10,    27,    47,    48,    49,    50,   172,    51,    87,
      66,    88,   149,   148,   163,   169,   139,   173,   181,   177,
      52,    93,    94,    11,    12,    62,    32,    33,    53,    34,
      75,    54,    60,    61,   113,   114,   141,   130,   142,    95
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      73,    22,   122,   129,    85,    86,    81,    91,    81,    81,
      82,    19,    82,    82,    83,   117,    83,   112,   117,   104,
     105,   106,   107,    13,   108,   103,    19,   -79,   110,    92,
     115,    84,    84,   116,   118,    76,   119,   120,    78,   104,
     105,   106,   107,    79,    90,   125,   126,   127,   128,    14,
     156,   157,    80,    72,   104,   105,   106,   107,    15,   109,
     137,    39,    40,    41,    42,    43,    28,    44,    18,    45,
      46,   171,    73,   145,   146,   147,   104,   105,   106,   107,
     150,   124,   152,   182,   115,   140,    24,    25,    39,    40,
      41,    42,    43,   131,    44,   159,    45,    46,   132,   162,
     132,     1,     1,     2,    16,   166,    73,    73,   160,   106,
     107,    39,    40,    41,    42,    43,    30,    44,    35,    45,
      46,    73,   161,   175,   176,    39,    40,    41,    42,    43,
      31,    44,    73,    45,    46,   183,    36,    37,    39,    40,
      41,    42,    43,    38,    44,    55,    45,    46,    39,    40,
      41,    42,    43,    58,    44,   133,    45,    46,   104,   105,
     106,   107,   133,   124,    59,   104,   105,   106,   107,   104,
     105,   106,   107,   164,    63,   158,   104,   105,   106,   107,
     104,   105,   106,   107,    65,    64,   168,   104,   105,   106,
     107,    67,   155,   104,   105,   106,   107,    68,    69,    70,
      71,    77,   -34,    74,    89,    25,    97,    98,   100,    99,
     102,   111,   121,   123,   134,   143,   136,   138,   -81,   151,
     153,   165,   167,   179,   170,   174,   180,   178,    20,    56,
      21,    96,   135,    23,   154,   144,    57,   101
};

static const yytype_uint8 yycheck[] =
{
      50,    11,   100,     5,    63,    64,     6,     7,     6,     6,
      10,     5,    10,    10,    14,    11,    14,    14,    11,    25,
      26,    27,    28,    14,    30,    84,    20,    29,    87,    29,
      89,    29,    29,    92,    30,    58,    22,    30,    30,    25,
      26,    27,    28,    35,    67,   104,   105,   106,   107,    16,
     148,   149,    62,     4,    25,    26,    27,    28,     0,    30,
     119,    12,    13,    14,    15,    16,    34,    18,    15,    20,
      21,   169,   122,   132,   133,   134,    25,    26,    27,    28,
     139,    30,   141,   181,   143,     9,    31,    32,    12,    13,
      14,    15,    16,    30,    18,    30,    20,    21,    35,   158,
      35,    15,    15,    17,     3,   164,   156,   157,     9,    27,
      28,    12,    13,    14,    15,    16,    14,    18,     6,    20,
      21,   171,     9,    23,    24,    12,    13,    14,    15,    16,
      16,    18,   182,    20,    21,     9,    29,    31,    12,    13,
      14,    15,    16,     8,    18,    14,    20,    21,    12,    13,
      14,    15,    16,    33,    18,    22,    20,    21,    25,    26,
      27,    28,    22,    30,    15,    25,    26,    27,    28,    25,
      26,    27,    28,    22,    29,    31,    25,    26,    27,    28,
      25,    26,    27,    28,     5,    29,    31,    25,    26,    27,
      28,    14,    30,    25,    26,    27,    28,    14,    29,    29,
      29,    14,     7,    31,    29,    32,    14,    31,     8,    31,
       9,     7,     5,    31,    29,    29,     8,     8,     7,    31,
       7,    19,     8,    30,    14,     9,     8,    31,     7,    32,
       7,    70,   117,    11,   143,   132,    33,    79
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    15,    17,    37,    40,    41,    42,    44,    45,    46,
      47,    69,    70,    14,    16,     0,     3,    38,    15,    42,
      41,    45,    40,    70,    31,    32,    43,    48,    34,    39,
      14,    16,    72,    73,    75,     6,    29,    31,     8,    12,
      13,    14,    15,    16,    18,    20,    21,    49,    50,    51,
      52,    54,    66,    74,    77,    14,    38,    75,    33,    15,
      78,    79,    71,    29,    29,     5,    56,    14,    14,    29,
      29,    29,     4,    54,    31,    76,    48,    14,    30,    35,
      40,     6,    10,    14,    29,    85,    85,    55,    57,    29,
      48,     7,    29,    67,    68,    85,    67,    14,    31,    31,
       8,    79,     9,    85,    25,    26,    27,    28,    30,    30,
      85,     7,    14,    80,    81,    85,    85,    11,    30,    22,
      30,     5,    52,    31,    30,    85,    85,    85,    85,     5,
      83,    30,    35,    22,    29,    68,     8,    85,     8,    62,
       9,    82,    84,    29,    81,    85,    85,    85,    59,    58,
      85,    31,    85,     7,    80,    30,    52,    52,    31,    30,
       9,     9,    85,    60,    22,    19,    85,     8,    31,    61,
      14,    52,    53,    63,     9,    23,    24,    65,    31,    30,
       8,    64,    52,     9
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    36,    37,    37,    39,    38,    40,    40,    40,    40,
      41,    41,    43,    42,    44,    44,    45,    45,    46,    47,
      48,    48,    49,    49,    50,    51,    52,    52,    53,    53,
      55,    54,    56,    54,    57,    54,    58,    54,    59,    60,
      61,    54,    62,    63,    64,    54,    54,    54,    54,    65,
      65,    66,    66,    67,    67,    67,    67,    68,    69,    69,
      71,    70,    72,    72,    73,    73,    74,    76,    75,    77,
      78,    78,    79,    80,    80,    80,    80,    82,    81,    83,
      81,    84,    81,    85,    85,    85,    85,    85,    85,    85,
      85
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     2,     0,     4,     2,     1,     1,     0,
       2,     1,     0,    10,     2,     1,     1,     1,     3,     4,
       4,     3,     1,     1,     2,     3,     2,     3,     1,     0,
       0,     4,     0,     5,     0,     4,     0,     8,     0,     0,
       0,    14,     0,     0,     0,    20,     1,     4,     4,     1,
       1,     1,     1,     1,     3,     3,     1,     5,     1,     2,
       0,     8,     1,     0,     1,     2,     1,     0,     4,     2,
       1,     3,     2,     1,     3,     1,     3,     0,     4,     0,
       5,     0,     4,     3,     3,     3,     3,     3,     1,     1,
       1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* progr: classes global_classes_declaration class_initialize_initial main  */
#line 31 "maker.y"
                                                                          {if (errorCount == 0) cout<< "The program is correct!" << endl;}
#line 1302 "maker.tab.c"
    break;

  case 3: /* progr: global_classes_declaration main  */
#line 32 "maker.y"
                                         {if (errorCount == 0) cout<< "The program is correct!" << endl;}
#line 1308 "maker.tab.c"
    break;

  case 4: /* $@1: %empty  */
#line 36 "maker.y"
          {SymTable* currentmain;     
           currentmain = new SymTable("main");
           //current->add_above(currentmain);
           currentmain->assign_stack_above(current->return_stack_above());
           currentmain->add_above(current);
           current=currentmain;  
           Vector_Tabele.push_back(current);
          }
#line 1321 "maker.tab.c"
    break;

  case 5: /* main: BGIN $@1 list END  */
#line 45 "maker.y"
                    {
                     //current->remove_from_above();//Scoatem din currentmain
                     current=current->next_domain_scope();
                     //current->remove_from_above();//Scoatem din current
                    }
#line 1331 "maker.tab.c"
    break;

  case 12: /* $@2: %empty  */
#line 61 "maker.y"
                { current->check_existance_for_declaration((yyvsp[-1].string), (yyvsp[0].string) , "func" , errorCount , yylineno);
                  class SymTable* function_scope;
                  function_scope=new SymTable((yyvsp[0].string));
                  //current->add_above(function_scope);
                  function_scope->assign_stack_above(current->return_stack_above());
                  function_scope->add_above(current);
                  current=function_scope;
                  Vector_Tabele.push_back(current);
                }
#line 1345 "maker.tab.c"
    break;

  case 13: /* functions: TYPE ID $@2 '(' list_param ')' CBEGIN list CEND ';'  */
#line 71 "maker.y"
                                   {
                                    //current->remove_from_above();
                                    current=current->next_domain_scope();
                                    //current->remove_from_above();
                                   }
#line 1355 "maker.tab.c"
    break;

  case 18: /* fundamentals: TYPE ID ';'  */
#line 85 "maker.y"
                          {current->check_existance_for_declaration((yyvsp[-2].string), (yyvsp[-1].string) , "var" , errorCount , yylineno);}
#line 1361 "maker.tab.c"
    break;

  case 19: /* arr: TYPE ID arr_list ';'  */
#line 88 "maker.y"
                           {current->check_existance_for_declaration((yyvsp[-3].string), (yyvsp[-2].string) , "array" , errorCount , yylineno);}
#line 1367 "maker.tab.c"
    break;

  case 24: /* fundamentals_interior: TYPE ID  */
#line 98 "maker.y"
                                {current->check_existance_for_declaration((yyvsp[-1].string), (yyvsp[0].string) , "var" , errorCount , yylineno);}
#line 1373 "maker.tab.c"
    break;

  case 25: /* arr_interior: TYPE ID arr_list  */
#line 101 "maker.y"
                                 {current->check_existance_for_declaration((yyvsp[-2].string), (yyvsp[-1].string) , "array" , errorCount , yylineno);}
#line 1379 "maker.tab.c"
    break;

  case 30: /* $@3: %empty  */
#line 110 "maker.y"
                     {domeniul_caruia_ii_apartine_varabila=current->check_existance_for_use((yyvsp[-1].string) , errorCount , yylineno);
                      if(domeniul_caruia_ii_apartine_varabila!=nullptr)
                         {
                              if (domeniul_caruia_ii_apartine_varabila->getValueType((yyvsp[-1].string))=="bool")
                              {
                                   {errorCount++; 
                                    char*buff=new char[256];
                                    strcpy(buff ,"Cannot assing arithmetic expression to ");
                                    strcat(buff , (yyvsp[-1].string));
                                    strcat(buff ," which is a bool"); 
                                    yyerror(buff);
                                    delete [] buff;
                                    buff=nullptr;
                                   }
                              }
                         }
                     }
#line 1401 "maker.tab.c"
    break;

  case 32: /* $@4: %empty  */
#line 128 "maker.y"
              {
               domeniul_caruia_ii_apartine_varabila=current->check_existance_for_use((yyvsp[0].string) , errorCount , yylineno);
               if(domeniul_caruia_ii_apartine_varabila!=nullptr)
                    {
                      if(domeniul_caruia_ii_apartine_varabila->getValue_IDType((yyvsp[0].string))!="func")
                           {
                             errorCount++; 
                             char*buff=new char[256];
                             strcpy(buff ,"ID ");
                             strcat(buff , (yyvsp[0].string));
                             strcat(buff ," exists but is NOT a funciton"); 
                             yyerror(buff);
                             delete [] buff;
                             buff=nullptr;
                           }
                    }
              }
#line 1423 "maker.tab.c"
    break;

  case 34: /* $@5: %empty  */
#line 146 "maker.y"
                     {
                         domeniul_caruia_ii_apartine_varabila=current->check_existance_for_use((yyvsp[-1].string) , errorCount , yylineno);
                     }
#line 1431 "maker.tab.c"
    break;

  case 35: /* statement: ID ASSIGN $@5 TRUTH_VALUE  */
#line 149 "maker.y"
                                     {
                                        if(domeniul_caruia_ii_apartine_varabila!=nullptr){
                                             if (domeniul_caruia_ii_apartine_varabila->getValueType((yyvsp[-3].string))!="bool")
                                                  {
                                                       errorCount++; 
                                                       char*buff=new char[256];
                                                       strcpy(buff ,"Variable ");
                                                       strcat(buff , (yyvsp[-3].string));
                                                       strcat(buff ," is not a bool"); 
                                                       yyerror(buff);
                                                       delete [] buff;
                                                       buff=nullptr;
                                                  }   
                                        }
                                     }
#line 1451 "maker.tab.c"
    break;

  case 36: /* $@6: %empty  */
#line 165 "maker.y"
                                   {
                                     SymTable* currentCTRL;     
                                     currentCTRL = new SymTable((yyvsp[-4].string));
                                     //current->add_above(currentCTRL);
                                     currentCTRL->assign_stack_above(current->return_stack_above());
                                     currentCTRL->add_above(current);
                                     current=currentCTRL;
                                     Vector_Tabele.push_back(current);
                                   }
#line 1465 "maker.tab.c"
    break;

  case 37: /* statement: WHILE '(' boolean_expression ')' CBEGIN $@6 list CEND  */
#line 175 "maker.y"
                                                       {
                                                            //current->remove_from_above();
                                                            current=current->next_domain_scope();
                                                            //current->remove_from_above();
                                                       }
#line 1475 "maker.tab.c"
    break;

  case 38: /* $@7: %empty  */
#line 181 "maker.y"
                                        {
                                          SymTable* currentCTRL;     
                                          currentCTRL = new SymTable((yyvsp[-4].string));
                                          //current->add_above(currentCTRL);
                                          currentCTRL->assign_stack_above(current->return_stack_above());
                                          currentCTRL->add_above(current);
                                          current=currentCTRL;
                                          Vector_Tabele.push_back(current);
                                        }
#line 1489 "maker.tab.c"
    break;

  case 39: /* $@8: %empty  */
#line 191 "maker.y"
                                                       {
                                                         //current->remove_from_above();
                                                         current=current->next_domain_scope();
                                                         //current->remove_from_above();
                                                       }
#line 1499 "maker.tab.c"
    break;

  case 40: /* $@9: %empty  */
#line 197 "maker.y"
                                        {
                                          SymTable* currentCTRL;     
                                          currentCTRL = new SymTable((yyvsp[-10].string));
                                          //current->add_above(currentCTRL);
                                          currentCTRL->assign_stack_above(current->return_stack_above());
                                          currentCTRL->add_above(current);
                                          current=currentCTRL;
                                          Vector_Tabele.push_back(current);
                                        }
#line 1513 "maker.tab.c"
    break;

  case 41: /* statement: IF '(' boolean_expression ')' CBEGIN $@7 list CEND $@8 ELSE CBEGIN $@9 list_for_else CEND  */
#line 207 "maker.y"
                                        {
                                          //current->remove_from_above();
                                          current=current->next_domain_scope();
                                          //current->remove_from_above();
                                        }
#line 1523 "maker.tab.c"
    break;

  case 42: /* $@10: %empty  */
#line 213 "maker.y"
               {
                 domeniul_caruia_ii_apartine_varabila=current->check_existance_for_use((yyvsp[-1].string) , errorCount , yylineno);
                 if(domeniul_caruia_ii_apartine_varabila!=nullptr)
                    {
                      if (domeniul_caruia_ii_apartine_varabila->getValueType((yyvsp[-1].string))=="bool")
                         {
                           errorCount++; 
                           char*buff=new char[256];
                           strcpy(buff ,"Cannot assing arithmetic expression to ");
                           strcat(buff , (yyvsp[-1].string));
                           strcat(buff ," which is a bool"); 
                           yyerror(buff);
                           delete [] buff;
                           buff=nullptr;     
                         }
                    }
               }
#line 1545 "maker.tab.c"
    break;

  case 43: /* $@11: %empty  */
#line 231 "maker.y"
               {
                 if(strcmp((yyvsp[-9].string) , (yyvsp[0].string))!=0)
                    {
                      errorCount++;
                      char*buff=new char[256];
                      strcpy(buff ,"The variable you're trying to inc/dec ");
                      strcat(buff , (yyvsp[0].string));
                      strcat(buff ," is different from the one you assigned "); 
                      strcat(buff , (yyvsp[-9].string));
                      yyerror(buff);
                      delete [] buff;
                      buff=nullptr;
                    }
               }
#line 1564 "maker.tab.c"
    break;

  case 44: /* $@12: %empty  */
#line 246 "maker.y"
               {
                 SymTable* currentCTRL;     
                 currentCTRL = new SymTable((yyvsp[-16].string));
                 //current->add_above(currentCTRL);
                 currentCTRL->assign_stack_above(current->return_stack_above());
                 currentCTRL->add_above(current);
                 current=currentCTRL;
                 Vector_Tabele.push_back(current);
               }
#line 1578 "maker.tab.c"
    break;

  case 45: /* statement: FOR '(' ID ASSIGN $@10 e ';' e CMP e ';' ID $@11 inc_dec ';' ')' CBEGIN $@12 list CEND  */
#line 256 "maker.y"
               {
                 //current->remove_from_above();
                 current=current->next_domain_scope();
                 //current->remove_from_above();
               }
#line 1588 "maker.tab.c"
    break;

  case 60: /* $@13: %empty  */
#line 288 "maker.y"
          {
            current->check_existance_for_declaration((yyvsp[-3].string), (yyvsp[-2].string) , "class" , errorCount , yylineno);
            SymTable* class_scope;
            class_scope=new SymTable((yyvsp[-2].string));
            //current->add_above(class_scope);
            class_scope->assign_stack_above(current->return_stack_above());
            class_scope->add_above(current);
            current=class_scope;
            Vector_Tabele.push_back(current);
          }
#line 1603 "maker.tab.c"
    break;

  case 61: /* class: Class_Type Class_ID ':' CBEGIN $@13 global_classes_declaration CEND ';'  */
#line 299 "maker.y"
          {
            //current->remove_from_above();
            current=current->next_domain_scope();
            //current->remove_from_above();
          }
#line 1613 "maker.tab.c"
    break;

  case 67: /* $@14: %empty  */
#line 318 "maker.y"
                             {current->check_existance_for_class_instance((yyvsp[-1].string) , (yyvsp[0].string), errorCount , yylineno);}
#line 1619 "maker.tab.c"
    break;

  case 69: /* class_instance_interior: Class_ID ID  */
#line 320 "maker.y"
                                      {current->check_existance_for_class_instance((yyvsp[-1].string) , (yyvsp[0].string), errorCount , yylineno);}
#line 1625 "maker.tab.c"
    break;

  case 72: /* param: TYPE ID  */
#line 328 "maker.y"
                {current->check_existance_for_declaration((yyvsp[-1].string), (yyvsp[0].string) , "param" , errorCount , yylineno);}
#line 1631 "maker.tab.c"
    break;

  case 77: /* $@15: %empty  */
#line 338 "maker.y"
                         {
                              domeniul_caruia_ii_apartine_varabila=current->check_existance_for_use((yyvsp[-1].string) , errorCount , yylineno);
                              if(domeniul_caruia_ii_apartine_varabila!=nullptr)
                                   {
                                        if (domeniul_caruia_ii_apartine_varabila->getValueType((yyvsp[-1].string))=="bool")
                                             {
                                                  {errorCount++; 
                                                  char*buff=new char[256];
                                                  strcpy(buff ,"Cannot assing arithmetic expression to ");
                                                  strcat(buff , (yyvsp[-1].string));
                                                  strcat(buff ," which is a bool"); 
                                                  yyerror(buff);
                                                  delete [] buff;
                                                  buff=nullptr;
                                                  }
                                             }
                                   }
                         }
#line 1654 "maker.tab.c"
    break;

  case 79: /* $@16: %empty  */
#line 357 "maker.y"
                              {
                                   domeniul_caruia_ii_apartine_varabila=current->check_existance_for_use((yyvsp[0].string) , errorCount , yylineno);
                                   if(domeniul_caruia_ii_apartine_varabila!=nullptr)
                                        {
                                             if(domeniul_caruia_ii_apartine_varabila->getValue_IDType((yyvsp[0].string))!="func")
                                                  {
                                                       errorCount++; 
                                                       char*buff=new char[256];
                                                       strcpy(buff ,"ID ");
                                                       strcat(buff , (yyvsp[0].string));
                                                       strcat(buff ," exists but is NOT a funciton"); 
                                                       yyerror(buff);
                                                       delete [] buff;
                                                       buff=nullptr;
                                                  }
                                        }
                              }
#line 1676 "maker.tab.c"
    break;

  case 81: /* $@17: %empty  */
#line 376 "maker.y"
                                   {domeniul_caruia_ii_apartine_varabila=current->check_existance_for_use((yyvsp[-1].string) , errorCount , yylineno);}
#line 1682 "maker.tab.c"
    break;

  case 82: /* statement_for_call_list: ID ASSIGN $@17 TRUTH_VALUE  */
#line 377 "maker.y"
                                                    {
                                                       if(domeniul_caruia_ii_apartine_varabila!=nullptr)
                                                       {
                                                            if (domeniul_caruia_ii_apartine_varabila->getValueType((yyvsp[-3].string))!="bool")
                                                                 {
                                                                      errorCount++; 
                                                                      char*buff=new char[256];
                                                                      strcpy(buff ,"Variable ");
                                                                      strcat(buff , (yyvsp[-3].string));
                                                                      strcat(buff ," is not a bool"); 
                                                                      yyerror(buff);
                                                                      delete [] buff;
                                                                      buff=nullptr;
                                                                 }   
                                                       }
                                                  }
#line 1703 "maker.tab.c"
    break;

  case 83: /* e: e '+' e  */
#line 396 "maker.y"
              {}
#line 1709 "maker.tab.c"
    break;

  case 84: /* e: e '*' e  */
#line 397 "maker.y"
              {}
#line 1715 "maker.tab.c"
    break;

  case 85: /* e: e '-' e  */
#line 398 "maker.y"
              {}
#line 1721 "maker.tab.c"
    break;

  case 86: /* e: e '/' e  */
#line 399 "maker.y"
              {}
#line 1727 "maker.tab.c"
    break;

  case 87: /* e: '(' e ')'  */
#line 400 "maker.y"
              {}
#line 1733 "maker.tab.c"
    break;

  case 88: /* e: NR  */
#line 401 "maker.y"
              {}
#line 1739 "maker.tab.c"
    break;

  case 89: /* e: REAL  */
#line 402 "maker.y"
              {}
#line 1745 "maker.tab.c"
    break;

  case 90: /* e: ID  */
#line 403 "maker.y"
              {domeniul_caruia_ii_apartine_varabila=current->check_existance_for_use((yyvsp[0].string) , errorCount , yylineno);}
#line 1751 "maker.tab.c"
    break;


#line 1755 "maker.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 407 "maker.y"

void yyerror(const char * s){
     cout << "error:" << s << " at line: " << yylineno << endl;
}

int main(int argc, char** argv){
     yyin=fopen(argv[1],"r");
     current = new SymTable("global");
     //current->add_above(current);
     Vector_Tabele.push_back(current);
     yyparse();
     cout << "Variables:" <<endl;
     for (auto i : Vector_Tabele){
          i->printVars();
          delete i;
     }
} 
