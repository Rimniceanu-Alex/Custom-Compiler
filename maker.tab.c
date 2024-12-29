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
  YYSYMBOL_PRINT = 8,                      /* PRINT  */
  YYSYMBOL_TYPE_FUNCTION = 9,              /* TYPE_FUNCTION  */
  YYSYMBOL_ID = 10,                        /* ID  */
  YYSYMBOL_TYPE = 11,                      /* TYPE  */
  YYSYMBOL_Class_ID = 12,                  /* Class_ID  */
  YYSYMBOL_Class_Type = 13,                /* Class_Type  */
  YYSYMBOL_IF = 14,                        /* IF  */
  YYSYMBOL_ELSE = 15,                      /* ELSE  */
  YYSYMBOL_WHILE = 16,                     /* WHILE  */
  YYSYMBOL_FOR = 17,                       /* FOR  */
  YYSYMBOL_CMP = 18,                       /* CMP  */
  YYSYMBOL_INC = 19,                       /* INC  */
  YYSYMBOL_DEC = 20,                       /* DEC  */
  YYSYMBOL_NR = 21,                        /* NR  */
  YYSYMBOL_CONNECT = 22,                   /* CONNECT  */
  YYSYMBOL_VOID = 23,                      /* VOID  */
  YYSYMBOL_RETURN = 24,                    /* RETURN  */
  YYSYMBOL_ASSIGN = 25,                    /* ASSIGN  */
  YYSYMBOL_TRUTH_VALUE = 26,               /* TRUTH_VALUE  */
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
  YYSYMBOL_variables_generator = 49,       /* variables_generator  */
  YYSYMBOL_variables = 50,                 /* variables  */
  YYSYMBOL_fundamentals = 51,              /* fundamentals  */
  YYSYMBOL_arr = 52,                       /* arr  */
  YYSYMBOL_arr_list = 53,                  /* arr_list  */
  YYSYMBOL_variables_interior = 54,        /* variables_interior  */
  YYSYMBOL_fundamentals_interior = 55,     /* fundamentals_interior  */
  YYSYMBOL_arr_interior = 56,              /* arr_interior  */
  YYSYMBOL_list = 57,                      /* list  */
  YYSYMBOL_list_for_else = 58,             /* list_for_else  */
  YYSYMBOL_statement = 59,                 /* statement  */
  YYSYMBOL_60_6 = 60,                      /* $@6  */
  YYSYMBOL_61_7 = 61,                      /* $@7  */
  YYSYMBOL_62_8 = 62,                      /* $@8  */
  YYSYMBOL_63_9 = 63,                      /* $@9  */
  YYSYMBOL_64_10 = 64,                     /* $@10  */
  YYSYMBOL_65_11 = 65,                     /* $@11  */
  YYSYMBOL_66_12 = 66,                     /* $@12  */
  YYSYMBOL_67_13 = 67,                     /* $@13  */
  YYSYMBOL_68_14 = 68,                     /* $@14  */
  YYSYMBOL_assign_node = 69,               /* assign_node  */
  YYSYMBOL_function_call_node = 70,        /* function_call_node  */
  YYSYMBOL_71_15 = 71,                     /* $@15  */
  YYSYMBOL_inc_dec = 72,                   /* inc_dec  */
  YYSYMBOL_declarations_interior = 73,     /* declarations_interior  */
  YYSYMBOL_boolean_expression = 74,        /* boolean_expression  */
  YYSYMBOL_y = 75,                         /* y  */
  YYSYMBOL_classes = 76,                   /* classes  */
  YYSYMBOL_class = 77,                     /* class  */
  YYSYMBOL_78_16 = 78,                     /* $@16  */
  YYSYMBOL_class_initialize_initial = 79,  /* class_initialize_initial  */
  YYSYMBOL_class_initialize = 80,          /* class_initialize  */
  YYSYMBOL_class_initialize_interior = 81, /* class_initialize_interior  */
  YYSYMBOL_class_instance = 82,            /* class_instance  */
  YYSYMBOL_83_17 = 83,                     /* $@17  */
  YYSYMBOL_class_instance_interior = 84,   /* class_instance_interior  */
  YYSYMBOL_list_param = 85,                /* list_param  */
  YYSYMBOL_param = 86,                     /* param  */
  YYSYMBOL_call_list = 87,                 /* call_list  */
  YYSYMBOL_e = 88                          /* e  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 26 "maker.y"

     

#line 217 "maker.tab.c"


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
#define YYLAST   172

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  51
/* YYNRULES -- Number of rules.  */
#define YYNRULES  87
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  183

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
       0,    36,    36,    37,    41,    49,    40,    56,    57,    58,
      59,    62,    63,    66,    75,    65,    99,    98,   113,   114,
     116,   117,   120,   123,   126,   127,   129,   130,   133,   136,
     139,   140,   142,   143,   145,   146,   167,   189,   166,   202,
     224,   233,   237,   201,   250,   273,   288,   249,   300,   301,
     313,   316,   320,   320,   356,   357,   360,   361,   364,   365,
     366,   368,   370,   371,   375,   374,   390,   391,   395,   396,
     399,   402,   402,   404,   407,   408,   412,   418,   450,   577,
     578,   579,   580,   581,   582,   597,   599,   601
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
  "CBEGIN", "CEND", "REAL", "PRINT", "TYPE_FUNCTION", "ID", "TYPE",
  "Class_ID", "Class_Type", "IF", "ELSE", "WHILE", "FOR", "CMP", "INC",
  "DEC", "NR", "CONNECT", "VOID", "RETURN", "ASSIGN", "TRUTH_VALUE", "'+'",
  "'-'", "'*'", "'/'", "'('", "')'", "';'", "'['", "']'", "':'", "','",
  "$accept", "progr", "main", "$@1", "$@2", "global_classes_declaration",
  "functions_generator", "functions", "$@3", "$@4", "$@5",
  "variables_generator", "variables", "fundamentals", "arr", "arr_list",
  "variables_interior", "fundamentals_interior", "arr_interior", "list",
  "list_for_else", "statement", "$@6", "$@7", "$@8", "$@9", "$@10", "$@11",
  "$@12", "$@13", "$@14", "assign_node", "function_call_node", "$@15",
  "inc_dec", "declarations_interior", "boolean_expression", "y", "classes",
  "class", "$@16", "class_initialize_initial", "class_initialize",
  "class_initialize_interior", "class_instance", "$@17",
  "class_instance_interior", "list_param", "param", "call_list", "e", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-81)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -6,     2,    17,    33,    56,    54,    -5,   -81,     0,   -81,
     -81,   -81,    -6,   -81,    -8,    25,   -81,   -81,   -81,   -81,
      53,   -81,    -5,   -81,    59,   -81,   -81,    47,    39,    44,
      73,    48,    92,   -81,    71,    54,    59,   -81,    49,    72,
     -81,   -81,    72,    51,    66,    64,    84,    88,    74,    76,
      97,   -81,   -81,   -81,   -81,    81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,    86,   116,   -17,   -81,     0,     1,
       6,     6,     6,    98,    86,   -81,    14,    14,   120,   127,
      92,    99,   -81,   -81,   128,    72,   129,   131,   -81,   -81,
     -81,   -81,     6,    83,    89,    19,     6,   -81,    14,   102,
     -81,    58,   105,    64,   106,   -81,   -81,   -81,    92,   -81,
     107,    92,    95,     6,     6,     6,     6,   -81,   -81,     7,
      19,   109,    37,   -81,     6,   -81,    14,   114,   -81,   136,
     -81,    12,    12,   -81,   -81,   -81,     6,   121,   139,    19,
     140,   113,     6,   115,    19,   118,   -81,   -81,   -81,    63,
     -81,    14,    92,    92,   137,   -81,   119,   144,   146,   -81,
     147,   -81,   -81,   -81,    40,   122,   141,   -81,   -81,   124,
     -81,   149,   126,   -81,   154,    92,   -81,   -81,   155,    92,
     -81,   156,   -81
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      10,     0,     0,     0,     0,     0,     9,    12,     8,    19,
      20,    21,    10,    62,    13,     0,    16,     1,     4,     3,
       0,    11,     7,    18,    67,    63,    22,     0,     0,     0,
       0,     0,     0,    13,     0,     0,    66,    68,     0,     0,
      23,    64,     0,     0,     0,    52,     0,     0,     0,     0,
       0,    56,    26,    27,     5,     0,    34,    35,    48,    57,
      70,    71,     2,    69,    25,     0,     0,    74,    10,     0,
       0,     0,     0,     0,    28,    73,     0,     0,     0,     0,
      30,     0,    24,    76,     0,     0,     0,     0,    86,    87,
      85,    84,     0,     0,     0,    51,     0,    29,     0,     0,
      60,     0,     0,     0,     0,     6,    31,    72,     0,    75,
       0,     0,     0,     0,     0,     0,     0,    49,    50,     0,
      77,     0,     0,    39,     0,    36,     0,     0,    65,     0,
      83,    79,    81,    80,    82,    53,     0,    58,     0,    61,
       0,     0,     0,     0,    78,     0,    40,    37,    44,     0,
      17,     0,     0,     0,     0,    14,     0,     0,     0,    45,
       0,    59,    41,    38,     0,     0,     0,    54,    55,     0,
      15,     0,     0,    42,     0,    33,    46,    32,     0,     0,
      43,     0,    47
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -81,   -81,   125,   -81,   -81,   -10,   157,    -3,   -81,   -81,
     -81,   -81,   158,   -81,   -81,   -60,   -81,   -81,   -81,   -80,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,    85,   -81,   -81,   -81,   -81,   -76,   -81,   -81,   152,
     -81,   -81,   -81,   -81,   132,   -81,   -81,   130,    82,   -81,
     -62
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,    19,    32,    79,     5,     6,     7,    28,   160,
      31,     8,     9,    10,    11,    29,    51,    52,    53,    54,
     178,    55,   140,   153,   138,   152,   166,   175,   154,   164,
     179,    56,    57,    73,   169,    58,    99,   100,    12,    13,
      68,    35,    36,    59,    37,    81,    60,    66,    67,   119,
     101
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
     106,   102,    24,    21,    82,     1,    20,     2,    93,    94,
      95,     1,    14,    88,    97,    84,    89,     3,     3,    21,
      85,    88,   121,     3,    89,    26,    27,    90,   127,    15,
     112,   129,    91,    87,   120,    90,   122,    92,    85,   135,
      91,   115,   116,    16,   136,    98,   113,   114,   115,   116,
     141,   131,   132,   133,   134,   124,    17,    18,    86,   167,
     168,    30,   139,    33,   113,   114,   115,   116,    38,   130,
      39,    34,   157,   158,   144,   156,   124,    40,    41,    42,
     149,    61,    70,    65,    64,   113,   114,   115,   116,    72,
     113,   114,   115,   116,    74,   177,   155,    71,    75,   181,
      43,    44,    45,    46,    47,    76,    48,    77,    49,    50,
     113,   114,   115,   116,    80,   117,   113,   114,   115,   116,
      27,   118,   113,   114,   115,   116,    83,   130,    78,    96,
     103,   105,   107,   108,   123,   110,   111,   125,   142,   126,
     128,   137,   143,   145,   146,   147,   148,   159,   150,   151,
     162,   161,   163,   165,   173,   170,   171,   172,   174,   176,
      62,   180,   182,   104,    25,    22,    23,   109,    63,     0,
       0,     0,    69
};

static const yytype_int16 yycheck[] =
{
      80,    77,    12,     6,    64,    11,    11,    13,    70,    71,
      72,    11,    10,     7,    74,    32,    10,    23,    23,    22,
      37,     7,    98,    23,    10,    33,    34,    21,   108,    12,
      92,   111,    26,    32,    96,    21,    98,    31,    37,    32,
      26,    29,    30,    10,    37,    31,    27,    28,    29,    30,
     126,   113,   114,   115,   116,    18,     0,     3,    68,    19,
      20,    36,   124,    10,    27,    28,    29,    30,    21,    32,
      31,    12,   152,   153,   136,   151,    18,    33,     5,    31,
     142,    10,    31,    11,    35,    27,    28,    29,    30,    25,
      27,    28,    29,    30,    10,   175,    33,    31,    10,   179,
       8,     9,    10,    11,    12,    31,    14,    31,    16,    17,
      27,    28,    29,    30,    33,    32,    27,    28,    29,    30,
      34,    32,    27,    28,    29,    30,    10,    32,    31,    31,
      10,     4,    33,     5,    32,     6,     5,    32,    24,    33,
      33,    32,     6,    22,     5,     5,    33,    10,    33,    31,
       6,    32,     6,     6,     5,    33,    15,    33,    32,     5,
      35,     6,     6,    78,    12,     8,     8,    85,    36,    -1,
      -1,    -1,    42
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    11,    13,    23,    39,    43,    44,    45,    49,    50,
      51,    52,    76,    77,    10,    12,    10,     0,     3,    40,
      11,    45,    44,    50,    43,    77,    33,    34,    46,    53,
      36,    48,    41,    10,    12,    79,    80,    82,    21,    31,
      33,     5,    31,     8,     9,    10,    11,    12,    14,    16,
      17,    54,    55,    56,    57,    59,    69,    70,    73,    81,
      84,    10,    40,    82,    35,    11,    85,    86,    78,    85,
      31,    31,    25,    71,    10,    10,    31,    31,    31,    42,
      33,    83,    53,    10,    32,    37,    43,    32,     7,    10,
      21,    26,    31,    88,    88,    88,    31,    53,    31,    74,
      75,    88,    74,    10,    69,     4,    57,    33,     5,    86,
       6,     5,    88,    27,    28,    29,    30,    32,    32,    87,
      88,    74,    88,    32,    18,    32,    33,    57,    33,    57,
      32,    88,    88,    88,    88,    32,    37,    32,    62,    88,
      60,    74,    24,     6,    88,    22,     5,     5,    33,    88,
      33,    31,    63,    61,    66,    33,    74,    57,    57,    10,
      47,    32,     6,     6,    67,     6,    64,    19,    20,    72,
      33,    15,    33,     5,    32,    65,     5,    57,    58,    68,
       6,    57,     6
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    38,    39,    39,    41,    42,    40,    43,    43,    43,
      43,    44,    44,    46,    47,    45,    48,    45,    49,    49,
      50,    50,    51,    52,    53,    53,    54,    54,    55,    56,
      57,    57,    58,    58,    59,    59,    60,    61,    59,    62,
      63,    64,    65,    59,    66,    67,    68,    59,    59,    59,
      59,    69,    71,    70,    72,    72,    73,    73,    74,    74,
      74,    75,    76,    76,    78,    77,    79,    79,    80,    80,
      81,    83,    82,    84,    85,    85,    86,    87,    87,    88,
      88,    88,    88,    88,    88,    88,    88,    88
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     2,     0,     0,     5,     2,     1,     1,
       0,     2,     1,     0,     0,    14,     0,    10,     2,     1,
       1,     1,     3,     4,     4,     3,     1,     1,     2,     3,
       2,     3,     1,     0,     1,     1,     0,     0,     9,     0,
       0,     0,     0,    15,     0,     0,     0,    16,     1,     4,
       4,     3,     0,     5,     1,     1,     1,     1,     3,     7,
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
#line 1296 "maker.tab.c"
    break;

  case 3: /* progr: global_classes_declaration main  */
#line 37 "maker.y"
                                         {if (errorCount == 0) cout<< "The program is correct!" << endl;}
#line 1302 "maker.tab.c"
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
#line 1315 "maker.tab.c"
    break;

  case 5: /* $@2: %empty  */
#line 49 "maker.y"
               {(yyvsp[0].ListOfNodes)->run();}
#line 1321 "maker.tab.c"
    break;

  case 6: /* main: BGIN $@1 list $@2 END  */
#line 50 "maker.y"
                    {
                     //current->remove_from_above();//Scoatem din currentmain
                     current=current->next_domain_scope();
                     //current->remove_from_above();//Scoatem din current
                    }
#line 1331 "maker.tab.c"
    break;

  case 13: /* $@3: %empty  */
#line 66 "maker.y"
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

  case 14: /* $@4: %empty  */
#line 75 "maker.y"
                                                           {
                                                            if(strcmp((yyvsp[-10].string), (yyvsp[-1].ListOfNodes)->get_type_for_main())==0){
                                                                 if(strcmp((yyvsp[-1].ListOfNodes)->get_type_for_main() , "int")==0){
                                                                      class Value val((yyvsp[-1].ListOfNodes)->evaluatei());
                                                                      current->next_domain_scope()->set_value((yyvsp[-9].string) , val );  
                                                                 }
                                                                 else if(strcmp((yyvsp[-1].ListOfNodes)->get_type_for_main() , "float")==0){
                                                                      class Value val((yyvsp[-1].ListOfNodes)->evaluatef());
                                                                      current->next_domain_scope()->set_value((yyvsp[-9].string) , val ); 
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
#line 1370 "maker.tab.c"
    break;

  case 15: /* functions: TYPE ID $@3 '(' list_param ')' CBEGIN list RETURN e ';' $@4 CEND ';'  */
#line 95 "maker.y"
                                                                           {
                                                                           current=current->next_domain_scope();
                                                                           }
#line 1378 "maker.tab.c"
    break;

  case 16: /* $@5: %empty  */
#line 99 "maker.y"
                { current->check_existance_for_declaration((yyvsp[-1].string), (yyvsp[0].string) , "func" , errorCount , yylineno);
                  class SymTable* function_scope;
                  function_scope=new SymTable((yyvsp[0].string));
                  function_scope->assign_stack_above(current->return_stack_above());
                  function_scope->add_above(current);
                  current=function_scope;
                  Vector_Tabele.push_back(current);
                }
#line 1391 "maker.tab.c"
    break;

  case 17: /* functions: VOID ID $@5 '(' list_param ')' CBEGIN list CEND ';'  */
#line 108 "maker.y"
                                   {
                                    current=current->next_domain_scope();
                                   }
#line 1399 "maker.tab.c"
    break;

  case 22: /* fundamentals: TYPE ID ';'  */
#line 120 "maker.y"
                          {current->check_existance_for_declaration((yyvsp[-2].string), (yyvsp[-1].string) , "var" , errorCount , yylineno);}
#line 1405 "maker.tab.c"
    break;

  case 23: /* arr: TYPE ID arr_list ';'  */
#line 123 "maker.y"
                           {current->check_existance_for_declaration((yyvsp[-3].string), (yyvsp[-2].string) , "array" , errorCount , yylineno);}
#line 1411 "maker.tab.c"
    break;

  case 28: /* fundamentals_interior: TYPE ID  */
#line 133 "maker.y"
                                {current->check_existance_for_declaration((yyvsp[-1].string), (yyvsp[0].string) , "var" , errorCount , yylineno);}
#line 1417 "maker.tab.c"
    break;

  case 29: /* arr_interior: TYPE ID arr_list  */
#line 136 "maker.y"
                                 {current->check_existance_for_declaration((yyvsp[-2].string), (yyvsp[-1].string) , "array" , errorCount , yylineno);}
#line 1423 "maker.tab.c"
    break;

  case 30: /* list: statement ';'  */
#line 139 "maker.y"
                      {(yyval.ListOfNodes)=new ASTNode("statement" , (yyvsp[-1].ListOfNodes) , errorCount , yylineno, current);}
#line 1429 "maker.tab.c"
    break;

  case 31: /* list: statement ';' list  */
#line 140 "maker.y"
                           {(yyval.ListOfNodes)=new ASTNode("sequence" , (yyvsp[-2].ListOfNodes) ,(yyvsp[0].ListOfNodes) , errorCount , yylineno, current);}
#line 1435 "maker.tab.c"
    break;

  case 36: /* $@6: %empty  */
#line 167 "maker.y"
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
#line 1462 "maker.tab.c"
    break;

  case 37: /* $@7: %empty  */
#line 189 "maker.y"
               {
                    SymTable* currentCTRL;     
                    currentCTRL = new SymTable((yyvsp[-5].string));
                    currentCTRL->assign_stack_above(current->return_stack_above());
                    currentCTRL->add_above(current);
                    current=currentCTRL;
                    Vector_Tabele.push_back(current);
               }
#line 1475 "maker.tab.c"
    break;

  case 38: /* statement: WHILE '(' boolean_expression ')' $@6 CBEGIN $@7 list CEND  */
#line 198 "maker.y"
                                   {
                                        current=current->next_domain_scope();
                                   }
#line 1483 "maker.tab.c"
    break;

  case 39: /* $@8: %empty  */
#line 202 "maker.y"
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
#line 1510 "maker.tab.c"
    break;

  case 40: /* $@9: %empty  */
#line 224 "maker.y"
                    {
                         SymTable* currentCTRL;     
                         currentCTRL = new SymTable((yyvsp[-5].string));
                         currentCTRL->assign_stack_above(current->return_stack_above());
                         currentCTRL->add_above(current);
                         current=currentCTRL;
                         Vector_Tabele.push_back(current);
                    }
#line 1523 "maker.tab.c"
    break;

  case 41: /* $@10: %empty  */
#line 233 "maker.y"
                                   {
                                        current=current->next_domain_scope();
                                   }
#line 1531 "maker.tab.c"
    break;

  case 42: /* $@11: %empty  */
#line 237 "maker.y"
                              {
                                   SymTable* currentCTRL;     
                                   currentCTRL = new SymTable((yyvsp[-11].string));
                                   currentCTRL->assign_stack_above(current->return_stack_above());
                                   currentCTRL->add_above(current);
                                   current=currentCTRL;
                                   Vector_Tabele.push_back(current);
                              }
#line 1544 "maker.tab.c"
    break;

  case 43: /* statement: IF '(' boolean_expression ')' $@8 CBEGIN $@9 list CEND $@10 ELSE CBEGIN $@11 list_for_else CEND  */
#line 246 "maker.y"
                              {
                                   current=current->next_domain_scope();
                              }
#line 1552 "maker.tab.c"
    break;

  case 44: /* $@12: %empty  */
#line 250 "maker.y"
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
#line 1579 "maker.tab.c"
    break;

  case 45: /* $@13: %empty  */
#line 273 "maker.y"
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
#line 1598 "maker.tab.c"
    break;

  case 46: /* $@14: %empty  */
#line 288 "maker.y"
               {
                 SymTable* currentCTRL;     
                 currentCTRL = new SymTable((yyvsp[-12].string));
                 currentCTRL->assign_stack_above(current->return_stack_above());
                 currentCTRL->add_above(current);
                 current=currentCTRL;
                 Vector_Tabele.push_back(current);
               }
#line 1611 "maker.tab.c"
    break;

  case 47: /* statement: FOR '(' assign_node ';' boolean_expression ';' $@12 ID $@13 inc_dec ';' ')' CBEGIN $@14 list CEND  */
#line 297 "maker.y"
               {
                 current=current->next_domain_scope();
               }
#line 1619 "maker.tab.c"
    break;

  case 49: /* statement: PRINT '(' e ')'  */
#line 301 "maker.y"
                          {
                              if((yyvsp[-1].ListOfNodes)->get_type()=="int"){
                                   cout<<(yyvsp[-1].ListOfNodes)->evaluatei()<<endl;
                              }
                              else if((yyvsp[-1].ListOfNodes)->get_type()=="float"){
                                   cout<<(yyvsp[-1].ListOfNodes)->evaluatef()<<endl;
                              }
                              else{
                                   errorCount++;
                                   yyerror("Unkown prin parameter");
                              }
                          }
#line 1636 "maker.tab.c"
    break;

  case 51: /* assign_node: ID ASSIGN e  */
#line 316 "maker.y"
                        {
                         (yyval.ListOfNodes)=new ASTNode((yyvsp[-2].string) , "<-" , (yyvsp[0].ListOfNodes) ,current, errorCount, yylineno);
                         }
#line 1644 "maker.tab.c"
    break;

  case 52: /* $@15: %empty  */
#line 320 "maker.y"
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
#line 1676 "maker.tab.c"
    break;

  case 53: /* function_call_node: ID $@15 '(' call_list ')'  */
#line 347 "maker.y"
                                 {delete[] Denumire_apelant;
                                  Denumire_apelant=nullptr;
                                  if(!param_checker.empty()){
                                   errorCount++;
                                   yyerror("Not enough parameters in function call");
                                  }
                                 }
#line 1688 "maker.tab.c"
    break;

  case 58: /* boolean_expression: '(' boolean_expression ')'  */
#line 364 "maker.y"
                                               {(yyval.ListOfNodes)=(yyvsp[-1].ListOfNodes);}
#line 1694 "maker.tab.c"
    break;

  case 59: /* boolean_expression: '(' boolean_expression ')' CONNECT '(' boolean_expression ')'  */
#line 365 "maker.y"
                                                                            {(yyval.ListOfNodes)=new ASTNode((yyvsp[-3].string) , (yyvsp[-5].ListOfNodes) , (yyvsp[-1].ListOfNodes) , errorCount);}
#line 1700 "maker.tab.c"
    break;

  case 60: /* boolean_expression: y  */
#line 366 "maker.y"
                    {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1706 "maker.tab.c"
    break;

  case 61: /* y: e CMP e  */
#line 368 "maker.y"
            {(yyval.ListOfNodes)=new ASTNode((yyvsp[-1].string) , (yyvsp[-2].ListOfNodes) , (yyvsp[0].ListOfNodes) , errorCount);}
#line 1712 "maker.tab.c"
    break;

  case 64: /* $@16: %empty  */
#line 375 "maker.y"
          {
            current->check_existance_for_declaration((yyvsp[-3].string), (yyvsp[-2].string) , "class" , errorCount , yylineno);
            SymTable* class_scope;
            class_scope=new SymTable((yyvsp[-2].string));
            class_scope->assign_stack_above(current->return_stack_above());
            class_scope->add_above(current);
            current=class_scope;
            Vector_Tabele.push_back(current);
          }
#line 1726 "maker.tab.c"
    break;

  case 65: /* class: Class_Type Class_ID ':' CBEGIN $@16 global_classes_declaration CEND ';'  */
#line 385 "maker.y"
          {
            current=current->next_domain_scope();
          }
#line 1734 "maker.tab.c"
    break;

  case 71: /* $@17: %empty  */
#line 402 "maker.y"
                             {current->check_existance_for_class_instance((yyvsp[-1].string) , (yyvsp[0].string), errorCount , yylineno);}
#line 1740 "maker.tab.c"
    break;

  case 73: /* class_instance_interior: Class_ID ID  */
#line 404 "maker.y"
                                      {current->check_existance_for_class_instance((yyvsp[-1].string) , (yyvsp[0].string), errorCount , yylineno);}
#line 1746 "maker.tab.c"
    break;

  case 76: /* param: TYPE ID  */
#line 412 "maker.y"
                {current->check_existance_for_declaration((yyvsp[-1].string), (yyvsp[0].string) , "param" , errorCount , yylineno);
                 current->next_domain_scope()->add_params(current->get_dom_name(), current->get_that_variable((yyvsp[0].string)));//adaugam in parametrii varaibilei ID FUNC care e declarata in domeniu de deasupra
                }
#line 1754 "maker.tab.c"
    break;

  case 77: /* call_list: e  */
#line 419 "maker.y"
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
#line 1790 "maker.tab.c"
    break;

  case 78: /* call_list: call_list ',' e  */
#line 450 "maker.y"
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
#line 1828 "maker.tab.c"
    break;

  case 79: /* e: e '+' e  */
#line 577 "maker.y"
              {(yyval.ListOfNodes)=new ASTNode("+" , (yyvsp[-2].ListOfNodes) , (yyvsp[0].ListOfNodes) , errorCount);}
#line 1834 "maker.tab.c"
    break;

  case 80: /* e: e '*' e  */
#line 578 "maker.y"
              {(yyval.ListOfNodes)=new ASTNode("*" , (yyvsp[-2].ListOfNodes) , (yyvsp[0].ListOfNodes) , errorCount);}
#line 1840 "maker.tab.c"
    break;

  case 81: /* e: e '-' e  */
#line 579 "maker.y"
              {(yyval.ListOfNodes)=new ASTNode("-" , (yyvsp[-2].ListOfNodes) , (yyvsp[0].ListOfNodes) , errorCount);}
#line 1846 "maker.tab.c"
    break;

  case 82: /* e: e '/' e  */
#line 580 "maker.y"
              {(yyval.ListOfNodes)=new ASTNode("/" , (yyvsp[-2].ListOfNodes) , (yyvsp[0].ListOfNodes) , errorCount);}
#line 1852 "maker.tab.c"
    break;

  case 83: /* e: '(' e ')'  */
#line 581 "maker.y"
              {(yyval.ListOfNodes)=(yyvsp[-1].ListOfNodes);}
#line 1858 "maker.tab.c"
    break;

  case 84: /* e: TRUTH_VALUE  */
#line 582 "maker.y"
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
#line 1878 "maker.tab.c"
    break;

  case 85: /* e: NR  */
#line 597 "maker.y"
              {Value val(atoi(yytext));
               (yyval.ListOfNodes)=new ASTNode(val , "int" , errorCount);}
#line 1885 "maker.tab.c"
    break;

  case 86: /* e: REAL  */
#line 599 "maker.y"
              {Value val((float)atof(yytext));
               (yyval.ListOfNodes)=new ASTNode(val , "float" , errorCount);}
#line 1892 "maker.tab.c"
    break;

  case 87: /* e: ID  */
#line 601 "maker.y"
              {domeniul_caruia_ii_apartine_varabila=current->check_existance_for_use((yyvsp[0].string) , errorCount , yylineno);
               if(domeniul_caruia_ii_apartine_varabila!=nullptr){
                    (yyval.ListOfNodes)=new ASTNode(domeniul_caruia_ii_apartine_varabila->get_value((yyvsp[0].string)) ,domeniul_caruia_ii_apartine_varabila->get_IdInfo_Type((yyvsp[0].string)) , errorCount);
               }
              }
#line 1902 "maker.tab.c"
    break;


#line 1906 "maker.tab.c"

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

#line 609 "maker.y"

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
