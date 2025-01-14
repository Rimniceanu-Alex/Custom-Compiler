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
  YYSYMBOL_CHAR = 26,                      /* CHAR  */
  YYSYMBOL_27_ = 27,                       /* '+'  */
  YYSYMBOL_28_ = 28,                       /* '-'  */
  YYSYMBOL_29_ = 29,                       /* '*'  */
  YYSYMBOL_30_ = 30,                       /* '/'  */
  YYSYMBOL_31_ = 31,                       /* '%'  */
  YYSYMBOL_32_ = 32,                       /* ';'  */
  YYSYMBOL_33_ = 33,                       /* '('  */
  YYSYMBOL_34_ = 34,                       /* ')'  */
  YYSYMBOL_35_ = 35,                       /* '['  */
  YYSYMBOL_36_ = 36,                       /* ']'  */
  YYSYMBOL_37_ = 37,                       /* '.'  */
  YYSYMBOL_38_ = 38,                       /* ':'  */
  YYSYMBOL_39_ = 39,                       /* ','  */
  YYSYMBOL_YYACCEPT = 40,                  /* $accept  */
  YYSYMBOL_progr = 41,                     /* progr  */
  YYSYMBOL_main = 42,                      /* main  */
  YYSYMBOL_43_1 = 43,                      /* $@1  */
  YYSYMBOL_44_2 = 44,                      /* $@2  */
  YYSYMBOL_global_classes_declaration = 45, /* global_classes_declaration  */
  YYSYMBOL_assign_generator = 46,          /* assign_generator  */
  YYSYMBOL_functions_generator = 47,       /* functions_generator  */
  YYSYMBOL_functions = 48,                 /* functions  */
  YYSYMBOL_49_3 = 49,                      /* $@3  */
  YYSYMBOL_50_4 = 50,                      /* $@4  */
  YYSYMBOL_51_5 = 51,                      /* $@5  */
  YYSYMBOL_variables_generator = 52,       /* variables_generator  */
  YYSYMBOL_variables = 53,                 /* variables  */
  YYSYMBOL_fundamentals = 54,              /* fundamentals  */
  YYSYMBOL_arr = 55,                       /* arr  */
  YYSYMBOL_arr_list = 56,                  /* arr_list  */
  YYSYMBOL_57_6 = 57,                      /* $@6  */
  YYSYMBOL_size = 58,                      /* size  */
  YYSYMBOL_variables_interior = 59,        /* variables_interior  */
  YYSYMBOL_fundamentals_interior = 60,     /* fundamentals_interior  */
  YYSYMBOL_arr_interior = 61,              /* arr_interior  */
  YYSYMBOL_list_main = 62,                 /* list_main  */
  YYSYMBOL_list_else = 63,                 /* list_else  */
  YYSYMBOL_list = 64,                      /* list  */
  YYSYMBOL_statement = 65,                 /* statement  */
  YYSYMBOL_statement_main = 66,            /* statement_main  */
  YYSYMBOL_assign_node = 67,               /* assign_node  */
  YYSYMBOL_ID_Array = 68,                  /* ID_Array  */
  YYSYMBOL_69_7 = 69,                      /* $@7  */
  YYSYMBOL_function_call_node = 70,        /* function_call_node  */
  YYSYMBOL_71_8 = 71,                      /* $@8  */
  YYSYMBOL_72_9 = 72,                      /* $@9  */
  YYSYMBOL_while_node = 73,                /* while_node  */
  YYSYMBOL_74_10 = 74,                     /* $@10  */
  YYSYMBOL_75_11 = 75,                     /* $@11  */
  YYSYMBOL_if_node = 76,                   /* if_node  */
  YYSYMBOL_77_12 = 77,                     /* $@12  */
  YYSYMBOL_78_13 = 78,                     /* $@13  */
  YYSYMBOL_79_14 = 79,                     /* $@14  */
  YYSYMBOL_80_15 = 80,                     /* $@15  */
  YYSYMBOL_81_16 = 81,                     /* $@16  */
  YYSYMBOL_for_node = 82,                  /* for_node  */
  YYSYMBOL_83_17 = 83,                     /* $@17  */
  YYSYMBOL_84_18 = 84,                     /* $@18  */
  YYSYMBOL_print_node = 85,                /* print_node  */
  YYSYMBOL_type_fucntion_node = 86,        /* type_fucntion_node  */
  YYSYMBOL_expression_for = 87,            /* expression_for  */
  YYSYMBOL_declarations_interior = 88,     /* declarations_interior  */
  YYSYMBOL_boolean_expression = 89,        /* boolean_expression  */
  YYSYMBOL_y = 90,                         /* y  */
  YYSYMBOL_classes = 91,                   /* classes  */
  YYSYMBOL_class = 92,                     /* class  */
  YYSYMBOL_93_19 = 93,                     /* $@19  */
  YYSYMBOL_class_initialize_initial = 94,  /* class_initialize_initial  */
  YYSYMBOL_class_initialize = 95,          /* class_initialize  */
  YYSYMBOL_class_initialize_interior = 96, /* class_initialize_interior  */
  YYSYMBOL_class_instance = 97,            /* class_instance  */
  YYSYMBOL_98_20 = 98,                     /* $@20  */
  YYSYMBOL_class_instance_interior = 99,   /* class_instance_interior  */
  YYSYMBOL_list_param_epsilon = 100,       /* list_param_epsilon  */
  YYSYMBOL_list_param = 101,               /* list_param  */
  YYSYMBOL_param = 102,                    /* param  */
  YYSYMBOL_call_list_epsilon = 103,        /* call_list_epsilon  */
  YYSYMBOL_call_list = 104,                /* call_list  */
  YYSYMBOL_e = 105                         /* e  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 31 "maker.y"

     

#line 239 "maker.tab.c"


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
#define YYFINAL  24
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   283

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  66
/* YYNRULES -- Number of rules.  */
#define YYNRULES  129
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  243

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   281


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
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
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
  "ASSIGN", "TRUTH_VALUE", "PRINT", "TYPE_FUNCTION", "STRING", "CHAR",
  "'+'", "'-'", "'*'", "'/'", "'%'", "';'", "'('", "')'", "'['", "']'",
  "'.'", "':'", "','", "$accept", "progr", "main", "$@1", "$@2",
  "global_classes_declaration", "assign_generator", "functions_generator",
  "functions", "$@3", "$@4", "$@5", "variables_generator", "variables",
  "fundamentals", "arr", "arr_list", "$@6", "size", "variables_interior",
  "fundamentals_interior", "arr_interior", "list_main", "list_else",
  "list", "statement", "statement_main", "assign_node", "ID_Array", "$@7",
  "function_call_node", "$@8", "$@9", "while_node", "$@10", "$@11",
  "if_node", "$@12", "$@13", "$@14", "$@15", "$@16", "for_node", "$@17",
  "$@18", "print_node", "type_fucntion_node", "expression_for",
  "declarations_interior", "boolean_expression", "y", "classes", "class",
  "$@19", "class_initialize_initial", "class_initialize",
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

#define YYPACT_NINF (-160)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-70)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
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

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
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

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     5,    26,    59,   139,     6,     7,     8,     9,    55,
      58,   205,    10,    11,    12,    13,    53,   149,    80,    94,
      95,    96,    97,   184,   185,   186,    98,   187,    46,    20,
      47,    69,   142,   189,   207,   222,   190,   206,   221,   231,
     237,   241,   191,   234,   238,   192,   193,   217,   194,    48,
      49,    16,    17,   129,    36,    37,   107,    38,   109,   108,
     126,   127,   128,   143,   144,   158
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
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

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
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

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
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

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
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
  case 2: /* progr: classes class_initialize_initial global_classes_declaration main  */
#line 42 "maker.y"
                                                                          {if(errorCount==0)cout<<"The Program is Correct!"<<endl;}
#line 1376 "maker.tab.c"
    break;

  case 3: /* progr: global_classes_declaration main  */
#line 43 "maker.y"
                                         {if(errorCount==0)cout<<"The Program is Correct!"<<endl;}
#line 1382 "maker.tab.c"
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
#line 1394 "maker.tab.c"
    break;

  case 5: /* $@2: %empty  */
#line 54 "maker.y"
                    {current->set_body((yyvsp[0].ListOfNodes));
               }
#line 1401 "maker.tab.c"
    break;

  case 6: /* main: BGIN $@1 list_main $@2 END  */
#line 56 "maker.y"
                    {
                     current=current->next_domain_scope();
                    }
#line 1409 "maker.tab.c"
    break;

  case 14: /* assign_generator: assign_node ';'  */
#line 68 "maker.y"
                               {(yyvsp[-1].ListOfNodes)->run();}
#line 1415 "maker.tab.c"
    break;

  case 15: /* assign_generator: assign_node ';' assign_generator  */
#line 69 "maker.y"
                                                 {(yyvsp[-2].ListOfNodes)->run();}
#line 1421 "maker.tab.c"
    break;

  case 18: /* $@3: %empty  */
#line 74 "maker.y"
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
#line 1440 "maker.tab.c"
    break;

  case 19: /* functions: TYPE ID $@3 '(' list_param_epsilon ')' CBEGIN list_else RETURN e ';' CEND ';'  */
#line 89 "maker.y"
                                                                           {
                                                                           class ASTNode* func_return;
                                                                           func_return=new ASTNode((yyvsp[-11].string) , "<-" , (yyvsp[-3].ListOfNodes) ,current, &errorCount, yylineno);
                                                                           class ASTNode* list_return;
                                                                           list_return=new ASTNode("sequence" , (yyvsp[-5].ListOfNodes) , func_return , &errorCount , current);
                                                                           current->set_body(list_return);
                                                                           current=current->next_domain_scope();
                                                                           }
#line 1453 "maker.tab.c"
    break;

  case 20: /* $@4: %empty  */
#line 98 "maker.y"
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
#line 1472 "maker.tab.c"
    break;

  case 21: /* $@5: %empty  */
#line 112 "maker.y"
                                                     {    current->set_body((yyvsp[0].ListOfNodes));}
#line 1478 "maker.tab.c"
    break;

  case 22: /* functions: VOID ID $@4 '(' list_param_epsilon ')' CBEGIN list $@5 CEND ';'  */
#line 113 "maker.y"
                                   {
                                    current=current->next_domain_scope();
                                   }
#line 1486 "maker.tab.c"
    break;

  case 27: /* fundamentals: TYPE ID ';'  */
#line 125 "maker.y"
                          {current->check_existance_for_declaration((yyvsp[-2].string), (yyvsp[-1].string) , "var" , errorCount , yylineno, array_size);}
#line 1492 "maker.tab.c"
    break;

  case 28: /* arr: TYPE ID arr_list ';'  */
#line 128 "maker.y"
                           {current->check_existance_for_declaration((yyvsp[-3].string), (yyvsp[-2].string) , "array" , errorCount , yylineno , array_size);
                              }
#line 1499 "maker.tab.c"
    break;

  case 29: /* $@6: %empty  */
#line 132 "maker.y"
                       {array_name+='['+nr+']';}
#line 1505 "maker.tab.c"
    break;

  case 31: /* arr_list: '[' size ']'  */
#line 133 "maker.y"
                       {array_name+='['+nr+']';}
#line 1511 "maker.tab.c"
    break;

  case 32: /* size: e  */
#line 135 "maker.y"
      {array_size.push_back((yyvsp[0].ListOfNodes)->evaluatei());
        nr=to_string((yyvsp[0].ListOfNodes)->evaluatei());
     }
#line 1519 "maker.tab.c"
    break;

  case 35: /* fundamentals_interior: TYPE ID  */
#line 144 "maker.y"
                                {current->check_existance_for_declaration((yyvsp[-1].string), (yyvsp[0].string) , "var" , errorCount , yylineno , array_size);}
#line 1525 "maker.tab.c"
    break;

  case 36: /* arr_interior: TYPE ID arr_list  */
#line 147 "maker.y"
                                 {current->check_existance_for_declaration((yyvsp[-2].string), (yyvsp[-1].string) , "array" , errorCount , yylineno , array_size);
                                   array_size.clear();
                                   for(int i=0 ; i<array_size.size();++i){
                                        cout<<array_size[i]<<endl;
                                   };
                                   }
#line 1536 "maker.tab.c"
    break;

  case 37: /* list_main: statement_main ';'  */
#line 155 "maker.y"
                                {(yyval.ListOfNodes)=new ASTNode("final_sequence" , (yyvsp[-1].ListOfNodes) , &errorCount , yylineno, current);}
#line 1542 "maker.tab.c"
    break;

  case 38: /* list_main: statement_main ';' list_main  */
#line 156 "maker.y"
                                          {(yyval.ListOfNodes)=new ASTNode("sequence" , (yyvsp[-2].ListOfNodes) ,(yyvsp[0].ListOfNodes) , &errorCount , current);}
#line 1548 "maker.tab.c"
    break;

  case 39: /* list_else: list  */
#line 158 "maker.y"
               {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1554 "maker.tab.c"
    break;

  case 40: /* list_else: %empty  */
#line 159 "maker.y"
                       {(yyval.ListOfNodes)=new ASTNode();}
#line 1560 "maker.tab.c"
    break;

  case 41: /* list: statement ';'  */
#line 161 "maker.y"
                      {(yyval.ListOfNodes)=new ASTNode("final_sequence" , (yyvsp[-1].ListOfNodes) , &errorCount , yylineno, current);}
#line 1566 "maker.tab.c"
    break;

  case 42: /* list: statement ';' list  */
#line 162 "maker.y"
                           {(yyval.ListOfNodes)=new ASTNode("sequence" , (yyvsp[-2].ListOfNodes) ,(yyvsp[0].ListOfNodes) , &errorCount , current);}
#line 1572 "maker.tab.c"
    break;

  case 43: /* statement: assign_node  */
#line 164 "maker.y"
                       {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1578 "maker.tab.c"
    break;

  case 44: /* statement: function_call_node  */
#line 165 "maker.y"
                            {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1584 "maker.tab.c"
    break;

  case 45: /* statement: while_node  */
#line 166 "maker.y"
                    {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1590 "maker.tab.c"
    break;

  case 46: /* statement: if_node  */
#line 167 "maker.y"
                 {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1596 "maker.tab.c"
    break;

  case 47: /* statement: for_node  */
#line 168 "maker.y"
                  {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1602 "maker.tab.c"
    break;

  case 48: /* statement: declarations_interior  */
#line 169 "maker.y"
                                {(yyval.ListOfNodes)=new ASTNode();}
#line 1608 "maker.tab.c"
    break;

  case 49: /* statement: print_node  */
#line 170 "maker.y"
                     {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1614 "maker.tab.c"
    break;

  case 50: /* statement: type_fucntion_node  */
#line 171 "maker.y"
                             {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1620 "maker.tab.c"
    break;

  case 51: /* statement_main: assign_node  */
#line 173 "maker.y"
                            {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);(yyval.ListOfNodes)->run();}
#line 1626 "maker.tab.c"
    break;

  case 52: /* statement_main: function_call_node  */
#line 174 "maker.y"
                            {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);(yyval.ListOfNodes)->run();}
#line 1632 "maker.tab.c"
    break;

  case 53: /* statement_main: while_node  */
#line 175 "maker.y"
                    {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);(yyval.ListOfNodes)->run();}
#line 1638 "maker.tab.c"
    break;

  case 54: /* statement_main: if_node  */
#line 176 "maker.y"
                 {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);(yyval.ListOfNodes)->run();}
#line 1644 "maker.tab.c"
    break;

  case 55: /* statement_main: for_node  */
#line 177 "maker.y"
                  {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);(yyval.ListOfNodes)->run();}
#line 1650 "maker.tab.c"
    break;

  case 56: /* statement_main: declarations_interior  */
#line 178 "maker.y"
                                {(yyval.ListOfNodes)=new ASTNode();}
#line 1656 "maker.tab.c"
    break;

  case 57: /* statement_main: print_node  */
#line 179 "maker.y"
                     {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);(yyval.ListOfNodes)->run();}
#line 1662 "maker.tab.c"
    break;

  case 58: /* statement_main: type_fucntion_node  */
#line 180 "maker.y"
                             {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);(yyval.ListOfNodes)->run();}
#line 1668 "maker.tab.c"
    break;

  case 59: /* assign_node: ID ASSIGN e  */
#line 182 "maker.y"
                        {
                         (yyval.ListOfNodes)=new ASTNode((yyvsp[-2].string) , "<-" , (yyvsp[0].ListOfNodes) ,current, &errorCount, yylineno);
                         }
#line 1676 "maker.tab.c"
    break;

  case 60: /* assign_node: ID ASSIGN boolean_expression  */
#line 185 "maker.y"
                                         {
                         (yyval.ListOfNodes)=new ASTNode((yyvsp[-2].string) , "<-" , (yyvsp[0].ListOfNodes) ,current, &errorCount, yylineno);
                         }
#line 1684 "maker.tab.c"
    break;

  case 61: /* assign_node: ID '.' ID ASSIGN e  */
#line 188 "maker.y"
                             {
                         string buff1=(yyvsp[-4].string);
                         string buff3=(yyvsp[-2].string);
                         string class_mem=buff1+'.'+buff3;
                         (yyval.ListOfNodes)=new ASTNode(class_mem , "<-" , (yyvsp[0].ListOfNodes) ,current, &errorCount, yylineno);
                         }
#line 1695 "maker.tab.c"
    break;

  case 62: /* assign_node: ID '.' ID ASSIGN boolean_expression  */
#line 194 "maker.y"
                                              {
                         string buff1=(yyvsp[-4].string);
                         string buff3=(yyvsp[-2].string);
                         string class_mem=buff1+'.'+buff3;
                         (yyval.ListOfNodes)=new ASTNode(class_mem , "<-" , (yyvsp[0].ListOfNodes) ,current, &errorCount, yylineno);
                         }
#line 1706 "maker.tab.c"
    break;

  case 63: /* assign_node: ID_Array ASSIGN e  */
#line 200 "maker.y"
                              {string copie=array_name;(yyval.ListOfNodes)=new ASTNode(copie , "<-" , (yyvsp[0].ListOfNodes) ,current, &errorCount, yylineno);array_name.clear();}
#line 1712 "maker.tab.c"
    break;

  case 64: /* assign_node: ID_Array ASSIGN boolean_expression  */
#line 201 "maker.y"
                                               {(yyval.ListOfNodes)=new ASTNode(array_name , "<-" , (yyvsp[0].ListOfNodes) ,current, &errorCount, yylineno);array_name.clear();}
#line 1718 "maker.tab.c"
    break;

  case 65: /* $@7: %empty  */
#line 203 "maker.y"
           {array_name=(yyvsp[0].string);}
#line 1724 "maker.tab.c"
    break;

  case 67: /* $@8: %empty  */
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
#line 1772 "maker.tab.c"
    break;

  case 68: /* function_call_node: ID $@8 '(' call_list_epsilon ')'  */
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
                                 }
#line 1794 "maker.tab.c"
    break;

  case 69: /* $@9: %empty  */
#line 268 "maker.y"
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
#line 1855 "maker.tab.c"
    break;

  case 70: /* function_call_node: ID '.' ID $@9 '(' call_list_epsilon ')'  */
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
                                 }
#line 1877 "maker.tab.c"
    break;

  case 71: /* $@10: %empty  */
#line 344 "maker.y"
               {
                    SymTable* currentCTRL;     
                    currentCTRL = new SymTable((yyvsp[-4].string));
                    currentCTRL->assign_stack_above(current->return_stack_above());
                    currentCTRL->add_above(current);
                    current=currentCTRL;
                    Vector_Tabele.push_back(current);
               }
#line 1890 "maker.tab.c"
    break;

  case 72: /* $@11: %empty  */
#line 352 "maker.y"
                             {
                              
                              current->set_body((yyvsp[0].ListOfNodes));
                              }
#line 1899 "maker.tab.c"
    break;

  case 73: /* while_node: WHILE '(' boolean_expression ')' CBEGIN $@10 list $@11 CEND  */
#line 357 "maker.y"
                                   {
                                        (yyval.ListOfNodes)=new ASTNode("while" , (yyvsp[-6].ListOfNodes) , (yyvsp[-2].ListOfNodes) , &errorCount , yylineno);
                                        current=current->next_domain_scope();
                                   }
#line 1908 "maker.tab.c"
    break;

  case 74: /* $@12: %empty  */
#line 363 "maker.y"
                    {
                         SymTable* currentCTRL;     
                         currentCTRL = new SymTable((yyvsp[-4].string));
                         currentCTRL->assign_stack_above(current->return_stack_above());
                         currentCTRL->add_above(current);
                         current=currentCTRL;
                         Vector_Tabele.push_back(current);
                    }
#line 1921 "maker.tab.c"
    break;

  case 75: /* $@13: %empty  */
#line 371 "maker.y"
                             {
                              current->set_body((yyvsp[0].ListOfNodes));
                         }
#line 1929 "maker.tab.c"
    break;

  case 76: /* $@14: %empty  */
#line 374 "maker.y"
                                   {
                                        current=current->next_domain_scope();
                                   }
#line 1937 "maker.tab.c"
    break;

  case 77: /* $@15: %empty  */
#line 378 "maker.y"
                              {
                                   SymTable* currentCTRL;     
                                   currentCTRL = new SymTable((yyvsp[-11].string));
                                   currentCTRL->assign_stack_above(current->return_stack_above());
                                   currentCTRL->add_above(current);
                                   current=currentCTRL;
                                   Vector_Tabele.push_back(current);
                              }
#line 1950 "maker.tab.c"
    break;

  case 78: /* $@16: %empty  */
#line 386 "maker.y"
                                                           {
                                                       current->set_body((yyvsp[0].ListOfNodes));
                                                  }
#line 1958 "maker.tab.c"
    break;

  case 79: /* if_node: IF '(' boolean_expression ')' CBEGIN $@12 list $@13 CEND $@14 ELSE CBEGIN $@15 list_else $@16 CEND  */
#line 389 "maker.y"
                              {
                                   class ASTNode* combine;
                                   combine=new ASTNode((yyvsp[-9].ListOfNodes) , (yyvsp[-2].ListOfNodes) , &errorCount);
                                   (yyval.ListOfNodes)=new ASTNode("if" , (yyvsp[-13].ListOfNodes) , combine , &errorCount , yylineno);
                                   current=current->next_domain_scope();
                              }
#line 1969 "maker.tab.c"
    break;

  case 80: /* $@17: %empty  */
#line 397 "maker.y"
               {
                 SymTable* currentCTRL;     
                 currentCTRL = new SymTable((yyvsp[-9].string));
                 currentCTRL->assign_stack_above(current->return_stack_above());
                 currentCTRL->add_above(current);
                 current=currentCTRL;
                 Vector_Tabele.push_back(current);
               }
#line 1982 "maker.tab.c"
    break;

  case 81: /* $@18: %empty  */
#line 405 "maker.y"
                                                                                        {current->set_body((yyvsp[0].ListOfNodes));}
#line 1988 "maker.tab.c"
    break;

  case 82: /* for_node: FOR '(' assign_node ';' boolean_expression ';' expression_for ';' ')' CBEGIN $@17 list $@18 CEND  */
#line 406 "maker.y"
               {
                 class ASTNode* combination1;
                 combination1=new ASTNode((yyvsp[-11].ListOfNodes) , (yyvsp[-9].ListOfNodes) , &errorCount);
                 class ASTNode* combination2;
                 combination2=new ASTNode((yyvsp[-2].ListOfNodes) , (yyvsp[-7].ListOfNodes) , &errorCount);
                 (yyval.ListOfNodes)=new ASTNode("for", combination1 , combination2 , &errorCount , yylineno );
                 current=current->next_domain_scope();
               }
#line 2001 "maker.tab.c"
    break;

  case 83: /* print_node: PRINT '(' e ')'  */
#line 415 "maker.y"
                           {(yyval.ListOfNodes)=new ASTNode((yyvsp[-3].string) , (yyvsp[-1].ListOfNodes) , &errorCount , yylineno);}
#line 2007 "maker.tab.c"
    break;

  case 84: /* type_fucntion_node: TYPE_FUNCTION '(' e ')'  */
#line 417 "maker.y"
                                            {(yyval.ListOfNodes)=new ASTNode((yyvsp[-3].string) , (yyvsp[-1].ListOfNodes) , &errorCount , yylineno);}
#line 2013 "maker.tab.c"
    break;

  case 85: /* expression_for: assign_node  */
#line 418 "maker.y"
                          {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 2019 "maker.tab.c"
    break;

  case 86: /* expression_for: e  */
#line 419 "maker.y"
                 {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 2025 "maker.tab.c"
    break;

  case 89: /* boolean_expression: '(' boolean_expression ')'  */
#line 426 "maker.y"
                                               {(yyval.ListOfNodes)=(yyvsp[-1].ListOfNodes);}
#line 2031 "maker.tab.c"
    break;

  case 90: /* boolean_expression: '(' boolean_expression ')' CONNECT '(' boolean_expression ')'  */
#line 427 "maker.y"
                                                                            {(yyval.ListOfNodes)=new ASTNode((yyvsp[-3].string) , (yyvsp[-5].ListOfNodes) , (yyvsp[-1].ListOfNodes) , &errorCount);}
#line 2037 "maker.tab.c"
    break;

  case 91: /* boolean_expression: y  */
#line 428 "maker.y"
                    {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 2043 "maker.tab.c"
    break;

  case 92: /* y: e CMP e  */
#line 430 "maker.y"
            {(yyval.ListOfNodes)=new ASTNode((yyvsp[-1].string) , (yyvsp[-2].ListOfNodes) , (yyvsp[0].ListOfNodes) , &errorCount);}
#line 2049 "maker.tab.c"
    break;

  case 93: /* y: '(' e ')' CONNECT '(' e ')'  */
#line 431 "maker.y"
                            {(yyval.ListOfNodes)=new ASTNode((yyvsp[-3].string) , (yyvsp[-5].ListOfNodes) , (yyvsp[-1].ListOfNodes) , &errorCount);}
#line 2055 "maker.tab.c"
    break;

  case 96: /* $@19: %empty  */
#line 438 "maker.y"
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
#line 2070 "maker.tab.c"
    break;

  case 97: /* class: Class_Type Class_ID ':' CBEGIN $@19 global_classes_declaration CEND ';'  */
#line 449 "maker.y"
          {
            current=current->next_domain_scope();
          }
#line 2078 "maker.tab.c"
    break;

  case 103: /* $@20: %empty  */
#line 466 "maker.y"
                             {current->check_existance_for_class_instance((yyvsp[-1].string) , (yyvsp[0].string), errorCount , yylineno);}
#line 2084 "maker.tab.c"
    break;

  case 105: /* class_instance_interior: Class_ID ID  */
#line 468 "maker.y"
                                      {current->check_existance_for_class_instance((yyvsp[-1].string) , (yyvsp[0].string), errorCount , yylineno);}
#line 2090 "maker.tab.c"
    break;

  case 110: /* param: TYPE ID  */
#line 479 "maker.y"
                {current->check_existance_for_declaration((yyvsp[-1].string), (yyvsp[0].string) , "param" , errorCount , yylineno , array_size);
                 current->add_function_params(current->get_that_variable((yyvsp[0].string)));
                }
#line 2098 "maker.tab.c"
    break;

  case 113: /* call_list: e  */
#line 487 "maker.y"
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
#line 2144 "maker.tab.c"
    break;

  case 114: /* call_list: call_list ',' e  */
#line 528 "maker.y"
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
#line 2190 "maker.tab.c"
    break;

  case 115: /* e: e '+' e  */
#line 571 "maker.y"
              {(yyval.ListOfNodes)=new ASTNode("+" , (yyvsp[-2].ListOfNodes) , (yyvsp[0].ListOfNodes) , &errorCount);}
#line 2196 "maker.tab.c"
    break;

  case 116: /* e: e '*' e  */
#line 572 "maker.y"
              {(yyval.ListOfNodes)=new ASTNode("*" , (yyvsp[-2].ListOfNodes) , (yyvsp[0].ListOfNodes) , &errorCount);}
#line 2202 "maker.tab.c"
    break;

  case 117: /* e: e '-' e  */
#line 573 "maker.y"
              {(yyval.ListOfNodes)=new ASTNode("-" , (yyvsp[-2].ListOfNodes) , (yyvsp[0].ListOfNodes) , &errorCount);}
#line 2208 "maker.tab.c"
    break;

  case 118: /* e: e '/' e  */
#line 574 "maker.y"
              {(yyval.ListOfNodes)=new ASTNode("/" , (yyvsp[-2].ListOfNodes) , (yyvsp[0].ListOfNodes) , &errorCount);}
#line 2214 "maker.tab.c"
    break;

  case 119: /* e: e '%' e  */
#line 575 "maker.y"
              {(yyval.ListOfNodes)=new ASTNode("%" , (yyvsp[-2].ListOfNodes) , (yyvsp[0].ListOfNodes) , &errorCount);}
#line 2220 "maker.tab.c"
    break;

  case 120: /* e: '(' e ')'  */
#line 576 "maker.y"
              {(yyval.ListOfNodes)=(yyvsp[-1].ListOfNodes);}
#line 2226 "maker.tab.c"
    break;

  case 121: /* e: TRUTH_VALUE  */
#line 577 "maker.y"
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
#line 2241 "maker.tab.c"
    break;

  case 122: /* e: NR  */
#line 587 "maker.y"
              {Value val(atoi(yytext));
               (yyval.ListOfNodes)=new ASTNode(val , "int" , &errorCount);}
#line 2248 "maker.tab.c"
    break;

  case 123: /* e: REAL  */
#line 589 "maker.y"
              {Value val((float)atof(yytext));
               (yyval.ListOfNodes)=new ASTNode(val , "float" , &errorCount);}
#line 2255 "maker.tab.c"
    break;

  case 124: /* e: ID  */
#line 591 "maker.y"
              {
               domeniul_caruia_ii_apartine_varabila=current->check_existance_for_use((yyvsp[0].string) , errorCount , yylineno);
               if(domeniul_caruia_ii_apartine_varabila!=nullptr){
                    (yyval.ListOfNodes)=new ASTNode( domeniul_caruia_ii_apartine_varabila->get_that_variable((yyvsp[0].string)), &errorCount , yylineno);//??? MAybe it will work like this?
               }
               else{
                    (yyval.ListOfNodes)=new ASTNode();
               }
              }
#line 2269 "maker.tab.c"
    break;

  case 125: /* e: ID '.' ID  */
#line 600 "maker.y"
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
#line 2286 "maker.tab.c"
    break;

  case 126: /* e: ID_Array  */
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
               }
#line 2301 "maker.tab.c"
    break;

  case 127: /* e: function_call_node  */
#line 622 "maker.y"
                     {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 2307 "maker.tab.c"
    break;

  case 128: /* e: STRING  */
#line 623 "maker.y"
               {Value val((yyvsp[0].string));     
               (yyval.ListOfNodes)=new ASTNode(val , "string" , &errorCount);}
#line 2314 "maker.tab.c"
    break;

  case 129: /* e: CHAR  */
#line 625 "maker.y"
        {
     Value val((yyvsp[0].string));     
     (yyval.ListOfNodes)=new ASTNode(val , "char" , &errorCount);}
#line 2322 "maker.tab.c"
    break;


#line 2326 "maker.tab.c"

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
