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
  YYSYMBOL_INC = 18,                       /* INC  */
  YYSYMBOL_DEC = 19,                       /* DEC  */
  YYSYMBOL_NR = 20,                        /* NR  */
  YYSYMBOL_CONNECT = 21,                   /* CONNECT  */
  YYSYMBOL_VOID = 22,                      /* VOID  */
  YYSYMBOL_RETURN = 23,                    /* RETURN  */
  YYSYMBOL_ASSIGN = 24,                    /* ASSIGN  */
  YYSYMBOL_TRUTH_VALUE = 25,               /* TRUTH_VALUE  */
  YYSYMBOL_PRINT = 26,                     /* PRINT  */
  YYSYMBOL_27_ = 27,                       /* '+'  */
  YYSYMBOL_28_ = 28,                       /* '-'  */
  YYSYMBOL_29_ = 29,                       /* '*'  */
  YYSYMBOL_30_ = 30,                       /* '/'  */
  YYSYMBOL_31_ = 31,                       /* '('  */
  YYSYMBOL_32_ = 32,                       /* ')'  */
  YYSYMBOL_33_ = 33,                       /* ';'  */
  YYSYMBOL_34_ = 34,                       /* '['  */
  YYSYMBOL_35_ = 35,                       /* ']'  */
  YYSYMBOL_36_ = 36,                       /* ':'  */
  YYSYMBOL_37_ = 37,                       /* ','  */
  YYSYMBOL_YYACCEPT = 38,                  /* $accept  */
  YYSYMBOL_progr = 39,                     /* progr  */
  YYSYMBOL_main = 40,                      /* main  */
  YYSYMBOL_41_1 = 41,                      /* $@1  */
  YYSYMBOL_42_2 = 42,                      /* $@2  */
  YYSYMBOL_global_classes_declaration = 43, /* global_classes_declaration  */
  YYSYMBOL_functions_generator = 44,       /* functions_generator  */
  YYSYMBOL_functions = 45,                 /* functions  */
  YYSYMBOL_46_3 = 46,                      /* $@3  */
  YYSYMBOL_47_4 = 47,                      /* $@4  */
  YYSYMBOL_48_5 = 48,                      /* $@5  */
  YYSYMBOL_49_6 = 49,                      /* $@6  */
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
  YYSYMBOL_list_for_else = 60,             /* list_for_else  */
  YYSYMBOL_statement = 61,                 /* statement  */
  YYSYMBOL_62_7 = 62,                      /* $@7  */
  YYSYMBOL_63_8 = 63,                      /* $@8  */
  YYSYMBOL_64_9 = 64,                      /* $@9  */
  YYSYMBOL_65_10 = 65,                     /* $@10  */
  YYSYMBOL_66_11 = 66,                     /* $@11  */
  YYSYMBOL_67_12 = 67,                     /* $@12  */
  YYSYMBOL_68_13 = 68,                     /* $@13  */
  YYSYMBOL_statement_main = 69,            /* statement_main  */
  YYSYMBOL_70_14 = 70,                     /* $@14  */
  YYSYMBOL_71_15 = 71,                     /* $@15  */
  YYSYMBOL_72_16 = 72,                     /* $@16  */
  YYSYMBOL_73_17 = 73,                     /* $@17  */
  YYSYMBOL_74_18 = 74,                     /* $@18  */
  YYSYMBOL_75_19 = 75,                     /* $@19  */
  YYSYMBOL_76_20 = 76,                     /* $@20  */
  YYSYMBOL_assign_node = 77,               /* assign_node  */
  YYSYMBOL_function_call_node = 78,        /* function_call_node  */
  YYSYMBOL_79_21 = 79,                     /* $@21  */
  YYSYMBOL_while_node = 80,                /* while_node  */
  YYSYMBOL_81_22 = 81,                     /* $@22  */
  YYSYMBOL_82_23 = 82,                     /* $@23  */
  YYSYMBOL_print_node = 83,                /* print_node  */
  YYSYMBOL_inc_dec = 84,                   /* inc_dec  */
  YYSYMBOL_declarations_interior = 85,     /* declarations_interior  */
  YYSYMBOL_boolean_expression = 86,        /* boolean_expression  */
  YYSYMBOL_y = 87,                         /* y  */
  YYSYMBOL_classes = 88,                   /* classes  */
  YYSYMBOL_class = 89,                     /* class  */
  YYSYMBOL_90_24 = 90,                     /* $@24  */
  YYSYMBOL_class_initialize_initial = 91,  /* class_initialize_initial  */
  YYSYMBOL_class_initialize = 92,          /* class_initialize  */
  YYSYMBOL_class_initialize_interior = 93, /* class_initialize_interior  */
  YYSYMBOL_class_instance = 94,            /* class_instance  */
  YYSYMBOL_95_25 = 95,                     /* $@25  */
  YYSYMBOL_class_instance_interior = 96,   /* class_instance_interior  */
  YYSYMBOL_list_param = 97,                /* list_param  */
  YYSYMBOL_param = 98,                     /* param  */
  YYSYMBOL_call_list = 99,                 /* call_list  */
  YYSYMBOL_e = 100                         /* e  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 26 "maker.y"

     

#line 229 "maker.tab.c"


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
#define YYLAST   219

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  63
/* YYNRULES -- Number of rules.  */
#define YYNRULES  107
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  229

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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      31,    32,    29,    27,    37,    28,     2,    30,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    36,    33,
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
      25,    26
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    36,    36,    37,    41,    49,    40,    58,    59,    60,
      61,    64,    65,    68,    77,    79,    67,   103,   102,   117,
     118,   120,   121,   124,   127,   130,   131,   133,   134,   137,
     140,   143,   144,   146,   147,   149,   150,   152,   155,   158,
     161,   183,   192,   196,   160,   209,   232,   247,   208,   259,
     260,   263,   266,   269,   272,   276,   298,   307,   311,   275,
     324,   347,   362,   323,   374,   375,   378,   382,   387,   386,
     424,   432,   423,   443,   445,   446,   449,   450,   453,   454,
     455,   457,   459,   460,   464,   463,   479,   480,   484,   485,
     488,   491,   491,   493,   496,   497,   501,   507,   539,   666,
     667,   668,   669,   670,   671,   686,   688,   690
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
  "Class_Type", "IF", "ELSE", "WHILE", "FOR", "CMP", "INC", "DEC", "NR",
  "CONNECT", "VOID", "RETURN", "ASSIGN", "TRUTH_VALUE", "PRINT", "'+'",
  "'-'", "'*'", "'/'", "'('", "')'", "';'", "'['", "']'", "':'", "','",
  "$accept", "progr", "main", "$@1", "$@2", "global_classes_declaration",
  "functions_generator", "functions", "$@3", "$@4", "$@5", "$@6",
  "variables_generator", "variables", "fundamentals", "arr", "arr_list",
  "variables_interior", "fundamentals_interior", "arr_interior",
  "list_main", "list", "list_for_else", "statement", "$@7", "$@8", "$@9",
  "$@10", "$@11", "$@12", "$@13", "statement_main", "$@14", "$@15", "$@16",
  "$@17", "$@18", "$@19", "$@20", "assign_node", "function_call_node",
  "$@21", "while_node", "$@22", "$@23", "print_node", "inc_dec",
  "declarations_interior", "boolean_expression", "y", "classes", "class",
  "$@24", "class_initialize_initial", "class_initialize",
  "class_initialize_interior", "class_instance", "$@25",
  "class_instance_interior", "list_param", "param", "call_list", "e", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-110)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      10,    -2,     6,    22,    35,    42,    27,  -110,    66,  -110,
    -110,  -110,    10,  -110,    41,    55,  -110,  -110,  -110,  -110,
      62,  -110,    27,  -110,    78,  -110,  -110,    73,    46,    69,
     110,    64,    57,  -110,   112,    42,    78,  -110,    99,   118,
    -110,  -110,   118,   111,   120,   134,   141,   121,   122,   123,
     124,  -110,  -110,  -110,  -110,   125,  -110,  -110,  -110,  -110,
    -110,  -110,  -110,  -110,  -110,  -110,   117,   147,     7,  -110,
      66,    53,     9,     9,   126,   117,  -110,    21,    21,   150,
       9,   156,    57,   128,  -110,  -110,   157,   118,   158,   160,
    -110,  -110,  -110,  -110,     9,    90,   119,     9,  -110,    21,
     131,  -110,    -3,   135,   120,   133,    97,  -110,  -110,  -110,
      88,  -110,   136,    88,   103,     9,     9,     9,     9,  -110,
     108,   119,   138,    52,  -110,     9,   163,    21,  -110,   140,
     142,   143,  -110,   139,  -110,  -110,  -110,  -110,  -110,  -110,
     169,  -110,    13,    13,  -110,  -110,  -110,     9,   155,   172,
     119,  -110,   145,     9,    21,   150,   159,    88,   146,   119,
     149,  -110,    88,  -110,   109,   151,   148,     9,  -110,  -110,
      21,    88,  -110,   175,  -110,  -110,    21,    80,   153,   180,
     181,  -110,   183,   161,  -110,  -110,  -110,  -110,    93,  -110,
    -110,   184,   177,  -110,  -110,   162,    88,   187,   164,   188,
     166,   186,  -110,  -110,  -110,   194,  -110,    93,    88,  -110,
     189,   167,  -110,   195,    88,   197,   173,  -110,   198,  -110,
     201,  -110,    88,  -110,   202,    88,  -110,   203,  -110
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      10,     0,     0,     0,     0,     0,     9,    12,     8,    20,
      21,    22,    10,    82,    13,     0,    17,     1,     4,     3,
       0,    11,     7,    19,    87,    83,    23,     0,     0,     0,
       0,     0,     0,    13,     0,     0,    86,    88,     0,     0,
      24,    84,     0,     0,    68,     0,     0,     0,     0,     0,
       0,    76,    27,    28,     5,     0,    52,    53,    54,    65,
      64,    77,    90,    91,     2,    89,    26,     0,     0,    94,
      10,     0,     0,     0,     0,    29,    93,     0,     0,     0,
       0,     0,    31,     0,    25,    96,     0,     0,     0,     0,
     106,   107,   105,   104,     0,     0,    67,     0,    30,     0,
       0,    80,     0,     0,     0,     0,     0,     6,    32,    92,
       0,    95,     0,     0,     0,     0,     0,     0,     0,    66,
       0,    97,     0,     0,    55,     0,     0,     0,    73,     0,
       0,     0,    14,     0,    37,    38,    39,    50,    49,    85,
       0,   103,    99,   101,   100,   102,    69,     0,    78,     0,
      81,    70,     0,     0,     0,     0,     0,    33,     0,    98,
       0,    56,     0,    60,     0,     0,     0,     0,    34,    18,
       0,     0,    71,     0,    51,    40,     0,     0,     0,     0,
       0,    61,     0,     0,    15,    79,    57,    72,     0,    41,
      45,     0,     0,    74,    75,     0,     0,     0,     0,     0,
       0,     0,    46,    16,    58,     0,    42,     0,    36,    62,
       0,     0,    35,     0,     0,     0,     0,    59,     0,    43,
       0,    63,    36,    47,     0,     0,    44,     0,    48
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -110,  -110,   154,  -110,  -110,    -9,   199,    -1,  -110,  -110,
    -110,  -110,  -110,   204,  -110,  -110,   -60,  -110,  -110,  -110,
     129,  -109,   -12,  -110,  -110,  -110,  -110,  -110,  -110,  -110,
    -110,  -110,  -110,  -110,  -110,  -110,  -110,  -110,  -110,   -32,
     -24,  -110,   -23,  -110,  -110,   -22,     8,   -19,   -76,  -110,
    -110,   205,  -110,  -110,  -110,  -110,   178,  -110,  -110,   171,
     132,  -110,   -61
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,    19,    32,    81,     5,     6,     7,    28,   156,
     191,    31,     8,     9,    10,    11,    29,    51,    52,    53,
      54,   212,   213,   133,   182,   196,   210,   222,   197,   207,
     225,    55,   149,   171,   192,   208,   173,   188,   214,   134,
     135,    74,   136,   162,   180,   137,   195,   138,   100,   101,
      12,    13,    70,    35,    36,    61,    37,    83,    62,    68,
      69,   120,   102
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      56,   132,   103,    24,   140,    21,    84,    14,    57,    58,
      59,    95,    96,    60,   125,    98,    90,    15,    91,   106,
       1,    21,     2,   122,   115,   116,   117,   118,    90,    92,
      91,    16,     3,   114,    93,    17,   121,    20,   123,    86,
      94,    92,   117,   118,    87,    18,    93,   105,   168,     3,
      56,   152,    99,   172,   142,   143,   144,   145,    57,    58,
      59,    88,   179,    60,   150,    43,    44,    45,    46,   125,
      47,    33,    48,    49,    26,    27,     1,    39,   165,   115,
     116,   117,   118,    50,   141,    89,   159,   201,     3,    34,
      87,    30,   164,    38,   178,    42,   129,    44,    45,    46,
     183,   130,    40,    48,   131,   218,   177,   115,   116,   117,
     118,   193,   194,   184,    50,    41,   227,   115,   116,   117,
     118,    63,   119,   166,   115,   116,   117,   118,    67,   128,
     115,   116,   117,   118,    66,   141,   115,   116,   117,   118,
     146,   174,    72,    75,    73,   147,   115,   116,   117,   118,
      76,    27,    77,    78,    79,    80,    85,    97,    82,   104,
     107,   109,   110,   124,   112,   113,   127,   126,   151,   139,
     148,   153,   157,   154,   155,   158,   160,   161,   163,   169,
     170,   176,   167,   175,   181,   185,   186,   187,   189,    64,
     198,   199,   206,   204,   190,   200,   202,   203,   205,   209,
     216,   217,   219,   215,   221,   220,   223,    22,   226,   228,
     224,   108,    23,    71,    65,   211,     0,    25,     0,   111
};

static const yytype_int16 yycheck[] =
{
      32,   110,    78,    12,   113,     6,    66,     9,    32,    32,
      32,    72,    73,    32,    17,    75,     7,    11,     9,    80,
      10,    22,    12,    99,    27,    28,    29,    30,     7,    20,
       9,     9,    22,    94,    25,     0,    97,    10,    99,    32,
      31,    20,    29,    30,    37,     3,    25,    79,   157,    22,
      82,   127,    31,   162,   115,   116,   117,   118,    82,    82,
      82,    70,   171,    82,   125,     8,     9,    10,    11,    17,
      13,     9,    15,    16,    33,    34,    10,    31,   154,    27,
      28,    29,    30,    26,    32,    32,   147,   196,    22,    11,
      37,    36,   153,    20,   170,    31,     8,     9,    10,    11,
     176,    13,    33,    15,    16,   214,   167,    27,    28,    29,
      30,    18,    19,    33,    26,     5,   225,    27,    28,    29,
      30,     9,    32,   155,    27,    28,    29,    30,    10,    32,
      27,    28,    29,    30,    35,    32,    27,    28,    29,    30,
      32,    32,    31,     9,    24,    37,    27,    28,    29,    30,
       9,    34,    31,    31,    31,    31,     9,    31,    33,     9,
       4,    33,     5,    32,     6,     5,    33,    32,     5,    33,
      32,    31,    33,    31,    31,     6,    21,     5,    33,    33,
      31,    33,    23,    32,     9,    32,     6,     6,     5,    35,
       6,    14,     6,     5,    33,    33,     9,    33,    32,     5,
      33,     6,     5,    14,     6,    32,     5,     8,     6,     6,
     222,    82,     8,    42,    36,   207,    -1,    12,    -1,    87
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    10,    12,    22,    39,    43,    44,    45,    50,    51,
      52,    53,    88,    89,     9,    11,     9,     0,     3,    40,
      10,    45,    44,    51,    43,    89,    33,    34,    46,    54,
      36,    49,    41,     9,    11,    91,    92,    94,    20,    31,
      33,     5,    31,     8,     9,    10,    11,    13,    15,    16,
      26,    55,    56,    57,    58,    69,    77,    78,    80,    83,
      85,    93,    96,     9,    40,    94,    35,    10,    97,    98,
      90,    97,    31,    24,    79,     9,     9,    31,    31,    31,
      31,    42,    33,    95,    54,     9,    32,    37,    43,    32,
       7,     9,    20,    25,    31,   100,   100,    31,    54,    31,
      86,    87,   100,    86,     9,    77,   100,     4,    58,    33,
       5,    98,     6,     5,   100,    27,    28,    29,    30,    32,
      99,   100,    86,   100,    32,    17,    32,    33,    32,     8,
      13,    16,    59,    61,    77,    78,    80,    83,    85,    33,
      59,    32,   100,   100,   100,   100,    32,    37,    32,    70,
     100,     5,    86,    31,    31,    31,    47,    33,     6,   100,
      21,     5,    81,    33,   100,    86,    77,    23,    59,    33,
      31,    71,    59,    74,    32,    32,    33,   100,    86,    59,
      82,     9,    62,    86,    33,    32,     6,     6,    75,     5,
      33,    48,    72,    18,    19,    84,    63,    66,     6,    14,
      33,    59,     9,    33,     5,    32,     6,    67,    73,     5,
      64,    84,    59,    60,    76,    14,    33,     6,    59,     5,
      32,     6,    65,     5,    60,    68,     6,    59,     6
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    38,    39,    39,    41,    42,    40,    43,    43,    43,
      43,    44,    44,    46,    47,    48,    45,    49,    45,    50,
      50,    51,    51,    52,    53,    54,    54,    55,    55,    56,
      57,    58,    58,    59,    59,    60,    60,    61,    61,    61,
      62,    63,    64,    65,    61,    66,    67,    68,    61,    61,
      61,    61,    69,    69,    69,    70,    71,    72,    73,    69,
      74,    75,    76,    69,    69,    69,    69,    77,    79,    78,
      81,    82,    80,    83,    84,    84,    85,    85,    86,    86,
      86,    87,    88,    88,    90,    89,    91,    91,    92,    92,
      93,    95,    94,    96,    97,    97,    98,    99,    99,   100,
     100,   100,   100,   100,   100,   100,   100,   100
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     2,     0,     0,     5,     2,     1,     1,
       0,     2,     1,     0,     0,     0,    15,     0,    10,     2,
       1,     1,     1,     3,     4,     4,     3,     1,     1,     2,
       3,     2,     3,     2,     3,     1,     0,     1,     1,     1,
       0,     0,     0,     0,    15,     0,     0,     0,    16,     1,
       1,     4,     1,     1,     1,     0,     0,     0,     0,    15,
       0,     0,     0,    16,     1,     1,     4,     3,     0,     5,
       0,     0,     9,     4,     1,     1,     1,     1,     3,     7,
       1,     3,     1,     2,     0,     8,     1,     0,     1,     2,
       1,     0,     4,     2,     1,     3,     2,     1,     3,     3,
       3,     3,     3,     3,     1,     1,     1,     1
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
#line 1338 "maker.tab.c"
    break;

  case 3: /* progr: global_classes_declaration main  */
#line 37 "maker.y"
                                         {if (errorCount == 0) cout<< "The program is correct!" << endl;}
#line 1344 "maker.tab.c"
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
#line 1357 "maker.tab.c"
    break;

  case 5: /* $@2: %empty  */
#line 49 "maker.y"
                    {current->set_body((yyvsp[0].ListOfNodes));
               //$3->run();
               }
#line 1365 "maker.tab.c"
    break;

  case 6: /* main: BGIN $@1 list_main $@2 END  */
#line 52 "maker.y"
                    {
                     //current->remove_from_above();//Scoatem din currentmain
                     current=current->next_domain_scope();
                     //current->remove_from_above();//Scoatem din current
                    }
#line 1375 "maker.tab.c"
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
#line 1389 "maker.tab.c"
    break;

  case 14: /* $@4: %empty  */
#line 77 "maker.y"
                                             {    current->set_body((yyvsp[0].ListOfNodes));
                                                  // $8->run();
                                                       }
#line 1397 "maker.tab.c"
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
#line 1422 "maker.tab.c"
    break;

  case 16: /* functions: TYPE ID $@3 '(' list_param ')' CBEGIN list $@4 RETURN e ';' $@5 CEND ';'  */
#line 99 "maker.y"
                                                                           {
                                                                           current=current->next_domain_scope();
                                                                           }
#line 1430 "maker.tab.c"
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
#line 1443 "maker.tab.c"
    break;

  case 18: /* functions: VOID ID $@6 '(' list_param ')' CBEGIN list CEND ';'  */
#line 112 "maker.y"
                                   {
                                    current=current->next_domain_scope();
                                   }
#line 1451 "maker.tab.c"
    break;

  case 23: /* fundamentals: TYPE ID ';'  */
#line 124 "maker.y"
                          {current->check_existance_for_declaration((yyvsp[-2].string), (yyvsp[-1].string) , "var" , errorCount , yylineno);}
#line 1457 "maker.tab.c"
    break;

  case 24: /* arr: TYPE ID arr_list ';'  */
#line 127 "maker.y"
                           {current->check_existance_for_declaration((yyvsp[-3].string), (yyvsp[-2].string) , "array" , errorCount , yylineno);}
#line 1463 "maker.tab.c"
    break;

  case 29: /* fundamentals_interior: TYPE ID  */
#line 137 "maker.y"
                                {current->check_existance_for_declaration((yyvsp[-1].string), (yyvsp[0].string) , "var" , errorCount , yylineno);}
#line 1469 "maker.tab.c"
    break;

  case 30: /* arr_interior: TYPE ID arr_list  */
#line 140 "maker.y"
                                 {current->check_existance_for_declaration((yyvsp[-2].string), (yyvsp[-1].string) , "array" , errorCount , yylineno);}
#line 1475 "maker.tab.c"
    break;

  case 31: /* list_main: statement_main ';'  */
#line 143 "maker.y"
                                {(yyval.ListOfNodes)=new ASTNode("final_sequence" , (yyvsp[-1].ListOfNodes) , errorCount , yylineno, current);}
#line 1481 "maker.tab.c"
    break;

  case 32: /* list_main: statement_main ';' list_main  */
#line 144 "maker.y"
                                          {(yyval.ListOfNodes)=new ASTNode("sequence" , (yyvsp[-2].ListOfNodes) ,(yyvsp[0].ListOfNodes) , errorCount , current);}
#line 1487 "maker.tab.c"
    break;

  case 33: /* list: statement ';'  */
#line 146 "maker.y"
                      {(yyval.ListOfNodes)=new ASTNode("final_sequence" , (yyvsp[-1].ListOfNodes) , errorCount , yylineno, current);}
#line 1493 "maker.tab.c"
    break;

  case 34: /* list: statement ';' list  */
#line 147 "maker.y"
                           {(yyval.ListOfNodes)=new ASTNode("sequence" , (yyvsp[-2].ListOfNodes) ,(yyvsp[0].ListOfNodes) , errorCount , current);}
#line 1499 "maker.tab.c"
    break;

  case 37: /* statement: assign_node  */
#line 152 "maker.y"
                       {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);
                      
                         }
#line 1507 "maker.tab.c"
    break;

  case 39: /* statement: while_node  */
#line 158 "maker.y"
                    {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);
                         }
#line 1514 "maker.tab.c"
    break;

  case 40: /* $@7: %empty  */
#line 161 "maker.y"
               {    //cout<<$3->get_type_for_main()<<endl;
                   if(strcmp((yyvsp[-1].ListOfNodes)->get_type_for_main(),"int")==0){
                         if((yyvsp[-1].ListOfNodes)->evaluatei()==true){
                              //printf("Expression is TRUE\n");
                         }
                         else{
                              //printf("Expression is FALSE\n");
                         }
                    }
                    else if(strcmp((yyvsp[-1].ListOfNodes)->get_type_for_main(),"float")==0){
                         if((int)(yyvsp[-1].ListOfNodes)->evaluatef()==true){
                              //printf("Expression is TRUE\n");
                         }
                         else{
                              //printf("Expression is FALSE\n");
                         }
                    }
                    else{
                         errorCount++;
                         yyerror("Weird expressions in condition");
                    }
               }
#line 1541 "maker.tab.c"
    break;

  case 41: /* $@8: %empty  */
#line 183 "maker.y"
                    {
                         SymTable* currentCTRL;     
                         currentCTRL = new SymTable((yyvsp[-5].string));
                         currentCTRL->assign_stack_above(current->return_stack_above());
                         currentCTRL->add_above(current);
                         current=currentCTRL;
                         Vector_Tabele.push_back(current);
                    }
#line 1554 "maker.tab.c"
    break;

  case 42: /* $@9: %empty  */
#line 192 "maker.y"
                                   {
                                        current=current->next_domain_scope();
                                   }
#line 1562 "maker.tab.c"
    break;

  case 43: /* $@10: %empty  */
#line 196 "maker.y"
                              {
                                   SymTable* currentCTRL;     
                                   currentCTRL = new SymTable((yyvsp[-11].string));
                                   currentCTRL->assign_stack_above(current->return_stack_above());
                                   currentCTRL->add_above(current);
                                   current=currentCTRL;
                                   Vector_Tabele.push_back(current);
                              }
#line 1575 "maker.tab.c"
    break;

  case 44: /* statement: IF '(' boolean_expression ')' $@7 CBEGIN $@8 list CEND $@9 ELSE CBEGIN $@10 list_for_else CEND  */
#line 205 "maker.y"
                              {
                                   current=current->next_domain_scope();
                              }
#line 1583 "maker.tab.c"
    break;

  case 45: /* $@11: %empty  */
#line 209 "maker.y"
                              {//cout<<$9->get_type_for_main()<<endl;
                                   if(strcmp((yyvsp[-1].ListOfNodes)->get_type_for_main(),"int")==0){
                         if((yyvsp[-1].ListOfNodes)->evaluatei()==true){
                              //printf("Expression is TRUE\n");
                         }
                         else{
                              //printf("Expression is FALSE\n");
                         }
                    }
                    else if(strcmp((yyvsp[-1].ListOfNodes)->get_type_for_main(),"float")==0){
                         if((int)(yyvsp[-1].ListOfNodes)->evaluatef()==true){
                              //printf("Expression is TRUE\n");
                         }
                         else{
                              //printf("Expression is FALSE\n");
                         }
                    }
                    else{
                         errorCount++;
                         yyerror("Weird expressions in condition");
                    }
                              }
#line 1610 "maker.tab.c"
    break;

  case 46: /* $@12: %empty  */
#line 232 "maker.y"
               {
                 if(strcmp((yyvsp[-5].ListOfNodes)->get_type_for_main() , (yyvsp[0].string))!=0)
                    {
                      errorCount++;
                      char*buff=new char[256];
                      strcpy(buff ,"The variable you're trying to inc/dec ");
                      strcat(buff , (yyvsp[0].string));
                      strcat(buff ," is different from the one you assigned "); 
                      strcat(buff , (yyvsp[-5].ListOfNodes)->get_type_for_main());
                      yyerror(buff);
                      delete [] buff;
                      buff=nullptr;
                    }
               }
#line 1629 "maker.tab.c"
    break;

  case 47: /* $@13: %empty  */
#line 247 "maker.y"
               {
                 SymTable* currentCTRL;     
                 currentCTRL = new SymTable((yyvsp[-12].string));
                 currentCTRL->assign_stack_above(current->return_stack_above());
                 currentCTRL->add_above(current);
                 current=currentCTRL;
                 Vector_Tabele.push_back(current);
               }
#line 1642 "maker.tab.c"
    break;

  case 48: /* statement: FOR '(' assign_node ';' boolean_expression ';' $@11 ID $@12 inc_dec ';' ')' CBEGIN $@13 list CEND  */
#line 256 "maker.y"
               {
                 current=current->next_domain_scope();
               }
#line 1650 "maker.tab.c"
    break;

  case 50: /* statement: print_node  */
#line 260 "maker.y"
                     {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);
         
         }
#line 1658 "maker.tab.c"
    break;

  case 52: /* statement_main: assign_node  */
#line 266 "maker.y"
                            {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);
                         (yyval.ListOfNodes)->run();
                         }
#line 1666 "maker.tab.c"
    break;

  case 54: /* statement_main: while_node  */
#line 272 "maker.y"
                    {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);
                     (yyval.ListOfNodes)->run();
                         }
#line 1674 "maker.tab.c"
    break;

  case 55: /* $@14: %empty  */
#line 276 "maker.y"
               {    //cout<<$3->get_type_for_main()<<endl;
                   if(strcmp((yyvsp[-1].ListOfNodes)->get_type_for_main(),"int")==0){
                         if((yyvsp[-1].ListOfNodes)->evaluatei()==true){
                              //printf("Expression is TRUE\n");
                         }
                         else{
                              //printf("Expression is FALSE\n");
                         }
                    }
                    else if(strcmp((yyvsp[-1].ListOfNodes)->get_type_for_main(),"float")==0){
                         if((int)(yyvsp[-1].ListOfNodes)->evaluatef()==true){
                              //printf("Expression is TRUE\n");
                         }
                         else{
                              //printf("Expression is FALSE\n");
                         }
                    }
                    else{
                         errorCount++;
                         yyerror("Weird expressions in condition");
                    }
               }
#line 1701 "maker.tab.c"
    break;

  case 56: /* $@15: %empty  */
#line 298 "maker.y"
                    {
                         SymTable* currentCTRL;     
                         currentCTRL = new SymTable((yyvsp[-5].string));
                         currentCTRL->assign_stack_above(current->return_stack_above());
                         currentCTRL->add_above(current);
                         current=currentCTRL;
                         Vector_Tabele.push_back(current);
                    }
#line 1714 "maker.tab.c"
    break;

  case 57: /* $@16: %empty  */
#line 307 "maker.y"
                                   {
                                        current=current->next_domain_scope();
                                   }
#line 1722 "maker.tab.c"
    break;

  case 58: /* $@17: %empty  */
#line 311 "maker.y"
                              {
                                   SymTable* currentCTRL;     
                                   currentCTRL = new SymTable((yyvsp[-11].string));
                                   currentCTRL->assign_stack_above(current->return_stack_above());
                                   currentCTRL->add_above(current);
                                   current=currentCTRL;
                                   Vector_Tabele.push_back(current);
                              }
#line 1735 "maker.tab.c"
    break;

  case 59: /* statement_main: IF '(' boolean_expression ')' $@14 CBEGIN $@15 list CEND $@16 ELSE CBEGIN $@17 list_for_else CEND  */
#line 320 "maker.y"
                              {
                                   current=current->next_domain_scope();
                              }
#line 1743 "maker.tab.c"
    break;

  case 60: /* $@18: %empty  */
#line 324 "maker.y"
                              {//cout<<$9->get_type_for_main()<<endl;
                                   if(strcmp((yyvsp[-1].ListOfNodes)->get_type_for_main(),"int")==0){
                         if((yyvsp[-1].ListOfNodes)->evaluatei()==true){
                              //printf("Expression is TRUE\n");
                         }
                         else{
                              //printf("Expression is FALSE\n");
                         }
                    }
                    else if(strcmp((yyvsp[-1].ListOfNodes)->get_type_for_main(),"float")==0){
                         if((int)(yyvsp[-1].ListOfNodes)->evaluatef()==true){
                              //printf("Expression is TRUE\n");
                         }
                         else{
                              //printf("Expression is FALSE\n");
                         }
                    }
                    else{
                         errorCount++;
                         yyerror("Weird expressions in condition");
                    }
                              }
#line 1770 "maker.tab.c"
    break;

  case 61: /* $@19: %empty  */
#line 347 "maker.y"
               {
                 if(strcmp((yyvsp[-5].ListOfNodes)->get_type_for_main() , (yyvsp[0].string))!=0)
                    {
                      errorCount++;
                      char*buff=new char[256];
                      strcpy(buff ,"The variable you're trying to inc/dec ");
                      strcat(buff , (yyvsp[0].string));
                      strcat(buff ," is different from the one you assigned "); 
                      strcat(buff , (yyvsp[-5].ListOfNodes)->get_type_for_main());
                      yyerror(buff);
                      delete [] buff;
                      buff=nullptr;
                    }
               }
#line 1789 "maker.tab.c"
    break;

  case 62: /* $@20: %empty  */
#line 362 "maker.y"
               {
                 SymTable* currentCTRL;     
                 currentCTRL = new SymTable((yyvsp[-12].string));
                 currentCTRL->assign_stack_above(current->return_stack_above());
                 currentCTRL->add_above(current);
                 current=currentCTRL;
                 Vector_Tabele.push_back(current);
               }
#line 1802 "maker.tab.c"
    break;

  case 63: /* statement_main: FOR '(' assign_node ';' boolean_expression ';' $@18 ID $@19 inc_dec ';' ')' CBEGIN $@20 list CEND  */
#line 371 "maker.y"
               {
                 current=current->next_domain_scope();
               }
#line 1810 "maker.tab.c"
    break;

  case 65: /* statement_main: print_node  */
#line 375 "maker.y"
                     {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);
         (yyval.ListOfNodes)->run();
         }
#line 1818 "maker.tab.c"
    break;

  case 67: /* assign_node: ID ASSIGN e  */
#line 382 "maker.y"
                        {
                         (yyval.ListOfNodes)=new ASTNode((yyvsp[-2].string) , "<-" , (yyvsp[0].ListOfNodes) ,current, errorCount, yylineno);
                         }
#line 1826 "maker.tab.c"
    break;

  case 68: /* $@21: %empty  */
#line 387 "maker.y"
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
#line 1858 "maker.tab.c"
    break;

  case 69: /* function_call_node: ID $@21 '(' call_list ')'  */
#line 414 "maker.y"
                                 {delete[] Denumire_apelant;
                                  Denumire_apelant=nullptr;
                                  if(!param_checker.empty()){
                                   errorCount++;
                                   yyerror("Not enough parameters in function call");
                                  }
                                 }
#line 1870 "maker.tab.c"
    break;

  case 70: /* $@22: %empty  */
#line 424 "maker.y"
               {
                    SymTable* currentCTRL;     
                    currentCTRL = new SymTable((yyvsp[-4].string));
                    currentCTRL->assign_stack_above(current->return_stack_above());
                    currentCTRL->add_above(current);
                    current=currentCTRL;
                    Vector_Tabele.push_back(current);
               }
#line 1883 "maker.tab.c"
    break;

  case 71: /* $@23: %empty  */
#line 432 "maker.y"
                             {
                              
                              current->set_body((yyvsp[0].ListOfNodes));
                              // $8->run();
                              }
#line 1893 "maker.tab.c"
    break;

  case 72: /* while_node: WHILE '(' boolean_expression ')' CBEGIN $@22 list $@23 CEND  */
#line 438 "maker.y"
                                   {
                                        (yyval.ListOfNodes)=new ASTNode("while" , (yyvsp[-6].ListOfNodes) , (yyvsp[-2].ListOfNodes) , errorCount , yylineno , current);
                                        current=current->next_domain_scope();
                                   }
#line 1902 "maker.tab.c"
    break;

  case 73: /* print_node: PRINT '(' e ')'  */
#line 443 "maker.y"
                           {(yyval.ListOfNodes)=new ASTNode((yyvsp[-3].string) , (yyvsp[-1].ListOfNodes) , errorCount , yylineno);}
#line 1908 "maker.tab.c"
    break;

  case 78: /* boolean_expression: '(' boolean_expression ')'  */
#line 453 "maker.y"
                                               {(yyval.ListOfNodes)=(yyvsp[-1].ListOfNodes);}
#line 1914 "maker.tab.c"
    break;

  case 79: /* boolean_expression: '(' boolean_expression ')' CONNECT '(' boolean_expression ')'  */
#line 454 "maker.y"
                                                                            {(yyval.ListOfNodes)=new ASTNode((yyvsp[-3].string) , (yyvsp[-5].ListOfNodes) , (yyvsp[-1].ListOfNodes) , errorCount);}
#line 1920 "maker.tab.c"
    break;

  case 80: /* boolean_expression: y  */
#line 455 "maker.y"
                    {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1926 "maker.tab.c"
    break;

  case 81: /* y: e CMP e  */
#line 457 "maker.y"
            {(yyval.ListOfNodes)=new ASTNode((yyvsp[-1].string) , (yyvsp[-2].ListOfNodes) , (yyvsp[0].ListOfNodes) , errorCount);}
#line 1932 "maker.tab.c"
    break;

  case 84: /* $@24: %empty  */
#line 464 "maker.y"
          {
            current->check_existance_for_declaration((yyvsp[-3].string), (yyvsp[-2].string) , "class" , errorCount , yylineno);
            SymTable* class_scope;
            class_scope=new SymTable((yyvsp[-2].string));
            class_scope->assign_stack_above(current->return_stack_above());
            class_scope->add_above(current);
            current=class_scope;
            Vector_Tabele.push_back(current);
          }
#line 1946 "maker.tab.c"
    break;

  case 85: /* class: Class_Type Class_ID ':' CBEGIN $@24 global_classes_declaration CEND ';'  */
#line 474 "maker.y"
          {
            current=current->next_domain_scope();
          }
#line 1954 "maker.tab.c"
    break;

  case 91: /* $@25: %empty  */
#line 491 "maker.y"
                             {current->check_existance_for_class_instance((yyvsp[-1].string) , (yyvsp[0].string), errorCount , yylineno);}
#line 1960 "maker.tab.c"
    break;

  case 93: /* class_instance_interior: Class_ID ID  */
#line 493 "maker.y"
                                      {current->check_existance_for_class_instance((yyvsp[-1].string) , (yyvsp[0].string), errorCount , yylineno);}
#line 1966 "maker.tab.c"
    break;

  case 96: /* param: TYPE ID  */
#line 501 "maker.y"
                {current->check_existance_for_declaration((yyvsp[-1].string), (yyvsp[0].string) , "param" , errorCount , yylineno);
                 current->next_domain_scope()->add_params(current->get_dom_name(), current->get_that_variable((yyvsp[0].string)));//adaugam in parametrii varaibilei ID FUNC care e declarata in domeniu de deasupra
                }
#line 1974 "maker.tab.c"
    break;

  case 97: /* call_list: e  */
#line 508 "maker.y"
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
#line 2010 "maker.tab.c"
    break;

  case 98: /* call_list: call_list ',' e  */
#line 539 "maker.y"
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
#line 2048 "maker.tab.c"
    break;

  case 99: /* e: e '+' e  */
#line 666 "maker.y"
              {(yyval.ListOfNodes)=new ASTNode("+" , (yyvsp[-2].ListOfNodes) , (yyvsp[0].ListOfNodes) , errorCount);}
#line 2054 "maker.tab.c"
    break;

  case 100: /* e: e '*' e  */
#line 667 "maker.y"
              {(yyval.ListOfNodes)=new ASTNode("*" , (yyvsp[-2].ListOfNodes) , (yyvsp[0].ListOfNodes) , errorCount);}
#line 2060 "maker.tab.c"
    break;

  case 101: /* e: e '-' e  */
#line 668 "maker.y"
              {(yyval.ListOfNodes)=new ASTNode("-" , (yyvsp[-2].ListOfNodes) , (yyvsp[0].ListOfNodes) , errorCount);}
#line 2066 "maker.tab.c"
    break;

  case 102: /* e: e '/' e  */
#line 669 "maker.y"
              {(yyval.ListOfNodes)=new ASTNode("/" , (yyvsp[-2].ListOfNodes) , (yyvsp[0].ListOfNodes) , errorCount);}
#line 2072 "maker.tab.c"
    break;

  case 103: /* e: '(' e ')'  */
#line 670 "maker.y"
              {(yyval.ListOfNodes)=(yyvsp[-1].ListOfNodes);}
#line 2078 "maker.tab.c"
    break;

  case 104: /* e: TRUTH_VALUE  */
#line 671 "maker.y"
               {    
                    //cout<<"Compieltrul vede  "<<$1<<endl<<endl<<endl;
                    if(strcmp((yyvsp[0].string) ,"TRUE")==0){
                         Value val(true);     
                         // cout<<"True"<<endl; 
                         // cout<<"In VAlue avem "<<val.get_bool()<<endl;   
                         (yyval.ListOfNodes)=new ASTNode(val , "bool", errorCount);
                    }
                    else{
                         Value val(false);
                         // cout<<"False"<<endl;
                         // cout<<"In VAlue avem "<<val.get_bool()<<endl;      
                         (yyval.ListOfNodes)=new ASTNode(val , "bool", errorCount);
                    }
               }
#line 2098 "maker.tab.c"
    break;

  case 105: /* e: NR  */
#line 686 "maker.y"
              {Value val(atoi(yytext));
               (yyval.ListOfNodes)=new ASTNode(val , "int" , errorCount);}
#line 2105 "maker.tab.c"
    break;

  case 106: /* e: REAL  */
#line 688 "maker.y"
              {Value val((float)atof(yytext));
               (yyval.ListOfNodes)=new ASTNode(val , "float" , errorCount);}
#line 2112 "maker.tab.c"
    break;

  case 107: /* e: ID  */
#line 697 "maker.y"
              {
               domeniul_caruia_ii_apartine_varabila=current->check_existance_for_use((yyvsp[0].string) , errorCount , yylineno);
               (yyval.ListOfNodes)=new ASTNode( domeniul_caruia_ii_apartine_varabila->get_that_variable((yyvsp[0].string)), errorCount , yylineno);//??? MAybe it will work like this?
               //$$=new ASTNode($1 , current , errorCount , yylineno);
              }
#line 2122 "maker.tab.c"
    break;


#line 2126 "maker.tab.c"

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

#line 705 "maker.y"

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
     // for (auto i : Vector_Tabele){
     //      if(i->get_body()!=nullptr && strcmp(i->get_dom_name() ,"main")!=0){
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
