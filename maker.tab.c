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

#line 96 "maker.tab.c"

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
  YYSYMBOL_CBEGIN = 5,                     /* CBEGIN  */
  YYSYMBOL_CEND = 6,                       /* CEND  */
  YYSYMBOL_REAL = 7,                       /* REAL  */
  YYSYMBOL_ID = 8,                         /* ID  */
  YYSYMBOL_TYPE = 9,                       /* TYPE  */
  YYSYMBOL_Class_ID = 10,                  /* Class_ID  */
  YYSYMBOL_Class_Type = 11,                /* Class_Type  */
  YYSYMBOL_IF = 12,                        /* IF  */
  YYSYMBOL_ELSE = 13,                      /* ELSE  */
  YYSYMBOL_WHILE = 14,                     /* WHILE  */
  YYSYMBOL_FOR = 15,                       /* FOR  */
  YYSYMBOL_CMP = 16,                       /* CMP  */
  YYSYMBOL_NR = 17,                        /* NR  */
  YYSYMBOL_CONNECT = 18,                   /* CONNECT  */
  YYSYMBOL_VOID = 19,                      /* VOID  */
  YYSYMBOL_RETURN = 20,                    /* RETURN  */
  YYSYMBOL_ASSIGN = 21,                    /* ASSIGN  */
  YYSYMBOL_TRUTH_VALUE = 22,               /* TRUTH_VALUE  */
  YYSYMBOL_PRINT = 23,                     /* PRINT  */
  YYSYMBOL_TYPE_FUNCTION = 24,             /* TYPE_FUNCTION  */
  YYSYMBOL_STRING = 25,                    /* STRING  */
  YYSYMBOL_26_ = 26,                       /* '+'  */
  YYSYMBOL_27_ = 27,                       /* '-'  */
  YYSYMBOL_28_ = 28,                       /* '*'  */
  YYSYMBOL_29_ = 29,                       /* '/'  */
  YYSYMBOL_30_ = 30,                       /* '%'  */
  YYSYMBOL_31_ = 31,                       /* '('  */
  YYSYMBOL_32_ = 32,                       /* ')'  */
  YYSYMBOL_33_ = 33,                       /* ';'  */
  YYSYMBOL_34_ = 34,                       /* '['  */
  YYSYMBOL_35_ = 35,                       /* ']'  */
  YYSYMBOL_36_ = 36,                       /* '.'  */
  YYSYMBOL_37_ = 37,                       /* ':'  */
  YYSYMBOL_38_ = 38,                       /* ','  */
  YYSYMBOL_YYACCEPT = 39,                  /* $accept  */
  YYSYMBOL_progr = 40,                     /* progr  */
  YYSYMBOL_main = 41,                      /* main  */
  YYSYMBOL_42_1 = 42,                      /* $@1  */
  YYSYMBOL_43_2 = 43,                      /* $@2  */
  YYSYMBOL_global_classes_declaration = 44, /* global_classes_declaration  */
  YYSYMBOL_functions_generator = 45,       /* functions_generator  */
  YYSYMBOL_functions = 46,                 /* functions  */
  YYSYMBOL_47_3 = 47,                      /* $@3  */
  YYSYMBOL_48_4 = 48,                      /* $@4  */
  YYSYMBOL_49_5 = 49,                      /* $@5  */
  YYSYMBOL_variables_generator = 50,       /* variables_generator  */
  YYSYMBOL_variables = 51,                 /* variables  */
  YYSYMBOL_fundamentals = 52,              /* fundamentals  */
  YYSYMBOL_arr = 53,                       /* arr  */
  YYSYMBOL_arr_list = 54,                  /* arr_list  */
  YYSYMBOL_55_6 = 55,                      /* $@6  */
  YYSYMBOL_size = 56,                      /* size  */
  YYSYMBOL_variables_interior = 57,        /* variables_interior  */
  YYSYMBOL_fundamentals_interior = 58,     /* fundamentals_interior  */
  YYSYMBOL_arr_interior = 59,              /* arr_interior  */
  YYSYMBOL_list_main = 60,                 /* list_main  */
  YYSYMBOL_list_else = 61,                 /* list_else  */
  YYSYMBOL_list = 62,                      /* list  */
  YYSYMBOL_statement = 63,                 /* statement  */
  YYSYMBOL_statement_main = 64,            /* statement_main  */
  YYSYMBOL_assign_node = 65,               /* assign_node  */
  YYSYMBOL_ID_Array = 66,                  /* ID_Array  */
  YYSYMBOL_67_7 = 67,                      /* $@7  */
  YYSYMBOL_function_call_node = 68,        /* function_call_node  */
  YYSYMBOL_69_8 = 69,                      /* $@8  */
  YYSYMBOL_70_9 = 70,                      /* $@9  */
  YYSYMBOL_while_node = 71,                /* while_node  */
  YYSYMBOL_72_10 = 72,                     /* $@10  */
  YYSYMBOL_73_11 = 73,                     /* $@11  */
  YYSYMBOL_if_node = 74,                   /* if_node  */
  YYSYMBOL_75_12 = 75,                     /* $@12  */
  YYSYMBOL_76_13 = 76,                     /* $@13  */
  YYSYMBOL_77_14 = 77,                     /* $@14  */
  YYSYMBOL_78_15 = 78,                     /* $@15  */
  YYSYMBOL_79_16 = 79,                     /* $@16  */
  YYSYMBOL_for_node = 80,                  /* for_node  */
  YYSYMBOL_81_17 = 81,                     /* $@17  */
  YYSYMBOL_82_18 = 82,                     /* $@18  */
  YYSYMBOL_print_node = 83,                /* print_node  */
  YYSYMBOL_type_fucntion_node = 84,        /* type_fucntion_node  */
  YYSYMBOL_expression_for = 85,            /* expression_for  */
  YYSYMBOL_declarations_interior = 86,     /* declarations_interior  */
  YYSYMBOL_boolean_expression = 87,        /* boolean_expression  */
  YYSYMBOL_y = 88,                         /* y  */
  YYSYMBOL_classes = 89,                   /* classes  */
  YYSYMBOL_class = 90,                     /* class  */
  YYSYMBOL_91_19 = 91,                     /* $@19  */
  YYSYMBOL_class_initialize_initial = 92,  /* class_initialize_initial  */
  YYSYMBOL_class_initialize = 93,          /* class_initialize  */
  YYSYMBOL_class_initialize_interior = 94, /* class_initialize_interior  */
  YYSYMBOL_class_instance = 95,            /* class_instance  */
  YYSYMBOL_96_20 = 96,                     /* $@20  */
  YYSYMBOL_class_instance_interior = 97,   /* class_instance_interior  */
  YYSYMBOL_list_param_epsilon = 98,        /* list_param_epsilon  */
  YYSYMBOL_list_param = 99,                /* list_param  */
  YYSYMBOL_param = 100,                    /* param  */
  YYSYMBOL_call_list_epsilon = 101,        /* call_list_epsilon  */
  YYSYMBOL_call_list = 102,                /* call_list  */
  YYSYMBOL_e = 103                         /* e  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 31 "maker.y"

     

#line 237 "maker.tab.c"


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
#define YYFINAL  17
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   253

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  39
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  65
/* YYNRULES -- Number of rules.  */
#define YYNRULES  122
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  231

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   280


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
       2,     2,     2,     2,     2,     2,     2,    30,     2,     2,
      31,    32,    28,    26,    38,    27,    36,    29,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    37,    33,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    34,     2,    35,     2,     2,     2,     2,     2,     2,
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
      25
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    42,    42,    43,    47,    54,    46,    60,    61,    62,
      63,    66,    67,    70,    69,    94,   103,    93,   109,   110,
     112,   113,   116,   119,   123,   123,   124,   126,   131,   132,
     135,   138,   146,   147,   149,   150,   152,   153,   155,   156,
     157,   158,   159,   160,   161,   162,   164,   165,   166,   167,
     168,   169,   170,   171,   173,   176,   179,   185,   191,   192,
     194,   194,   197,   196,   258,   257,   334,   342,   333,   353,
     361,   364,   368,   376,   352,   387,   395,   386,   405,   407,
     408,   409,   412,   413,   416,   417,   418,   420,   422,   423,
     427,   426,   443,   444,   448,   449,   452,   455,   455,   457,
     460,   461,   463,   464,   468,   472,   473,   475,   517,   560,
     561,   562,   563,   564,   565,   566,   576,   578,   580,   589,
     601,   611,   612
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
  "CBEGIN", "CEND", "REAL", "ID", "TYPE", "Class_ID", "Class_Type", "IF",
  "ELSE", "WHILE", "FOR", "CMP", "NR", "CONNECT", "VOID", "RETURN",
  "ASSIGN", "TRUTH_VALUE", "PRINT", "TYPE_FUNCTION", "STRING", "'+'",
  "'-'", "'*'", "'/'", "'%'", "'('", "')'", "';'", "'['", "']'", "'.'",
  "':'", "','", "$accept", "progr", "main", "$@1", "$@2",
  "global_classes_declaration", "functions_generator", "functions", "$@3",
  "$@4", "$@5", "variables_generator", "variables", "fundamentals", "arr",
  "arr_list", "$@6", "size", "variables_interior", "fundamentals_interior",
  "arr_interior", "list_main", "list_else", "list", "statement",
  "statement_main", "assign_node", "ID_Array", "$@7", "function_call_node",
  "$@8", "$@9", "while_node", "$@10", "$@11", "if_node", "$@12", "$@13",
  "$@14", "$@15", "$@16", "for_node", "$@17", "$@18", "print_node",
  "type_fucntion_node", "expression_for", "declarations_interior",
  "boolean_expression", "y", "classes", "class", "$@19",
  "class_initialize_initial", "class_initialize",
  "class_initialize_interior", "class_instance", "$@20",
  "class_instance_interior", "list_param_epsilon", "list_param", "param",
  "call_list_epsilon", "call_list", "e", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-145)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-65)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      52,    16,    22,    29,    54,    57,     1,  -145,    12,  -145,
    -145,  -145,    52,  -145,    -5,    33,  -145,  -145,  -145,  -145,
      66,  -145,     1,  -145,    67,  -145,  -145,     5,    49,    48,
      88,    71,    86,  -145,    96,    57,    67,  -145,  -145,    77,
    -145,  -145,  -145,     5,    70,  -145,  -145,   174,   109,  -145,
    -145,   109,    76,   114,   122,   110,   118,   125,   126,   131,
    -145,  -145,  -145,  -145,   106,  -145,   127,  -145,  -145,  -145,
    -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,   146,
     145,   157,   141,   152,     5,     5,     5,     5,     5,   181,
     159,   154,  -145,    12,   162,    27,   187,   145,  -145,    27,
      27,   189,     5,     5,   194,    86,    27,   172,   175,  -145,
       5,  -145,   145,   123,   123,   177,   177,  -145,  -145,   203,
     109,   204,   206,    27,  -145,  -145,   108,   188,  -145,   180,
     108,   182,    21,   183,   148,   155,  -145,  -145,  -145,   108,
    -145,   184,   185,   186,   174,  -145,    86,  -145,   190,    86,
     193,    99,     5,    27,   208,   213,   211,    27,  -145,  -145,
       5,  -145,     5,   200,  -145,   195,  -145,  -145,  -145,  -145,
    -145,  -145,  -145,  -145,  -145,  -145,   209,   174,  -145,   108,
    -145,  -145,   188,   196,    13,   174,     5,    86,   215,   191,
      86,    86,    31,  -145,   117,  -145,   197,    27,  -145,  -145,
      85,  -145,   127,   198,   174,   220,  -145,   201,   226,   228,
     227,   205,   207,  -145,  -145,  -145,    19,   231,  -145,   225,
    -145,   234,    86,  -145,  -145,    86,   235,  -145,  -145,   236,
    -145
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      10,     0,     0,     0,     0,     0,     9,    12,     8,    19,
      20,    21,    10,    88,    13,     0,    15,     1,     4,     3,
       0,    11,     7,    18,    93,    89,    22,     0,     0,     0,
       0,     0,     0,    13,     0,     0,    92,    94,   117,   118,
     116,   115,   122,     0,     0,   120,   121,    27,   101,    23,
      90,   101,    60,     0,     0,     0,     0,     0,     0,     0,
      82,    28,    29,     5,     0,    46,     0,    47,    48,    49,
      50,    52,    53,    51,    83,    96,    97,     2,    95,     0,
       0,     0,     0,    26,     0,     0,     0,     0,     0,     0,
       0,   100,   102,    10,     0,     0,     0,    30,    99,     0,
       0,     0,     0,     0,     0,    32,     0,     0,   119,    61,
     106,   114,     0,   109,   111,   110,   112,   113,   104,     0,
       0,     0,     0,     0,    55,    86,    54,    64,    31,     0,
       0,     0,    60,     0,     0,     0,     6,    33,    59,    58,
      98,     0,     0,   105,   107,    25,    35,   103,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    78,    79,
       0,    63,     0,     0,    34,     0,    38,    39,    40,    41,
      42,    44,    45,    43,    91,    16,    84,    87,    57,    56,
      69,    66,     0,     0,     0,   108,     0,    36,     0,     0,
       0,     0,     0,    65,     0,    37,     0,     0,    70,    67,
     118,    80,   120,     0,    81,     0,    17,     0,     0,     0,
       0,     0,     0,    85,    71,    68,   119,     0,    14,     0,
      75,     0,     0,    72,    76,    35,     0,    73,    77,     0,
      74
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -145,  -145,   210,  -145,  -145,    -8,   238,    11,  -145,  -145,
    -145,  -145,   239,  -145,  -145,   -71,  -145,  -145,  -145,  -145,
    -145,   138,    23,  -144,  -145,  -145,   -29,   -32,  -145,   -26,
    -145,  -145,   -21,  -145,  -145,   -18,  -145,  -145,  -145,  -145,
    -145,   -17,  -145,  -145,   -16,   -14,  -145,   -13,   -98,  -145,
    -145,   232,  -145,  -145,  -145,  -145,   214,  -145,  -145,   202,
    -145,   129,  -145,    91,   -20
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,    19,    32,   104,     5,     6,     7,    28,    31,
     188,     8,     9,    10,    11,    29,   112,    44,    60,    61,
      62,    63,   163,   164,   165,    64,   166,    45,    80,    46,
      81,   141,   168,   191,   209,   169,   190,   208,   219,   225,
     229,   170,   222,   226,   171,   172,   203,   173,   124,   125,
      12,    13,    93,    35,    36,    74,    37,   107,    75,    90,
      91,    92,   142,   143,   130
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      66,   129,   131,    65,    24,   175,    67,    47,   138,   109,
      20,    68,    38,    39,    69,    70,    71,    21,    72,    73,
       3,     1,    40,    82,    14,   150,   128,    41,    26,    27,
      42,     3,    15,    21,    38,    39,    43,    16,    38,   200,
     153,   145,    95,   195,    40,   193,   198,   199,    40,    41,
     -64,   162,    42,    41,    17,   178,    42,   156,   123,   183,
      18,     1,    43,     2,   113,   114,   115,   116,   117,    66,
      30,     3,   133,    66,    33,   126,    65,    34,   224,    67,
      48,    49,   134,   135,    68,   121,   139,    69,    70,    71,
     144,    72,    73,    50,    52,    53,    54,    95,    55,   207,
      56,    57,    51,   151,    76,    83,    95,   -62,   -62,    58,
      59,   -60,    96,    79,    66,   152,   -62,    66,    89,   -60,
     167,   210,    97,   167,   152,    84,    85,    86,    87,    88,
      98,   111,   177,   179,    84,    85,    86,    87,    88,   105,
     144,    99,   185,    84,    85,    86,    87,    88,   106,   100,
     205,    86,    87,    88,   108,    66,   101,   102,    66,    66,
     202,   167,   103,   201,   167,   167,   194,    84,    85,    86,
      87,    88,   204,   111,    84,    85,    86,    87,    88,    27,
     158,    84,    85,    86,    87,    88,   -24,   159,   110,   118,
      66,   119,   120,    66,   122,   127,   167,   132,   136,   167,
      84,    85,    86,    87,    88,   140,   -64,    88,   146,   153,
     148,   149,   154,   180,   155,   160,   157,   161,   181,   182,
     186,   196,   197,   174,   162,   176,   212,   189,   187,   192,
     206,   211,   214,   213,   215,   216,   220,   217,   221,   223,
     218,   228,   230,   137,    25,    77,    22,    23,   227,   147,
      78,   184,     0,    94
};

static const yytype_int16 yycheck[] =
{
      32,    99,   100,    32,    12,   149,    32,    27,   106,    80,
       9,    32,     7,     8,    32,    32,    32,     6,    32,    32,
      19,     9,    17,    43,     8,   123,    97,    22,    33,    34,
      25,    19,    10,    22,     7,     8,    31,     8,     7,     8,
      21,   112,    21,   187,    17,    32,   190,   191,    17,    22,
      31,    38,    25,    22,     0,   153,    25,    36,    31,   157,
       3,     9,    31,    11,    84,    85,    86,    87,    88,   101,
      37,    19,   101,   105,     8,    95,   105,    10,   222,   105,
      31,    33,   102,   103,   105,    93,   106,   105,   105,   105,
     110,   105,   105,     5,     8,     9,    10,    21,    12,   197,
      14,    15,    31,   123,     8,    35,    21,    31,    31,    23,
      24,    34,    36,    36,   146,    16,    31,   149,     9,    34,
     146,    36,     8,   149,    16,    26,    27,    28,    29,    30,
       8,    32,   152,   153,    26,    27,    28,    29,    30,    33,
     160,    31,   162,    26,    27,    28,    29,    30,    21,    31,
      33,    28,    29,    30,     8,   187,    31,    31,   190,   191,
     192,   187,    31,   192,   190,   191,   186,    26,    27,    28,
      29,    30,   192,    32,    26,    27,    28,    29,    30,    34,
      32,    26,    27,    28,    29,    30,    34,    32,    31,     8,
     222,    32,    38,   225,    32,     8,   222,     8,     4,   225,
      26,    27,    28,    29,    30,    33,    31,    30,     5,    21,
       6,     5,    32,     5,    32,    31,    33,    32,     5,     8,
      20,     6,    31,    33,    38,    32,     6,    18,    33,    33,
      33,    33,     6,    32,     6,     8,     5,    32,    13,     5,
      33,     6,     6,   105,    12,    35,     8,     8,   225,   120,
      36,   160,    -1,    51
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     9,    11,    19,    40,    44,    45,    46,    50,    51,
      52,    53,    89,    90,     8,    10,     8,     0,     3,    41,
       9,    46,    45,    51,    44,    90,    33,    34,    47,    54,
      37,    48,    42,     8,    10,    92,    93,    95,     7,     8,
      17,    22,    25,    31,    56,    66,    68,   103,    31,    33,
       5,    31,     8,     9,    10,    12,    14,    15,    23,    24,
      57,    58,    59,    60,    64,    65,    66,    68,    71,    74,
      80,    83,    84,    86,    94,    97,     8,    41,    95,    36,
      67,    69,   103,    35,    26,    27,    28,    29,    30,     9,
      98,    99,   100,    91,    98,    21,    36,     8,     8,    31,
      31,    31,    31,    31,    43,    33,    21,    96,     8,    54,
      31,    32,    55,   103,   103,   103,   103,   103,     8,    32,
      38,    44,    32,    31,    87,    88,   103,     8,    54,    87,
     103,    87,     8,    65,   103,   103,     4,    60,    87,   103,
      33,    70,   101,   102,   103,    54,     5,   100,     6,     5,
      87,   103,    16,    21,    32,    32,    36,    33,    32,    32,
      31,    32,    38,    61,    62,    63,    65,    68,    71,    74,
      80,    83,    84,    86,    33,    62,    32,   103,    87,   103,
       5,     5,     8,    87,   102,   103,    20,    33,    49,    18,
      75,    72,    33,    32,   103,    62,     6,    31,    62,    62,
       8,    65,    66,    85,   103,    33,    33,    87,    76,    73,
      36,    33,     6,    32,     6,     6,     8,    32,    33,    77,
       5,    13,    81,     5,    62,    78,    82,    61,     6,    79,
       6
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    39,    40,    40,    42,    43,    41,    44,    44,    44,
      44,    45,    45,    47,    46,    48,    49,    46,    50,    50,
      51,    51,    52,    53,    55,    54,    54,    56,    57,    57,
      58,    59,    60,    60,    61,    61,    62,    62,    63,    63,
      63,    63,    63,    63,    63,    63,    64,    64,    64,    64,
      64,    64,    64,    64,    65,    65,    65,    65,    65,    65,
      67,    66,    69,    68,    70,    68,    72,    73,    71,    75,
      76,    77,    78,    79,    74,    81,    82,    80,    83,    84,
      85,    85,    86,    86,    87,    87,    87,    88,    89,    89,
      91,    90,    92,    92,    93,    93,    94,    96,    95,    97,
      98,    98,    99,    99,   100,   101,   101,   102,   102,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     2,     0,     0,     5,     2,     1,     1,
       0,     2,     1,     0,    13,     0,     0,    11,     2,     1,
       1,     1,     3,     4,     0,     5,     3,     1,     1,     1,
       2,     3,     2,     3,     1,     0,     2,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     5,     5,     3,     3,
       0,     3,     0,     5,     0,     7,     0,     0,     9,     0,
       0,     0,     0,     0,    16,     0,     0,    14,     4,     4,
       1,     1,     1,     1,     3,     7,     1,     3,     1,     2,
       0,     8,     1,     0,     1,     2,     1,     0,     4,     2,
       1,     0,     1,     3,     2,     1,     0,     1,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     1,     1,     3,
       1,     1,     1
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
#line 42 "maker.y"
                                                                          {}
#line 1365 "maker.tab.c"
    break;

  case 3: /* progr: global_classes_declaration main  */
#line 43 "maker.y"
                                         {}
#line 1371 "maker.tab.c"
    break;

  case 4: /* $@1: %empty  */
#line 47 "maker.y"
          {SymTable* currentmain;     
           currentmain = new SymTable("main");
           currentmain->assign_stack_above(current->return_stack_above());
           currentmain->add_above(current);
           current=currentmain;  
           Vector_Tabele.push_back(current);
          }
#line 1383 "maker.tab.c"
    break;

  case 5: /* $@2: %empty  */
#line 54 "maker.y"
                    {current->set_body((yyvsp[0].ListOfNodes));
               }
#line 1390 "maker.tab.c"
    break;

  case 6: /* main: BGIN $@1 list_main $@2 END  */
#line 56 "maker.y"
                    {
                     current=current->next_domain_scope();
                    }
#line 1398 "maker.tab.c"
    break;

  case 13: /* $@3: %empty  */
#line 70 "maker.y"
                { current->check_existance_for_declaration((yyvsp[-1].string), (yyvsp[0].string) , "func" , errorCount , yylineno , array_size);
                  class SymTable* function_scope;
                  function_scope=new SymTable((yyvsp[0].string));
                  function_scope->assign_stack_above(current->return_stack_above());
                  function_scope->add_above(current);
                  IdInfo* variabila;
                  variabila=function_scope->get_function_core();
                  variabila->name=(yyvsp[0].string);
                  variabila->type=(yyvsp[-1].string);
                  variabila->idType="func";
                  current->add_bellow(function_scope);
                  current=function_scope;
                  Vector_Tabele.push_back(current);
                }
#line 1417 "maker.tab.c"
    break;

  case 14: /* functions: TYPE ID $@3 '(' list_param_epsilon ')' CBEGIN list_else RETURN e ';' CEND ';'  */
#line 85 "maker.y"
                                                                           {
                                                                           class ASTNode* func_return;
                                                                           func_return=new ASTNode((yyvsp[-11].string) , "<-" , (yyvsp[-3].ListOfNodes) ,current, &errorCount, yylineno);
                                                                           class ASTNode* list_return;
                                                                           list_return=new ASTNode("sequence" , (yyvsp[-5].ListOfNodes) , func_return , &errorCount , current);
                                                                           current->set_body(list_return);
                                                                           current=current->next_domain_scope();
                                                                           }
#line 1430 "maker.tab.c"
    break;

  case 15: /* $@4: %empty  */
#line 94 "maker.y"
                { current->check_existance_for_declaration((yyvsp[-1].string), (yyvsp[0].string) , "func" , errorCount , yylineno , array_size);
                  class SymTable* function_scope;
                  function_scope=new SymTable((yyvsp[0].string));
                  function_scope->assign_stack_above(current->return_stack_above());
                  function_scope->add_above(current);
                  current->add_bellow(function_scope);
                  current=function_scope;
                  Vector_Tabele.push_back(current);
                }
#line 1444 "maker.tab.c"
    break;

  case 16: /* $@5: %empty  */
#line 103 "maker.y"
                                                     {    current->set_body((yyvsp[0].ListOfNodes));}
#line 1450 "maker.tab.c"
    break;

  case 17: /* functions: VOID ID $@4 '(' list_param_epsilon ')' CBEGIN list $@5 CEND ';'  */
#line 104 "maker.y"
                                   {
                                    current=current->next_domain_scope();
                                   }
#line 1458 "maker.tab.c"
    break;

  case 22: /* fundamentals: TYPE ID ';'  */
#line 116 "maker.y"
                          {current->check_existance_for_declaration((yyvsp[-2].string), (yyvsp[-1].string) , "var" , errorCount , yylineno, array_size);}
#line 1464 "maker.tab.c"
    break;

  case 23: /* arr: TYPE ID arr_list ';'  */
#line 119 "maker.y"
                           {current->check_existance_for_declaration((yyvsp[-3].string), (yyvsp[-2].string) , "array" , errorCount , yylineno , array_size);
                              }
#line 1471 "maker.tab.c"
    break;

  case 24: /* $@6: %empty  */
#line 123 "maker.y"
                       {array_name+='['+nr+']';}
#line 1477 "maker.tab.c"
    break;

  case 26: /* arr_list: '[' size ']'  */
#line 124 "maker.y"
                       {array_name+='['+nr+']';}
#line 1483 "maker.tab.c"
    break;

  case 27: /* size: e  */
#line 126 "maker.y"
      {array_size.push_back((yyvsp[0].ListOfNodes)->evaluatei());
        nr=to_string((yyvsp[0].ListOfNodes)->evaluatei());
     }
#line 1491 "maker.tab.c"
    break;

  case 30: /* fundamentals_interior: TYPE ID  */
#line 135 "maker.y"
                                {current->check_existance_for_declaration((yyvsp[-1].string), (yyvsp[0].string) , "var" , errorCount , yylineno , array_size);}
#line 1497 "maker.tab.c"
    break;

  case 31: /* arr_interior: TYPE ID arr_list  */
#line 138 "maker.y"
                                 {current->check_existance_for_declaration((yyvsp[-2].string), (yyvsp[-1].string) , "array" , errorCount , yylineno , array_size);
                                   array_size.clear();
                                   for(int i=0 ; i<array_size.size();++i){
                                        cout<<array_size[i]<<endl;
                                   };
                                   }
#line 1508 "maker.tab.c"
    break;

  case 32: /* list_main: statement_main ';'  */
#line 146 "maker.y"
                                {(yyval.ListOfNodes)=new ASTNode("final_sequence" , (yyvsp[-1].ListOfNodes) , &errorCount , yylineno, current);}
#line 1514 "maker.tab.c"
    break;

  case 33: /* list_main: statement_main ';' list_main  */
#line 147 "maker.y"
                                          {(yyval.ListOfNodes)=new ASTNode("sequence" , (yyvsp[-2].ListOfNodes) ,(yyvsp[0].ListOfNodes) , &errorCount , current);}
#line 1520 "maker.tab.c"
    break;

  case 34: /* list_else: list  */
#line 149 "maker.y"
               {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1526 "maker.tab.c"
    break;

  case 35: /* list_else: %empty  */
#line 150 "maker.y"
                       {(yyval.ListOfNodes)=new ASTNode();}
#line 1532 "maker.tab.c"
    break;

  case 36: /* list: statement ';'  */
#line 152 "maker.y"
                      {(yyval.ListOfNodes)=new ASTNode("final_sequence" , (yyvsp[-1].ListOfNodes) , &errorCount , yylineno, current);}
#line 1538 "maker.tab.c"
    break;

  case 37: /* list: statement ';' list  */
#line 153 "maker.y"
                           {(yyval.ListOfNodes)=new ASTNode("sequence" , (yyvsp[-2].ListOfNodes) ,(yyvsp[0].ListOfNodes) , &errorCount , current);}
#line 1544 "maker.tab.c"
    break;

  case 38: /* statement: assign_node  */
#line 155 "maker.y"
                       {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1550 "maker.tab.c"
    break;

  case 39: /* statement: function_call_node  */
#line 156 "maker.y"
                            {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1556 "maker.tab.c"
    break;

  case 40: /* statement: while_node  */
#line 157 "maker.y"
                    {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1562 "maker.tab.c"
    break;

  case 41: /* statement: if_node  */
#line 158 "maker.y"
                 {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1568 "maker.tab.c"
    break;

  case 42: /* statement: for_node  */
#line 159 "maker.y"
                  {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1574 "maker.tab.c"
    break;

  case 43: /* statement: declarations_interior  */
#line 160 "maker.y"
                                {(yyval.ListOfNodes)=new ASTNode();}
#line 1580 "maker.tab.c"
    break;

  case 44: /* statement: print_node  */
#line 161 "maker.y"
                     {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1586 "maker.tab.c"
    break;

  case 45: /* statement: type_fucntion_node  */
#line 162 "maker.y"
                             {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1592 "maker.tab.c"
    break;

  case 46: /* statement_main: assign_node  */
#line 164 "maker.y"
                            {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);(yyval.ListOfNodes)->run();}
#line 1598 "maker.tab.c"
    break;

  case 47: /* statement_main: function_call_node  */
#line 165 "maker.y"
                            {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);(yyval.ListOfNodes)->run();}
#line 1604 "maker.tab.c"
    break;

  case 48: /* statement_main: while_node  */
#line 166 "maker.y"
                    {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);(yyval.ListOfNodes)->run();}
#line 1610 "maker.tab.c"
    break;

  case 49: /* statement_main: if_node  */
#line 167 "maker.y"
                 {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);(yyval.ListOfNodes)->run();}
#line 1616 "maker.tab.c"
    break;

  case 50: /* statement_main: for_node  */
#line 168 "maker.y"
                  {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);(yyval.ListOfNodes)->run();}
#line 1622 "maker.tab.c"
    break;

  case 51: /* statement_main: declarations_interior  */
#line 169 "maker.y"
                                {(yyval.ListOfNodes)=new ASTNode();}
#line 1628 "maker.tab.c"
    break;

  case 52: /* statement_main: print_node  */
#line 170 "maker.y"
                     {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);(yyval.ListOfNodes)->run();}
#line 1634 "maker.tab.c"
    break;

  case 53: /* statement_main: type_fucntion_node  */
#line 171 "maker.y"
                             {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);(yyval.ListOfNodes)->run();}
#line 1640 "maker.tab.c"
    break;

  case 54: /* assign_node: ID ASSIGN e  */
#line 173 "maker.y"
                        {
                         (yyval.ListOfNodes)=new ASTNode((yyvsp[-2].string) , "<-" , (yyvsp[0].ListOfNodes) ,current, &errorCount, yylineno);
                         }
#line 1648 "maker.tab.c"
    break;

  case 55: /* assign_node: ID ASSIGN boolean_expression  */
#line 176 "maker.y"
                                         {
                         (yyval.ListOfNodes)=new ASTNode((yyvsp[-2].string) , "<-" , (yyvsp[0].ListOfNodes) ,current, &errorCount, yylineno);
                         }
#line 1656 "maker.tab.c"
    break;

  case 56: /* assign_node: ID '.' ID ASSIGN e  */
#line 179 "maker.y"
                             {
                         string buff1=(yyvsp[-4].string);
                         string buff3=(yyvsp[-2].string);
                         string class_mem=buff1+'.'+buff3;
                         (yyval.ListOfNodes)=new ASTNode(class_mem , "<-" , (yyvsp[0].ListOfNodes) ,current, &errorCount, yylineno);
                         }
#line 1667 "maker.tab.c"
    break;

  case 57: /* assign_node: ID '.' ID ASSIGN boolean_expression  */
#line 185 "maker.y"
                                              {
                         string buff1=(yyvsp[-4].string);
                         string buff3=(yyvsp[-2].string);
                         string class_mem=buff1+'.'+buff3;
                         (yyval.ListOfNodes)=new ASTNode(class_mem , "<-" , (yyvsp[0].ListOfNodes) ,current, &errorCount, yylineno);
                         }
#line 1678 "maker.tab.c"
    break;

  case 58: /* assign_node: ID_Array ASSIGN e  */
#line 191 "maker.y"
                              {string copie=array_name;(yyval.ListOfNodes)=new ASTNode(copie , "<-" , (yyvsp[0].ListOfNodes) ,current, &errorCount, yylineno);array_name.clear();}
#line 1684 "maker.tab.c"
    break;

  case 59: /* assign_node: ID_Array ASSIGN boolean_expression  */
#line 192 "maker.y"
                                               {(yyval.ListOfNodes)=new ASTNode(array_name , "<-" , (yyvsp[0].ListOfNodes) ,current, &errorCount, yylineno);array_name.clear();}
#line 1690 "maker.tab.c"
    break;

  case 60: /* $@7: %empty  */
#line 194 "maker.y"
           {array_name=(yyvsp[0].string);}
#line 1696 "maker.tab.c"
    break;

  case 62: /* $@8: %empty  */
#line 197 "maker.y"
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
                         if(strcmp(copy.top()->get_dom_name(),(yyvsp[0].string))==0){
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
               
              }
#line 1743 "maker.tab.c"
    break;

  case 63: /* function_call_node: ID $@8 '(' call_list_epsilon ')'  */
#line 239 "maker.y"
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
                                 }
#line 1765 "maker.tab.c"
    break;

  case 64: /* $@9: %empty  */
#line 258 "maker.y"
               {
                     if(!param_checker.empty()){
                         while(!param_checker.empty()){
                         Temp_stack.push(param_checker.top());
                         param_checker.pop();
                         }
                    }
                    string buff1=(yyvsp[-2].string);
                    string buff3=(yyvsp[0].string);
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
                              if(strcmp(copy_stack.top()->get_dom_name(),(current->get_IdInfo_Type((yyvsp[-2].string))).c_str())==0){
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
                              if(strcmp(stacks.top()->get_dom_name(), (yyvsp[0].string))==0){
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
              }
#line 1826 "maker.tab.c"
    break;

  case 65: /* function_call_node: ID '.' ID $@9 '(' call_list ')'  */
#line 314 "maker.y"
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
                                 }
#line 1848 "maker.tab.c"
    break;

  case 66: /* $@10: %empty  */
#line 334 "maker.y"
               {
                    SymTable* currentCTRL;     
                    currentCTRL = new SymTable((yyvsp[-4].string));
                    currentCTRL->assign_stack_above(current->return_stack_above());
                    currentCTRL->add_above(current);
                    current=currentCTRL;
                    Vector_Tabele.push_back(current);
               }
#line 1861 "maker.tab.c"
    break;

  case 67: /* $@11: %empty  */
#line 342 "maker.y"
                             {
                              
                              current->set_body((yyvsp[0].ListOfNodes));
                              }
#line 1870 "maker.tab.c"
    break;

  case 68: /* while_node: WHILE '(' boolean_expression ')' CBEGIN $@10 list $@11 CEND  */
#line 347 "maker.y"
                                   {
                                        (yyval.ListOfNodes)=new ASTNode("while" , (yyvsp[-6].ListOfNodes) , (yyvsp[-2].ListOfNodes) , &errorCount , yylineno);
                                        current=current->next_domain_scope();
                                   }
#line 1879 "maker.tab.c"
    break;

  case 69: /* $@12: %empty  */
#line 353 "maker.y"
                    {
                         SymTable* currentCTRL;     
                         currentCTRL = new SymTable((yyvsp[-4].string));
                         currentCTRL->assign_stack_above(current->return_stack_above());
                         currentCTRL->add_above(current);
                         current=currentCTRL;
                         Vector_Tabele.push_back(current);
                    }
#line 1892 "maker.tab.c"
    break;

  case 70: /* $@13: %empty  */
#line 361 "maker.y"
                             {
                              current->set_body((yyvsp[0].ListOfNodes));
                         }
#line 1900 "maker.tab.c"
    break;

  case 71: /* $@14: %empty  */
#line 364 "maker.y"
                                   {
                                        current=current->next_domain_scope();
                                   }
#line 1908 "maker.tab.c"
    break;

  case 72: /* $@15: %empty  */
#line 368 "maker.y"
                              {
                                   SymTable* currentCTRL;     
                                   currentCTRL = new SymTable((yyvsp[-11].string));
                                   currentCTRL->assign_stack_above(current->return_stack_above());
                                   currentCTRL->add_above(current);
                                   current=currentCTRL;
                                   Vector_Tabele.push_back(current);
                              }
#line 1921 "maker.tab.c"
    break;

  case 73: /* $@16: %empty  */
#line 376 "maker.y"
                                                           {
                                                       current->set_body((yyvsp[0].ListOfNodes));
                                                  }
#line 1929 "maker.tab.c"
    break;

  case 74: /* if_node: IF '(' boolean_expression ')' CBEGIN $@12 list $@13 CEND $@14 ELSE CBEGIN $@15 list_else $@16 CEND  */
#line 379 "maker.y"
                              {
                                   class ASTNode* combine;
                                   combine=new ASTNode((yyvsp[-9].ListOfNodes) , (yyvsp[-2].ListOfNodes) , &errorCount);
                                   (yyval.ListOfNodes)=new ASTNode("if" , (yyvsp[-13].ListOfNodes) , combine , &errorCount , yylineno);
                                   current=current->next_domain_scope();
                              }
#line 1940 "maker.tab.c"
    break;

  case 75: /* $@17: %empty  */
#line 387 "maker.y"
               {
                 SymTable* currentCTRL;     
                 currentCTRL = new SymTable((yyvsp[-9].string));
                 currentCTRL->assign_stack_above(current->return_stack_above());
                 currentCTRL->add_above(current);
                 current=currentCTRL;
                 Vector_Tabele.push_back(current);
               }
#line 1953 "maker.tab.c"
    break;

  case 76: /* $@18: %empty  */
#line 395 "maker.y"
                                                                                        {current->set_body((yyvsp[0].ListOfNodes));}
#line 1959 "maker.tab.c"
    break;

  case 77: /* for_node: FOR '(' assign_node ';' boolean_expression ';' expression_for ';' ')' CBEGIN $@17 list $@18 CEND  */
#line 396 "maker.y"
               {
                 class ASTNode* combination1;
                 combination1=new ASTNode((yyvsp[-11].ListOfNodes) , (yyvsp[-9].ListOfNodes) , &errorCount);
                 class ASTNode* combination2;
                 combination2=new ASTNode((yyvsp[-2].ListOfNodes) , (yyvsp[-7].ListOfNodes) , &errorCount);
                 (yyval.ListOfNodes)=new ASTNode("for", combination1 , combination2 , &errorCount , yylineno );
                 current=current->next_domain_scope();
               }
#line 1972 "maker.tab.c"
    break;

  case 78: /* print_node: PRINT '(' e ')'  */
#line 405 "maker.y"
                           {(yyval.ListOfNodes)=new ASTNode((yyvsp[-3].string) , (yyvsp[-1].ListOfNodes) , &errorCount , yylineno);}
#line 1978 "maker.tab.c"
    break;

  case 79: /* type_fucntion_node: TYPE_FUNCTION '(' e ')'  */
#line 407 "maker.y"
                                            {(yyval.ListOfNodes)=new ASTNode((yyvsp[-3].string) , (yyvsp[-1].ListOfNodes) , &errorCount , yylineno);}
#line 1984 "maker.tab.c"
    break;

  case 80: /* expression_for: assign_node  */
#line 408 "maker.y"
                          {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1990 "maker.tab.c"
    break;

  case 81: /* expression_for: e  */
#line 409 "maker.y"
                 {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1996 "maker.tab.c"
    break;

  case 84: /* boolean_expression: '(' boolean_expression ')'  */
#line 416 "maker.y"
                                               {(yyval.ListOfNodes)=(yyvsp[-1].ListOfNodes);}
#line 2002 "maker.tab.c"
    break;

  case 85: /* boolean_expression: '(' boolean_expression ')' CONNECT '(' boolean_expression ')'  */
#line 417 "maker.y"
                                                                            {(yyval.ListOfNodes)=new ASTNode((yyvsp[-3].string) , (yyvsp[-5].ListOfNodes) , (yyvsp[-1].ListOfNodes) , &errorCount);}
#line 2008 "maker.tab.c"
    break;

  case 86: /* boolean_expression: y  */
#line 418 "maker.y"
                    {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 2014 "maker.tab.c"
    break;

  case 87: /* y: e CMP e  */
#line 420 "maker.y"
            {(yyval.ListOfNodes)=new ASTNode((yyvsp[-1].string) , (yyvsp[-2].ListOfNodes) , (yyvsp[0].ListOfNodes) , &errorCount);}
#line 2020 "maker.tab.c"
    break;

  case 90: /* $@19: %empty  */
#line 427 "maker.y"
          {
            current->check_existance_for_declaration((yyvsp[-3].string), (yyvsp[-2].string) , "class" , errorCount , yylineno , array_size);
            SymTable* class_scope;
            class_scope=new SymTable((yyvsp[-2].string));
            class_scope->assign_stack_above(current->return_stack_above());
            class_scope->add_above(current);
            current->add_bellow(class_scope);
            current=class_scope;
            Vector_Tabele.push_back(current);
          }
#line 2035 "maker.tab.c"
    break;

  case 91: /* class: Class_Type Class_ID ':' CBEGIN $@19 global_classes_declaration CEND ';'  */
#line 438 "maker.y"
          {
            current=current->next_domain_scope();
          }
#line 2043 "maker.tab.c"
    break;

  case 97: /* $@20: %empty  */
#line 455 "maker.y"
                             {current->check_existance_for_class_instance((yyvsp[-1].string) , (yyvsp[0].string), errorCount , yylineno);}
#line 2049 "maker.tab.c"
    break;

  case 99: /* class_instance_interior: Class_ID ID  */
#line 457 "maker.y"
                                      {current->check_existance_for_class_instance((yyvsp[-1].string) , (yyvsp[0].string), errorCount , yylineno);}
#line 2055 "maker.tab.c"
    break;

  case 104: /* param: TYPE ID  */
#line 468 "maker.y"
                {current->check_existance_for_declaration((yyvsp[-1].string), (yyvsp[0].string) , "param" , errorCount , yylineno , array_size);
                 current->add_function_params(current->get_that_variable((yyvsp[0].string)));
                }
#line 2063 "maker.tab.c"
    break;

  case 107: /* call_list: e  */
#line 476 "maker.y"
               {
                    if(param_checker.empty()){
                         errorCount++;
                         yyerror("The number of parameters in the call doesnt match the number of params in the fucntion");
                    }
                    else{
                    class IdInfo* temp;
                    temp=param_checker.top();
                         if(temp->type==(yyvsp[0].ListOfNodes)->get_type()){
                              if(strcmp((yyvsp[0].ListOfNodes)->get_type_for_main() , "int")==0){
                                   class Value val((yyvsp[0].ListOfNodes)->evaluatei());
                                   temp->value=val;
                                   param_checker.pop();
                              }
                              else if(strcmp((yyvsp[0].ListOfNodes)->get_type_for_main() , "float")==0){
                                   class Value val((yyvsp[0].ListOfNodes)->evaluatef());
                                   temp->value=val;
                                   param_checker.pop();
                              }
                              else if(strcmp((yyvsp[0].ListOfNodes)->get_type_for_main() , "string")==0){
                                   class Value val((yyvsp[0].ListOfNodes)->evaluates());
                                   temp->value=val;
                                   param_checker.pop();
                              }
                               else if(strcmp((yyvsp[0].ListOfNodes)->get_type_for_main() , "bool")==0){
                                   class Value val((yyvsp[0].ListOfNodes)->evaluateb());
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
               }
#line 2109 "maker.tab.c"
    break;

  case 108: /* call_list: call_list ',' e  */
#line 517 "maker.y"
                           {
               if(param_checker.empty()){
                    errorCount++;
                    yyerror("The number of parameters in the call doesnt match the number of params in the fucntion");
               }
               else{
                    class IdInfo* temp;
                    temp=param_checker.top();
                    if(temp->type==(yyvsp[0].ListOfNodes)->get_type()){
                         if(strcmp((yyvsp[0].ListOfNodes)->get_type_for_main() , "int")==0){
                              class Value val((yyvsp[0].ListOfNodes)->evaluatei());
                              temp->value=val;
                              param_checker.pop();
                              }
                         else if (strcmp((yyvsp[0].ListOfNodes)->get_type_for_main() , "float")==0){
                              class Value val((yyvsp[0].ListOfNodes)->evaluatef());
                              temp->value=val;
                              param_checker.pop();
                         }
                         else if (strcmp((yyvsp[0].ListOfNodes)->get_type_for_main() , "string")==0){
                              class Value val((yyvsp[0].ListOfNodes)->evaluates());
                              temp->value=val;
                              param_checker.pop();
                         }
                         else if (strcmp((yyvsp[0].ListOfNodes)->get_type_for_main() , "bool")==0){
                              class Value val((yyvsp[0].ListOfNodes)->evaluateb());
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
               }
#line 2155 "maker.tab.c"
    break;

  case 109: /* e: e '+' e  */
#line 560 "maker.y"
              {(yyval.ListOfNodes)=new ASTNode("+" , (yyvsp[-2].ListOfNodes) , (yyvsp[0].ListOfNodes) , &errorCount);}
#line 2161 "maker.tab.c"
    break;

  case 110: /* e: e '*' e  */
#line 561 "maker.y"
              {(yyval.ListOfNodes)=new ASTNode("*" , (yyvsp[-2].ListOfNodes) , (yyvsp[0].ListOfNodes) , &errorCount);}
#line 2167 "maker.tab.c"
    break;

  case 111: /* e: e '-' e  */
#line 562 "maker.y"
              {(yyval.ListOfNodes)=new ASTNode("-" , (yyvsp[-2].ListOfNodes) , (yyvsp[0].ListOfNodes) , &errorCount);}
#line 2173 "maker.tab.c"
    break;

  case 112: /* e: e '/' e  */
#line 563 "maker.y"
              {(yyval.ListOfNodes)=new ASTNode("/" , (yyvsp[-2].ListOfNodes) , (yyvsp[0].ListOfNodes) , &errorCount);}
#line 2179 "maker.tab.c"
    break;

  case 113: /* e: e '%' e  */
#line 564 "maker.y"
              {(yyval.ListOfNodes)=new ASTNode("%" , (yyvsp[-2].ListOfNodes) , (yyvsp[0].ListOfNodes) , &errorCount);}
#line 2185 "maker.tab.c"
    break;

  case 114: /* e: '(' e ')'  */
#line 565 "maker.y"
              {(yyval.ListOfNodes)=(yyvsp[-1].ListOfNodes);}
#line 2191 "maker.tab.c"
    break;

  case 115: /* e: TRUTH_VALUE  */
#line 566 "maker.y"
               {    
                    if(strcmp((yyvsp[0].string) ,"TRUE")==0){
                         Value val(true);     
                         (yyval.ListOfNodes)=new ASTNode(val , "bool", &errorCount);
                    }
                    else{
                         Value val(false);   
                         (yyval.ListOfNodes)=new ASTNode(val , "bool", &errorCount);
                    }
               }
#line 2206 "maker.tab.c"
    break;

  case 116: /* e: NR  */
#line 576 "maker.y"
              {Value val(atoi(yytext));
               (yyval.ListOfNodes)=new ASTNode(val , "int" , &errorCount);}
#line 2213 "maker.tab.c"
    break;

  case 117: /* e: REAL  */
#line 578 "maker.y"
              {Value val((float)atof(yytext));
               (yyval.ListOfNodes)=new ASTNode(val , "float" , &errorCount);}
#line 2220 "maker.tab.c"
    break;

  case 118: /* e: ID  */
#line 580 "maker.y"
              {
               domeniul_caruia_ii_apartine_varabila=current->check_existance_for_use((yyvsp[0].string) , errorCount , yylineno);
               if(domeniul_caruia_ii_apartine_varabila!=nullptr){
                    (yyval.ListOfNodes)=new ASTNode( domeniul_caruia_ii_apartine_varabila->get_that_variable((yyvsp[0].string)), &errorCount , yylineno);//??? MAybe it will work like this?
               }
               else{
                    (yyval.ListOfNodes)=new ASTNode();
               }
              }
#line 2234 "maker.tab.c"
    break;

  case 119: /* e: ID '.' ID  */
#line 589 "maker.y"
            {
               string buff1=(yyvsp[-2].string);
               string buff3=(yyvsp[0].string);
               string class_mem=buff1+'.'+buff3;
               domeniul_caruia_ii_apartine_varabila=current->check_existance_for_use(class_mem.c_str() , errorCount , yylineno);
               if(domeniul_caruia_ii_apartine_varabila!=nullptr){
               (yyval.ListOfNodes)=new ASTNode( domeniul_caruia_ii_apartine_varabila->get_that_variable(class_mem.c_str()), &errorCount , yylineno);
               }
               else{
                    (yyval.ListOfNodes)=new ASTNode();
               }
               }
#line 2251 "maker.tab.c"
    break;

  case 120: /* e: ID_Array  */
#line 601 "maker.y"
               {
               domeniul_caruia_ii_apartine_varabila=current->check_existance_for_use(array_name.c_str() , errorCount , yylineno);
               if(domeniul_caruia_ii_apartine_varabila!=nullptr){
                    (yyval.ListOfNodes)=new ASTNode( domeniul_caruia_ii_apartine_varabila->get_that_variable(array_name.c_str()), &errorCount , yylineno);
               }
               else{
                    (yyval.ListOfNodes)=new ASTNode();
               }
               array_name.clear();
               }
#line 2266 "maker.tab.c"
    break;

  case 121: /* e: function_call_node  */
#line 611 "maker.y"
                     {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 2272 "maker.tab.c"
    break;

  case 122: /* e: STRING  */
#line 612 "maker.y"
               {Value val((yyvsp[0].string));     
               (yyval.ListOfNodes)=new ASTNode(val , "string" , &errorCount);}
#line 2279 "maker.tab.c"
    break;


#line 2283 "maker.tab.c"

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

#line 616 "maker.y"

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
