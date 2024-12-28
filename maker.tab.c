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
  YYSYMBOL_global_classes_declaration = 42, /* global_classes_declaration  */
  YYSYMBOL_functions_generator = 43,       /* functions_generator  */
  YYSYMBOL_functions = 44,                 /* functions  */
  YYSYMBOL_45_2 = 45,                      /* $@2  */
  YYSYMBOL_46_3 = 46,                      /* $@3  */
  YYSYMBOL_47_4 = 47,                      /* $@4  */
  YYSYMBOL_variables_generator = 48,       /* variables_generator  */
  YYSYMBOL_variables = 49,                 /* variables  */
  YYSYMBOL_fundamentals = 50,              /* fundamentals  */
  YYSYMBOL_arr = 51,                       /* arr  */
  YYSYMBOL_arr_list = 52,                  /* arr_list  */
  YYSYMBOL_variables_interior = 53,        /* variables_interior  */
  YYSYMBOL_fundamentals_interior = 54,     /* fundamentals_interior  */
  YYSYMBOL_arr_interior = 55,              /* arr_interior  */
  YYSYMBOL_list = 56,                      /* list  */
  YYSYMBOL_list_for_else = 57,             /* list_for_else  */
  YYSYMBOL_statement = 58,                 /* statement  */
  YYSYMBOL_59_5 = 59,                      /* $@5  */
  YYSYMBOL_60_6 = 60,                      /* $@6  */
  YYSYMBOL_61_7 = 61,                      /* $@7  */
  YYSYMBOL_62_8 = 62,                      /* $@8  */
  YYSYMBOL_63_9 = 63,                      /* $@9  */
  YYSYMBOL_64_10 = 64,                     /* $@10  */
  YYSYMBOL_65_11 = 65,                     /* $@11  */
  YYSYMBOL_66_12 = 66,                     /* $@12  */
  YYSYMBOL_67_13 = 67,                     /* $@13  */
  YYSYMBOL_68_14 = 68,                     /* $@14  */
  YYSYMBOL_69_15 = 69,                     /* $@15  */
  YYSYMBOL_70_16 = 70,                     /* $@16  */
  YYSYMBOL_assign_node = 71,               /* assign_node  */
  YYSYMBOL_inc_dec = 72,                   /* inc_dec  */
  YYSYMBOL_declarations_interior = 73,     /* declarations_interior  */
  YYSYMBOL_boolean_expression = 74,        /* boolean_expression  */
  YYSYMBOL_y = 75,                         /* y  */
  YYSYMBOL_classes = 76,                   /* classes  */
  YYSYMBOL_class = 77,                     /* class  */
  YYSYMBOL_78_17 = 78,                     /* $@17  */
  YYSYMBOL_class_initialize_initial = 79,  /* class_initialize_initial  */
  YYSYMBOL_class_initialize = 80,          /* class_initialize  */
  YYSYMBOL_class_initialize_interior = 81, /* class_initialize_interior  */
  YYSYMBOL_class_instance = 82,            /* class_instance  */
  YYSYMBOL_83_18 = 83,                     /* $@18  */
  YYSYMBOL_class_instance_interior = 84,   /* class_instance_interior  */
  YYSYMBOL_list_param = 85,                /* list_param  */
  YYSYMBOL_param = 86,                     /* param  */
  YYSYMBOL_call_list = 87,                 /* call_list  */
  YYSYMBOL_x = 88,                         /* x  */
  YYSYMBOL_e = 89                          /* e  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 26 "maker.y"

     

#line 218 "maker.tab.c"


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
#define YYLAST   229

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  52
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  186

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
       0,    36,    36,    37,    41,    40,    56,    57,    58,    59,
      62,    63,    66,    75,    65,    99,    98,   113,   114,   116,
     117,   120,   123,   126,   127,   129,   130,   133,   136,   139,
     140,   142,   143,   145,   146,   146,   200,   222,   199,   235,
     257,   266,   270,   234,   283,   300,   328,   351,   366,   282,
     378,   379,   391,   394,   398,   399,   402,   403,   406,   407,
     408,   410,   412,   413,   417,   416,   432,   433,   437,   438,
     441,   444,   444,   446,   449,   450,   454,   460,   492,   619,
     621,   622,   623,   624,   625,   626,   637,   639,   641
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
  "$accept", "progr", "main", "$@1", "global_classes_declaration",
  "functions_generator", "functions", "$@2", "$@3", "$@4",
  "variables_generator", "variables", "fundamentals", "arr", "arr_list",
  "variables_interior", "fundamentals_interior", "arr_interior", "list",
  "list_for_else", "statement", "$@5", "$@6", "$@7", "$@8", "$@9", "$@10",
  "$@11", "$@12", "$@13", "$@14", "$@15", "$@16", "assign_node", "inc_dec",
  "declarations_interior", "boolean_expression", "y", "classes", "class",
  "$@17", "class_initialize_initial", "class_initialize",
  "class_initialize_interior", "class_instance", "$@18",
  "class_instance_interior", "list_param", "param", "call_list", "x", "e", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-95)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      75,     2,     6,    29,    21,    39,    11,   -95,    12,   -95,
     -95,   -95,    75,   -95,    37,    17,   -95,   -95,   -95,   -95,
      46,   -95,    11,   -95,    53,   -95,   -95,    54,    36,    48,
      96,    73,   151,   -95,    99,    39,    53,   -95,    77,   107,
     -95,   -95,   107,    79,    93,   111,   122,   132,   113,   123,
     125,   -95,   -95,   -95,    83,   115,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   130,   156,   -22,   -95,    12,     0,    -1,
      -1,    -1,   143,   130,   -95,     7,     7,   163,   -95,   147,
     -95,   153,   -95,   -95,   187,   107,   192,   194,   -95,   -95,
     -95,   -95,    -1,   149,   155,   -95,   167,    -1,   -95,     7,
     168,   -95,    78,   169,   177,   -95,   -95,   151,   -95,   170,
     151,   161,    -1,    -1,    -1,    -1,   -95,   -95,     4,   -95,
     172,    22,   -95,    -1,   -95,   -95,    52,   -95,   105,   -95,
      50,    50,   -95,   -95,   -95,    -1,   183,   201,   167,   202,
      -1,    -1,   175,   -95,   178,   -95,   -95,   -95,   142,   -95,
       7,   151,   151,   179,   -95,   181,   117,   129,     7,   204,
     -95,   -95,   -95,   182,   184,   196,   -95,   -95,   209,   206,
     -95,   -95,   151,    64,   151,   212,   -95,   -95,   186,   -95,
     188,   216,   -95,   151,   141,   -95
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       9,     0,     0,     0,     0,     0,     8,    11,     7,    18,
      19,    20,     9,    62,    12,     0,    15,     1,     4,     3,
       0,    10,     6,    17,    67,    63,    21,     0,     0,     0,
       0,     0,     0,    12,     0,     0,    66,    68,     0,     0,
      22,    64,     0,     0,     0,    34,     0,     0,     0,     0,
       0,    56,    25,    26,     0,     0,    33,    50,    57,    70,
      71,     2,    69,    24,     0,     0,    74,     9,     0,     0,
       0,     0,     0,    27,    73,     0,     0,     0,     5,     0,
      29,     0,    23,    76,     0,     0,     0,     0,    87,    88,
      86,    85,     0,     0,     0,    53,    79,     0,    28,     0,
       0,    60,     0,     0,     0,    30,    72,     0,    75,     0,
       0,     0,     0,     0,     0,     0,    51,    52,     0,    77,
       0,     0,    39,     0,    36,    44,     0,    65,     0,    84,
      80,    82,    81,    83,    35,     0,    58,     0,    61,     0,
       0,     0,     0,    78,     0,    40,    37,    45,     0,    16,
       0,     0,     0,     0,    13,     0,     0,     0,     0,     0,
      59,    41,    38,     0,     0,     0,    46,    14,     0,     0,
      42,    47,    32,     0,    31,     0,    54,    55,     0,    43,
       0,     0,    48,     0,     0,    49
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -95,   -95,   189,   -95,    -8,   214,     5,   -95,   -95,   -95,
     -95,   215,   -95,   -95,   -44,   -95,   -95,   -95,   -94,   -95,
     -54,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -73,   -95,   -95,   213,
     -95,   -95,   -95,   -95,   190,   -95,   -95,   185,   144,   -95,
     -92,   -68
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,    19,    32,     5,     6,     7,    28,   159,    31,
       8,     9,    10,    11,    29,    51,    52,    53,    54,   175,
      55,    72,   139,   152,   137,   151,   165,   172,   140,   153,
     169,   173,   183,    56,   178,    57,   100,   101,    12,    13,
      67,    35,    36,    58,    37,    81,    59,    65,    66,   118,
      95,    96
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      79,    93,    94,   103,    24,   119,    88,   102,   102,    89,
      84,    21,    14,   126,    88,    85,   128,    89,    15,    82,
      90,    17,    20,     1,   111,    91,   120,    21,    90,    98,
      92,   121,    87,    91,     3,     3,   134,    85,    99,    16,
     123,   135,    18,   143,   130,   131,   132,   133,   147,   112,
     113,   114,   115,    30,   129,   138,    33,   156,   157,    86,
      43,    44,    45,    46,    47,    34,    48,    39,    49,    50,
      26,    27,    79,   148,    79,    38,   141,   155,   174,   114,
     115,    40,   102,   176,   177,   163,     1,    78,     2,   184,
     102,    43,    44,    45,    46,    47,   123,    48,     3,    49,
      50,    41,    79,    79,    42,   112,   113,   114,   115,    60,
      69,   142,    63,    43,    44,    45,    46,    47,    64,    48,
      79,    49,    50,   161,    70,    43,    44,    45,    46,    47,
      79,    48,    73,    49,    50,   162,    71,    43,    44,    45,
      46,    47,    74,    48,    75,    49,    50,   185,    80,    43,
      44,    45,    46,    47,    76,    48,    77,    49,    50,    43,
      44,    45,    46,    47,    27,    48,    83,    49,    50,   112,
     113,   114,   115,   104,    97,   154,   112,   113,   114,   115,
     105,   116,   112,   113,   114,   115,   106,   117,   112,   113,
     114,   115,   107,   129,   112,   113,   114,   115,   109,   110,
     122,   124,   125,   127,   136,   144,   145,   146,   149,   150,
     164,   168,   158,   160,   170,   166,   171,   167,   179,   180,
     181,   182,    22,    23,    61,    25,    62,    68,     0,   108
};

static const yytype_int16 yycheck[] =
{
      54,    69,    70,    76,    12,    97,     7,    75,    76,    10,
      32,     6,    10,   107,     7,    37,   110,    10,    12,    63,
      21,     0,    11,    11,    92,    26,    99,    22,    21,    73,
      31,    99,    32,    26,    23,    23,    32,    37,    31,    10,
      18,    37,     3,   135,   112,   113,   114,   115,   140,    27,
      28,    29,    30,    36,    32,   123,    10,   151,   152,    67,
       8,     9,    10,    11,    12,    12,    14,    31,    16,    17,
      33,    34,   126,   141,   128,    21,    24,   150,   172,    29,
      30,    33,   150,    19,    20,   158,    11,     4,    13,   183,
     158,     8,     9,    10,    11,    12,    18,    14,    23,    16,
      17,     5,   156,   157,    31,    27,    28,    29,    30,    10,
      31,     6,    35,     8,     9,    10,    11,    12,    11,    14,
     174,    16,    17,     6,    31,     8,     9,    10,    11,    12,
     184,    14,    10,    16,    17,     6,    25,     8,     9,    10,
      11,    12,    10,    14,    31,    16,    17,     6,    33,     8,
       9,    10,    11,    12,    31,    14,    31,    16,    17,     8,
       9,    10,    11,    12,    34,    14,    10,    16,    17,    27,
      28,    29,    30,    10,    31,    33,    27,    28,    29,    30,
      33,    32,    27,    28,    29,    30,    33,    32,    27,    28,
      29,    30,     5,    32,    27,    28,    29,    30,     6,     5,
      32,    32,    25,    33,    32,    22,     5,     5,    33,    31,
       6,    15,    33,    32,     5,    33,    10,    33,     6,    33,
      32,     5,     8,     8,    35,    12,    36,    42,    -1,    85
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    11,    13,    23,    39,    42,    43,    44,    48,    49,
      50,    51,    76,    77,    10,    12,    10,     0,     3,    40,
      11,    44,    43,    49,    42,    77,    33,    34,    45,    52,
      36,    47,    41,    10,    12,    79,    80,    82,    21,    31,
      33,     5,    31,     8,     9,    10,    11,    12,    14,    16,
      17,    53,    54,    55,    56,    58,    71,    73,    81,    84,
      10,    40,    82,    35,    11,    85,    86,    78,    85,    31,
      31,    25,    59,    10,    10,    31,    31,    31,     4,    58,
      33,    83,    52,    10,    32,    37,    42,    32,     7,    10,
      21,    26,    31,    89,    89,    88,    89,    31,    52,    31,
      74,    75,    89,    74,    10,    33,    33,     5,    86,     6,
       5,    89,    27,    28,    29,    30,    32,    32,    87,    88,
      74,    89,    32,    18,    32,    25,    56,    33,    56,    32,
      89,    89,    89,    89,    32,    37,    32,    62,    89,    60,
      66,    24,     6,    88,    22,     5,     5,    88,    89,    33,
      31,    63,    61,    67,    33,    74,    56,    56,    33,    46,
      32,     6,     6,    74,     6,    64,    33,    33,    15,    68,
       5,    10,    65,    69,    56,    57,    19,    20,    72,     6,
      33,    32,     5,    70,    56,     6
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    38,    39,    39,    41,    40,    42,    42,    42,    42,
      43,    43,    45,    46,    44,    47,    44,    48,    48,    49,
      49,    50,    51,    52,    52,    53,    53,    54,    55,    56,
      56,    57,    57,    58,    59,    58,    60,    61,    58,    62,
      63,    64,    65,    58,    66,    67,    68,    69,    70,    58,
      58,    58,    58,    71,    72,    72,    73,    73,    74,    74,
      74,    75,    76,    76,    78,    77,    79,    79,    80,    80,
      81,    83,    82,    84,    85,    85,    86,    87,    87,    88,
      89,    89,    89,    89,    89,    89,    89,    89,    89
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     2,     0,     4,     2,     1,     1,     0,
       2,     1,     0,     0,    14,     0,    10,     2,     1,     1,
       1,     3,     4,     4,     3,     1,     1,     2,     3,     2,
       3,     1,     0,     1,     0,     5,     0,     0,     9,     0,
       0,     0,     0,    15,     0,     0,     0,     0,     0,    20,
       1,     4,     4,     3,     1,     1,     1,     1,     3,     7,
       1,     3,     1,     2,     0,     8,     1,     0,     1,     2,
       1,     0,     4,     2,     1,     3,     2,     1,     3,     1,
       3,     3,     3,     3,     3,     1,     1,     1,     1
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
#line 1307 "maker.tab.c"
    break;

  case 3: /* progr: global_classes_declaration main  */
#line 37 "maker.y"
                                         {if (errorCount == 0) cout<< "The program is correct!" << endl;}
#line 1313 "maker.tab.c"
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
#line 1326 "maker.tab.c"
    break;

  case 5: /* main: BGIN $@1 list END  */
#line 50 "maker.y"
                    {
                     //current->remove_from_above();//Scoatem din currentmain
                     current=current->next_domain_scope();
                     //current->remove_from_above();//Scoatem din current
                    }
#line 1336 "maker.tab.c"
    break;

  case 12: /* $@2: %empty  */
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
#line 1350 "maker.tab.c"
    break;

  case 13: /* $@3: %empty  */
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
#line 1375 "maker.tab.c"
    break;

  case 14: /* functions: TYPE ID $@2 '(' list_param ')' CBEGIN list RETURN e ';' $@3 CEND ';'  */
#line 95 "maker.y"
                                                                           {
                                                                           current=current->next_domain_scope();
                                                                           }
#line 1383 "maker.tab.c"
    break;

  case 15: /* $@4: %empty  */
#line 99 "maker.y"
                { current->check_existance_for_declaration((yyvsp[-1].string), (yyvsp[0].string) , "func" , errorCount , yylineno);
                  class SymTable* function_scope;
                  function_scope=new SymTable((yyvsp[0].string));
                  function_scope->assign_stack_above(current->return_stack_above());
                  function_scope->add_above(current);
                  current=function_scope;
                  Vector_Tabele.push_back(current);
                }
#line 1396 "maker.tab.c"
    break;

  case 16: /* functions: VOID ID $@4 '(' list_param ')' CBEGIN list CEND ';'  */
#line 108 "maker.y"
                                   {
                                    current=current->next_domain_scope();
                                   }
#line 1404 "maker.tab.c"
    break;

  case 21: /* fundamentals: TYPE ID ';'  */
#line 120 "maker.y"
                          {current->check_existance_for_declaration((yyvsp[-2].string), (yyvsp[-1].string) , "var" , errorCount , yylineno);}
#line 1410 "maker.tab.c"
    break;

  case 22: /* arr: TYPE ID arr_list ';'  */
#line 123 "maker.y"
                           {current->check_existance_for_declaration((yyvsp[-3].string), (yyvsp[-2].string) , "array" , errorCount , yylineno);}
#line 1416 "maker.tab.c"
    break;

  case 27: /* fundamentals_interior: TYPE ID  */
#line 133 "maker.y"
                                {current->check_existance_for_declaration((yyvsp[-1].string), (yyvsp[0].string) , "var" , errorCount , yylineno);}
#line 1422 "maker.tab.c"
    break;

  case 28: /* arr_interior: TYPE ID arr_list  */
#line 136 "maker.y"
                                 {current->check_existance_for_declaration((yyvsp[-2].string), (yyvsp[-1].string) , "array" , errorCount , yylineno);}
#line 1428 "maker.tab.c"
    break;

  case 33: /* statement: assign_node  */
#line 145 "maker.y"
                       {(yyvsp[0].ListOfNodes)->run();}
#line 1434 "maker.tab.c"
    break;

  case 34: /* $@5: %empty  */
#line 146 "maker.y"
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
#line 1466 "maker.tab.c"
    break;

  case 35: /* statement: ID $@5 '(' call_list ')'  */
#line 173 "maker.y"
                                 {delete[] Denumire_apelant;
                                  Denumire_apelant=nullptr;
                                  if(!param_checker.empty()){
                                   errorCount++;
                                   yyerror("Not enough parameters in function call");
                                  }
                                 }
#line 1478 "maker.tab.c"
    break;

  case 36: /* $@6: %empty  */
#line 200 "maker.y"
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
#line 1505 "maker.tab.c"
    break;

  case 37: /* $@7: %empty  */
#line 222 "maker.y"
               {
                    SymTable* currentCTRL;     
                    currentCTRL = new SymTable((yyvsp[-5].string));
                    currentCTRL->assign_stack_above(current->return_stack_above());
                    currentCTRL->add_above(current);
                    current=currentCTRL;
                    Vector_Tabele.push_back(current);
               }
#line 1518 "maker.tab.c"
    break;

  case 38: /* statement: WHILE '(' boolean_expression ')' $@6 CBEGIN $@7 list CEND  */
#line 231 "maker.y"
                                   {
                                        current=current->next_domain_scope();
                                   }
#line 1526 "maker.tab.c"
    break;

  case 39: /* $@8: %empty  */
#line 235 "maker.y"
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
#line 1553 "maker.tab.c"
    break;

  case 40: /* $@9: %empty  */
#line 257 "maker.y"
                    {
                         SymTable* currentCTRL;     
                         currentCTRL = new SymTable((yyvsp[-5].string));
                         currentCTRL->assign_stack_above(current->return_stack_above());
                         currentCTRL->add_above(current);
                         current=currentCTRL;
                         Vector_Tabele.push_back(current);
                    }
#line 1566 "maker.tab.c"
    break;

  case 41: /* $@10: %empty  */
#line 266 "maker.y"
                                   {
                                        current=current->next_domain_scope();
                                   }
#line 1574 "maker.tab.c"
    break;

  case 42: /* $@11: %empty  */
#line 270 "maker.y"
                              {
                                   SymTable* currentCTRL;     
                                   currentCTRL = new SymTable((yyvsp[-11].string));
                                   currentCTRL->assign_stack_above(current->return_stack_above());
                                   currentCTRL->add_above(current);
                                   current=currentCTRL;
                                   Vector_Tabele.push_back(current);
                              }
#line 1587 "maker.tab.c"
    break;

  case 43: /* statement: IF '(' boolean_expression ')' $@8 CBEGIN $@9 list CEND $@10 ELSE CBEGIN $@11 list_for_else CEND  */
#line 279 "maker.y"
                              {
                                   current=current->next_domain_scope();
                              }
#line 1595 "maker.tab.c"
    break;

  case 44: /* $@12: %empty  */
#line 283 "maker.y"
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
#line 1617 "maker.tab.c"
    break;

  case 45: /* $@13: %empty  */
#line 300 "maker.y"
                                    {
                              if(domeniul_caruia_ii_apartine_varabila!=nullptr){
                                   if(domeniul_caruia_ii_apartine_varabila->get_IdInfo_Type((yyvsp[-3].string))=="int"){
                                        if(numeric_limits<int>::min()==((yyvsp[0].ListOfNodes)->evaluatei())){
                                             //errorCount++;
                                             yyerror("Arithmetic expression is inccorect");
                                        }
                                        else{
                                             class Value val((yyvsp[0].ListOfNodes)->evaluatei());
                                             domeniul_caruia_ii_apartine_varabila->set_value((yyvsp[-3].string) , val);
                                        }
                                   }
                                   else if(domeniul_caruia_ii_apartine_varabila->get_IdInfo_Type((yyvsp[-3].string))=="float"){
                                        if(std::isnan((yyvsp[0].ListOfNodes)->evaluatef())){
                                             //errorCount++;
                                             yyerror("Arithmetic expression is inccorect");
                                        }
                                        else{
                                             class Value val((yyvsp[0].ListOfNodes)->evaluatef());
                                             domeniul_caruia_ii_apartine_varabila->set_value((yyvsp[-3].string) , val);
                                        }
                                   }else{
                                        errorCount++;
                                        yyerror("Can only assing a int or a float to an int or a float");
                                        
                                   }
                              }//NO IDEA why it's the 4-th one , Trial and error ;P
                         }
#line 1650 "maker.tab.c"
    break;

  case 46: /* $@14: %empty  */
#line 328 "maker.y"
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
#line 1677 "maker.tab.c"
    break;

  case 47: /* $@15: %empty  */
#line 351 "maker.y"
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
#line 1696 "maker.tab.c"
    break;

  case 48: /* $@16: %empty  */
#line 366 "maker.y"
               {
                 SymTable* currentCTRL;     
                 currentCTRL = new SymTable((yyvsp[-16].string));
                 currentCTRL->assign_stack_above(current->return_stack_above());
                 currentCTRL->add_above(current);
                 current=currentCTRL;
                 Vector_Tabele.push_back(current);
               }
#line 1709 "maker.tab.c"
    break;

  case 49: /* statement: FOR '(' ID ASSIGN $@12 x $@13 ';' boolean_expression ';' $@14 ID $@15 inc_dec ';' ')' CBEGIN $@16 list CEND  */
#line 375 "maker.y"
               {
                 current=current->next_domain_scope();
               }
#line 1717 "maker.tab.c"
    break;

  case 51: /* statement: PRINT '(' e ')'  */
#line 379 "maker.y"
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
#line 1734 "maker.tab.c"
    break;

  case 53: /* assign_node: ID ASSIGN x  */
#line 394 "maker.y"
                        {
                         (yyval.ListOfNodes)=new ASTNode((yyvsp[-2].string) , "<-" , (yyvsp[0].ListOfNodes) ,current, errorCount, yylineno);
                         }
#line 1742 "maker.tab.c"
    break;

  case 58: /* boolean_expression: '(' boolean_expression ')'  */
#line 406 "maker.y"
                                               {(yyval.ListOfNodes)=(yyvsp[-1].ListOfNodes);}
#line 1748 "maker.tab.c"
    break;

  case 59: /* boolean_expression: '(' boolean_expression ')' CONNECT '(' boolean_expression ')'  */
#line 407 "maker.y"
                                                                            {(yyval.ListOfNodes)=new ASTNode((yyvsp[-3].string) , (yyvsp[-5].ListOfNodes) , (yyvsp[-1].ListOfNodes) , errorCount);}
#line 1754 "maker.tab.c"
    break;

  case 60: /* boolean_expression: y  */
#line 408 "maker.y"
                    {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1760 "maker.tab.c"
    break;

  case 61: /* y: e CMP e  */
#line 410 "maker.y"
            {(yyval.ListOfNodes)=new ASTNode((yyvsp[-1].string) , (yyvsp[-2].ListOfNodes) , (yyvsp[0].ListOfNodes) , errorCount);}
#line 1766 "maker.tab.c"
    break;

  case 64: /* $@17: %empty  */
#line 417 "maker.y"
          {
            current->check_existance_for_declaration((yyvsp[-3].string), (yyvsp[-2].string) , "class" , errorCount , yylineno);
            SymTable* class_scope;
            class_scope=new SymTable((yyvsp[-2].string));
            class_scope->assign_stack_above(current->return_stack_above());
            class_scope->add_above(current);
            current=class_scope;
            Vector_Tabele.push_back(current);
          }
#line 1780 "maker.tab.c"
    break;

  case 65: /* class: Class_Type Class_ID ':' CBEGIN $@17 global_classes_declaration CEND ';'  */
#line 427 "maker.y"
          {
            current=current->next_domain_scope();
          }
#line 1788 "maker.tab.c"
    break;

  case 71: /* $@18: %empty  */
#line 444 "maker.y"
                             {current->check_existance_for_class_instance((yyvsp[-1].string) , (yyvsp[0].string), errorCount , yylineno);}
#line 1794 "maker.tab.c"
    break;

  case 73: /* class_instance_interior: Class_ID ID  */
#line 446 "maker.y"
                                      {current->check_existance_for_class_instance((yyvsp[-1].string) , (yyvsp[0].string), errorCount , yylineno);}
#line 1800 "maker.tab.c"
    break;

  case 76: /* param: TYPE ID  */
#line 454 "maker.y"
                {current->check_existance_for_declaration((yyvsp[-1].string), (yyvsp[0].string) , "param" , errorCount , yylineno);
                 current->next_domain_scope()->add_params(current->get_dom_name(), current->get_that_variable((yyvsp[0].string)));//adaugam in parametrii varaibilei ID FUNC care e declarata in domeniu de deasupra
                }
#line 1808 "maker.tab.c"
    break;

  case 77: /* call_list: x  */
#line 461 "maker.y"
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
#line 1844 "maker.tab.c"
    break;

  case 78: /* call_list: call_list ',' x  */
#line 492 "maker.y"
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
#line 1882 "maker.tab.c"
    break;

  case 79: /* x: e  */
#line 619 "maker.y"
      {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1888 "maker.tab.c"
    break;

  case 80: /* e: e '+' e  */
#line 621 "maker.y"
              {(yyval.ListOfNodes)=new ASTNode("+" , (yyvsp[-2].ListOfNodes) , (yyvsp[0].ListOfNodes) , errorCount);}
#line 1894 "maker.tab.c"
    break;

  case 81: /* e: e '*' e  */
#line 622 "maker.y"
              {(yyval.ListOfNodes)=new ASTNode("*" , (yyvsp[-2].ListOfNodes) , (yyvsp[0].ListOfNodes) , errorCount);}
#line 1900 "maker.tab.c"
    break;

  case 82: /* e: e '-' e  */
#line 623 "maker.y"
              {(yyval.ListOfNodes)=new ASTNode("-" , (yyvsp[-2].ListOfNodes) , (yyvsp[0].ListOfNodes) , errorCount);}
#line 1906 "maker.tab.c"
    break;

  case 83: /* e: e '/' e  */
#line 624 "maker.y"
              {(yyval.ListOfNodes)=new ASTNode("/" , (yyvsp[-2].ListOfNodes) , (yyvsp[0].ListOfNodes) , errorCount);}
#line 1912 "maker.tab.c"
    break;

  case 84: /* e: '(' e ')'  */
#line 625 "maker.y"
              {(yyval.ListOfNodes)=(yyvsp[-1].ListOfNodes);}
#line 1918 "maker.tab.c"
    break;

  case 85: /* e: TRUTH_VALUE  */
#line 626 "maker.y"
               {    if((yyvsp[0].string)=="TRUE"){
                         Value val(true);     
                         cout<<"True"<<endl;    
                         (yyval.ListOfNodes)=new ASTNode(val , "bool", errorCount);
                    }
                    else{
                         Value val(false);
                         cout<<"False"<<endl;      
                         (yyval.ListOfNodes)=new ASTNode(val , "bool", errorCount);
                    }
               }
#line 1934 "maker.tab.c"
    break;

  case 86: /* e: NR  */
#line 637 "maker.y"
              {Value val(atoi(yytext));
               (yyval.ListOfNodes)=new ASTNode(val , "int" , errorCount);}
#line 1941 "maker.tab.c"
    break;

  case 87: /* e: REAL  */
#line 639 "maker.y"
              {Value val((float)atof(yytext));
               (yyval.ListOfNodes)=new ASTNode(val , "float" , errorCount);}
#line 1948 "maker.tab.c"
    break;

  case 88: /* e: ID  */
#line 641 "maker.y"
              {domeniul_caruia_ii_apartine_varabila=current->check_existance_for_use((yyvsp[0].string) , errorCount , yylineno);
               if(domeniul_caruia_ii_apartine_varabila!=nullptr){
                    (yyval.ListOfNodes)=new ASTNode(domeniul_caruia_ii_apartine_varabila->get_value((yyvsp[0].string)) ,domeniul_caruia_ii_apartine_varabila->get_IdInfo_Type((yyvsp[0].string)) , errorCount);
               }
              }
#line 1958 "maker.tab.c"
    break;


#line 1962 "maker.tab.c"

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

#line 649 "maker.y"

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
//1TO DO: TRANZITIE AST ;(
//2TO DO: Fa sa poti accesa Membrii unei clase , si dupa fiecare instanta sa aiba o copie independenta a acelor Membrii
