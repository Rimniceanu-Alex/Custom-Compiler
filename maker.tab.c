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
  YYSYMBOL_31_ = 31,                       /* ';'  */
  YYSYMBOL_32_ = 32,                       /* '('  */
  YYSYMBOL_33_ = 33,                       /* ')'  */
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
  YYSYMBOL_assign_generator = 45,          /* assign_generator  */
  YYSYMBOL_functions_generator = 46,       /* functions_generator  */
  YYSYMBOL_functions = 47,                 /* functions  */
  YYSYMBOL_48_3 = 48,                      /* $@3  */
  YYSYMBOL_49_4 = 49,                      /* $@4  */
  YYSYMBOL_50_5 = 50,                      /* $@5  */
  YYSYMBOL_variables_generator = 51,       /* variables_generator  */
  YYSYMBOL_variables = 52,                 /* variables  */
  YYSYMBOL_fundamentals = 53,              /* fundamentals  */
  YYSYMBOL_arr = 54,                       /* arr  */
  YYSYMBOL_arr_list = 55,                  /* arr_list  */
  YYSYMBOL_56_6 = 56,                      /* $@6  */
  YYSYMBOL_size = 57,                      /* size  */
  YYSYMBOL_variables_interior = 58,        /* variables_interior  */
  YYSYMBOL_fundamentals_interior = 59,     /* fundamentals_interior  */
  YYSYMBOL_arr_interior = 60,              /* arr_interior  */
  YYSYMBOL_list_main = 61,                 /* list_main  */
  YYSYMBOL_list_else = 62,                 /* list_else  */
  YYSYMBOL_list = 63,                      /* list  */
  YYSYMBOL_statement = 64,                 /* statement  */
  YYSYMBOL_statement_main = 65,            /* statement_main  */
  YYSYMBOL_assign_node = 66,               /* assign_node  */
  YYSYMBOL_ID_Array = 67,                  /* ID_Array  */
  YYSYMBOL_68_7 = 68,                      /* $@7  */
  YYSYMBOL_function_call_node = 69,        /* function_call_node  */
  YYSYMBOL_70_8 = 70,                      /* $@8  */
  YYSYMBOL_71_9 = 71,                      /* $@9  */
  YYSYMBOL_while_node = 72,                /* while_node  */
  YYSYMBOL_73_10 = 73,                     /* $@10  */
  YYSYMBOL_74_11 = 74,                     /* $@11  */
  YYSYMBOL_if_node = 75,                   /* if_node  */
  YYSYMBOL_76_12 = 76,                     /* $@12  */
  YYSYMBOL_77_13 = 77,                     /* $@13  */
  YYSYMBOL_78_14 = 78,                     /* $@14  */
  YYSYMBOL_79_15 = 79,                     /* $@15  */
  YYSYMBOL_80_16 = 80,                     /* $@16  */
  YYSYMBOL_for_node = 81,                  /* for_node  */
  YYSYMBOL_82_17 = 82,                     /* $@17  */
  YYSYMBOL_83_18 = 83,                     /* $@18  */
  YYSYMBOL_print_node = 84,                /* print_node  */
  YYSYMBOL_type_fucntion_node = 85,        /* type_fucntion_node  */
  YYSYMBOL_expression_for = 86,            /* expression_for  */
  YYSYMBOL_declarations_interior = 87,     /* declarations_interior  */
  YYSYMBOL_boolean_expression = 88,        /* boolean_expression  */
  YYSYMBOL_y = 89,                         /* y  */
  YYSYMBOL_classes = 90,                   /* classes  */
  YYSYMBOL_class = 91,                     /* class  */
  YYSYMBOL_92_19 = 92,                     /* $@19  */
  YYSYMBOL_class_initialize_initial = 93,  /* class_initialize_initial  */
  YYSYMBOL_class_initialize = 94,          /* class_initialize  */
  YYSYMBOL_class_initialize_interior = 95, /* class_initialize_interior  */
  YYSYMBOL_class_instance = 96,            /* class_instance  */
  YYSYMBOL_97_20 = 97,                     /* $@20  */
  YYSYMBOL_class_instance_interior = 98,   /* class_instance_interior  */
  YYSYMBOL_list_param_epsilon = 99,        /* list_param_epsilon  */
  YYSYMBOL_list_param = 100,               /* list_param  */
  YYSYMBOL_param = 101,                    /* param  */
  YYSYMBOL_call_list_epsilon = 102,        /* call_list_epsilon  */
  YYSYMBOL_call_list = 103,                /* call_list  */
  YYSYMBOL_e = 104                         /* e  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 31 "maker.y"

     

#line 238 "maker.tab.c"


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
#define YYLAST   280

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  39
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  66
/* YYNRULES -- Number of rules.  */
#define YYNRULES  128
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  242

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
      32,    33,    28,    26,    38,    27,    36,    29,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    37,    31,
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
     576,   577,   587,   589,   591,   600,   612,   622,   623
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
  "'-'", "'*'", "'/'", "'%'", "';'", "'('", "')'", "'['", "']'", "'.'",
  "':'", "','", "$accept", "progr", "main", "$@1", "$@2",
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

#define YYPACT_NINF (-156)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-70)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     111,     4,    19,    36,    41,    60,    70,  -156,    10,  -156,
      63,  -156,  -156,  -156,    48,    59,    66,  -156,    13,    78,
      57,    -3,    58,  -156,  -156,  -156,  -156,    92,  -156,    10,
      10,  -156,    94,    13,    97,  -156,    63,   103,  -156,  -156,
      20,  -156,  -156,  -156,    13,  -156,  -156,  -156,  -156,    82,
     102,    67,  -156,  -156,    86,   107,   120,   101,   175,  -156,
      10,  -156,  -156,    82,  -156,    70,  -156,   126,   121,   119,
     135,    67,    67,    67,    67,    67,    67,    13,    67,   122,
     217,   150,  -156,  -156,   150,    49,   147,   152,   134,   137,
     139,   140,   149,  -156,  -156,  -156,  -156,   136,  -156,  -156,
    -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,   148,  -156,
     154,    67,   160,   164,   217,   146,   146,   158,   158,  -156,
    -156,    82,   115,   157,   185,   161,   162,  -156,    63,   163,
     187,    57,  -156,    13,    13,    94,    67,    67,   197,   175,
    -156,   170,   171,   176,   217,   190,   198,  -156,    57,  -156,
     210,   150,   225,   218,   102,  -156,   201,    82,   202,   219,
     183,   191,  -156,  -156,    67,  -156,    67,    13,    67,  -156,
     175,  -156,   220,   175,   243,   244,    13,  -156,  -156,   221,
     217,   222,   199,   232,  -156,   226,  -156,  -156,  -156,  -156,
    -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,   227,  -156,
    -156,  -156,    67,   175,   247,   175,   175,    99,   211,  -156,
     228,  -156,  -156,    21,  -156,    59,   229,   217,   250,  -156,
     255,   256,   257,   230,   233,  -156,  -156,    -6,   261,  -156,
     254,  -156,   263,   175,  -156,  -156,   175,   264,  -156,  -156,
     265,  -156
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
     124,   122,   121,   128,     0,   126,   127,    60,    91,    59,
       0,     0,    66,    27,     0,     0,     0,     0,     0,    18,
       7,    15,    64,    63,   103,     0,   101,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      32,   107,    28,    96,   107,    65,     0,     0,     0,     0,
       0,     0,     0,    87,    33,    34,     5,     0,    51,    52,
      53,    54,    55,    57,    58,    56,    88,   102,     0,     2,
     125,   112,    89,   120,    92,   115,   117,   116,   118,   119,
      62,    61,     0,    31,     0,     0,   106,   108,    13,     0,
       0,    35,   105,     0,     0,     0,     0,     0,     0,    37,
     104,     0,     0,   111,   113,     0,     0,   120,     0,   110,
       0,     0,     0,     0,    69,    36,     0,     0,     0,     0,
       0,     0,     6,    38,   112,    68,     0,     0,     0,    30,
      40,   109,     0,     0,     0,     0,     0,    83,    84,     0,
     114,     0,     0,     0,    39,     0,    43,    44,    45,    46,
      47,    49,    50,    48,    97,    21,    74,    71,     0,    70,
      90,    93,     0,    41,     0,     0,     0,     0,     0,    42,
       0,    75,    72,   124,    85,   126,     0,    86,     0,    22,
       0,     0,     0,     0,     0,    76,    73,   125,     0,    19,
       0,    80,     0,     0,    77,    81,    40,     0,    78,    82,
       0,    79
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -156,  -156,   204,  -156,  -156,   -32,    12,    14,     9,  -156,
    -156,  -156,  -156,   262,  -156,  -156,   -16,  -156,  -156,  -156,
    -156,  -156,   138,    37,  -155,  -156,  -156,     1,     0,  -156,
     -56,  -156,  -156,   -52,  -156,  -156,   -51,  -156,  -156,  -156,
    -156,  -156,   -49,  -156,  -156,   -46,   -45,  -156,   -42,   -30,
    -156,  -156,   258,  -156,  -156,  -156,  -156,   238,  -156,  -156,
     192,  -156,   127,   116,  -156,   -10
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     5,    26,    58,   138,     6,     7,     8,     9,    54,
      57,   204,    10,    11,    12,    13,    52,   148,    79,    93,
      94,    95,    96,   183,   184,   185,    97,   186,    45,    20,
      46,    68,   141,   188,   206,   221,   189,   205,   220,   230,
     236,   240,   190,   233,   237,   191,   192,   216,   193,    47,
      48,    16,    17,   128,    36,    37,   106,    38,   108,   107,
     125,   126,   127,   142,   143,   157
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      15,    14,    99,    62,    65,    55,   100,   101,    49,   102,
      15,    14,   103,   104,    69,    77,   105,    28,   195,    27,
      39,    40,    29,    63,    30,    18,   -69,    21,    53,     4,
      41,    51,    15,    14,    70,    42,    15,    14,    43,    28,
      19,    80,    18,    60,    61,    44,    22,   120,   209,    23,
     211,   212,   -67,   -67,   -65,   -65,    67,   222,    15,    98,
      24,   114,   115,   116,   117,   118,   119,   121,   122,    28,
      18,     1,     2,    25,    39,    40,    34,     3,   235,    32,
      33,   -67,     4,    99,    41,   130,    50,   100,   101,    42,
     102,    51,    43,   103,   104,    56,   152,   105,    71,    78,
      59,   144,     1,   156,   158,    64,    39,   213,    72,    73,
      74,    75,    76,    34,   187,   155,    41,   187,    81,     1,
       2,    42,     3,    77,    43,    83,   160,   161,    15,    14,
       4,    78,   169,    84,   110,    15,   159,   181,    82,    15,
      98,    72,    73,    74,    75,    76,   198,   187,   147,   187,
     187,    71,   112,   111,   144,   131,   180,   123,   182,   124,
     132,    72,    73,    74,    75,    76,   133,   139,   113,   134,
      15,   135,   136,    15,    74,    75,    76,   187,   145,   140,
     187,   137,   146,    85,    86,    87,   -69,    88,    76,    89,
      90,   -29,   208,   149,   150,   154,   153,   217,    91,    92,
     151,   162,   164,    15,   165,    15,    15,   215,   214,    72,
      73,    74,    75,    76,   166,   170,   177,    72,    73,    74,
      75,    76,   167,   173,   178,    72,    73,    74,    75,    76,
     168,   172,   201,    15,   174,   175,    15,    72,    73,    74,
      75,    76,   218,    72,    73,    74,    75,    76,   196,   197,
     176,   194,   202,   210,   199,   200,   224,   203,   207,   219,
     223,   225,   226,   228,   229,   227,   231,   232,   234,   109,
     239,   241,    31,   238,    35,    66,   129,   163,   171,     0,
     179
};

static const yytype_int16 yycheck[] =
{
       0,     0,    58,    33,    36,    21,    58,    58,    18,    58,
      10,    10,    58,    58,    44,    21,    58,     8,   173,     9,
       7,     8,    10,    33,    10,    21,    32,     8,    31,    19,
      17,    34,    32,    32,    44,    22,    36,    36,    25,    30,
      36,    51,    21,    29,    32,    32,    10,    77,   203,     8,
     205,   206,    32,    32,    34,    34,    36,    36,    58,    58,
       0,    71,    72,    73,    74,    75,    76,    77,    78,    60,
      21,     8,     9,     3,     7,     8,    10,    11,   233,    31,
      21,    32,    19,   139,    17,    36,     8,   139,   139,    22,
     139,    34,    25,   139,   139,    37,   128,   139,    16,    32,
       8,   111,     8,   133,   134,     8,     7,     8,    26,    27,
      28,    29,    30,    10,   170,   131,    17,   173,    32,     8,
       9,    22,    11,    21,    25,     5,   136,   137,   128,   128,
      19,    32,   148,    32,     8,   135,   135,   167,    31,   139,
     139,    26,    27,    28,    29,    30,   176,   203,    33,   205,
     206,    16,    33,    32,   164,     8,   166,    35,   168,     9,
       8,    26,    27,    28,    29,    30,    32,    31,    33,    32,
     170,    32,    32,   173,    28,    29,    30,   233,    18,    31,
     236,    32,    18,     8,     9,    10,    32,    12,    30,    14,
      15,    34,   202,     8,    33,     8,    33,   207,    23,    24,
      38,     4,    32,   203,    33,   205,   206,   207,   207,    26,
      27,    28,    29,    30,    38,     5,    33,    26,    27,    28,
      29,    30,    32,     5,    33,    26,    27,    28,    29,    30,
      32,     6,    33,   233,    33,    33,   236,    26,    27,    28,
      29,    30,    31,    26,    27,    28,    29,    30,     5,     5,
      31,    31,    20,     6,    33,    33,     6,    31,    31,    31,
      31,     6,     6,    33,    31,     8,     5,    13,     5,    65,
       6,     6,    10,   236,    16,    37,    84,   139,   151,    -1,
     164
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     8,     9,    11,    19,    40,    44,    45,    46,    47,
      51,    52,    53,    54,    66,    67,    90,    91,    21,    36,
      68,     8,    10,     8,     0,     3,    41,     9,    47,    45,
      46,    52,    31,    21,    10,    91,    93,    94,    96,     7,
       8,    17,    22,    25,    32,    67,    69,    88,    89,   104,
       8,    34,    55,    31,    48,    55,    37,    49,    42,     8,
      46,    45,    88,   104,     8,    44,    96,    36,    70,    88,
     104,    16,    26,    27,    28,    29,    30,    21,    32,    57,
     104,    32,    31,     5,    32,     8,     9,    10,    12,    14,
      15,    23,    24,    58,    59,    60,    61,    65,    66,    69,
      72,    75,    81,    84,    85,    87,    95,    98,    97,    41,
       8,    32,    33,    33,   104,   104,   104,   104,   104,   104,
      88,   104,   104,    35,     9,    99,   100,   101,    92,    99,
      36,     8,     8,    32,    32,    32,    32,    32,    43,    31,
      31,    71,   102,   103,   104,    18,    18,    33,    56,     8,
      33,    38,    44,    33,     8,    55,    88,   104,    88,    66,
     104,   104,     4,    61,    32,    33,    38,    32,    32,    55,
       5,   101,     6,     5,    33,    33,    31,    33,    33,   102,
     104,    88,   104,    62,    63,    64,    66,    69,    72,    75,
      81,    84,    85,    87,    31,    63,     5,     5,    88,    33,
      33,    33,    20,    31,    50,    76,    73,    31,   104,    63,
       6,    63,    63,     8,    66,    67,    86,   104,    31,    31,
      77,    74,    36,    31,     6,     6,     6,     8,    33,    31,
      78,     5,    13,    82,     5,    63,    79,    83,    62,     6,
      80,     6
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    39,    40,    40,    42,    43,    41,    44,    44,    44,
      44,    44,    44,    44,    45,    45,    46,    46,    48,    47,
      49,    50,    47,    51,    51,    52,    52,    53,    54,    56,
      55,    55,    57,    58,    58,    59,    60,    61,    61,    62,
      62,    63,    63,    64,    64,    64,    64,    64,    64,    64,
      64,    65,    65,    65,    65,    65,    65,    65,    65,    66,
      66,    66,    66,    66,    66,    68,    67,    70,    69,    71,
      69,    73,    74,    72,    76,    77,    78,    79,    80,    75,
      82,    83,    81,    84,    85,    86,    86,    87,    87,    88,
      88,    88,    89,    89,    90,    90,    92,    91,    93,    93,
      94,    94,    95,    97,    96,    98,    99,    99,   100,   100,
     101,   102,   102,   103,   103,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104
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
       3,     1,     1,     1,     1,     3,     1,     1,     1
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
#line 1375 "maker.tab.c"
    break;

  case 3: /* progr: global_classes_declaration main  */
#line 43 "maker.y"
                                         {if(errorCount==0)cout<<"The Program is Correct!"<<endl;}
#line 1381 "maker.tab.c"
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
#line 1393 "maker.tab.c"
    break;

  case 5: /* $@2: %empty  */
#line 54 "maker.y"
                    {current->set_body((yyvsp[0].ListOfNodes));
               }
#line 1400 "maker.tab.c"
    break;

  case 6: /* main: BGIN $@1 list_main $@2 END  */
#line 56 "maker.y"
                    {
                     current=current->next_domain_scope();
                    }
#line 1408 "maker.tab.c"
    break;

  case 14: /* assign_generator: assign_node ';'  */
#line 68 "maker.y"
                               {(yyvsp[-1].ListOfNodes)->run();}
#line 1414 "maker.tab.c"
    break;

  case 15: /* assign_generator: assign_node ';' assign_generator  */
#line 69 "maker.y"
                                                 {(yyvsp[-2].ListOfNodes)->run();}
#line 1420 "maker.tab.c"
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
#line 1439 "maker.tab.c"
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
#line 1452 "maker.tab.c"
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
#line 1471 "maker.tab.c"
    break;

  case 21: /* $@5: %empty  */
#line 112 "maker.y"
                                                     {    current->set_body((yyvsp[0].ListOfNodes));}
#line 1477 "maker.tab.c"
    break;

  case 22: /* functions: VOID ID $@4 '(' list_param_epsilon ')' CBEGIN list $@5 CEND ';'  */
#line 113 "maker.y"
                                   {
                                    current=current->next_domain_scope();
                                   }
#line 1485 "maker.tab.c"
    break;

  case 27: /* fundamentals: TYPE ID ';'  */
#line 125 "maker.y"
                          {current->check_existance_for_declaration((yyvsp[-2].string), (yyvsp[-1].string) , "var" , errorCount , yylineno, array_size);}
#line 1491 "maker.tab.c"
    break;

  case 28: /* arr: TYPE ID arr_list ';'  */
#line 128 "maker.y"
                           {current->check_existance_for_declaration((yyvsp[-3].string), (yyvsp[-2].string) , "array" , errorCount , yylineno , array_size);
                              }
#line 1498 "maker.tab.c"
    break;

  case 29: /* $@6: %empty  */
#line 132 "maker.y"
                       {array_name+='['+nr+']';}
#line 1504 "maker.tab.c"
    break;

  case 31: /* arr_list: '[' size ']'  */
#line 133 "maker.y"
                       {array_name+='['+nr+']';}
#line 1510 "maker.tab.c"
    break;

  case 32: /* size: e  */
#line 135 "maker.y"
      {array_size.push_back((yyvsp[0].ListOfNodes)->evaluatei());
        nr=to_string((yyvsp[0].ListOfNodes)->evaluatei());
     }
#line 1518 "maker.tab.c"
    break;

  case 35: /* fundamentals_interior: TYPE ID  */
#line 144 "maker.y"
                                {current->check_existance_for_declaration((yyvsp[-1].string), (yyvsp[0].string) , "var" , errorCount , yylineno , array_size);}
#line 1524 "maker.tab.c"
    break;

  case 36: /* arr_interior: TYPE ID arr_list  */
#line 147 "maker.y"
                                 {current->check_existance_for_declaration((yyvsp[-2].string), (yyvsp[-1].string) , "array" , errorCount , yylineno , array_size);
                                   array_size.clear();
                                   for(int i=0 ; i<array_size.size();++i){
                                        cout<<array_size[i]<<endl;
                                   };
                                   }
#line 1535 "maker.tab.c"
    break;

  case 37: /* list_main: statement_main ';'  */
#line 155 "maker.y"
                                {(yyval.ListOfNodes)=new ASTNode("final_sequence" , (yyvsp[-1].ListOfNodes) , &errorCount , yylineno, current);}
#line 1541 "maker.tab.c"
    break;

  case 38: /* list_main: statement_main ';' list_main  */
#line 156 "maker.y"
                                          {(yyval.ListOfNodes)=new ASTNode("sequence" , (yyvsp[-2].ListOfNodes) ,(yyvsp[0].ListOfNodes) , &errorCount , current);}
#line 1547 "maker.tab.c"
    break;

  case 39: /* list_else: list  */
#line 158 "maker.y"
               {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1553 "maker.tab.c"
    break;

  case 40: /* list_else: %empty  */
#line 159 "maker.y"
                       {(yyval.ListOfNodes)=new ASTNode();}
#line 1559 "maker.tab.c"
    break;

  case 41: /* list: statement ';'  */
#line 161 "maker.y"
                      {(yyval.ListOfNodes)=new ASTNode("final_sequence" , (yyvsp[-1].ListOfNodes) , &errorCount , yylineno, current);}
#line 1565 "maker.tab.c"
    break;

  case 42: /* list: statement ';' list  */
#line 162 "maker.y"
                           {(yyval.ListOfNodes)=new ASTNode("sequence" , (yyvsp[-2].ListOfNodes) ,(yyvsp[0].ListOfNodes) , &errorCount , current);}
#line 1571 "maker.tab.c"
    break;

  case 43: /* statement: assign_node  */
#line 164 "maker.y"
                       {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1577 "maker.tab.c"
    break;

  case 44: /* statement: function_call_node  */
#line 165 "maker.y"
                            {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1583 "maker.tab.c"
    break;

  case 45: /* statement: while_node  */
#line 166 "maker.y"
                    {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1589 "maker.tab.c"
    break;

  case 46: /* statement: if_node  */
#line 167 "maker.y"
                 {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1595 "maker.tab.c"
    break;

  case 47: /* statement: for_node  */
#line 168 "maker.y"
                  {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1601 "maker.tab.c"
    break;

  case 48: /* statement: declarations_interior  */
#line 169 "maker.y"
                                {(yyval.ListOfNodes)=new ASTNode();}
#line 1607 "maker.tab.c"
    break;

  case 49: /* statement: print_node  */
#line 170 "maker.y"
                     {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1613 "maker.tab.c"
    break;

  case 50: /* statement: type_fucntion_node  */
#line 171 "maker.y"
                             {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1619 "maker.tab.c"
    break;

  case 51: /* statement_main: assign_node  */
#line 173 "maker.y"
                            {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);(yyval.ListOfNodes)->run();}
#line 1625 "maker.tab.c"
    break;

  case 52: /* statement_main: function_call_node  */
#line 174 "maker.y"
                            {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);(yyval.ListOfNodes)->run();}
#line 1631 "maker.tab.c"
    break;

  case 53: /* statement_main: while_node  */
#line 175 "maker.y"
                    {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);(yyval.ListOfNodes)->run();}
#line 1637 "maker.tab.c"
    break;

  case 54: /* statement_main: if_node  */
#line 176 "maker.y"
                 {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);(yyval.ListOfNodes)->run();}
#line 1643 "maker.tab.c"
    break;

  case 55: /* statement_main: for_node  */
#line 177 "maker.y"
                  {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);(yyval.ListOfNodes)->run();}
#line 1649 "maker.tab.c"
    break;

  case 56: /* statement_main: declarations_interior  */
#line 178 "maker.y"
                                {(yyval.ListOfNodes)=new ASTNode();}
#line 1655 "maker.tab.c"
    break;

  case 57: /* statement_main: print_node  */
#line 179 "maker.y"
                     {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);(yyval.ListOfNodes)->run();}
#line 1661 "maker.tab.c"
    break;

  case 58: /* statement_main: type_fucntion_node  */
#line 180 "maker.y"
                             {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);(yyval.ListOfNodes)->run();}
#line 1667 "maker.tab.c"
    break;

  case 59: /* assign_node: ID ASSIGN e  */
#line 182 "maker.y"
                        {
                         (yyval.ListOfNodes)=new ASTNode((yyvsp[-2].string) , "<-" , (yyvsp[0].ListOfNodes) ,current, &errorCount, yylineno);
                         }
#line 1675 "maker.tab.c"
    break;

  case 60: /* assign_node: ID ASSIGN boolean_expression  */
#line 185 "maker.y"
                                         {
                         (yyval.ListOfNodes)=new ASTNode((yyvsp[-2].string) , "<-" , (yyvsp[0].ListOfNodes) ,current, &errorCount, yylineno);
                         }
#line 1683 "maker.tab.c"
    break;

  case 61: /* assign_node: ID '.' ID ASSIGN e  */
#line 188 "maker.y"
                             {
                         string buff1=(yyvsp[-4].string);
                         string buff3=(yyvsp[-2].string);
                         string class_mem=buff1+'.'+buff3;
                         (yyval.ListOfNodes)=new ASTNode(class_mem , "<-" , (yyvsp[0].ListOfNodes) ,current, &errorCount, yylineno);
                         }
#line 1694 "maker.tab.c"
    break;

  case 62: /* assign_node: ID '.' ID ASSIGN boolean_expression  */
#line 194 "maker.y"
                                              {
                         string buff1=(yyvsp[-4].string);
                         string buff3=(yyvsp[-2].string);
                         string class_mem=buff1+'.'+buff3;
                         (yyval.ListOfNodes)=new ASTNode(class_mem , "<-" , (yyvsp[0].ListOfNodes) ,current, &errorCount, yylineno);
                         }
#line 1705 "maker.tab.c"
    break;

  case 63: /* assign_node: ID_Array ASSIGN e  */
#line 200 "maker.y"
                              {string copie=array_name;(yyval.ListOfNodes)=new ASTNode(copie , "<-" , (yyvsp[0].ListOfNodes) ,current, &errorCount, yylineno);array_name.clear();}
#line 1711 "maker.tab.c"
    break;

  case 64: /* assign_node: ID_Array ASSIGN boolean_expression  */
#line 201 "maker.y"
                                               {(yyval.ListOfNodes)=new ASTNode(array_name , "<-" , (yyvsp[0].ListOfNodes) ,current, &errorCount, yylineno);array_name.clear();}
#line 1717 "maker.tab.c"
    break;

  case 65: /* $@7: %empty  */
#line 203 "maker.y"
           {array_name=(yyvsp[0].string);}
#line 1723 "maker.tab.c"
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
#line 1771 "maker.tab.c"
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
#line 1793 "maker.tab.c"
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
#line 1854 "maker.tab.c"
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
#line 1876 "maker.tab.c"
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
#line 1889 "maker.tab.c"
    break;

  case 72: /* $@11: %empty  */
#line 352 "maker.y"
                             {
                              
                              current->set_body((yyvsp[0].ListOfNodes));
                              }
#line 1898 "maker.tab.c"
    break;

  case 73: /* while_node: WHILE '(' boolean_expression ')' CBEGIN $@10 list $@11 CEND  */
#line 357 "maker.y"
                                   {
                                        (yyval.ListOfNodes)=new ASTNode("while" , (yyvsp[-6].ListOfNodes) , (yyvsp[-2].ListOfNodes) , &errorCount , yylineno);
                                        current=current->next_domain_scope();
                                   }
#line 1907 "maker.tab.c"
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
#line 1920 "maker.tab.c"
    break;

  case 75: /* $@13: %empty  */
#line 371 "maker.y"
                             {
                              current->set_body((yyvsp[0].ListOfNodes));
                         }
#line 1928 "maker.tab.c"
    break;

  case 76: /* $@14: %empty  */
#line 374 "maker.y"
                                   {
                                        current=current->next_domain_scope();
                                   }
#line 1936 "maker.tab.c"
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
#line 1949 "maker.tab.c"
    break;

  case 78: /* $@16: %empty  */
#line 386 "maker.y"
                                                           {
                                                       current->set_body((yyvsp[0].ListOfNodes));
                                                  }
#line 1957 "maker.tab.c"
    break;

  case 79: /* if_node: IF '(' boolean_expression ')' CBEGIN $@12 list $@13 CEND $@14 ELSE CBEGIN $@15 list_else $@16 CEND  */
#line 389 "maker.y"
                              {
                                   class ASTNode* combine;
                                   combine=new ASTNode((yyvsp[-9].ListOfNodes) , (yyvsp[-2].ListOfNodes) , &errorCount);
                                   (yyval.ListOfNodes)=new ASTNode("if" , (yyvsp[-13].ListOfNodes) , combine , &errorCount , yylineno);
                                   current=current->next_domain_scope();
                              }
#line 1968 "maker.tab.c"
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
#line 1981 "maker.tab.c"
    break;

  case 81: /* $@18: %empty  */
#line 405 "maker.y"
                                                                                        {current->set_body((yyvsp[0].ListOfNodes));}
#line 1987 "maker.tab.c"
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
#line 2000 "maker.tab.c"
    break;

  case 83: /* print_node: PRINT '(' e ')'  */
#line 415 "maker.y"
                           {(yyval.ListOfNodes)=new ASTNode((yyvsp[-3].string) , (yyvsp[-1].ListOfNodes) , &errorCount , yylineno);}
#line 2006 "maker.tab.c"
    break;

  case 84: /* type_fucntion_node: TYPE_FUNCTION '(' e ')'  */
#line 417 "maker.y"
                                            {(yyval.ListOfNodes)=new ASTNode((yyvsp[-3].string) , (yyvsp[-1].ListOfNodes) , &errorCount , yylineno);}
#line 2012 "maker.tab.c"
    break;

  case 85: /* expression_for: assign_node  */
#line 418 "maker.y"
                          {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 2018 "maker.tab.c"
    break;

  case 86: /* expression_for: e  */
#line 419 "maker.y"
                 {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 2024 "maker.tab.c"
    break;

  case 89: /* boolean_expression: '(' boolean_expression ')'  */
#line 426 "maker.y"
                                               {(yyval.ListOfNodes)=(yyvsp[-1].ListOfNodes);}
#line 2030 "maker.tab.c"
    break;

  case 90: /* boolean_expression: '(' boolean_expression ')' CONNECT '(' boolean_expression ')'  */
#line 427 "maker.y"
                                                                            {(yyval.ListOfNodes)=new ASTNode((yyvsp[-3].string) , (yyvsp[-5].ListOfNodes) , (yyvsp[-1].ListOfNodes) , &errorCount);}
#line 2036 "maker.tab.c"
    break;

  case 91: /* boolean_expression: y  */
#line 428 "maker.y"
                    {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 2042 "maker.tab.c"
    break;

  case 92: /* y: e CMP e  */
#line 430 "maker.y"
            {(yyval.ListOfNodes)=new ASTNode((yyvsp[-1].string) , (yyvsp[-2].ListOfNodes) , (yyvsp[0].ListOfNodes) , &errorCount);}
#line 2048 "maker.tab.c"
    break;

  case 93: /* y: '(' e ')' CONNECT '(' e ')'  */
#line 431 "maker.y"
                            {(yyval.ListOfNodes)=new ASTNode((yyvsp[-3].string) , (yyvsp[-5].ListOfNodes) , (yyvsp[-1].ListOfNodes) , &errorCount);}
#line 2054 "maker.tab.c"
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
#line 2069 "maker.tab.c"
    break;

  case 97: /* class: Class_Type Class_ID ':' CBEGIN $@19 global_classes_declaration CEND ';'  */
#line 449 "maker.y"
          {
            current=current->next_domain_scope();
          }
#line 2077 "maker.tab.c"
    break;

  case 103: /* $@20: %empty  */
#line 466 "maker.y"
                             {current->check_existance_for_class_instance((yyvsp[-1].string) , (yyvsp[0].string), errorCount , yylineno);}
#line 2083 "maker.tab.c"
    break;

  case 105: /* class_instance_interior: Class_ID ID  */
#line 468 "maker.y"
                                      {current->check_existance_for_class_instance((yyvsp[-1].string) , (yyvsp[0].string), errorCount , yylineno);}
#line 2089 "maker.tab.c"
    break;

  case 110: /* param: TYPE ID  */
#line 479 "maker.y"
                {current->check_existance_for_declaration((yyvsp[-1].string), (yyvsp[0].string) , "param" , errorCount , yylineno , array_size);
                 current->add_function_params(current->get_that_variable((yyvsp[0].string)));
                }
#line 2097 "maker.tab.c"
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
#line 2143 "maker.tab.c"
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
#line 2189 "maker.tab.c"
    break;

  case 115: /* e: e '+' e  */
#line 571 "maker.y"
              {(yyval.ListOfNodes)=new ASTNode("+" , (yyvsp[-2].ListOfNodes) , (yyvsp[0].ListOfNodes) , &errorCount);}
#line 2195 "maker.tab.c"
    break;

  case 116: /* e: e '*' e  */
#line 572 "maker.y"
              {(yyval.ListOfNodes)=new ASTNode("*" , (yyvsp[-2].ListOfNodes) , (yyvsp[0].ListOfNodes) , &errorCount);}
#line 2201 "maker.tab.c"
    break;

  case 117: /* e: e '-' e  */
#line 573 "maker.y"
              {(yyval.ListOfNodes)=new ASTNode("-" , (yyvsp[-2].ListOfNodes) , (yyvsp[0].ListOfNodes) , &errorCount);}
#line 2207 "maker.tab.c"
    break;

  case 118: /* e: e '/' e  */
#line 574 "maker.y"
              {(yyval.ListOfNodes)=new ASTNode("/" , (yyvsp[-2].ListOfNodes) , (yyvsp[0].ListOfNodes) , &errorCount);}
#line 2213 "maker.tab.c"
    break;

  case 119: /* e: e '%' e  */
#line 575 "maker.y"
              {(yyval.ListOfNodes)=new ASTNode("%" , (yyvsp[-2].ListOfNodes) , (yyvsp[0].ListOfNodes) , &errorCount);}
#line 2219 "maker.tab.c"
    break;

  case 120: /* e: '(' e ')'  */
#line 576 "maker.y"
              {(yyval.ListOfNodes)=(yyvsp[-1].ListOfNodes);}
#line 2225 "maker.tab.c"
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
#line 2240 "maker.tab.c"
    break;

  case 122: /* e: NR  */
#line 587 "maker.y"
              {Value val(atoi(yytext));
               (yyval.ListOfNodes)=new ASTNode(val , "int" , &errorCount);}
#line 2247 "maker.tab.c"
    break;

  case 123: /* e: REAL  */
#line 589 "maker.y"
              {Value val((float)atof(yytext));
               (yyval.ListOfNodes)=new ASTNode(val , "float" , &errorCount);}
#line 2254 "maker.tab.c"
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
#line 2268 "maker.tab.c"
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
#line 2285 "maker.tab.c"
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
#line 2300 "maker.tab.c"
    break;

  case 127: /* e: function_call_node  */
#line 622 "maker.y"
                     {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 2306 "maker.tab.c"
    break;

  case 128: /* e: STRING  */
#line 623 "maker.y"
               {Value val((yyvsp[0].string));     
               (yyval.ListOfNodes)=new ASTNode(val , "string" , &errorCount);}
#line 2313 "maker.tab.c"
    break;


#line 2317 "maker.tab.c"

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

#line 627 "maker.y"

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
