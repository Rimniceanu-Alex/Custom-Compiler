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
  YYSYMBOL_TRUTH_VALUE = 6,                /* TRUTH_VALUE  */
  YYSYMBOL_CBEGIN = 7,                     /* CBEGIN  */
  YYSYMBOL_CEND = 8,                       /* CEND  */
  YYSYMBOL_REAL = 9,                       /* REAL  */
  YYSYMBOL_CONNECT = 10,                   /* CONNECT  */
  YYSYMBOL_PRINT = 11,                     /* PRINT  */
  YYSYMBOL_TYPE_FUNCTION = 12,             /* TYPE_FUNCTION  */
  YYSYMBOL_ID = 13,                        /* ID  */
  YYSYMBOL_TYPE = 14,                      /* TYPE  */
  YYSYMBOL_Class_ID = 15,                  /* Class_ID  */
  YYSYMBOL_Class_Type = 16,                /* Class_Type  */
  YYSYMBOL_IF = 17,                        /* IF  */
  YYSYMBOL_ELSE = 18,                      /* ELSE  */
  YYSYMBOL_WHILE = 19,                     /* WHILE  */
  YYSYMBOL_FOR = 20,                       /* FOR  */
  YYSYMBOL_CMP = 21,                       /* CMP  */
  YYSYMBOL_INC = 22,                       /* INC  */
  YYSYMBOL_DEC = 23,                       /* DEC  */
  YYSYMBOL_NR = 24,                        /* NR  */
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
  YYSYMBOL_x = 85,                         /* x  */
  YYSYMBOL_e = 86                          /* e  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 23 "maker.y"

     

#line 212 "maker.tab.c"


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
#define YYNNTS  51
/* YYNRULES -- Number of rules.  */
#define YYNRULES  91
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  185

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
       0,    33,    33,    34,    38,    37,    53,    54,    55,    56,
      59,    60,    63,    62,    80,    81,    83,    84,    87,    90,
      93,    94,    96,    97,   100,   103,   106,   107,   109,   110,
     112,   112,   159,   159,   177,   177,   196,   195,   212,   222,
     228,   211,   244,   262,   277,   243,   292,   293,   294,   297,
     298,   301,   302,   305,   306,   307,   308,   311,   314,   315,
     319,   318,   337,   338,   342,   343,   346,   349,   349,   351,
     354,   355,   359,   362,   363,   364,   365,   369,   368,   388,
     388,   407,   406,   426,   428,   429,   430,   431,   432,   433,
     435,   437
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
  "ASSIGN", "TRUTH_VALUE", "CBEGIN", "CEND", "REAL", "CONNECT", "PRINT",
  "TYPE_FUNCTION", "ID", "TYPE", "Class_ID", "Class_Type", "IF", "ELSE",
  "WHILE", "FOR", "CMP", "INC", "DEC", "NR", "'+'", "'-'", "'*'", "'/'",
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
  "statement_for_call_list", "$@15", "$@16", "$@17", "x", "e", YY_NULLPTR
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
      -6,     1,    21,    18,    17,    26,   -99,    30,   -99,   -99,
     -99,    -6,   -99,    56,    19,   -99,   -99,   -99,    53,   -99,
      26,   -99,    40,   -99,   -99,    47,    65,    68,    89,   138,
     -99,    92,    17,    40,   -99,    84,   105,   -99,   -99,   108,
     109,   126,   131,   133,   125,   130,   137,   -99,   -99,   -99,
      45,   136,   -99,   -99,   -99,   -99,   -99,   -99,   141,   161,
     -13,   -99,    30,     3,     3,   178,   146,   141,   -99,     0,
       0,   172,   -99,   160,   -99,   167,   -99,   -99,   185,   105,
     196,   -99,   -99,   -99,     3,    52,   169,     3,   204,    10,
     -99,   -99,     3,    -9,   -99,    42,     5,   207,   -99,   -99,
     138,   -99,   182,   175,     3,     3,     3,     3,   -99,   -99,
     -99,    76,   -99,     2,     7,   -99,    76,   135,   186,   209,
       3,   210,   -99,    78,   -99,   -99,    83,    83,   -99,   -99,
     208,   189,   -99,    10,     3,     3,   -99,   -99,    76,   -99,
       3,   188,     3,   214,    10,   -99,    76,   181,   143,   138,
     138,   155,   -99,    76,   -99,     8,   -99,   101,   115,     3,
     -99,   -99,   -99,   151,   203,     3,   215,   162,   -99,   211,
     138,   -99,   138,   217,   102,   -99,   -99,   -99,   192,   197,
     219,   -99,   138,   128,   -99
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
       0,    90,    91,    89,     0,     0,     0,     0,     0,     0,
      25,    56,     0,     0,    53,     0,     0,     0,    27,    68,
       0,    71,     0,     0,     0,     0,     0,     0,    47,    48,
      31,    83,    35,    91,     0,    75,    73,     0,     0,     0,
       0,     0,    42,     0,    61,    88,    84,    86,    85,    87,
      77,     0,    33,     0,     0,     0,    54,    38,    55,    36,
       0,     0,     0,     0,     0,    76,    74,     0,     0,     0,
       0,     0,    13,    78,    82,     0,    57,     0,     0,     0,
      80,    39,    37,     0,     0,     0,     0,     0,    40,     0,
      29,    43,    28,     0,     0,    41,    49,    50,     0,     0,
       0,    44,     0,     0,    45
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -99,   -99,   198,   -99,    -8,   221,     6,   -99,   -99,   222,
     -99,   -99,   -17,   -99,   -99,   -99,   -98,   -99,   -50,   -99,
     -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,   163,   113,   -99,   223,   -99,   -99,   -99,   -99,   199,
     -99,   -99,   -99,   156,    93,   103,   -99,   -99,   -99,   -99,
     -59
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,    17,    29,     4,     5,     6,    26,     7,     8,
       9,    10,    27,    47,    48,    49,    50,   173,    51,    87,
      66,    88,   150,   149,   164,   170,   140,   174,   182,   178,
      52,    93,    94,    11,    12,    62,    32,    33,    53,    34,
      75,    54,    60,    61,   114,   115,   142,   131,   143,   110,
      95
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      73,   118,   123,    22,    85,    86,    91,   130,     1,    81,
       2,    19,    81,    82,    13,   118,    82,    78,    15,    81,
      16,   119,    79,   113,    83,   103,    19,    83,   111,    92,
     116,   -79,    84,   117,    83,   121,    14,   132,   160,    84,
      18,    76,   133,   133,     1,   126,   127,   128,   129,    72,
      90,   157,   158,    28,    80,    31,    39,    40,    41,    42,
      43,   138,    44,   120,    45,    46,    30,   104,   105,   106,
     107,    35,   172,    73,   146,   147,   148,   104,   105,   106,
     107,   151,   108,   153,   183,   116,   141,    24,    25,    39,
      40,    41,    42,    43,    36,    44,    38,    45,    46,    37,
     163,   104,   105,   106,   107,    55,   167,    73,    73,   161,
     106,   107,    39,    40,    41,    42,    43,    58,    44,    59,
      45,    46,    73,   162,   176,   177,    39,    40,    41,    42,
      43,    65,    44,    73,    45,    46,   184,    63,    64,    39,
      40,    41,    42,    43,    67,    44,    68,    45,    46,    39,
      40,    41,    42,    43,    69,    44,   134,    45,    46,    70,
     104,   105,   106,   107,   134,   125,    71,    74,   104,   105,
     106,   107,   165,    25,    77,    89,   104,   105,   106,   107,
     104,   105,   106,   107,   -34,    97,   159,   104,   105,   106,
     107,    98,   100,   169,   104,   105,   106,   107,    99,   109,
     104,   105,   106,   107,   102,   125,   104,   105,   106,   107,
     112,   156,   122,   124,   -81,   135,   137,   139,   144,   152,
     154,   166,   168,   179,   171,   175,   181,   180,    20,    21,
      56,   136,    57,    96,    23,   101,   145,   155
};

static const yytype_uint8 yycheck[] =
{
      50,    10,   100,    11,    63,    64,     6,     5,    14,     9,
      16,     5,     9,    13,    13,    10,    13,    30,     0,     9,
       3,    30,    35,    13,    24,    84,    20,    24,    87,    29,
      89,    29,    29,    92,    24,    30,    15,    30,    30,    29,
      14,    58,    35,    35,    14,   104,   105,   106,   107,     4,
      67,   149,   150,    34,    62,    15,    11,    12,    13,    14,
      15,   120,    17,    21,    19,    20,    13,    25,    26,    27,
      28,    24,   170,   123,   133,   134,   135,    25,    26,    27,
      28,   140,    30,   142,   182,   144,     8,    31,    32,    11,
      12,    13,    14,    15,    29,    17,     7,    19,    20,    31,
     159,    25,    26,    27,    28,    13,   165,   157,   158,     8,
      27,    28,    11,    12,    13,    14,    15,    33,    17,    14,
      19,    20,   172,     8,    22,    23,    11,    12,    13,    14,
      15,     5,    17,   183,    19,    20,     8,    29,    29,    11,
      12,    13,    14,    15,    13,    17,    13,    19,    20,    11,
      12,    13,    14,    15,    29,    17,    21,    19,    20,    29,
      25,    26,    27,    28,    21,    30,    29,    31,    25,    26,
      27,    28,    21,    32,    13,    29,    25,    26,    27,    28,
      25,    26,    27,    28,     6,    13,    31,    25,    26,    27,
      28,    31,     7,    31,    25,    26,    27,    28,    31,    30,
      25,    26,    27,    28,     8,    30,    25,    26,    27,    28,
       6,    30,     5,    31,     6,    29,     7,     7,    29,    31,
       6,    18,     7,    31,    13,     8,     7,    30,     7,     7,
      32,   118,    33,    70,    11,    79,   133,   144
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    14,    16,    37,    40,    41,    42,    44,    45,    46,
      47,    69,    70,    13,    15,     0,     3,    38,    14,    42,
      41,    45,    40,    70,    31,    32,    43,    48,    34,    39,
      13,    15,    72,    73,    75,    24,    29,    31,     7,    11,
      12,    13,    14,    15,    17,    19,    20,    49,    50,    51,
      52,    54,    66,    74,    77,    13,    38,    75,    33,    14,
      78,    79,    71,    29,    29,     5,    56,    13,    13,    29,
      29,    29,     4,    54,    31,    76,    48,    13,    30,    35,
      40,     9,    13,    24,    29,    86,    86,    55,    57,    29,
      48,     6,    29,    67,    68,    86,    67,    13,    31,    31,
       7,    79,     8,    86,    25,    26,    27,    28,    30,    30,
      85,    86,     6,    13,    80,    81,    86,    86,    10,    30,
      21,    30,     5,    52,    31,    30,    86,    86,    86,    86,
       5,    83,    30,    35,    21,    29,    68,     7,    86,     7,
      62,     8,    82,    84,    29,    81,    86,    86,    86,    59,
      58,    86,    31,    86,     6,    80,    30,    52,    52,    31,
      30,     8,     8,    86,    60,    21,    18,    86,     7,    31,
      61,    13,    52,    53,    63,     8,    22,    23,    65,    31,
      30,     7,    64,    52,     8
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
      81,    84,    81,    85,    86,    86,    86,    86,    86,    86,
      86,    86
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
       5,     0,     4,     1,     3,     3,     3,     3,     3,     1,
       1,     1
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
#line 33 "maker.y"
                                                                          {if (errorCount == 0) cout<< "The program is correct!" << endl;}
#line 1305 "maker.tab.c"
    break;

  case 3: /* progr: global_classes_declaration main  */
#line 34 "maker.y"
                                         {if (errorCount == 0) cout<< "The program is correct!" << endl;}
#line 1311 "maker.tab.c"
    break;

  case 4: /* $@1: %empty  */
#line 38 "maker.y"
          {SymTable* currentmain;     
           currentmain = new SymTable("main");
           //current->add_above(currentmain);
           currentmain->assign_stack_above(current->return_stack_above());
           currentmain->add_above(current);
           current=currentmain;  
           Vector_Tabele.push_back(current);
          }
#line 1324 "maker.tab.c"
    break;

  case 5: /* main: BGIN $@1 list END  */
#line 47 "maker.y"
                    {
                     //current->remove_from_above();//Scoatem din currentmain
                     current=current->next_domain_scope();
                     //current->remove_from_above();//Scoatem din current
                    }
#line 1334 "maker.tab.c"
    break;

  case 12: /* $@2: %empty  */
#line 63 "maker.y"
                { current->check_existance_for_declaration((yyvsp[-1].string), (yyvsp[0].string) , "func" , errorCount , yylineno);
                  class SymTable* function_scope;
                  function_scope=new SymTable((yyvsp[0].string));
                  //current->add_above(function_scope);
                  function_scope->assign_stack_above(current->return_stack_above());
                  function_scope->add_above(current);
                  current=function_scope;
                  Vector_Tabele.push_back(current);
                }
#line 1348 "maker.tab.c"
    break;

  case 13: /* functions: TYPE ID $@2 '(' list_param ')' CBEGIN list CEND ';'  */
#line 73 "maker.y"
                                   {
                                    //current->remove_from_above();
                                    current=current->next_domain_scope();
                                    //current->remove_from_above();
                                   }
#line 1358 "maker.tab.c"
    break;

  case 18: /* fundamentals: TYPE ID ';'  */
#line 87 "maker.y"
                          {current->check_existance_for_declaration((yyvsp[-2].string), (yyvsp[-1].string) , "var" , errorCount , yylineno);}
#line 1364 "maker.tab.c"
    break;

  case 19: /* arr: TYPE ID arr_list ';'  */
#line 90 "maker.y"
                           {current->check_existance_for_declaration((yyvsp[-3].string), (yyvsp[-2].string) , "array" , errorCount , yylineno);}
#line 1370 "maker.tab.c"
    break;

  case 24: /* fundamentals_interior: TYPE ID  */
#line 100 "maker.y"
                                {current->check_existance_for_declaration((yyvsp[-1].string), (yyvsp[0].string) , "var" , errorCount , yylineno);}
#line 1376 "maker.tab.c"
    break;

  case 25: /* arr_interior: TYPE ID arr_list  */
#line 103 "maker.y"
                                 {current->check_existance_for_declaration((yyvsp[-2].string), (yyvsp[-1].string) , "array" , errorCount , yylineno);}
#line 1382 "maker.tab.c"
    break;

  case 30: /* $@3: %empty  */
#line 112 "maker.y"
                     {domeniul_caruia_ii_apartine_varabila=current->check_existance_for_use((yyvsp[-1].string) , errorCount , yylineno);
                      if(domeniul_caruia_ii_apartine_varabila!=nullptr)
                         {
                              if (domeniul_caruia_ii_apartine_varabila->get_IdInfo_Type((yyvsp[-1].string))=="bool")
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
#line 1405 "maker.tab.c"
    break;

  case 31: /* statement: ID ASSIGN $@3 x  */
#line 130 "maker.y"
                              {//cout<<$4->evaluatei()<<endl<<$4->get_type()<<endl;
                              if(domeniul_caruia_ii_apartine_varabila!=nullptr){
                                   if(domeniul_caruia_ii_apartine_varabila->get_IdInfo_Type((yyvsp[-3].string))=="int"){
                                        if(numeric_limits<int>::min()==((yyvsp[0].ListOfNodes)->evaluatei())){
                                             errorCount++;
                                             yyerror("Arithmetic expression is inccorect");
                                        }
                                        else{
                                             class Value val((yyvsp[0].ListOfNodes)->evaluatei());
                                             domeniul_caruia_ii_apartine_varabila->set_value((yyvsp[-3].string) , val);
                                        }
                                   }
                                   else if(domeniul_caruia_ii_apartine_varabila->get_IdInfo_Type((yyvsp[-3].string))=="float"){
                                        if(std::isnan((yyvsp[0].ListOfNodes)->evaluatef())){
                                             errorCount++;
                                             yyerror("Arithmetic expression is inccorect");
                                        }
                                        else{
                                             class Value val((yyvsp[0].ListOfNodes)->evaluatef());
                                             //cout<<$4->evaluatef()<<endl<<$4->get_type()<<endl;
                                             domeniul_caruia_ii_apartine_varabila->set_value((yyvsp[-3].string) , val);
                                        }
                                   }else{
                                        errorCount++;
                                        yyerror("Can only assing a int or a float to an int or a float");
                                        
                                   }
                              }//NO IDEA why it's the 4-th one , Trial and error ;P
                         }
#line 1439 "maker.tab.c"
    break;

  case 32: /* $@4: %empty  */
#line 159 "maker.y"
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
#line 1461 "maker.tab.c"
    break;

  case 34: /* $@5: %empty  */
#line 177 "maker.y"
                     {
                         domeniul_caruia_ii_apartine_varabila=current->check_existance_for_use((yyvsp[-1].string) , errorCount , yylineno);
                     }
#line 1469 "maker.tab.c"
    break;

  case 35: /* statement: ID ASSIGN $@5 TRUTH_VALUE  */
#line 180 "maker.y"
                                     {
                                        if(domeniul_caruia_ii_apartine_varabila!=nullptr){
                                             if (domeniul_caruia_ii_apartine_varabila->get_IdInfo_Type((yyvsp[-3].string))!="bool")
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
#line 1489 "maker.tab.c"
    break;

  case 36: /* $@6: %empty  */
#line 196 "maker.y"
                                   {
                                     SymTable* currentCTRL;     
                                     currentCTRL = new SymTable((yyvsp[-4].string));
                                     //current->add_above(currentCTRL);
                                     currentCTRL->assign_stack_above(current->return_stack_above());
                                     currentCTRL->add_above(current);
                                     current=currentCTRL;
                                     Vector_Tabele.push_back(current);
                                   }
#line 1503 "maker.tab.c"
    break;

  case 37: /* statement: WHILE '(' boolean_expression ')' CBEGIN $@6 list CEND  */
#line 206 "maker.y"
                                                       {
                                                            //current->remove_from_above();
                                                            current=current->next_domain_scope();
                                                            //current->remove_from_above();
                                                       }
#line 1513 "maker.tab.c"
    break;

  case 38: /* $@7: %empty  */
#line 212 "maker.y"
                                        {
                                          SymTable* currentCTRL;     
                                          currentCTRL = new SymTable((yyvsp[-4].string));
                                          //current->add_above(currentCTRL);
                                          currentCTRL->assign_stack_above(current->return_stack_above());
                                          currentCTRL->add_above(current);
                                          current=currentCTRL;
                                          Vector_Tabele.push_back(current);
                                        }
#line 1527 "maker.tab.c"
    break;

  case 39: /* $@8: %empty  */
#line 222 "maker.y"
                                                       {
                                                         //current->remove_from_above();
                                                         current=current->next_domain_scope();
                                                         //current->remove_from_above();
                                                       }
#line 1537 "maker.tab.c"
    break;

  case 40: /* $@9: %empty  */
#line 228 "maker.y"
                                        {
                                          SymTable* currentCTRL;     
                                          currentCTRL = new SymTable((yyvsp[-10].string));
                                          //current->add_above(currentCTRL);
                                          currentCTRL->assign_stack_above(current->return_stack_above());
                                          currentCTRL->add_above(current);
                                          current=currentCTRL;
                                          Vector_Tabele.push_back(current);
                                        }
#line 1551 "maker.tab.c"
    break;

  case 41: /* statement: IF '(' boolean_expression ')' CBEGIN $@7 list CEND $@8 ELSE CBEGIN $@9 list_for_else CEND  */
#line 238 "maker.y"
                                        {
                                          //current->remove_from_above();
                                          current=current->next_domain_scope();
                                          //current->remove_from_above();
                                        }
#line 1561 "maker.tab.c"
    break;

  case 42: /* $@10: %empty  */
#line 244 "maker.y"
               {
                 domeniul_caruia_ii_apartine_varabila=current->check_existance_for_use((yyvsp[-1].string) , errorCount , yylineno);
                 if(domeniul_caruia_ii_apartine_varabila!=nullptr)
                    {
                      if (domeniul_caruia_ii_apartine_varabila->get_IdInfo_Type((yyvsp[-1].string))=="bool")
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
#line 1583 "maker.tab.c"
    break;

  case 43: /* $@11: %empty  */
#line 262 "maker.y"
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
#line 1602 "maker.tab.c"
    break;

  case 44: /* $@12: %empty  */
#line 277 "maker.y"
               {
                 SymTable* currentCTRL;     
                 currentCTRL = new SymTable((yyvsp[-16].string));
                 //current->add_above(currentCTRL);
                 currentCTRL->assign_stack_above(current->return_stack_above());
                 currentCTRL->add_above(current);
                 current=currentCTRL;
                 Vector_Tabele.push_back(current);
               }
#line 1616 "maker.tab.c"
    break;

  case 45: /* statement: FOR '(' ID ASSIGN $@10 e ';' e CMP e ';' ID $@11 inc_dec ';' ')' CBEGIN $@12 list CEND  */
#line 287 "maker.y"
               {
                 //current->remove_from_above();
                 current=current->next_domain_scope();
                 //current->remove_from_above();
               }
#line 1626 "maker.tab.c"
    break;

  case 60: /* $@13: %empty  */
#line 319 "maker.y"
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
#line 1641 "maker.tab.c"
    break;

  case 61: /* class: Class_Type Class_ID ':' CBEGIN $@13 global_classes_declaration CEND ';'  */
#line 330 "maker.y"
          {
            //current->remove_from_above();
            current=current->next_domain_scope();
            //current->remove_from_above();
          }
#line 1651 "maker.tab.c"
    break;

  case 67: /* $@14: %empty  */
#line 349 "maker.y"
                             {current->check_existance_for_class_instance((yyvsp[-1].string) , (yyvsp[0].string), errorCount , yylineno);}
#line 1657 "maker.tab.c"
    break;

  case 69: /* class_instance_interior: Class_ID ID  */
#line 351 "maker.y"
                                      {current->check_existance_for_class_instance((yyvsp[-1].string) , (yyvsp[0].string), errorCount , yylineno);}
#line 1663 "maker.tab.c"
    break;

  case 72: /* param: TYPE ID  */
#line 359 "maker.y"
                {current->check_existance_for_declaration((yyvsp[-1].string), (yyvsp[0].string) , "param" , errorCount , yylineno);}
#line 1669 "maker.tab.c"
    break;

  case 77: /* $@15: %empty  */
#line 369 "maker.y"
                         {
                              domeniul_caruia_ii_apartine_varabila=current->check_existance_for_use((yyvsp[-1].string) , errorCount , yylineno);
                              if(domeniul_caruia_ii_apartine_varabila!=nullptr)
                                   {
                                        if (domeniul_caruia_ii_apartine_varabila->get_IdInfo_Type((yyvsp[-1].string))=="bool")
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
#line 1692 "maker.tab.c"
    break;

  case 79: /* $@16: %empty  */
#line 388 "maker.y"
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
#line 1714 "maker.tab.c"
    break;

  case 81: /* $@17: %empty  */
#line 407 "maker.y"
                                   {domeniul_caruia_ii_apartine_varabila=current->check_existance_for_use((yyvsp[-1].string) , errorCount , yylineno);}
#line 1720 "maker.tab.c"
    break;

  case 82: /* statement_for_call_list: ID ASSIGN $@17 TRUTH_VALUE  */
#line 408 "maker.y"
                                                    {
                                                       if(domeniul_caruia_ii_apartine_varabila!=nullptr)
                                                       {
                                                            if (domeniul_caruia_ii_apartine_varabila->get_IdInfo_Type((yyvsp[-3].string))!="bool")
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
#line 1741 "maker.tab.c"
    break;

  case 83: /* x: e  */
#line 426 "maker.y"
      {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1747 "maker.tab.c"
    break;

  case 84: /* e: e '+' e  */
#line 428 "maker.y"
              {(yyval.ListOfNodes)=new ASTNode("+" , (yyvsp[-2].ListOfNodes) , (yyvsp[0].ListOfNodes));}
#line 1753 "maker.tab.c"
    break;

  case 85: /* e: e '*' e  */
#line 429 "maker.y"
              {(yyval.ListOfNodes)=new ASTNode("*" , (yyvsp[-2].ListOfNodes) , (yyvsp[0].ListOfNodes));}
#line 1759 "maker.tab.c"
    break;

  case 86: /* e: e '-' e  */
#line 430 "maker.y"
              {(yyval.ListOfNodes)=new ASTNode("-" , (yyvsp[-2].ListOfNodes) , (yyvsp[0].ListOfNodes));}
#line 1765 "maker.tab.c"
    break;

  case 87: /* e: e '/' e  */
#line 431 "maker.y"
              {(yyval.ListOfNodes)=new ASTNode("/" , (yyvsp[-2].ListOfNodes) , (yyvsp[0].ListOfNodes));}
#line 1771 "maker.tab.c"
    break;

  case 88: /* e: '(' e ')'  */
#line 432 "maker.y"
              {(yyval.ListOfNodes)=(yyvsp[-1].ListOfNodes);}
#line 1777 "maker.tab.c"
    break;

  case 89: /* e: NR  */
#line 433 "maker.y"
              {Value val(atoi(yytext));
               (yyval.ListOfNodes)=new ASTNode(val , "int");}
#line 1784 "maker.tab.c"
    break;

  case 90: /* e: REAL  */
#line 435 "maker.y"
              {Value val((float)atof(yytext));
               (yyval.ListOfNodes)=new ASTNode(val , "float");}
#line 1791 "maker.tab.c"
    break;

  case 91: /* e: ID  */
#line 437 "maker.y"
              {domeniul_caruia_ii_apartine_varabila=current->check_existance_for_use((yyvsp[0].string) , errorCount , yylineno);
               if(domeniul_caruia_ii_apartine_varabila!=nullptr){
                    (yyval.ListOfNodes)=new ASTNode(domeniul_caruia_ii_apartine_varabila->get_value((yyvsp[0].string)) ,domeniul_caruia_ii_apartine_varabila->get_IdInfo_Type((yyvsp[0].string)));
               }
              }
#line 1801 "maker.tab.c"
    break;


#line 1805 "maker.tab.c"

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

#line 445 "maker.y"

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
