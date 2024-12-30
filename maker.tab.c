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
char* Denumire_apelant=nullptr;
std::vector<IdInfo*> param_checker;

#line 91 "maker.tab.c"

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
  YYSYMBOL_TYPE_FUNCTION = 8,              /* TYPE_FUNCTION  */
  YYSYMBOL_ID = 9,                         /* ID  */
  YYSYMBOL_TYPE = 10,                      /* TYPE  */
  YYSYMBOL_Class_ID = 11,                  /* Class_ID  */
  YYSYMBOL_Class_Type = 12,                /* Class_Type  */
  YYSYMBOL_IF = 13,                        /* IF  */
  YYSYMBOL_ELSE = 14,                      /* ELSE  */
  YYSYMBOL_WHILE = 15,                     /* WHILE  */
  YYSYMBOL_FOR = 16,                       /* FOR  */
  YYSYMBOL_CMP = 17,                       /* CMP  */
  YYSYMBOL_NR = 18,                        /* NR  */
  YYSYMBOL_CONNECT = 19,                   /* CONNECT  */
  YYSYMBOL_VOID = 20,                      /* VOID  */
  YYSYMBOL_RETURN = 21,                    /* RETURN  */
  YYSYMBOL_ASSIGN = 22,                    /* ASSIGN  */
  YYSYMBOL_TRUTH_VALUE = 23,               /* TRUTH_VALUE  */
  YYSYMBOL_PRINT = 24,                     /* PRINT  */
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
  YYSYMBOL_40_2 = 40,                      /* $@2  */
  YYSYMBOL_global_classes_declaration = 41, /* global_classes_declaration  */
  YYSYMBOL_functions_generator = 42,       /* functions_generator  */
  YYSYMBOL_functions = 43,                 /* functions  */
  YYSYMBOL_44_3 = 44,                      /* $@3  */
  YYSYMBOL_45_4 = 45,                      /* $@4  */
  YYSYMBOL_46_5 = 46,                      /* $@5  */
  YYSYMBOL_47_6 = 47,                      /* $@6  */
  YYSYMBOL_variables_generator = 48,       /* variables_generator  */
  YYSYMBOL_variables = 49,                 /* variables  */
  YYSYMBOL_fundamentals = 50,              /* fundamentals  */
  YYSYMBOL_arr = 51,                       /* arr  */
  YYSYMBOL_arr_list = 52,                  /* arr_list  */
  YYSYMBOL_variables_interior = 53,        /* variables_interior  */
  YYSYMBOL_fundamentals_interior = 54,     /* fundamentals_interior  */
  YYSYMBOL_arr_interior = 55,              /* arr_interior  */
  YYSYMBOL_list_main = 56,                 /* list_main  */
  YYSYMBOL_list = 57,                      /* list  */
  YYSYMBOL_statement = 58,                 /* statement  */
  YYSYMBOL_statement_main = 59,            /* statement_main  */
  YYSYMBOL_assign_node = 60,               /* assign_node  */
  YYSYMBOL_function_call_node = 61,        /* function_call_node  */
  YYSYMBOL_62_7 = 62,                      /* $@7  */
  YYSYMBOL_while_node = 63,                /* while_node  */
  YYSYMBOL_64_8 = 64,                      /* $@8  */
  YYSYMBOL_65_9 = 65,                      /* $@9  */
  YYSYMBOL_if_node = 66,                   /* if_node  */
  YYSYMBOL_67_10 = 67,                     /* $@10  */
  YYSYMBOL_68_11 = 68,                     /* $@11  */
  YYSYMBOL_69_12 = 69,                     /* $@12  */
  YYSYMBOL_70_13 = 70,                     /* $@13  */
  YYSYMBOL_71_14 = 71,                     /* $@14  */
  YYSYMBOL_for_node = 72,                  /* for_node  */
  YYSYMBOL_73_15 = 73,                     /* $@15  */
  YYSYMBOL_74_16 = 74,                     /* $@16  */
  YYSYMBOL_print_node = 75,                /* print_node  */
  YYSYMBOL_expression_for = 76,            /* expression_for  */
  YYSYMBOL_declarations_interior = 77,     /* declarations_interior  */
  YYSYMBOL_boolean_expression = 78,        /* boolean_expression  */
  YYSYMBOL_y = 79,                         /* y  */
  YYSYMBOL_classes = 80,                   /* classes  */
  YYSYMBOL_class = 81,                     /* class  */
  YYSYMBOL_82_17 = 82,                     /* $@17  */
  YYSYMBOL_class_initialize_initial = 83,  /* class_initialize_initial  */
  YYSYMBOL_class_initialize = 84,          /* class_initialize  */
  YYSYMBOL_class_initialize_interior = 85, /* class_initialize_interior  */
  YYSYMBOL_class_instance = 86,            /* class_instance  */
  YYSYMBOL_87_18 = 87,                     /* $@18  */
  YYSYMBOL_class_instance_interior = 88,   /* class_instance_interior  */
  YYSYMBOL_list_param = 89,                /* list_param  */
  YYSYMBOL_param = 90,                     /* param  */
  YYSYMBOL_call_list = 91,                 /* call_list  */
  YYSYMBOL_e = 92                          /* e  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 26 "maker.y"

     

#line 221 "maker.tab.c"


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
#define YYLAST   210

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  57
/* YYNRULES -- Number of rules.  */
#define YYNRULES  100
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  201

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
       0,    36,    36,    37,    41,    49,    40,    58,    59,    60,
      61,    64,    65,    68,    77,    79,    67,   103,   102,   117,
     118,   120,   121,   124,   127,   130,   131,   133,   134,   137,
     140,   143,   144,   146,   147,   149,   150,   153,   155,   156,
     157,   158,   161,   164,   167,   170,   173,   175,   177,   178,
     181,   185,   190,   189,   227,   235,   226,   247,   255,   258,
     262,   270,   246,   281,   289,   280,   299,   302,   303,   306,
     307,   310,   311,   312,   314,   316,   317,   321,   320,   336,
     337,   341,   342,   345,   348,   348,   350,   353,   354,   358,
     364,   396,   523,   524,   525,   526,   527,   528,   538,   540,
     542
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
  "CBEGIN", "CEND", "REAL", "TYPE_FUNCTION", "ID", "TYPE", "Class_ID",
  "Class_Type", "IF", "ELSE", "WHILE", "FOR", "CMP", "NR", "CONNECT",
  "VOID", "RETURN", "ASSIGN", "TRUTH_VALUE", "PRINT", "'+'", "'-'", "'*'",
  "'/'", "'('", "')'", "';'", "'['", "']'", "':'", "','", "$accept",
  "progr", "main", "$@1", "$@2", "global_classes_declaration",
  "functions_generator", "functions", "$@3", "$@4", "$@5", "$@6",
  "variables_generator", "variables", "fundamentals", "arr", "arr_list",
  "variables_interior", "fundamentals_interior", "arr_interior",
  "list_main", "list", "statement", "statement_main", "assign_node",
  "function_call_node", "$@7", "while_node", "$@8", "$@9", "if_node",
  "$@10", "$@11", "$@12", "$@13", "$@14", "for_node", "$@15", "$@16",
  "print_node", "expression_for", "declarations_interior",
  "boolean_expression", "y", "classes", "class", "$@17",
  "class_initialize_initial", "class_initialize",
  "class_initialize_interior", "class_instance", "$@18",
  "class_instance_interior", "list_param", "param", "call_list", "e", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-105)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      12,     8,     4,    10,    35,    39,    21,  -105,    23,  -105,
    -105,  -105,    12,  -105,     6,    16,  -105,  -105,  -105,  -105,
      42,  -105,    21,  -105,    57,  -105,  -105,    66,    56,    62,
     116,    75,    64,  -105,   121,    39,    57,  -105,    89,   118,
    -105,  -105,   118,   126,   114,   133,   139,   127,   128,   129,
     130,  -105,  -105,  -105,  -105,   123,  -105,  -105,  -105,  -105,
    -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,   131,   151,
      31,  -105,    23,    51,     7,     7,   132,   131,  -105,    11,
      11,   153,     7,   160,    64,   134,  -105,  -105,   161,   118,
     162,   164,  -105,  -105,  -105,  -105,     7,    99,   125,     7,
    -105,    11,   137,  -105,    88,   140,   114,   141,   107,  -105,
    -105,  -105,    87,  -105,   142,    87,   113,     7,     7,     7,
       7,  -105,    71,   125,   144,    82,   166,     7,   170,    11,
    -105,   147,  -105,   146,  -105,  -105,  -105,  -105,  -105,  -105,
    -105,  -105,   172,  -105,    43,    43,  -105,  -105,  -105,     7,
     163,  -105,   125,  -105,   148,     7,   159,    87,   150,   125,
     154,    87,    87,    60,   119,     7,  -105,  -105,    11,  -105,
    -105,   114,  -105,   155,   125,  -105,    92,   157,   178,   179,
     158,  -105,  -105,  -105,  -105,   184,   185,   176,  -105,   165,
     187,    87,  -105,  -105,  -105,    87,   188,  -105,  -105,   189,
    -105
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      10,     0,     0,     0,     0,     0,     9,    12,     8,    20,
      21,    22,    10,    75,    13,     0,    17,     1,     4,     3,
       0,    11,     7,    19,    80,    76,    23,     0,     0,     0,
       0,     0,     0,    13,     0,     0,    79,    81,     0,     0,
      24,    77,     0,     0,    52,     0,     0,     0,     0,     0,
       0,    69,    27,    28,     5,     0,    43,    44,    45,    46,
      47,    49,    48,    70,    83,    84,     2,    82,    26,     0,
       0,    87,    10,     0,     0,     0,     0,    29,    86,     0,
       0,     0,     0,     0,    31,     0,    25,    89,     0,     0,
       0,     0,    99,   100,    98,    97,     0,     0,    51,     0,
      30,     0,     0,    73,     0,     0,     0,     0,     0,     6,
      32,    85,     0,    88,     0,     0,     0,     0,     0,     0,
       0,    50,     0,    90,     0,     0,     0,     0,     0,     0,
      66,     0,    14,     0,    35,    36,    37,    38,    39,    41,
      40,    78,     0,    96,    92,    94,    93,    95,    53,     0,
      71,    57,    74,    54,     0,     0,     0,    33,     0,    91,
       0,     0,     0,     0,     0,     0,    34,    18,     0,    58,
      55,   100,    67,     0,    68,    42,     0,     0,     0,     0,
       0,    15,    72,    59,    56,     0,     0,     0,    63,     0,
       0,     0,    16,    60,    64,     0,     0,    61,    65,     0,
      62
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -105,  -105,   167,  -105,  -105,    -9,   190,    -1,  -105,  -105,
    -105,  -105,  -105,   191,  -105,  -105,   -29,  -105,  -105,  -105,
     109,  -104,  -105,  -105,   -32,   -28,  -105,   -25,  -105,  -105,
     -24,  -105,  -105,  -105,  -105,  -105,   -22,  -105,  -105,   -20,
    -105,   -19,   -74,  -105,  -105,   192,  -105,  -105,  -105,  -105,
     169,  -105,  -105,   168,   108,  -105,   -73
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,    19,    32,    83,     5,     6,     7,    28,   156,
     186,    31,     8,     9,    10,    11,    29,    51,    52,    53,
      54,   132,   133,    55,   134,   135,    76,   136,   162,   179,
     137,   161,   178,   187,   195,   199,   138,   191,   196,   139,
     173,   140,   102,   103,    12,    13,    72,    35,    36,    63,
      37,    85,    64,    70,    71,   122,   104
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      56,    97,    98,    24,    57,    21,   105,    58,    59,   108,
      60,   142,    61,    62,    92,    15,    93,    14,    92,    16,
      93,    21,     1,   116,     2,    94,   123,   124,   125,    94,
      95,    20,     3,     1,    95,    17,    96,    26,    27,    86,
     101,     3,    18,     3,   144,   145,   146,   147,   100,   107,
      30,    33,    56,   166,   152,   154,    57,   169,   170,    58,
      59,    88,    60,    90,    61,    62,    89,    92,    34,   171,
     119,   120,    43,    44,    45,    46,   159,    47,    94,    48,
      49,    91,   164,    95,    38,    39,    89,   194,    50,    96,
     174,   197,   176,    40,   177,   131,    44,    45,    46,   127,
      47,   148,    48,    49,    42,   127,   149,   117,   118,   119,
     120,    50,   143,   117,   118,   119,   120,   117,   118,   119,
     120,    41,    68,   181,   117,   118,   119,   120,    69,   121,
      65,   172,   117,   118,   119,   120,    75,   130,   117,   118,
     119,   120,    77,   143,   117,   118,   119,   120,    78,   175,
     117,   118,   119,   120,    84,    74,    79,    80,    81,    82,
      87,    99,   106,    27,   109,   111,   112,   126,   114,   115,
     128,   151,   129,   141,   150,   153,   155,   157,   158,   163,
     165,   167,   160,   168,   183,   184,   180,   182,   185,   188,
     190,   189,   193,   110,   198,   200,   192,   113,    22,    23,
       0,     0,    66,     0,    25,    67,     0,     0,     0,     0,
      73
};

static const yytype_int16 yycheck[] =
{
      32,    74,    75,    12,    32,     6,    80,    32,    32,    82,
      32,   115,    32,    32,     7,    11,     9,     9,     7,     9,
       9,    22,    10,    96,    12,    18,    99,   101,   101,    18,
      23,    10,    20,    10,    23,     0,    29,    31,    32,    68,
      29,    20,     3,    20,   117,   118,   119,   120,    77,    81,
      34,     9,    84,   157,   127,   129,    84,   161,   162,    84,
      84,    30,    84,    72,    84,    84,    35,     7,    11,     9,
      27,    28,     8,     9,    10,    11,   149,    13,    18,    15,
      16,    30,   155,    23,    18,    29,    35,   191,    24,    29,
     163,   195,   165,    31,   168,     8,     9,    10,    11,    17,
      13,    30,    15,    16,    29,    17,    35,    25,    26,    27,
      28,    24,    30,    25,    26,    27,    28,    25,    26,    27,
      28,     5,    33,    31,    25,    26,    27,    28,    10,    30,
       9,   163,    25,    26,    27,    28,    22,    30,    25,    26,
      27,    28,     9,    30,    25,    26,    27,    28,     9,    30,
      25,    26,    27,    28,    31,    29,    29,    29,    29,    29,
       9,    29,     9,    32,     4,    31,     5,    30,     6,     5,
      30,     5,    31,    31,    30,     5,    29,    31,     6,    31,
      21,    31,    19,    29,     6,     6,    31,    30,    30,     5,
      14,     6,     5,    84,     6,     6,    31,    89,     8,     8,
      -1,    -1,    35,    -1,    12,    36,    -1,    -1,    -1,    -1,
      42
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    10,    12,    20,    37,    41,    42,    43,    48,    49,
      50,    51,    80,    81,     9,    11,     9,     0,     3,    38,
      10,    43,    42,    49,    41,    81,    31,    32,    44,    52,
      34,    47,    39,     9,    11,    83,    84,    86,    18,    29,
      31,     5,    29,     8,     9,    10,    11,    13,    15,    16,
      24,    53,    54,    55,    56,    59,    60,    61,    63,    66,
      72,    75,    77,    85,    88,     9,    38,    86,    33,    10,
      89,    90,    82,    89,    29,    22,    62,     9,     9,    29,
      29,    29,    29,    40,    31,    87,    52,     9,    30,    35,
      41,    30,     7,     9,    18,    23,    29,    92,    92,    29,
      52,    29,    78,    79,    92,    78,     9,    60,    92,     4,
      56,    31,     5,    90,     6,     5,    92,    25,    26,    27,
      28,    30,    91,    92,    78,    92,    30,    17,    30,    31,
      30,     8,    57,    58,    60,    61,    63,    66,    72,    75,
      77,    31,    57,    30,    92,    92,    92,    92,    30,    35,
      30,     5,    92,     5,    78,    29,    45,    31,     6,    92,
      19,    67,    64,    31,    92,    21,    57,    31,    29,    57,
      57,     9,    60,    76,    92,    30,    92,    78,    68,    65,
      31,    31,    30,     6,     6,    30,    46,    69,     5,     6,
      14,    73,    31,     5,    57,    70,    74,    57,     6,    71,
       6
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    36,    37,    37,    39,    40,    38,    41,    41,    41,
      41,    42,    42,    44,    45,    46,    43,    47,    43,    48,
      48,    49,    49,    50,    51,    52,    52,    53,    53,    54,
      55,    56,    56,    57,    57,    58,    58,    58,    58,    58,
      58,    58,    58,    59,    59,    59,    59,    59,    59,    59,
      59,    60,    62,    61,    64,    65,    63,    67,    68,    69,
      70,    71,    66,    73,    74,    72,    75,    76,    76,    77,
      77,    78,    78,    78,    79,    80,    80,    82,    81,    83,
      83,    84,    84,    85,    87,    86,    88,    89,    89,    90,
      91,    91,    92,    92,    92,    92,    92,    92,    92,    92,
      92
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     2,     0,     0,     5,     2,     1,     1,
       0,     2,     1,     0,     0,     0,    15,     0,    10,     2,
       1,     1,     1,     3,     4,     4,     3,     1,     1,     2,
       3,     2,     3,     2,     3,     1,     1,     1,     1,     1,
       1,     1,     4,     1,     1,     1,     1,     1,     1,     1,
       4,     3,     0,     5,     0,     0,     9,     0,     0,     0,
       0,     0,    16,     0,     0,    14,     4,     1,     1,     1,
       1,     3,     7,     1,     3,     1,     2,     0,     8,     1,
       0,     1,     2,     1,     0,     4,     2,     1,     3,     2,
       1,     3,     3,     3,     3,     3,     3,     1,     1,     1,
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
#line 36 "maker.y"
                                                                          {if (errorCount == 0) cout<< "The program is correct!" << endl;}
#line 1321 "maker.tab.c"
    break;

  case 3: /* progr: global_classes_declaration main  */
#line 37 "maker.y"
                                         {if (errorCount == 0) cout<< "The program is correct!" << endl;}
#line 1327 "maker.tab.c"
    break;

  case 4: /* $@1: %empty  */
#line 41 "maker.y"
          {SymTable* currentmain;     
           currentmain = new SymTable("main");
           //current->add_above(currentmain);
           currentmain->assign_stack_above(current->return_stack_above());
           currentmain->add_above(current);
           current=currentmain;  
           Vector_Tabele.push_back(current);
          }
#line 1340 "maker.tab.c"
    break;

  case 5: /* $@2: %empty  */
#line 49 "maker.y"
                    {current->set_body((yyvsp[0].ListOfNodes));
               //$3->run();
               }
#line 1348 "maker.tab.c"
    break;

  case 6: /* main: BGIN $@1 list_main $@2 END  */
#line 52 "maker.y"
                    {
                     //current->remove_from_above();//Scoatem din currentmain
                     current=current->next_domain_scope();
                     //current->remove_from_above();//Scoatem din current
                    }
#line 1358 "maker.tab.c"
    break;

  case 13: /* $@3: %empty  */
#line 68 "maker.y"
                { current->check_existance_for_declaration((yyvsp[-1].string), (yyvsp[0].string) , "func" , errorCount , yylineno);
                  class SymTable* function_scope;
                  function_scope=new SymTable((yyvsp[0].string));
                  //current->add_above(function_scope);
                  function_scope->assign_stack_above(current->return_stack_above());
                  function_scope->add_above(current);
                  current=function_scope;
                  Vector_Tabele.push_back(current);
                }
#line 1372 "maker.tab.c"
    break;

  case 14: /* $@4: %empty  */
#line 77 "maker.y"
                                             {    current->set_body((yyvsp[0].ListOfNodes));
                                                  // $8->run();
                                                       }
#line 1380 "maker.tab.c"
    break;

  case 15: /* $@5: %empty  */
#line 79 "maker.y"
                                                                      {
                                                            if(strcmp((yyvsp[-11].string), (yyvsp[-1].ListOfNodes)->get_type_for_main())==0){
                                                                 if(strcmp((yyvsp[-1].ListOfNodes)->get_type_for_main() , "int")==0){
                                                                      class Value val((yyvsp[-1].ListOfNodes)->evaluatei());
                                                                      current->next_domain_scope()->set_value((yyvsp[-10].string) , val );  
                                                                 }
                                                                 else if(strcmp((yyvsp[-1].ListOfNodes)->get_type_for_main() , "float")==0){
                                                                      class Value val((yyvsp[-1].ListOfNodes)->evaluatef());
                                                                      current->next_domain_scope()->set_value((yyvsp[-10].string) , val ); 
                                                                 }
                                                                 else{
                                                                      errorCount++;
                                                                      yyerror("Unkown Type of Function");
                                                                 }
                                                            }
                                                            else{
                                                                 errorCount++;
                                                                 yyerror("The Return type and the function type DON'T MATCH");
                                                            }
                                                       }
#line 1405 "maker.tab.c"
    break;

  case 16: /* functions: TYPE ID $@3 '(' list_param ')' CBEGIN list $@4 RETURN e ';' $@5 CEND ';'  */
#line 99 "maker.y"
                                                                           {
                                                                           current=current->next_domain_scope();
                                                                           }
#line 1413 "maker.tab.c"
    break;

  case 17: /* $@6: %empty  */
#line 103 "maker.y"
                { current->check_existance_for_declaration((yyvsp[-1].string), (yyvsp[0].string) , "func" , errorCount , yylineno);
                  class SymTable* function_scope;
                  function_scope=new SymTable((yyvsp[0].string));
                  function_scope->assign_stack_above(current->return_stack_above());
                  function_scope->add_above(current);
                  current=function_scope;
                  Vector_Tabele.push_back(current);
                }
#line 1426 "maker.tab.c"
    break;

  case 18: /* functions: VOID ID $@6 '(' list_param ')' CBEGIN list CEND ';'  */
#line 112 "maker.y"
                                   {
                                    current=current->next_domain_scope();
                                   }
#line 1434 "maker.tab.c"
    break;

  case 23: /* fundamentals: TYPE ID ';'  */
#line 124 "maker.y"
                          {current->check_existance_for_declaration((yyvsp[-2].string), (yyvsp[-1].string) , "var" , errorCount , yylineno);}
#line 1440 "maker.tab.c"
    break;

  case 24: /* arr: TYPE ID arr_list ';'  */
#line 127 "maker.y"
                           {current->check_existance_for_declaration((yyvsp[-3].string), (yyvsp[-2].string) , "array" , errorCount , yylineno);}
#line 1446 "maker.tab.c"
    break;

  case 29: /* fundamentals_interior: TYPE ID  */
#line 137 "maker.y"
                                {current->check_existance_for_declaration((yyvsp[-1].string), (yyvsp[0].string) , "var" , errorCount , yylineno);}
#line 1452 "maker.tab.c"
    break;

  case 30: /* arr_interior: TYPE ID arr_list  */
#line 140 "maker.y"
                                 {current->check_existance_for_declaration((yyvsp[-2].string), (yyvsp[-1].string) , "array" , errorCount , yylineno);}
#line 1458 "maker.tab.c"
    break;

  case 31: /* list_main: statement_main ';'  */
#line 143 "maker.y"
                                {(yyval.ListOfNodes)=new ASTNode("final_sequence" , (yyvsp[-1].ListOfNodes) , errorCount , yylineno, current);}
#line 1464 "maker.tab.c"
    break;

  case 32: /* list_main: statement_main ';' list_main  */
#line 144 "maker.y"
                                          {(yyval.ListOfNodes)=new ASTNode("sequence" , (yyvsp[-2].ListOfNodes) ,(yyvsp[0].ListOfNodes) , errorCount , current);}
#line 1470 "maker.tab.c"
    break;

  case 33: /* list: statement ';'  */
#line 146 "maker.y"
                      {(yyval.ListOfNodes)=new ASTNode("final_sequence" , (yyvsp[-1].ListOfNodes) , errorCount , yylineno, current);}
#line 1476 "maker.tab.c"
    break;

  case 34: /* list: statement ';' list  */
#line 147 "maker.y"
                           {(yyval.ListOfNodes)=new ASTNode("sequence" , (yyvsp[-2].ListOfNodes) ,(yyvsp[0].ListOfNodes) , errorCount , current);}
#line 1482 "maker.tab.c"
    break;

  case 35: /* statement: assign_node  */
#line 149 "maker.y"
                       {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1488 "maker.tab.c"
    break;

  case 37: /* statement: while_node  */
#line 153 "maker.y"
                    {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);
                         }
#line 1495 "maker.tab.c"
    break;

  case 38: /* statement: if_node  */
#line 155 "maker.y"
                 {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1501 "maker.tab.c"
    break;

  case 39: /* statement: for_node  */
#line 156 "maker.y"
                  {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1507 "maker.tab.c"
    break;

  case 41: /* statement: print_node  */
#line 158 "maker.y"
                     {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);
         
         }
#line 1515 "maker.tab.c"
    break;

  case 43: /* statement_main: assign_node  */
#line 164 "maker.y"
                            {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);
                         (yyval.ListOfNodes)->run();
                         }
#line 1523 "maker.tab.c"
    break;

  case 45: /* statement_main: while_node  */
#line 170 "maker.y"
                    {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);
                     (yyval.ListOfNodes)->run();
                         }
#line 1531 "maker.tab.c"
    break;

  case 46: /* statement_main: if_node  */
#line 173 "maker.y"
                 {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);
                  (yyval.ListOfNodes)->run();}
#line 1538 "maker.tab.c"
    break;

  case 47: /* statement_main: for_node  */
#line 175 "maker.y"
                  {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);
                  (yyval.ListOfNodes)->run();}
#line 1545 "maker.tab.c"
    break;

  case 49: /* statement_main: print_node  */
#line 178 "maker.y"
                     {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);
         (yyval.ListOfNodes)->run();
         }
#line 1553 "maker.tab.c"
    break;

  case 51: /* assign_node: ID ASSIGN e  */
#line 185 "maker.y"
                        {
                         (yyval.ListOfNodes)=new ASTNode((yyvsp[-2].string) , "<-" , (yyvsp[0].ListOfNodes) ,current, errorCount, yylineno);
                         }
#line 1561 "maker.tab.c"
    break;

  case 52: /* $@7: %empty  */
#line 190 "maker.y"
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
                       else{
                         Denumire_apelant=new char[256];
                         strcpy(Denumire_apelant , (yyvsp[0].string));
                         param_checker=domeniul_caruia_ii_apartine_varabila->get_params((yyvsp[0].string));
                         for (auto i : Vector_Tabele){
                              if(strcmp(i->get_dom_name(), (yyvsp[0].string))==0){
                              domeniul_caruia_ii_apartine_varabila=i;
                              }
                         }
                       }
                    }
              }
#line 1593 "maker.tab.c"
    break;

  case 53: /* function_call_node: ID $@7 '(' call_list ')'  */
#line 217 "maker.y"
                                 {delete[] Denumire_apelant;
                                  Denumire_apelant=nullptr;
                                  if(!param_checker.empty()){
                                   errorCount++;
                                   yyerror("Not enough parameters in function call");
                                  }
                                 }
#line 1605 "maker.tab.c"
    break;

  case 54: /* $@8: %empty  */
#line 227 "maker.y"
               {
                    SymTable* currentCTRL;     
                    currentCTRL = new SymTable((yyvsp[-4].string));
                    currentCTRL->assign_stack_above(current->return_stack_above());
                    currentCTRL->add_above(current);
                    current=currentCTRL;
                    Vector_Tabele.push_back(current);
               }
#line 1618 "maker.tab.c"
    break;

  case 55: /* $@9: %empty  */
#line 235 "maker.y"
                             {
                              
                              current->set_body((yyvsp[0].ListOfNodes));
                              // $8->run();
                              }
#line 1628 "maker.tab.c"
    break;

  case 56: /* while_node: WHILE '(' boolean_expression ')' CBEGIN $@8 list $@9 CEND  */
#line 241 "maker.y"
                                   {
                                        (yyval.ListOfNodes)=new ASTNode("while" , (yyvsp[-6].ListOfNodes) , (yyvsp[-2].ListOfNodes) , errorCount , yylineno , current);
                                        current=current->next_domain_scope();
                                   }
#line 1637 "maker.tab.c"
    break;

  case 57: /* $@10: %empty  */
#line 247 "maker.y"
                    {
                         SymTable* currentCTRL;     
                         currentCTRL = new SymTable((yyvsp[-4].string));
                         currentCTRL->assign_stack_above(current->return_stack_above());
                         currentCTRL->add_above(current);
                         current=currentCTRL;
                         Vector_Tabele.push_back(current);
                    }
#line 1650 "maker.tab.c"
    break;

  case 58: /* $@11: %empty  */
#line 255 "maker.y"
                             {
                              current->set_body((yyvsp[0].ListOfNodes));
                         }
#line 1658 "maker.tab.c"
    break;

  case 59: /* $@12: %empty  */
#line 258 "maker.y"
                                   {
                                        current=current->next_domain_scope();
                                   }
#line 1666 "maker.tab.c"
    break;

  case 60: /* $@13: %empty  */
#line 262 "maker.y"
                              {
                                   SymTable* currentCTRL;     
                                   currentCTRL = new SymTable((yyvsp[-11].string));
                                   currentCTRL->assign_stack_above(current->return_stack_above());
                                   currentCTRL->add_above(current);
                                   current=currentCTRL;
                                   Vector_Tabele.push_back(current);
                              }
#line 1679 "maker.tab.c"
    break;

  case 61: /* $@14: %empty  */
#line 270 "maker.y"
                                                      {
                                                       current->set_body((yyvsp[0].ListOfNodes));
                                                  }
#line 1687 "maker.tab.c"
    break;

  case 62: /* if_node: IF '(' boolean_expression ')' CBEGIN $@10 list $@11 CEND $@12 ELSE CBEGIN $@13 list $@14 CEND  */
#line 273 "maker.y"
                              {
                                   class ASTNode* combine;
                                   combine=new ASTNode((yyvsp[-9].ListOfNodes) , (yyvsp[-2].ListOfNodes) , errorCount);
                                   (yyval.ListOfNodes)=new ASTNode("if" , (yyvsp[-13].ListOfNodes) , combine , errorCount , yylineno , current);
                                   current=current->next_domain_scope();
                              }
#line 1698 "maker.tab.c"
    break;

  case 63: /* $@15: %empty  */
#line 281 "maker.y"
               {
                 SymTable* currentCTRL;     
                 currentCTRL = new SymTable((yyvsp[-9].string));
                 currentCTRL->assign_stack_above(current->return_stack_above());
                 currentCTRL->add_above(current);
                 current=currentCTRL;
                 Vector_Tabele.push_back(current);
               }
#line 1711 "maker.tab.c"
    break;

  case 64: /* $@16: %empty  */
#line 289 "maker.y"
                                                                                        {current->set_body((yyvsp[0].ListOfNodes));}
#line 1717 "maker.tab.c"
    break;

  case 65: /* for_node: FOR '(' assign_node ';' boolean_expression ';' expression_for ';' ')' CBEGIN $@15 list $@16 CEND  */
#line 290 "maker.y"
               {
                 class ASTNode* combination1;
                 combination1=new ASTNode((yyvsp[-11].ListOfNodes) , (yyvsp[-9].ListOfNodes) , errorCount);
                 class ASTNode* combination2;
                 combination2=new ASTNode((yyvsp[-2].ListOfNodes) , (yyvsp[-7].ListOfNodes) , errorCount);
                 (yyval.ListOfNodes)=new ASTNode("for", combination1 , combination2 , errorCount , yylineno , current);
                 current=current->next_domain_scope();
               }
#line 1730 "maker.tab.c"
    break;

  case 66: /* print_node: PRINT '(' e ')'  */
#line 299 "maker.y"
                           {(yyval.ListOfNodes)=new ASTNode((yyvsp[-3].string) , (yyvsp[-1].ListOfNodes) , errorCount , yylineno);}
#line 1736 "maker.tab.c"
    break;

  case 67: /* expression_for: assign_node  */
#line 302 "maker.y"
                          {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1742 "maker.tab.c"
    break;

  case 68: /* expression_for: e  */
#line 303 "maker.y"
                 {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1748 "maker.tab.c"
    break;

  case 71: /* boolean_expression: '(' boolean_expression ')'  */
#line 310 "maker.y"
                                               {(yyval.ListOfNodes)=(yyvsp[-1].ListOfNodes);}
#line 1754 "maker.tab.c"
    break;

  case 72: /* boolean_expression: '(' boolean_expression ')' CONNECT '(' boolean_expression ')'  */
#line 311 "maker.y"
                                                                            {(yyval.ListOfNodes)=new ASTNode((yyvsp[-3].string) , (yyvsp[-5].ListOfNodes) , (yyvsp[-1].ListOfNodes) , errorCount);}
#line 1760 "maker.tab.c"
    break;

  case 73: /* boolean_expression: y  */
#line 312 "maker.y"
                    {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1766 "maker.tab.c"
    break;

  case 74: /* y: e CMP e  */
#line 314 "maker.y"
            {(yyval.ListOfNodes)=new ASTNode((yyvsp[-1].string) , (yyvsp[-2].ListOfNodes) , (yyvsp[0].ListOfNodes) , errorCount);}
#line 1772 "maker.tab.c"
    break;

  case 77: /* $@17: %empty  */
#line 321 "maker.y"
          {
            current->check_existance_for_declaration((yyvsp[-3].string), (yyvsp[-2].string) , "class" , errorCount , yylineno);
            SymTable* class_scope;
            class_scope=new SymTable((yyvsp[-2].string));
            class_scope->assign_stack_above(current->return_stack_above());
            class_scope->add_above(current);
            current=class_scope;
            Vector_Tabele.push_back(current);
          }
#line 1786 "maker.tab.c"
    break;

  case 78: /* class: Class_Type Class_ID ':' CBEGIN $@17 global_classes_declaration CEND ';'  */
#line 331 "maker.y"
          {
            current=current->next_domain_scope();
          }
#line 1794 "maker.tab.c"
    break;

  case 84: /* $@18: %empty  */
#line 348 "maker.y"
                             {current->check_existance_for_class_instance((yyvsp[-1].string) , (yyvsp[0].string), errorCount , yylineno);}
#line 1800 "maker.tab.c"
    break;

  case 86: /* class_instance_interior: Class_ID ID  */
#line 350 "maker.y"
                                      {current->check_existance_for_class_instance((yyvsp[-1].string) , (yyvsp[0].string), errorCount , yylineno);}
#line 1806 "maker.tab.c"
    break;

  case 89: /* param: TYPE ID  */
#line 358 "maker.y"
                {current->check_existance_for_declaration((yyvsp[-1].string), (yyvsp[0].string) , "param" , errorCount , yylineno);
                 current->next_domain_scope()->add_params(current->get_dom_name(), current->get_that_variable((yyvsp[0].string)));//adaugam in parametrii varaibilei ID FUNC care e declarata in domeniu de deasupra
                }
#line 1814 "maker.tab.c"
    break;

  case 90: /* call_list: e  */
#line 365 "maker.y"
               {
               if(param_checker.empty()){
                    errorCount++;
                    yyerror("The number of parameters in the call doesnt match the number of params in the fucntion");
               }
               else{
               class IdInfo* temp;
               temp=*(param_checker.begin());
                    //cout<<"Ma execut DUPA "<<(*temp).name<<endl;
                    if(strcmp((yyvsp[0].ListOfNodes)->get_type_for_main() , "int")==0){
                         //cout<<Denumire_apelant<<"    "<<$1->get_type_for_main()<<" "<<(*temp).name<<"    "<<param_checker.size()<<"  New Value="<<$1->evaluatei()<<endl;
                         class Value val((yyvsp[0].ListOfNodes)->evaluatei());
                         //cout<<(*temp).name<<" "<<domeniul_caruia_ii_apartine_varabila->get_value((*temp).name).get_int()<<endl;
                         domeniul_caruia_ii_apartine_varabila->set_value((*temp).name.c_str() , val);
                         //cout<<(*temp).name<<" "<<domeniul_caruia_ii_apartine_varabila->get_value((*temp).name).get_int()<<endl;
                         param_checker.erase(param_checker.begin());
                    }
                    else if(strcmp((yyvsp[0].ListOfNodes)->get_type_for_main() , "float")==0){
                         //cout<<Denumire_apelant<<"    "<<$1->get_type_for_main()<<" "<<(*temp).name<<"    "<<param_checker.size()<<"  New Value="<<$1->evaluatef()<<endl;
                         class Value val((yyvsp[0].ListOfNodes)->evaluatef());
                         //cout<<(*temp).name<<" "<<domeniul_caruia_ii_apartine_varabila->get_value((*temp).name).get_float()<<endl;
                         domeniul_caruia_ii_apartine_varabila->set_value((*temp).name.c_str() , val);
                         //cout<<(*temp).name<<" "<<domeniul_caruia_ii_apartine_varabila->get_value((*temp).name).get_float()<<endl;
                         param_checker.erase(param_checker.begin());
                    }
                    else{
                         errorCount++;
                         yyerror("Unkown Parameter type");
                    }
               }
               }
#line 1850 "maker.tab.c"
    break;

  case 91: /* call_list: call_list ',' e  */
#line 396 "maker.y"
                           {
               if(param_checker.empty()){
                    errorCount++;
                    yyerror("The number of parameters in the call doesnt match the number of params in the fucntion");
               }
               else{
               class IdInfo* temp;
               temp=*(param_checker.begin());
               //cout<<"Ma execut PRIMUL "<<(*temp).name<<endl;
               if(strcmp((yyvsp[0].ListOfNodes)->get_type_for_main() , "int")==0){
                    //cout<<Denumire_apelant<<"    "<<$3->get_type_for_main()<<" "<<(*temp).name<<"    "<<param_checker.size()<<"  New Value="<<$3->evaluatei()<<endl;
                    class Value val((yyvsp[0].ListOfNodes)->evaluatei());
                    //cout<<domeniul_caruia_ii_apartine_varabila->get_dom_name()<<endl;
                    //cout<<(*temp).name<<" "<<domeniul_caruia_ii_apartine_varabila->get_value((*temp).name).get_int()<<endl;
                    domeniul_caruia_ii_apartine_varabila->set_value((*temp).name.c_str() , val);
                    //cout<<(*temp).name<<" "<<domeniul_caruia_ii_apartine_varabila->get_value((*temp).name).get_int()<<endl;
                    param_checker.erase(param_checker.begin());
                    }
               else if (strcmp((yyvsp[0].ListOfNodes)->get_type_for_main() , "float")==0){
                    //cout<<Denumire_apelant<<"    "<<$3->get_type_for_main()<<" "<<(*temp).name<<"    "<<param_checker.size()<<"  New Value="<<$3->evaluatef()<<endl;
                    class Value val((yyvsp[0].ListOfNodes)->evaluatef());
                    //cout<<domeniul_caruia_ii_apartine_varabila->get_dom_name()<<endl;
                    //cout<<(*temp).name<<" "<<domeniul_caruia_ii_apartine_varabila->get_value((*temp).name).get_float()<<endl;
                    domeniul_caruia_ii_apartine_varabila->set_value((*temp).name.c_str() , val);
                    //cout<<(*temp).name<<" "<<domeniul_caruia_ii_apartine_varabila->get_value((*temp).name).get_float()<<endl;
                    param_checker.erase(param_checker.begin());
               }
               else{
                         errorCount++;
                         yyerror("Unkown Parameter type");
                    }
               }
               }
#line 1888 "maker.tab.c"
    break;

  case 92: /* e: e '+' e  */
#line 523 "maker.y"
              {(yyval.ListOfNodes)=new ASTNode("+" , (yyvsp[-2].ListOfNodes) , (yyvsp[0].ListOfNodes) , errorCount);}
#line 1894 "maker.tab.c"
    break;

  case 93: /* e: e '*' e  */
#line 524 "maker.y"
              {(yyval.ListOfNodes)=new ASTNode("*" , (yyvsp[-2].ListOfNodes) , (yyvsp[0].ListOfNodes) , errorCount);}
#line 1900 "maker.tab.c"
    break;

  case 94: /* e: e '-' e  */
#line 525 "maker.y"
              {(yyval.ListOfNodes)=new ASTNode("-" , (yyvsp[-2].ListOfNodes) , (yyvsp[0].ListOfNodes) , errorCount);}
#line 1906 "maker.tab.c"
    break;

  case 95: /* e: e '/' e  */
#line 526 "maker.y"
              {(yyval.ListOfNodes)=new ASTNode("/" , (yyvsp[-2].ListOfNodes) , (yyvsp[0].ListOfNodes) , errorCount);}
#line 1912 "maker.tab.c"
    break;

  case 96: /* e: '(' e ')'  */
#line 527 "maker.y"
              {(yyval.ListOfNodes)=(yyvsp[-1].ListOfNodes);}
#line 1918 "maker.tab.c"
    break;

  case 97: /* e: TRUTH_VALUE  */
#line 528 "maker.y"
               {    
                    if(strcmp((yyvsp[0].string) ,"TRUE")==0){
                         Value val(true);     
                         (yyval.ListOfNodes)=new ASTNode(val , "bool", errorCount);
                    }
                    else{
                         Value val(false);   
                         (yyval.ListOfNodes)=new ASTNode(val , "bool", errorCount);
                    }
               }
#line 1933 "maker.tab.c"
    break;

  case 98: /* e: NR  */
#line 538 "maker.y"
              {Value val(atoi(yytext));
               (yyval.ListOfNodes)=new ASTNode(val , "int" , errorCount);}
#line 1940 "maker.tab.c"
    break;

  case 99: /* e: REAL  */
#line 540 "maker.y"
              {Value val((float)atof(yytext));
               (yyval.ListOfNodes)=new ASTNode(val , "float" , errorCount);}
#line 1947 "maker.tab.c"
    break;

  case 100: /* e: ID  */
#line 542 "maker.y"
              {
               domeniul_caruia_ii_apartine_varabila=current->check_existance_for_use((yyvsp[0].string) , errorCount , yylineno);
               (yyval.ListOfNodes)=new ASTNode( domeniul_caruia_ii_apartine_varabila->get_that_variable((yyvsp[0].string)), errorCount , yylineno);//??? MAybe it will work like this?
               //$$=new ASTNode($1 , current , errorCount , yylineno); FUCK THIS LINE IN PARTICULAR (AM TRECUT PRIN MUSCIAL DE 3 ORI LA ASTA)
              }
#line 1957 "maker.tab.c"
    break;


#line 1961 "maker.tab.c"

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

#line 549 "maker.y"

void yyerror(const char * s){
     cout << "error:" << s << " at line: " << yylineno << endl;
}
     
int main(int argc, char** argv){
     yyin=fopen(argv[1],"r");
     current = new SymTable("global");
     Vector_Tabele.push_back(current);
     yyparse();
     cout << "Variables:" <<endl<<endl;
     for (auto i : Vector_Tabele){
          i->printVars();
     }
     cout<<endl<<endl<<"RUlare auromatat"<<endl<<endl<<endl;
     // for (auto i : Vector_Tabele){
     //      if(i->get_body()!=nullptr && strcmp(i->get_dom_location().c_str() ,"global-main-while-while")==0){
     //           i->get_body()->run();
     //           i->get_body()->run();
     //      }
     // }



     //      cout<<endl<<endl;
     // for (auto i : Vector_Tabele){
     //      if(i->get_body()!=nullptr && strcmp(i->get_dom_name() ,"main")==0){
     //      cout<<i->get_dom_name()<<endl;
     //      for(auto j=0 ; j<10 ; ++j){
     //      i->get_body()->run();
     //      }
     //           }
     //      }
     //      cout<<endl<<endl;
     //      cout << "Variables:" <<endl<<endl;
     //      for (auto i : Vector_Tabele){
     //      i->printVars();
     // }
     cout<<endl<<endl<<endl<<endl<<endl<<endl;
     cout<<"Functions and their interior:"<<endl<<endl;
     for (auto i : Vector_Tabele){
          i->printFunct();
          delete i;
     }
} 
//TO DO : Baga apelul de functie in AST
//1TO DO: TRANZITIE AST ;(
//2TO DO: Fa sa poti accesa Membrii unei clase , si dupa fiecare instanta sa aiba o copie independenta a acelor Membrii
