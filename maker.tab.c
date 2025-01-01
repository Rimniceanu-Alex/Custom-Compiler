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
int hard_copy_counter=0;

#line 92 "maker.tab.c"

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
  YYSYMBOL_30_ = 30,                       /* '('  */
  YYSYMBOL_31_ = 31,                       /* ')'  */
  YYSYMBOL_32_ = 32,                       /* ';'  */
  YYSYMBOL_33_ = 33,                       /* '['  */
  YYSYMBOL_34_ = 34,                       /* ']'  */
  YYSYMBOL_35_ = 35,                       /* ':'  */
  YYSYMBOL_36_ = 36,                       /* ','  */
  YYSYMBOL_YYACCEPT = 37,                  /* $accept  */
  YYSYMBOL_progr = 38,                     /* progr  */
  YYSYMBOL_main = 39,                      /* main  */
  YYSYMBOL_40_1 = 40,                      /* $@1  */
  YYSYMBOL_41_2 = 41,                      /* $@2  */
  YYSYMBOL_global_classes_declaration = 42, /* global_classes_declaration  */
  YYSYMBOL_functions_generator = 43,       /* functions_generator  */
  YYSYMBOL_functions = 44,                 /* functions  */
  YYSYMBOL_45_3 = 45,                      /* $@3  */
  YYSYMBOL_46_4 = 46,                      /* $@4  */
  YYSYMBOL_47_5 = 47,                      /* $@5  */
  YYSYMBOL_48_6 = 48,                      /* $@6  */
  YYSYMBOL_49_7 = 49,                      /* $@7  */
  YYSYMBOL_variables_generator = 50,       /* variables_generator  */
  YYSYMBOL_variables = 51,                 /* variables  */
  YYSYMBOL_fundamentals = 52,              /* fundamentals  */
  YYSYMBOL_arr = 53,                       /* arr  */
  YYSYMBOL_arr_list = 54,                  /* arr_list  */
  YYSYMBOL_variables_interior = 55,        /* variables_interior  */
  YYSYMBOL_fundamentals_interior = 56,     /* fundamentals_interior  */
  YYSYMBOL_arr_interior = 57,              /* arr_interior  */
  YYSYMBOL_list_main = 58,                 /* list_main  */
  YYSYMBOL_list = 59,                      /* list  */
  YYSYMBOL_statement = 60,                 /* statement  */
  YYSYMBOL_statement_main = 61,            /* statement_main  */
  YYSYMBOL_assign_node = 62,               /* assign_node  */
  YYSYMBOL_function_call_node = 63,        /* function_call_node  */
  YYSYMBOL_64_8 = 64,                      /* $@8  */
  YYSYMBOL_while_node = 65,                /* while_node  */
  YYSYMBOL_66_9 = 66,                      /* $@9  */
  YYSYMBOL_67_10 = 67,                     /* $@10  */
  YYSYMBOL_if_node = 68,                   /* if_node  */
  YYSYMBOL_69_11 = 69,                     /* $@11  */
  YYSYMBOL_70_12 = 70,                     /* $@12  */
  YYSYMBOL_71_13 = 71,                     /* $@13  */
  YYSYMBOL_72_14 = 72,                     /* $@14  */
  YYSYMBOL_73_15 = 73,                     /* $@15  */
  YYSYMBOL_for_node = 74,                  /* for_node  */
  YYSYMBOL_75_16 = 75,                     /* $@16  */
  YYSYMBOL_76_17 = 76,                     /* $@17  */
  YYSYMBOL_print_node = 77,                /* print_node  */
  YYSYMBOL_type_fucntion_node = 78,        /* type_fucntion_node  */
  YYSYMBOL_expression_for = 79,            /* expression_for  */
  YYSYMBOL_declarations_interior = 80,     /* declarations_interior  */
  YYSYMBOL_boolean_expression = 81,        /* boolean_expression  */
  YYSYMBOL_y = 82,                         /* y  */
  YYSYMBOL_classes = 83,                   /* classes  */
  YYSYMBOL_class = 84,                     /* class  */
  YYSYMBOL_85_18 = 85,                     /* $@18  */
  YYSYMBOL_class_initialize_initial = 86,  /* class_initialize_initial  */
  YYSYMBOL_class_initialize = 87,          /* class_initialize  */
  YYSYMBOL_class_initialize_interior = 88, /* class_initialize_interior  */
  YYSYMBOL_class_instance = 89,            /* class_instance  */
  YYSYMBOL_90_19 = 90,                     /* $@19  */
  YYSYMBOL_class_instance_interior = 91,   /* class_instance_interior  */
  YYSYMBOL_list_param = 92,                /* list_param  */
  YYSYMBOL_param = 93,                     /* param  */
  YYSYMBOL_call_list = 94,                 /* call_list  */
  YYSYMBOL_e = 95                          /* e  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 27 "maker.y"

     

#line 225 "maker.tab.c"


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
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  59
/* YYNRULES -- Number of rules.  */
#define YYNRULES  105
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  203

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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      30,    31,    28,    26,    36,    27,     2,    29,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    35,    32,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    33,     2,    34,     2,     2,     2,     2,     2,     2,
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
       0,    37,    37,    38,    42,    49,    41,    55,    56,    57,
      58,    61,    62,    65,    73,    74,    64,   103,   111,   102,
     117,   118,   120,   121,   124,   127,   130,   131,   133,   134,
     137,   140,   143,   144,   146,   147,   149,   150,   151,   152,
     153,   154,   155,   156,   159,   160,   161,   162,   163,   164,
     165,   166,   170,   173,   178,   177,   221,   229,   220,   240,
     248,   251,   255,   263,   239,   274,   282,   273,   292,   294,
     295,   296,   299,   300,   303,   304,   305,   307,   309,   310,
     314,   313,   329,   330,   334,   335,   338,   341,   341,   343,
     346,   347,   351,   356,   388,   421,   422,   423,   424,   425,
     426,   436,   438,   440,   445,   446
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
  "'-'", "'*'", "'/'", "'('", "')'", "';'", "'['", "']'", "':'", "','",
  "$accept", "progr", "main", "$@1", "$@2", "global_classes_declaration",
  "functions_generator", "functions", "$@3", "$@4", "$@5", "$@6", "$@7",
  "variables_generator", "variables", "fundamentals", "arr", "arr_list",
  "variables_interior", "fundamentals_interior", "arr_interior",
  "list_main", "list", "statement", "statement_main", "assign_node",
  "function_call_node", "$@8", "while_node", "$@9", "$@10", "if_node",
  "$@11", "$@12", "$@13", "$@14", "$@15", "for_node", "$@16", "$@17",
  "print_node", "type_fucntion_node", "expression_for",
  "declarations_interior", "boolean_expression", "y", "classes", "class",
  "$@18", "class_initialize_initial", "class_initialize",
  "class_initialize_interior", "class_instance", "$@19",
  "class_instance_interior", "list_param", "param", "call_list", "e", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-117)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-55)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      19,    13,    23,    38,    27,    58,     0,  -117,    32,  -117,
    -117,  -117,    19,  -117,   -27,    54,  -117,  -117,  -117,  -117,
      44,  -117,     0,  -117,    80,  -117,  -117,    79,    68,    93,
     121,    97,    94,  -117,   123,    58,    80,  -117,    96,   120,
    -117,  -117,   120,   113,   132,   138,   124,   125,   126,   127,
     128,  -117,  -117,  -117,  -117,   130,  -117,  -117,  -117,  -117,
    -117,  -117,  -117,  -117,  -117,  -117,  -117,  -117,  -117,   119,
     151,    49,  -117,    32,    74,    15,   133,   119,  -117,    15,
      15,   152,    17,    17,   160,    94,   134,  -117,  -117,   162,
     120,   163,   165,  -117,   141,  -117,  -117,  -117,    15,  -117,
    -117,  -117,    95,    17,  -117,   137,    95,   142,   113,   140,
      17,   110,   116,  -117,  -117,  -117,    94,  -117,   143,    94,
     145,    66,    17,    17,    17,    17,    17,    76,    87,   169,
     172,    15,   122,  -117,  -117,  -117,   146,  -117,  -117,  -117,
    -117,  -117,  -117,  -117,  -117,  -117,  -117,   161,  -117,    87,
      91,    91,  -117,  -117,  -117,    17,  -117,  -117,   148,   164,
      94,   175,   153,    87,    94,    94,    61,    17,  -117,   150,
      15,  -117,  -117,     5,  -117,   154,    87,    47,  -117,   156,
     179,   182,   158,  -117,  -117,  -117,  -117,   185,   186,   178,
    -117,   166,   188,    94,  -117,  -117,  -117,    94,   189,  -117,
    -117,   190,  -117
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      10,     0,     0,     0,     0,     0,     9,    12,     8,    21,
      22,    23,    10,    78,    13,     0,    17,     1,     4,     3,
       0,    11,     7,    20,    83,    79,    24,     0,     0,     0,
       0,     0,     0,    13,     0,     0,    82,    84,     0,     0,
      25,    80,     0,    54,     0,     0,     0,     0,     0,     0,
       0,    72,    28,    29,     5,     0,    44,    45,    46,    47,
      48,    50,    51,    49,    73,    86,    87,     2,    85,    27,
       0,     0,    90,    10,     0,     0,     0,    30,    89,     0,
       0,     0,     0,     0,     0,    32,     0,    26,    92,     0,
       0,     0,     0,   102,   103,   101,   100,   105,     0,   104,
      53,    76,    52,     0,    31,     0,     0,     0,     0,     0,
       0,     0,     0,     6,    33,    88,     0,    91,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    93,     0,
       0,     0,     0,    68,    69,    14,     0,    36,    37,    38,
      39,    40,    42,    43,    41,    81,    18,    74,    99,    77,
      95,    97,    96,    98,    55,     0,    59,    56,     0,     0,
      34,     0,     0,    94,     0,     0,     0,     0,    35,     0,
       0,    60,    57,   103,    70,     0,    71,     0,    19,     0,
       0,     0,     0,    15,    75,    61,    58,     0,     0,     0,
      65,     0,     0,     0,    16,    62,    66,     0,     0,    63,
      67,     0,    64
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -117,  -117,   159,  -117,  -117,   -10,   191,    -2,  -117,  -117,
    -117,  -117,  -117,  -117,   192,  -117,  -117,    -5,  -117,  -117,
    -117,   112,  -116,  -117,  -117,   -31,   -32,  -117,   -25,  -117,
    -117,   -20,  -117,  -117,  -117,  -117,  -117,   -19,  -117,  -117,
     -18,   -15,  -117,   -14,   -69,  -117,  -117,   193,  -117,  -117,
    -117,  -117,   167,  -117,  -117,   168,   111,  -117,   -67
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,    19,    32,    84,     5,     6,     7,    28,   159,
     188,    31,   161,     8,     9,    10,    11,    29,    51,    52,
      53,    54,   135,   136,    55,   137,    99,    76,   139,   165,
     181,   140,   164,   180,   189,   197,   201,   141,   193,   198,
     142,   143,   175,   144,   100,   101,    12,    13,    73,    35,
      36,    64,    37,    86,    65,    71,    72,   127,   106
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      57,    56,    24,   146,    21,    26,    27,    58,   102,    20,
     105,   107,    59,    60,    61,   111,   112,    62,    63,     3,
      21,    14,    93,    94,    93,    94,    75,    17,     1,   120,
       2,   121,    95,    15,    95,   -54,   128,    96,     3,    96,
      97,     1,    97,   132,   168,    98,    16,   110,   171,   172,
     109,     3,    33,    57,    56,   149,   150,   151,   152,   153,
      58,    18,   158,    91,    87,    59,    60,    61,    93,   173,
      62,    63,   104,   123,   124,   125,   126,   196,    95,   183,
      89,   199,   122,    96,   138,    90,    97,   138,   163,    30,
      34,   110,   123,   124,   125,   126,    38,   148,    39,   176,
     177,   179,    43,    44,    45,    92,    46,   154,    47,    48,
      90,   122,   155,   123,   124,   125,   126,    49,    50,   125,
     126,   123,   124,   125,   126,    40,    41,    42,   138,    70,
      69,    66,   138,   138,    75,   174,   123,   124,   125,   126,
      77,   133,   123,   124,   125,   126,    78,   134,   123,   124,
     125,   126,    27,   148,    79,    80,    81,    82,    83,    88,
     108,   138,    85,   103,   113,   138,   115,   116,   129,   118,
     119,   -54,   131,   130,   156,   145,   147,   157,   160,   162,
     166,   169,   178,   170,   167,   185,   182,   184,   186,   187,
     190,   192,   191,   195,    67,   200,   202,   114,   194,    22,
      23,   117,     0,    68,     0,    25,     0,     0,     0,     0,
      74
};

static const yytype_int16 yycheck[] =
{
      32,    32,    12,   119,     6,    32,    33,    32,    75,     9,
      79,    80,    32,    32,    32,    82,    83,    32,    32,    19,
      22,     8,     7,     8,     7,     8,    21,     0,     9,    98,
      11,    98,    17,    10,    17,    30,   103,    22,    19,    22,
      25,     9,    25,   110,   160,    30,     8,    30,   164,   165,
      81,    19,     8,    85,    85,   122,   123,   124,   125,   126,
      85,     3,   131,    73,    69,    85,    85,    85,     7,     8,
      85,    85,    77,    26,    27,    28,    29,   193,    17,    32,
      31,   197,    16,    22,   116,    36,    25,   119,   155,    35,
      10,    30,    26,    27,    28,    29,    17,    31,    30,   166,
     167,   170,     8,     9,    10,    31,    12,    31,    14,    15,
      36,    16,    36,    26,    27,    28,    29,    23,    24,    28,
      29,    26,    27,    28,    29,    32,     5,    30,   160,     9,
      34,     8,   164,   165,    21,   166,    26,    27,    28,    29,
       8,    31,    26,    27,    28,    29,     8,    31,    26,    27,
      28,    29,    33,    31,    30,    30,    30,    30,    30,     8,
       8,   193,    32,    30,     4,   197,    32,     5,    31,     6,
       5,    30,    32,    31,     5,    32,    31,     5,    32,    18,
      32,     6,    32,    30,    20,     6,    32,    31,     6,    31,
       5,    13,     6,     5,    35,     6,     6,    85,    32,     8,
       8,    90,    -1,    36,    -1,    12,    -1,    -1,    -1,    -1,
      42
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     9,    11,    19,    38,    42,    43,    44,    50,    51,
      52,    53,    83,    84,     8,    10,     8,     0,     3,    39,
       9,    44,    43,    51,    42,    84,    32,    33,    45,    54,
      35,    48,    40,     8,    10,    86,    87,    89,    17,    30,
      32,     5,    30,     8,     9,    10,    12,    14,    15,    23,
      24,    55,    56,    57,    58,    61,    62,    63,    65,    68,
      74,    77,    78,    80,    88,    91,     8,    39,    89,    34,
       9,    92,    93,    85,    92,    21,    64,     8,     8,    30,
      30,    30,    30,    30,    41,    32,    90,    54,     8,    31,
      36,    42,    31,     7,     8,    17,    22,    25,    30,    63,
      81,    82,    95,    30,    54,    81,    95,    81,     8,    62,
      30,    95,    95,     4,    58,    32,     5,    93,     6,     5,
      81,    95,    16,    26,    27,    28,    29,    94,    95,    31,
      31,    32,    95,    31,    31,    59,    60,    62,    63,    65,
      68,    74,    77,    78,    80,    32,    59,    31,    31,    95,
      95,    95,    95,    95,    31,    36,     5,     5,    81,    46,
      32,    49,    18,    95,    69,    66,    32,    20,    59,     6,
      30,    59,    59,     8,    62,    79,    95,    95,    32,    81,
      70,    67,    32,    32,    31,     6,     6,    31,    47,    71,
       5,     6,    13,    75,    32,     5,    59,    72,    76,    59,
       6,    73,     6
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    37,    38,    38,    40,    41,    39,    42,    42,    42,
      42,    43,    43,    45,    46,    47,    44,    48,    49,    44,
      50,    50,    51,    51,    52,    53,    54,    54,    55,    55,
      56,    57,    58,    58,    59,    59,    60,    60,    60,    60,
      60,    60,    60,    60,    61,    61,    61,    61,    61,    61,
      61,    61,    62,    62,    64,    63,    66,    67,    65,    69,
      70,    71,    72,    73,    68,    75,    76,    74,    77,    78,
      79,    79,    80,    80,    81,    81,    81,    82,    83,    83,
      85,    84,    86,    86,    87,    87,    88,    90,    89,    91,
      92,    92,    93,    94,    94,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     2,     0,     0,     5,     2,     1,     1,
       0,     2,     1,     0,     0,     0,    15,     0,     0,    11,
       2,     1,     1,     1,     3,     4,     4,     3,     1,     1,
       2,     3,     2,     3,     2,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     0,     5,     0,     0,     9,     0,
       0,     0,     0,     0,    16,     0,     0,    14,     4,     4,
       1,     1,     1,     1,     3,     7,     1,     3,     1,     2,
       0,     8,     1,     0,     1,     2,     1,     0,     4,     2,
       1,     3,     2,     1,     3,     3,     3,     3,     3,     3,
       1,     1,     1,     1,     1,     1
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
#line 37 "maker.y"
                                                                          {if (errorCount == 0) cout<< "The program is correct!" << endl;}
#line 1326 "maker.tab.c"
    break;

  case 3: /* progr: global_classes_declaration main  */
#line 38 "maker.y"
                                         {if (errorCount == 0) cout<< "The program is correct!" << endl;}
#line 1332 "maker.tab.c"
    break;

  case 4: /* $@1: %empty  */
#line 42 "maker.y"
          {SymTable* currentmain;     
           currentmain = new SymTable("main");
           currentmain->assign_stack_above(current->return_stack_above());
           currentmain->add_above(current);
           current=currentmain;  
           Vector_Tabele.push_back(current);
          }
#line 1344 "maker.tab.c"
    break;

  case 5: /* $@2: %empty  */
#line 49 "maker.y"
                    {current->set_body((yyvsp[0].ListOfNodes));
               }
#line 1351 "maker.tab.c"
    break;

  case 6: /* main: BGIN $@1 list_main $@2 END  */
#line 51 "maker.y"
                    {
                     current=current->next_domain_scope();
                    }
#line 1359 "maker.tab.c"
    break;

  case 13: /* $@3: %empty  */
#line 65 "maker.y"
                { current->check_existance_for_declaration((yyvsp[-1].string), (yyvsp[0].string) , "func" , errorCount , yylineno);
                  class SymTable* function_scope;
                  function_scope=new SymTable((yyvsp[0].string));
                  function_scope->assign_stack_above(current->return_stack_above());
                  function_scope->add_above(current);
                  current=function_scope;
                  Vector_Tabele.push_back(current);
                }
#line 1372 "maker.tab.c"
    break;

  case 14: /* $@4: %empty  */
#line 73 "maker.y"
                                             {    
                                                       }
#line 1379 "maker.tab.c"
    break;

  case 15: /* $@5: %empty  */
#line 74 "maker.y"
                                                                      {
                                                            // if(strcmp($1, $11->get_type_for_main())==0){
                                                            //      if(strcmp($11->get_type_for_main() , "int")==0){
                                                            //           class Value val($11->evaluatei());
                                                            //           current->next_domain_scope()->set_value($2 , val );  
                                                            //      }
                                                            //      else if(strcmp($11->get_type_for_main() , "float")==0){
                                                            //           class Value val($11->evaluatef());
                                                            //           current->next_domain_scope()->set_value($2 , val ); 
                                                            //      }
                                                            //      else{
                                                            //           errorCount++;
                                                            //           yyerror("Unkown Type of Function");
                                                            //      }
                                                            // }
                                                            // else{
                                                            //      errorCount++;
                                                            //      yyerror("The Return type and the function type DON'T MATCH");
                                                            // }
                                                       }
#line 1404 "maker.tab.c"
    break;

  case 16: /* functions: TYPE ID $@3 '(' list_param ')' CBEGIN list $@4 RETURN e ';' $@5 CEND ';'  */
#line 94 "maker.y"
                                                                           {
                                                                           class ASTNode* func_return;
                                                                           func_return=new ASTNode((yyvsp[-13].string) , "<-" , (yyvsp[-4].ListOfNodes) ,current, &errorCount, yylineno);
                                                                           class ASTNode* list_return;
                                                                           list_return=new ASTNode("sequence" , (yyvsp[-7].ListOfNodes) , func_return , &errorCount , current);
                                                                           current->set_body(list_return);
                                                                           current=current->next_domain_scope();
                                                                           }
#line 1417 "maker.tab.c"
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
#line 1430 "maker.tab.c"
    break;

  case 18: /* $@7: %empty  */
#line 111 "maker.y"
                                             {    current->set_body((yyvsp[0].ListOfNodes));}
#line 1436 "maker.tab.c"
    break;

  case 19: /* functions: VOID ID $@6 '(' list_param ')' CBEGIN list $@7 CEND ';'  */
#line 112 "maker.y"
                                   {
                                    current=current->next_domain_scope();
                                   }
#line 1444 "maker.tab.c"
    break;

  case 24: /* fundamentals: TYPE ID ';'  */
#line 124 "maker.y"
                          {current->check_existance_for_declaration((yyvsp[-2].string), (yyvsp[-1].string) , "var" , errorCount , yylineno);}
#line 1450 "maker.tab.c"
    break;

  case 25: /* arr: TYPE ID arr_list ';'  */
#line 127 "maker.y"
                           {current->check_existance_for_declaration((yyvsp[-3].string), (yyvsp[-2].string) , "array" , errorCount , yylineno);}
#line 1456 "maker.tab.c"
    break;

  case 30: /* fundamentals_interior: TYPE ID  */
#line 137 "maker.y"
                                {current->check_existance_for_declaration((yyvsp[-1].string), (yyvsp[0].string) , "var" , errorCount , yylineno);}
#line 1462 "maker.tab.c"
    break;

  case 31: /* arr_interior: TYPE ID arr_list  */
#line 140 "maker.y"
                                 {current->check_existance_for_declaration((yyvsp[-2].string), (yyvsp[-1].string) , "array" , errorCount , yylineno);}
#line 1468 "maker.tab.c"
    break;

  case 32: /* list_main: statement_main ';'  */
#line 143 "maker.y"
                                {(yyval.ListOfNodes)=new ASTNode("final_sequence" , (yyvsp[-1].ListOfNodes) , &errorCount , yylineno, current);}
#line 1474 "maker.tab.c"
    break;

  case 33: /* list_main: statement_main ';' list_main  */
#line 144 "maker.y"
                                          {(yyval.ListOfNodes)=new ASTNode("sequence" , (yyvsp[-2].ListOfNodes) ,(yyvsp[0].ListOfNodes) , &errorCount , current);}
#line 1480 "maker.tab.c"
    break;

  case 34: /* list: statement ';'  */
#line 146 "maker.y"
                      {(yyval.ListOfNodes)=new ASTNode("final_sequence" , (yyvsp[-1].ListOfNodes) , &errorCount , yylineno, current);}
#line 1486 "maker.tab.c"
    break;

  case 35: /* list: statement ';' list  */
#line 147 "maker.y"
                           {(yyval.ListOfNodes)=new ASTNode("sequence" , (yyvsp[-2].ListOfNodes) ,(yyvsp[0].ListOfNodes) , &errorCount , current);}
#line 1492 "maker.tab.c"
    break;

  case 36: /* statement: assign_node  */
#line 149 "maker.y"
                       {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1498 "maker.tab.c"
    break;

  case 37: /* statement: function_call_node  */
#line 150 "maker.y"
                            {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1504 "maker.tab.c"
    break;

  case 38: /* statement: while_node  */
#line 151 "maker.y"
                    {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1510 "maker.tab.c"
    break;

  case 39: /* statement: if_node  */
#line 152 "maker.y"
                 {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1516 "maker.tab.c"
    break;

  case 40: /* statement: for_node  */
#line 153 "maker.y"
                  {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1522 "maker.tab.c"
    break;

  case 42: /* statement: print_node  */
#line 155 "maker.y"
                     {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1528 "maker.tab.c"
    break;

  case 43: /* statement: type_fucntion_node  */
#line 156 "maker.y"
                             {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1534 "maker.tab.c"
    break;

  case 44: /* statement_main: assign_node  */
#line 159 "maker.y"
                            {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);(yyval.ListOfNodes)->run();}
#line 1540 "maker.tab.c"
    break;

  case 45: /* statement_main: function_call_node  */
#line 160 "maker.y"
                            {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);(yyval.ListOfNodes)->run();}
#line 1546 "maker.tab.c"
    break;

  case 46: /* statement_main: while_node  */
#line 161 "maker.y"
                    {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);(yyval.ListOfNodes)->run();}
#line 1552 "maker.tab.c"
    break;

  case 47: /* statement_main: if_node  */
#line 162 "maker.y"
                 {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);(yyval.ListOfNodes)->run();}
#line 1558 "maker.tab.c"
    break;

  case 48: /* statement_main: for_node  */
#line 163 "maker.y"
                  {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);(yyval.ListOfNodes)->run();}
#line 1564 "maker.tab.c"
    break;

  case 50: /* statement_main: print_node  */
#line 165 "maker.y"
                     {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);(yyval.ListOfNodes)->run();}
#line 1570 "maker.tab.c"
    break;

  case 51: /* statement_main: type_fucntion_node  */
#line 166 "maker.y"
                             {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);(yyval.ListOfNodes)->run();}
#line 1576 "maker.tab.c"
    break;

  case 52: /* assign_node: ID ASSIGN e  */
#line 170 "maker.y"
                        {
                         (yyval.ListOfNodes)=new ASTNode((yyvsp[-2].string) , "<-" , (yyvsp[0].ListOfNodes) ,current, &errorCount, yylineno);
                         }
#line 1584 "maker.tab.c"
    break;

  case 53: /* assign_node: ID ASSIGN boolean_expression  */
#line 173 "maker.y"
                                         {
                         (yyval.ListOfNodes)=new ASTNode((yyvsp[-2].string) , "<-" , (yyvsp[0].ListOfNodes) ,current, &errorCount, yylineno);
                         }
#line 1592 "maker.tab.c"
    break;

  case 54: /* $@8: %empty  */
#line 178 "maker.y"
               {
                    SymTable* hard_copy=current->deep_copy();
                    ++hard_copy_counter;
               domeniul_caruia_ii_apartine_varabila=hard_copy->check_existance_for_use((yyvsp[0].string) , errorCount , yylineno);
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
                         for(auto i: param_checker){
                              cout<<i->name<<i->type<<endl;
                         }
                         for (auto i : Vector_Tabele){
                              if(strcmp(i->get_dom_name(), (yyvsp[0].string))==0){
                              domeniul_caruia_ii_apartine_varabila=i;
                              }
                         }    
                       }
                    }
              }
#line 1629 "maker.tab.c"
    break;

  case 55: /* function_call_node: ID $@8 '(' call_list ')'  */
#line 210 "maker.y"
                                 {delete[] Denumire_apelant;
                                  Denumire_apelant=nullptr;
                                  if(!param_checker.empty()){
                                   errorCount++;
                                   yyerror("Not enough parameters in function call");
                                  }
                                  (yyval.ListOfNodes)=new ASTNode("func_call" , domeniul_caruia_ii_apartine_varabila->get_body_copy() , domeniul_caruia_ii_apartine_varabila->next_domain_scope()->get_that_variable((yyvsp[-4].string)) , &errorCount , yylineno);//S-ar putea s- schimb sa semene cu o expresie    //COPIE??
                                 }
#line 1642 "maker.tab.c"
    break;

  case 56: /* $@9: %empty  */
#line 221 "maker.y"
               {
                    SymTable* currentCTRL;     
                    currentCTRL = new SymTable((yyvsp[-4].string));
                    currentCTRL->assign_stack_above(current->return_stack_above());
                    currentCTRL->add_above(current);
                    current=currentCTRL;
                    Vector_Tabele.push_back(current);
               }
#line 1655 "maker.tab.c"
    break;

  case 57: /* $@10: %empty  */
#line 229 "maker.y"
                             {
                              
                              current->set_body((yyvsp[0].ListOfNodes));
                              }
#line 1664 "maker.tab.c"
    break;

  case 58: /* while_node: WHILE '(' boolean_expression ')' CBEGIN $@9 list $@10 CEND  */
#line 234 "maker.y"
                                   {
                                        (yyval.ListOfNodes)=new ASTNode("while" , (yyvsp[-6].ListOfNodes) , (yyvsp[-2].ListOfNodes) , &errorCount , yylineno , current);
                                        current=current->next_domain_scope();
                                   }
#line 1673 "maker.tab.c"
    break;

  case 59: /* $@11: %empty  */
#line 240 "maker.y"
                    {
                         SymTable* currentCTRL;     
                         currentCTRL = new SymTable((yyvsp[-4].string));
                         currentCTRL->assign_stack_above(current->return_stack_above());
                         currentCTRL->add_above(current);
                         current=currentCTRL;
                         Vector_Tabele.push_back(current);
                    }
#line 1686 "maker.tab.c"
    break;

  case 60: /* $@12: %empty  */
#line 248 "maker.y"
                             {
                              current->set_body((yyvsp[0].ListOfNodes));
                         }
#line 1694 "maker.tab.c"
    break;

  case 61: /* $@13: %empty  */
#line 251 "maker.y"
                                   {
                                        current=current->next_domain_scope();
                                   }
#line 1702 "maker.tab.c"
    break;

  case 62: /* $@14: %empty  */
#line 255 "maker.y"
                              {
                                   SymTable* currentCTRL;     
                                   currentCTRL = new SymTable((yyvsp[-11].string));
                                   currentCTRL->assign_stack_above(current->return_stack_above());
                                   currentCTRL->add_above(current);
                                   current=currentCTRL;
                                   Vector_Tabele.push_back(current);
                              }
#line 1715 "maker.tab.c"
    break;

  case 63: /* $@15: %empty  */
#line 263 "maker.y"
                                                      {
                                                       current->set_body((yyvsp[0].ListOfNodes));
                                                  }
#line 1723 "maker.tab.c"
    break;

  case 64: /* if_node: IF '(' boolean_expression ')' CBEGIN $@11 list $@12 CEND $@13 ELSE CBEGIN $@14 list $@15 CEND  */
#line 266 "maker.y"
                              {
                                   class ASTNode* combine;
                                   combine=new ASTNode((yyvsp[-9].ListOfNodes) , (yyvsp[-2].ListOfNodes) , &errorCount);
                                   (yyval.ListOfNodes)=new ASTNode("if" , (yyvsp[-13].ListOfNodes) , combine , &errorCount , yylineno , current);
                                   current=current->next_domain_scope();
                              }
#line 1734 "maker.tab.c"
    break;

  case 65: /* $@16: %empty  */
#line 274 "maker.y"
               {
                 SymTable* currentCTRL;     
                 currentCTRL = new SymTable((yyvsp[-9].string));
                 currentCTRL->assign_stack_above(current->return_stack_above());
                 currentCTRL->add_above(current);
                 current=currentCTRL;
                 Vector_Tabele.push_back(current);
               }
#line 1747 "maker.tab.c"
    break;

  case 66: /* $@17: %empty  */
#line 282 "maker.y"
                                                                                        {current->set_body((yyvsp[0].ListOfNodes));}
#line 1753 "maker.tab.c"
    break;

  case 67: /* for_node: FOR '(' assign_node ';' boolean_expression ';' expression_for ';' ')' CBEGIN $@16 list $@17 CEND  */
#line 283 "maker.y"
               {
                 class ASTNode* combination1;
                 combination1=new ASTNode((yyvsp[-11].ListOfNodes) , (yyvsp[-9].ListOfNodes) , &errorCount);
                 class ASTNode* combination2;
                 combination2=new ASTNode((yyvsp[-2].ListOfNodes) , (yyvsp[-7].ListOfNodes) , &errorCount);
                 (yyval.ListOfNodes)=new ASTNode("for", combination1 , combination2 , &errorCount , yylineno , current);
                 current=current->next_domain_scope();
               }
#line 1766 "maker.tab.c"
    break;

  case 68: /* print_node: PRINT '(' e ')'  */
#line 292 "maker.y"
                           {(yyval.ListOfNodes)=new ASTNode((yyvsp[-3].string) , (yyvsp[-1].ListOfNodes) , &errorCount , yylineno);}
#line 1772 "maker.tab.c"
    break;

  case 69: /* type_fucntion_node: TYPE_FUNCTION '(' e ')'  */
#line 294 "maker.y"
                                            {(yyval.ListOfNodes)=new ASTNode((yyvsp[-3].string) , (yyvsp[-1].ListOfNodes) , &errorCount , yylineno);}
#line 1778 "maker.tab.c"
    break;

  case 70: /* expression_for: assign_node  */
#line 295 "maker.y"
                          {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1784 "maker.tab.c"
    break;

  case 71: /* expression_for: e  */
#line 296 "maker.y"
                 {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1790 "maker.tab.c"
    break;

  case 74: /* boolean_expression: '(' boolean_expression ')'  */
#line 303 "maker.y"
                                               {(yyval.ListOfNodes)=(yyvsp[-1].ListOfNodes);}
#line 1796 "maker.tab.c"
    break;

  case 75: /* boolean_expression: '(' boolean_expression ')' CONNECT '(' boolean_expression ')'  */
#line 304 "maker.y"
                                                                            {(yyval.ListOfNodes)=new ASTNode((yyvsp[-3].string) , (yyvsp[-5].ListOfNodes) , (yyvsp[-1].ListOfNodes) , &errorCount);}
#line 1802 "maker.tab.c"
    break;

  case 76: /* boolean_expression: y  */
#line 305 "maker.y"
                    {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1808 "maker.tab.c"
    break;

  case 77: /* y: e CMP e  */
#line 307 "maker.y"
            {(yyval.ListOfNodes)=new ASTNode((yyvsp[-1].string) , (yyvsp[-2].ListOfNodes) , (yyvsp[0].ListOfNodes) , &errorCount);}
#line 1814 "maker.tab.c"
    break;

  case 80: /* $@18: %empty  */
#line 314 "maker.y"
          {
            current->check_existance_for_declaration((yyvsp[-3].string), (yyvsp[-2].string) , "class" , errorCount , yylineno);
            SymTable* class_scope;
            class_scope=new SymTable((yyvsp[-2].string));
            class_scope->assign_stack_above(current->return_stack_above());
            class_scope->add_above(current);
            current=class_scope;
            Vector_Tabele.push_back(current);
          }
#line 1828 "maker.tab.c"
    break;

  case 81: /* class: Class_Type Class_ID ':' CBEGIN $@18 global_classes_declaration CEND ';'  */
#line 324 "maker.y"
          {
            current=current->next_domain_scope();
          }
#line 1836 "maker.tab.c"
    break;

  case 87: /* $@19: %empty  */
#line 341 "maker.y"
                             {current->check_existance_for_class_instance((yyvsp[-1].string) , (yyvsp[0].string), errorCount , yylineno);}
#line 1842 "maker.tab.c"
    break;

  case 89: /* class_instance_interior: Class_ID ID  */
#line 343 "maker.y"
                                      {current->check_existance_for_class_instance((yyvsp[-1].string) , (yyvsp[0].string), errorCount , yylineno);}
#line 1848 "maker.tab.c"
    break;

  case 92: /* param: TYPE ID  */
#line 351 "maker.y"
                {current->check_existance_for_declaration((yyvsp[-1].string), (yyvsp[0].string) , "param" , errorCount , yylineno);
                 current->next_domain_scope()->add_params(current->get_dom_name(), current->get_that_variable((yyvsp[0].string)));//adaugam in parametrii varaibilei ID FUNC care e declarata in domeniu de deasupra
                }
#line 1856 "maker.tab.c"
    break;

  case 93: /* call_list: e  */
#line 357 "maker.y"
               {
                    if(param_checker.empty()){
                         errorCount++;
                         yyerror("The number of parameters in the call doesnt match the number of params in the fucntion");
                    }
                    else{
                    class IdInfo* temp;
                    temp=*(param_checker.begin());
                         if(temp->type==(yyvsp[0].ListOfNodes)->get_type()){
                              if(strcmp((yyvsp[0].ListOfNodes)->get_type_for_main() , "int")==0){
                                   class Value val((yyvsp[0].ListOfNodes)->evaluatei());
                                   domeniul_caruia_ii_apartine_varabila->set_value((*temp).name.c_str() , val);
                                   param_checker.erase(param_checker.begin());
                              }
                              else if(strcmp((yyvsp[0].ListOfNodes)->get_type_for_main() , "float")==0){
                                   class Value val((yyvsp[0].ListOfNodes)->evaluatef());
                                   domeniul_caruia_ii_apartine_varabila->set_value((*temp).name.c_str() , val);
                                   param_checker.erase(param_checker.begin());
                              }
                              else{
                                   errorCount++;
                                   yyerror("Unkown Parameter type");
                              }
                         }
                         else{
                              errorCount++;
                              yyerror("Parameter missmatch");
                              param_checker.erase(param_checker.begin());
                         }
                    }
               }
#line 1892 "maker.tab.c"
    break;

  case 94: /* call_list: call_list ',' e  */
#line 388 "maker.y"
                           {
               if(param_checker.empty()){
                    errorCount++;
                    yyerror("The number of parameters in the call doesnt match the number of params in the fucntion");
               }
               else{
                    class IdInfo* temp;
                    temp=*(param_checker.begin());
                    if(temp->type==(yyvsp[0].ListOfNodes)->get_type()){
                         if(strcmp((yyvsp[0].ListOfNodes)->get_type_for_main() , "int")==0){
                              class Value val((yyvsp[0].ListOfNodes)->evaluatei());
                              domeniul_caruia_ii_apartine_varabila->set_value((*temp).name.c_str() , val);
                              param_checker.erase(param_checker.begin());
                              }
                         else if (strcmp((yyvsp[0].ListOfNodes)->get_type_for_main() , "float")==0){
                              class Value val((yyvsp[0].ListOfNodes)->evaluatef());
                              domeniul_caruia_ii_apartine_varabila->set_value((*temp).name.c_str() , val);
                              param_checker.erase(param_checker.begin());
                         }
                         else{
                                   errorCount++;
                                   yyerror("Unkown Parameter type");
                              }
                    }
                    else{
                              errorCount++;
                              yyerror("Parameter missmatch");
                              param_checker.erase(param_checker.begin());
                         }
                    }
               }
#line 1928 "maker.tab.c"
    break;

  case 95: /* e: e '+' e  */
#line 421 "maker.y"
              {(yyval.ListOfNodes)=new ASTNode("+" , (yyvsp[-2].ListOfNodes) , (yyvsp[0].ListOfNodes) , &errorCount);}
#line 1934 "maker.tab.c"
    break;

  case 96: /* e: e '*' e  */
#line 422 "maker.y"
              {(yyval.ListOfNodes)=new ASTNode("*" , (yyvsp[-2].ListOfNodes) , (yyvsp[0].ListOfNodes) , &errorCount);}
#line 1940 "maker.tab.c"
    break;

  case 97: /* e: e '-' e  */
#line 423 "maker.y"
              {(yyval.ListOfNodes)=new ASTNode("-" , (yyvsp[-2].ListOfNodes) , (yyvsp[0].ListOfNodes) , &errorCount);}
#line 1946 "maker.tab.c"
    break;

  case 98: /* e: e '/' e  */
#line 424 "maker.y"
              {(yyval.ListOfNodes)=new ASTNode("/" , (yyvsp[-2].ListOfNodes) , (yyvsp[0].ListOfNodes) , &errorCount);}
#line 1952 "maker.tab.c"
    break;

  case 99: /* e: '(' e ')'  */
#line 425 "maker.y"
              {(yyval.ListOfNodes)=(yyvsp[-1].ListOfNodes);}
#line 1958 "maker.tab.c"
    break;

  case 100: /* e: TRUTH_VALUE  */
#line 426 "maker.y"
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
#line 1973 "maker.tab.c"
    break;

  case 101: /* e: NR  */
#line 436 "maker.y"
              {Value val(atoi(yytext));
               (yyval.ListOfNodes)=new ASTNode(val , "int" , &errorCount);}
#line 1980 "maker.tab.c"
    break;

  case 102: /* e: REAL  */
#line 438 "maker.y"
              {Value val((float)atof(yytext));
               (yyval.ListOfNodes)=new ASTNode(val , "float" , &errorCount);}
#line 1987 "maker.tab.c"
    break;

  case 103: /* e: ID  */
#line 440 "maker.y"
              {
               domeniul_caruia_ii_apartine_varabila=current->check_existance_for_use((yyvsp[0].string) , errorCount , yylineno);
               (yyval.ListOfNodes)=new ASTNode( domeniul_caruia_ii_apartine_varabila->get_that_variable((yyvsp[0].string)), &errorCount , yylineno);//??? MAybe it will work like this?
               //$$=new ASTNode($1 , current , errorCount , yylineno); FUCK THIS LINE IN PARTICULAR (AM TRECUT PRIN MUSCIAL DE 3 ORI LA ASTA)
              }
#line 1997 "maker.tab.c"
    break;

  case 104: /* e: function_call_node  */
#line 445 "maker.y"
                     {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 2003 "maker.tab.c"
    break;

  case 105: /* e: STRING  */
#line 446 "maker.y"
               {Value val((yyvsp[0].string));
               (yyval.ListOfNodes)=new ASTNode(val , "string" , &errorCount);}
#line 2010 "maker.tab.c"
    break;


#line 2014 "maker.tab.c"

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

#line 450 "maker.y"

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
