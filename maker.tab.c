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
char* Denumire_apelant=nullptr;
std::stack<IdInfo*> param_checker;
int hard_copy_counter=0;

#line 94 "maker.tab.c"

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
  YYSYMBOL_35_ = 35,                       /* '.'  */
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
  YYSYMBOL_50_7 = 50,                      /* $@7  */
  YYSYMBOL_variables_generator = 51,       /* variables_generator  */
  YYSYMBOL_variables = 52,                 /* variables  */
  YYSYMBOL_fundamentals = 53,              /* fundamentals  */
  YYSYMBOL_arr = 54,                       /* arr  */
  YYSYMBOL_arr_list = 55,                  /* arr_list  */
  YYSYMBOL_variables_interior = 56,        /* variables_interior  */
  YYSYMBOL_fundamentals_interior = 57,     /* fundamentals_interior  */
  YYSYMBOL_arr_interior = 58,              /* arr_interior  */
  YYSYMBOL_list_main = 59,                 /* list_main  */
  YYSYMBOL_list = 60,                      /* list  */
  YYSYMBOL_statement = 61,                 /* statement  */
  YYSYMBOL_statement_main = 62,            /* statement_main  */
  YYSYMBOL_assign_node = 63,               /* assign_node  */
  YYSYMBOL_function_call_node = 64,        /* function_call_node  */
  YYSYMBOL_65_8 = 65,                      /* $@8  */
  YYSYMBOL_while_node = 66,                /* while_node  */
  YYSYMBOL_67_9 = 67,                      /* $@9  */
  YYSYMBOL_68_10 = 68,                     /* $@10  */
  YYSYMBOL_if_node = 69,                   /* if_node  */
  YYSYMBOL_70_11 = 70,                     /* $@11  */
  YYSYMBOL_71_12 = 71,                     /* $@12  */
  YYSYMBOL_72_13 = 72,                     /* $@13  */
  YYSYMBOL_73_14 = 73,                     /* $@14  */
  YYSYMBOL_74_15 = 74,                     /* $@15  */
  YYSYMBOL_for_node = 75,                  /* for_node  */
  YYSYMBOL_76_16 = 76,                     /* $@16  */
  YYSYMBOL_77_17 = 77,                     /* $@17  */
  YYSYMBOL_print_node = 78,                /* print_node  */
  YYSYMBOL_type_fucntion_node = 79,        /* type_fucntion_node  */
  YYSYMBOL_expression_for = 80,            /* expression_for  */
  YYSYMBOL_declarations_interior = 81,     /* declarations_interior  */
  YYSYMBOL_boolean_expression = 82,        /* boolean_expression  */
  YYSYMBOL_y = 83,                         /* y  */
  YYSYMBOL_classes = 84,                   /* classes  */
  YYSYMBOL_class = 85,                     /* class  */
  YYSYMBOL_86_18 = 86,                     /* $@18  */
  YYSYMBOL_class_initialize_initial = 87,  /* class_initialize_initial  */
  YYSYMBOL_class_initialize = 88,          /* class_initialize  */
  YYSYMBOL_class_initialize_interior = 89, /* class_initialize_interior  */
  YYSYMBOL_class_instance = 90,            /* class_instance  */
  YYSYMBOL_91_19 = 91,                     /* $@19  */
  YYSYMBOL_class_instance_interior = 92,   /* class_instance_interior  */
  YYSYMBOL_list_param = 93,                /* list_param  */
  YYSYMBOL_param = 94,                     /* param  */
  YYSYMBOL_call_list = 95,                 /* call_list  */
  YYSYMBOL_e = 96                          /* e  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 29 "maker.y"

     

#line 228 "maker.tab.c"


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
#define YYLAST   214

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  59
/* YYNRULES -- Number of rules.  */
#define YYNRULES  108
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  212

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
      30,    31,    28,    26,    37,    27,    35,    29,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    36,    32,
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
       0,    39,    39,    40,    44,    51,    43,    57,    58,    59,
      60,    63,    64,    67,    77,    78,    66,   107,   116,   106,
     122,   123,   125,   126,   129,   132,   135,   136,   138,   139,
     142,   145,   148,   149,   151,   152,   154,   155,   156,   157,
     158,   159,   160,   161,   164,   165,   166,   167,   168,   169,
     170,   171,   175,   178,   181,   187,   196,   194,   304,   312,
     303,   323,   331,   334,   338,   346,   322,   357,   365,   356,
     375,   377,   378,   379,   382,   383,   386,   387,   388,   390,
     392,   393,   397,   396,   413,   414,   418,   419,   422,   425,
     425,   427,   430,   431,   435,   441,   474,   508,   509,   510,
     511,   512,   513,   523,   525,   527,   532,   539,   540
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
  "'-'", "'*'", "'/'", "'('", "')'", "';'", "'['", "']'", "'.'", "':'",
  "','", "$accept", "progr", "main", "$@1", "$@2",
  "global_classes_declaration", "functions_generator", "functions", "$@3",
  "$@4", "$@5", "$@6", "$@7", "variables_generator", "variables",
  "fundamentals", "arr", "arr_list", "variables_interior",
  "fundamentals_interior", "arr_interior", "list_main", "list",
  "statement", "statement_main", "assign_node", "function_call_node",
  "$@8", "while_node", "$@9", "$@10", "if_node", "$@11", "$@12", "$@13",
  "$@14", "$@15", "for_node", "$@16", "$@17", "print_node",
  "type_fucntion_node", "expression_for", "declarations_interior",
  "boolean_expression", "y", "classes", "class", "$@18",
  "class_initialize_initial", "class_initialize",
  "class_initialize_interior", "class_instance", "$@19",
  "class_instance_interior", "list_param", "param", "call_list", "e", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-120)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-57)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      83,    -1,    11,     0,    26,    30,    19,  -120,    65,  -120,
    -120,  -120,    83,  -120,    64,    -7,  -120,  -120,  -120,  -120,
      42,  -120,    19,  -120,    36,  -120,  -120,    51,    55,    56,
      96,    81,    98,  -120,   106,    30,    36,  -120,    82,   115,
    -120,  -120,   115,     6,   121,   125,   104,   111,   136,   137,
     138,  -120,  -120,  -120,  -120,   127,  -120,  -120,  -120,  -120,
    -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,   103,
     139,    38,  -120,    65,   100,    15,   145,   141,   103,  -120,
      15,    15,   157,    17,    17,   165,    98,   140,  -120,  -120,
     168,   115,   169,   171,  -120,   -25,  -120,  -120,  -120,    15,
    -120,  -120,  -120,    50,   156,    17,  -120,   147,    50,   148,
       6,   149,    17,   117,   123,  -120,  -120,  -120,    98,  -120,
     150,    98,   172,   152,    99,    17,    17,    17,    17,    17,
      15,   101,   135,   179,   180,    15,   129,  -120,  -120,  -120,
     154,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,
    -120,  -120,   170,  -120,   135,    71,    71,  -120,  -120,  -120,
      50,  -120,    17,  -120,  -120,   155,   173,    98,   183,   160,
     135,    98,    98,    73,    17,  -120,   159,    15,  -120,  -120,
      14,  -120,   162,   135,    91,  -120,   161,   189,   190,   191,
     166,  -120,  -120,  -120,  -120,   156,   193,   194,   188,  -120,
     174,   197,    98,  -120,  -120,  -120,    98,   198,  -120,  -120,
     199,  -120
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      10,     0,     0,     0,     0,     0,     9,    12,     8,    21,
      22,    23,    10,    80,    13,     0,    17,     1,     4,     3,
       0,    11,     7,    20,    85,    81,    24,     0,     0,     0,
       0,     0,     0,    13,     0,     0,    84,    86,     0,     0,
      25,    82,     0,    56,     0,     0,     0,     0,     0,     0,
       0,    74,    28,    29,     5,     0,    44,    45,    46,    47,
      48,    50,    51,    49,    75,    88,    89,     2,    87,    27,
       0,     0,    92,    10,     0,     0,     0,     0,    30,    91,
       0,     0,     0,     0,     0,     0,    32,     0,    26,    94,
       0,     0,     0,     0,   104,   105,   103,   102,   108,     0,
     107,    53,    78,    52,     0,     0,    31,     0,     0,     0,
       0,     0,     0,     0,     0,     6,    33,    90,     0,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    95,     0,     0,     0,     0,    70,    71,    14,
       0,    36,    37,    38,    39,    40,    42,    43,    41,    83,
      18,   106,    76,   101,    79,    97,    99,    98,   100,    55,
      54,    57,     0,    61,    58,     0,     0,    34,     0,     0,
      96,     0,     0,     0,     0,    35,     0,     0,    62,    59,
     105,    72,     0,    73,     0,    19,     0,     0,     0,     0,
       0,    15,    77,    63,    60,   106,     0,     0,     0,    67,
       0,     0,     0,    16,    64,    68,     0,     0,    65,    69,
       0,    66
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -120,  -120,   175,  -120,  -120,    -9,   195,    -2,  -120,  -120,
    -120,  -120,  -120,  -120,   200,  -120,  -120,    13,  -120,  -120,
    -120,   126,  -119,  -120,  -120,   -31,   -32,  -120,   -23,  -120,
    -120,   -21,  -120,  -120,  -120,  -120,  -120,   -16,  -120,  -120,
     -15,   -14,  -120,   -13,   -68,  -120,  -120,   201,  -120,  -120,
    -120,  -120,   178,  -120,  -120,   167,   116,  -120,   -69
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,    19,    32,    85,     5,     6,     7,    28,   166,
     197,    31,   168,     8,     9,    10,    11,    29,    51,    52,
      53,    54,   139,   140,    55,   141,   100,    77,   143,   172,
     188,   144,   171,   187,   198,   206,   210,   145,   202,   207,
     146,   147,   182,   148,   101,   102,    12,    13,    73,    35,
      36,    64,    37,    87,    65,    71,    72,   131,   108
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      57,    56,   150,    24,    21,   -56,   103,    14,    16,    58,
     122,    59,   107,   109,   113,   114,    60,    61,    62,    63,
      21,    15,    94,    95,    94,    95,    17,    75,    20,    30,
     124,   123,    96,    18,    96,    75,   132,    97,     3,    97,
      98,    76,    98,   136,   -56,    99,    34,   112,   175,   189,
      33,   111,   178,   179,    57,    56,   154,   155,   156,   157,
     158,   160,   159,    58,    92,    59,   125,   165,    38,    90,
      60,    61,    62,    63,     1,    91,   126,   127,   128,   129,
      94,   180,    88,   205,     3,    39,   142,   208,    40,   142,
      96,   106,     1,   170,     2,    97,    26,    27,    98,   128,
     129,    41,     3,   112,   183,   184,    43,    44,    45,   186,
      46,    42,    47,    48,    66,   125,    69,   126,   127,   128,
     129,    49,    50,   191,    70,   126,   127,   128,   129,    78,
     153,    93,   161,    79,    80,   142,    27,    91,   162,   142,
     142,    81,   181,   126,   127,   128,   129,    89,   137,   126,
     127,   128,   129,   104,   138,   126,   127,   128,   129,    86,
     153,   126,   127,   128,   129,   110,    82,    83,    84,   115,
     142,   105,   117,   118,   142,   120,   121,   130,   133,   134,
     151,   135,   149,   152,   163,   164,   167,   173,   169,   176,
     177,   185,   192,   174,   190,   193,   194,   196,   199,   195,
     200,   201,   204,    22,   209,   211,   203,   119,    23,    74,
      67,     0,   116,    25,    68
};

static const yytype_int16 yycheck[] =
{
      32,    32,   121,    12,     6,    30,    75,     8,     8,    32,
      35,    32,    80,    81,    83,    84,    32,    32,    32,    32,
      22,    10,     7,     8,     7,     8,     0,    21,     9,    36,
      99,    99,    17,     3,    17,    21,   105,    22,    19,    22,
      25,    35,    25,   112,    30,    30,    10,    30,   167,    35,
       8,    82,   171,   172,    86,    86,   125,   126,   127,   128,
     129,   130,   130,    86,    73,    86,    16,   135,    17,    31,
      86,    86,    86,    86,     9,    37,    26,    27,    28,    29,
       7,     8,    69,   202,    19,    30,   118,   206,    32,   121,
      17,    78,     9,   162,    11,    22,    32,    33,    25,    28,
      29,     5,    19,    30,   173,   174,     8,     9,    10,   177,
      12,    30,    14,    15,     8,    16,    34,    26,    27,    28,
      29,    23,    24,    32,     9,    26,    27,    28,    29,     8,
      31,    31,    31,     8,    30,   167,    33,    37,    37,   171,
     172,    30,   173,    26,    27,    28,    29,     8,    31,    26,
      27,    28,    29,     8,    31,    26,    27,    28,    29,    32,
      31,    26,    27,    28,    29,     8,    30,    30,    30,     4,
     202,    30,    32,     5,   206,     6,     5,    21,    31,    31,
       8,    32,    32,    31,     5,     5,    32,    32,    18,     6,
      30,    32,    31,    20,    32,     6,     6,    31,     5,     8,
       6,    13,     5,     8,     6,     6,    32,    91,     8,    42,
      35,    -1,    86,    12,    36
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     9,    11,    19,    39,    43,    44,    45,    51,    52,
      53,    54,    84,    85,     8,    10,     8,     0,     3,    40,
       9,    45,    44,    52,    43,    85,    32,    33,    46,    55,
      36,    49,    41,     8,    10,    87,    88,    90,    17,    30,
      32,     5,    30,     8,     9,    10,    12,    14,    15,    23,
      24,    56,    57,    58,    59,    62,    63,    64,    66,    69,
      75,    78,    79,    81,    89,    92,     8,    40,    90,    34,
       9,    93,    94,    86,    93,    21,    35,    65,     8,     8,
      30,    30,    30,    30,    30,    42,    32,    91,    55,     8,
      31,    37,    43,    31,     7,     8,    17,    22,    25,    30,
      64,    82,    83,    96,     8,    30,    55,    82,    96,    82,
       8,    63,    30,    96,    96,     4,    59,    32,     5,    94,
       6,     5,    35,    82,    96,    16,    26,    27,    28,    29,
      21,    95,    96,    31,    31,    32,    96,    31,    31,    60,
      61,    63,    64,    66,    69,    75,    78,    79,    81,    32,
      60,     8,    31,    31,    96,    96,    96,    96,    96,    82,
      96,    31,    37,     5,     5,    82,    47,    32,    50,    18,
      96,    70,    67,    32,    20,    60,     6,    30,    60,    60,
       8,    63,    80,    96,    96,    32,    82,    71,    68,    35,
      32,    32,    31,     6,     6,     8,    31,    48,    72,     5,
       6,    13,    76,    32,     5,    60,    73,    77,    60,     6,
      74,     6
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    38,    39,    39,    41,    42,    40,    43,    43,    43,
      43,    44,    44,    46,    47,    48,    45,    49,    50,    45,
      51,    51,    52,    52,    53,    54,    55,    55,    56,    56,
      57,    58,    59,    59,    60,    60,    61,    61,    61,    61,
      61,    61,    61,    61,    62,    62,    62,    62,    62,    62,
      62,    62,    63,    63,    63,    63,    65,    64,    67,    68,
      66,    70,    71,    72,    73,    74,    69,    76,    77,    75,
      78,    79,    80,    80,    81,    81,    82,    82,    82,    83,
      84,    84,    86,    85,    87,    87,    88,    88,    89,    91,
      90,    92,    93,    93,    94,    95,    95,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     2,     0,     0,     5,     2,     1,     1,
       0,     2,     1,     0,     0,     0,    15,     0,     0,    11,
       2,     1,     1,     1,     3,     4,     4,     3,     1,     1,
       2,     3,     2,     3,     2,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     5,     5,     0,     5,     0,     0,
       9,     0,     0,     0,     0,     0,    16,     0,     0,    14,
       4,     4,     1,     1,     1,     1,     3,     7,     1,     3,
       1,     2,     0,     8,     1,     0,     1,     2,     1,     0,
       4,     2,     1,     3,     2,     1,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     1,     3,     1,     1
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
#line 39 "maker.y"
                                                                          {if (errorCount == 0) cout<< "The program is correct!" << endl;}
#line 1333 "maker.tab.c"
    break;

  case 3: /* progr: global_classes_declaration main  */
#line 40 "maker.y"
                                         {if (errorCount == 0) cout<< "The program is correct!" << endl;}
#line 1339 "maker.tab.c"
    break;

  case 4: /* $@1: %empty  */
#line 44 "maker.y"
          {SymTable* currentmain;     
           currentmain = new SymTable("main");
           currentmain->assign_stack_above(current->return_stack_above());
           currentmain->add_above(current);
           current=currentmain;  
           Vector_Tabele.push_back(current);
          }
#line 1351 "maker.tab.c"
    break;

  case 5: /* $@2: %empty  */
#line 51 "maker.y"
                    {current->set_body((yyvsp[0].ListOfNodes));
               }
#line 1358 "maker.tab.c"
    break;

  case 6: /* main: BGIN $@1 list_main $@2 END  */
#line 53 "maker.y"
                    {
                     current=current->next_domain_scope();
                    }
#line 1366 "maker.tab.c"
    break;

  case 13: /* $@3: %empty  */
#line 67 "maker.y"
                { current->check_existance_for_declaration((yyvsp[-1].string), (yyvsp[0].string) , "func" , errorCount , yylineno);
                  class SymTable* function_scope;
                  function_scope=new SymTable((yyvsp[0].string));
                  function_scope->assign_stack_above(current->return_stack_above());
                  function_scope->add_above(current);
                  current->add_bellow(function_scope);
                  current=function_scope;
                  Vector_Tabele.push_back(current);
                  //cout<<endl<<"Scope-ul functiei "<<current->get_dom_name()<<endl;
                }
#line 1381 "maker.tab.c"
    break;

  case 14: /* $@4: %empty  */
#line 77 "maker.y"
                                             {    
                                                       }
#line 1388 "maker.tab.c"
    break;

  case 15: /* $@5: %empty  */
#line 78 "maker.y"
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
#line 1413 "maker.tab.c"
    break;

  case 16: /* functions: TYPE ID $@3 '(' list_param ')' CBEGIN list $@4 RETURN e ';' $@5 CEND ';'  */
#line 98 "maker.y"
                                                                           {
                                                                           class ASTNode* func_return;
                                                                           func_return=new ASTNode((yyvsp[-13].string) , "<-" , (yyvsp[-4].ListOfNodes) ,current, &errorCount, yylineno);
                                                                           class ASTNode* list_return;
                                                                           list_return=new ASTNode("sequence" , (yyvsp[-7].ListOfNodes) , func_return , &errorCount , current);
                                                                           current->set_body(list_return);
                                                                           current=current->next_domain_scope();
                                                                           }
#line 1426 "maker.tab.c"
    break;

  case 17: /* $@6: %empty  */
#line 107 "maker.y"
                { current->check_existance_for_declaration((yyvsp[-1].string), (yyvsp[0].string) , "func" , errorCount , yylineno);
                  class SymTable* function_scope;
                  function_scope=new SymTable((yyvsp[0].string));
                  function_scope->assign_stack_above(current->return_stack_above());
                  function_scope->add_above(current);
                  current->add_bellow(function_scope);
                  current=function_scope;
                  Vector_Tabele.push_back(current);
                }
#line 1440 "maker.tab.c"
    break;

  case 18: /* $@7: %empty  */
#line 116 "maker.y"
                                             {    current->set_body((yyvsp[0].ListOfNodes));}
#line 1446 "maker.tab.c"
    break;

  case 19: /* functions: VOID ID $@6 '(' list_param ')' CBEGIN list $@7 CEND ';'  */
#line 117 "maker.y"
                                   {
                                    current=current->next_domain_scope();
                                   }
#line 1454 "maker.tab.c"
    break;

  case 24: /* fundamentals: TYPE ID ';'  */
#line 129 "maker.y"
                          {current->check_existance_for_declaration((yyvsp[-2].string), (yyvsp[-1].string) , "var" , errorCount , yylineno);}
#line 1460 "maker.tab.c"
    break;

  case 25: /* arr: TYPE ID arr_list ';'  */
#line 132 "maker.y"
                           {current->check_existance_for_declaration((yyvsp[-3].string), (yyvsp[-2].string) , "array" , errorCount , yylineno);}
#line 1466 "maker.tab.c"
    break;

  case 30: /* fundamentals_interior: TYPE ID  */
#line 142 "maker.y"
                                {current->check_existance_for_declaration((yyvsp[-1].string), (yyvsp[0].string) , "var" , errorCount , yylineno);}
#line 1472 "maker.tab.c"
    break;

  case 31: /* arr_interior: TYPE ID arr_list  */
#line 145 "maker.y"
                                 {current->check_existance_for_declaration((yyvsp[-2].string), (yyvsp[-1].string) , "array" , errorCount , yylineno);}
#line 1478 "maker.tab.c"
    break;

  case 32: /* list_main: statement_main ';'  */
#line 148 "maker.y"
                                {(yyval.ListOfNodes)=new ASTNode("final_sequence" , (yyvsp[-1].ListOfNodes) , &errorCount , yylineno, current);}
#line 1484 "maker.tab.c"
    break;

  case 33: /* list_main: statement_main ';' list_main  */
#line 149 "maker.y"
                                          {(yyval.ListOfNodes)=new ASTNode("sequence" , (yyvsp[-2].ListOfNodes) ,(yyvsp[0].ListOfNodes) , &errorCount , current);}
#line 1490 "maker.tab.c"
    break;

  case 34: /* list: statement ';'  */
#line 151 "maker.y"
                      {(yyval.ListOfNodes)=new ASTNode("final_sequence" , (yyvsp[-1].ListOfNodes) , &errorCount , yylineno, current);}
#line 1496 "maker.tab.c"
    break;

  case 35: /* list: statement ';' list  */
#line 152 "maker.y"
                           {(yyval.ListOfNodes)=new ASTNode("sequence" , (yyvsp[-2].ListOfNodes) ,(yyvsp[0].ListOfNodes) , &errorCount , current);}
#line 1502 "maker.tab.c"
    break;

  case 36: /* statement: assign_node  */
#line 154 "maker.y"
                       {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1508 "maker.tab.c"
    break;

  case 37: /* statement: function_call_node  */
#line 155 "maker.y"
                            {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1514 "maker.tab.c"
    break;

  case 38: /* statement: while_node  */
#line 156 "maker.y"
                    {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1520 "maker.tab.c"
    break;

  case 39: /* statement: if_node  */
#line 157 "maker.y"
                 {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1526 "maker.tab.c"
    break;

  case 40: /* statement: for_node  */
#line 158 "maker.y"
                  {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1532 "maker.tab.c"
    break;

  case 42: /* statement: print_node  */
#line 160 "maker.y"
                     {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1538 "maker.tab.c"
    break;

  case 43: /* statement: type_fucntion_node  */
#line 161 "maker.y"
                             {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1544 "maker.tab.c"
    break;

  case 44: /* statement_main: assign_node  */
#line 164 "maker.y"
                            {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);(yyval.ListOfNodes)->run();}
#line 1550 "maker.tab.c"
    break;

  case 45: /* statement_main: function_call_node  */
#line 165 "maker.y"
                            {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);(yyval.ListOfNodes)->run();}
#line 1556 "maker.tab.c"
    break;

  case 46: /* statement_main: while_node  */
#line 166 "maker.y"
                    {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);(yyval.ListOfNodes)->run();}
#line 1562 "maker.tab.c"
    break;

  case 47: /* statement_main: if_node  */
#line 167 "maker.y"
                 {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);(yyval.ListOfNodes)->run();}
#line 1568 "maker.tab.c"
    break;

  case 48: /* statement_main: for_node  */
#line 168 "maker.y"
                  {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);(yyval.ListOfNodes)->run();}
#line 1574 "maker.tab.c"
    break;

  case 50: /* statement_main: print_node  */
#line 170 "maker.y"
                     {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);(yyval.ListOfNodes)->run();}
#line 1580 "maker.tab.c"
    break;

  case 51: /* statement_main: type_fucntion_node  */
#line 171 "maker.y"
                             {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);(yyval.ListOfNodes)->run();}
#line 1586 "maker.tab.c"
    break;

  case 52: /* assign_node: ID ASSIGN e  */
#line 175 "maker.y"
                        {
                         (yyval.ListOfNodes)=new ASTNode((yyvsp[-2].string) , "<-" , (yyvsp[0].ListOfNodes) ,current, &errorCount, yylineno);
                         }
#line 1594 "maker.tab.c"
    break;

  case 53: /* assign_node: ID ASSIGN boolean_expression  */
#line 178 "maker.y"
                                         {
                         (yyval.ListOfNodes)=new ASTNode((yyvsp[-2].string) , "<-" , (yyvsp[0].ListOfNodes) ,current, &errorCount, yylineno);
                         }
#line 1602 "maker.tab.c"
    break;

  case 54: /* assign_node: ID '.' ID ASSIGN e  */
#line 181 "maker.y"
                             {
                         string buff1=(yyvsp[-4].string);
                         string buff3=(yyvsp[-2].string);
                         string class_mem=buff1+'.'+buff3;
                         (yyval.ListOfNodes)=new ASTNode(class_mem , "<-" , (yyvsp[0].ListOfNodes) ,current, &errorCount, yylineno);
                         }
#line 1613 "maker.tab.c"
    break;

  case 55: /* assign_node: ID '.' ID ASSIGN boolean_expression  */
#line 187 "maker.y"
                                              {
                         string buff1=(yyvsp[-4].string);
                         string buff3=(yyvsp[-2].string);
                         string class_mem=buff1+'.'+buff3;
                         (yyval.ListOfNodes)=new ASTNode(class_mem , "<-" , (yyvsp[0].ListOfNodes) ,current, &errorCount, yylineno);
                         }
#line 1624 "maker.tab.c"
    break;

  case 56: /* $@8: %empty  */
#line 196 "maker.y"
               {
                    SymTable* tmp=nullptr;
                    stack<SymTable*> copy=Vector_Tabele[0]->return_stack_bellow();
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
                              cout<<func_params.top()->name<<"  "<<func_params.top()->type<<"    "<<func_params.top()->idType<<endl;
                              func_params.pop();
                         }
                    }
               
              }
#line 1657 "maker.tab.c"
    break;

  case 57: /* function_call_node: ID $@8 '(' call_list ')'  */
#line 224 "maker.y"
                                 {delete[] Denumire_apelant;
                                  Denumire_apelant=nullptr;
                                  if(!param_checker.empty()){
                                   errorCount++;
                                   yyerror("Not enough parameters in function call");
                                  }
                                   cout<<endl<<endl<<endl<<endl<<endl<<endl<<"!!!!!Rulam in Func_call"<<endl;
                                   functia_apelata->get_body()->run();//BODY-U E BUN;//URGGEN , vezi cum e trat fucntion call-u in AST , body-u intra in AST BUN
                                   cout<<endl<<endl<<endl<<endl<<endl;
                                  (yyval.ListOfNodes)=new ASTNode("func_call" , functia_apelata->get_body() , domeniul_caruia_ii_apartine_varabila->next_domain_scope()->get_that_variable((yyvsp[-4].string)) , &errorCount , yylineno , current);//S-ar putea s- schimb sa semene cu o expresie    //COPIE??
                                 }
#line 1673 "maker.tab.c"
    break;

  case 58: /* $@9: %empty  */
#line 304 "maker.y"
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

  case 59: /* $@10: %empty  */
#line 312 "maker.y"
                             {
                              
                              current->set_body((yyvsp[0].ListOfNodes));
                              }
#line 1695 "maker.tab.c"
    break;

  case 60: /* while_node: WHILE '(' boolean_expression ')' CBEGIN $@9 list $@10 CEND  */
#line 317 "maker.y"
                                   {
                                        (yyval.ListOfNodes)=new ASTNode("while" , (yyvsp[-6].ListOfNodes) , (yyvsp[-2].ListOfNodes) , &errorCount , yylineno , current);
                                        current=current->next_domain_scope();
                                   }
#line 1704 "maker.tab.c"
    break;

  case 61: /* $@11: %empty  */
#line 323 "maker.y"
                    {
                         SymTable* currentCTRL;     
                         currentCTRL = new SymTable((yyvsp[-4].string));
                         currentCTRL->assign_stack_above(current->return_stack_above());
                         currentCTRL->add_above(current);
                         current=currentCTRL;
                         Vector_Tabele.push_back(current);
                    }
#line 1717 "maker.tab.c"
    break;

  case 62: /* $@12: %empty  */
#line 331 "maker.y"
                             {
                              current->set_body((yyvsp[0].ListOfNodes));
                         }
#line 1725 "maker.tab.c"
    break;

  case 63: /* $@13: %empty  */
#line 334 "maker.y"
                                   {
                                        current=current->next_domain_scope();
                                   }
#line 1733 "maker.tab.c"
    break;

  case 64: /* $@14: %empty  */
#line 338 "maker.y"
                              {
                                   SymTable* currentCTRL;     
                                   currentCTRL = new SymTable((yyvsp[-11].string));
                                   currentCTRL->assign_stack_above(current->return_stack_above());
                                   currentCTRL->add_above(current);
                                   current=currentCTRL;
                                   Vector_Tabele.push_back(current);
                              }
#line 1746 "maker.tab.c"
    break;

  case 65: /* $@15: %empty  */
#line 346 "maker.y"
                                                      {
                                                       current->set_body((yyvsp[0].ListOfNodes));
                                                  }
#line 1754 "maker.tab.c"
    break;

  case 66: /* if_node: IF '(' boolean_expression ')' CBEGIN $@11 list $@12 CEND $@13 ELSE CBEGIN $@14 list $@15 CEND  */
#line 349 "maker.y"
                              {
                                   class ASTNode* combine;
                                   combine=new ASTNode((yyvsp[-9].ListOfNodes) , (yyvsp[-2].ListOfNodes) , &errorCount);
                                   (yyval.ListOfNodes)=new ASTNode("if" , (yyvsp[-13].ListOfNodes) , combine , &errorCount , yylineno , current);
                                   current=current->next_domain_scope();
                              }
#line 1765 "maker.tab.c"
    break;

  case 67: /* $@16: %empty  */
#line 357 "maker.y"
               {
                 SymTable* currentCTRL;     
                 currentCTRL = new SymTable((yyvsp[-9].string));
                 currentCTRL->assign_stack_above(current->return_stack_above());
                 currentCTRL->add_above(current);
                 current=currentCTRL;
                 Vector_Tabele.push_back(current);
               }
#line 1778 "maker.tab.c"
    break;

  case 68: /* $@17: %empty  */
#line 365 "maker.y"
                                                                                        {current->set_body((yyvsp[0].ListOfNodes));}
#line 1784 "maker.tab.c"
    break;

  case 69: /* for_node: FOR '(' assign_node ';' boolean_expression ';' expression_for ';' ')' CBEGIN $@16 list $@17 CEND  */
#line 366 "maker.y"
               {
                 class ASTNode* combination1;
                 combination1=new ASTNode((yyvsp[-11].ListOfNodes) , (yyvsp[-9].ListOfNodes) , &errorCount);
                 class ASTNode* combination2;
                 combination2=new ASTNode((yyvsp[-2].ListOfNodes) , (yyvsp[-7].ListOfNodes) , &errorCount);
                 (yyval.ListOfNodes)=new ASTNode("for", combination1 , combination2 , &errorCount , yylineno , current);
                 current=current->next_domain_scope();
               }
#line 1797 "maker.tab.c"
    break;

  case 70: /* print_node: PRINT '(' e ')'  */
#line 375 "maker.y"
                           {(yyval.ListOfNodes)=new ASTNode((yyvsp[-3].string) , (yyvsp[-1].ListOfNodes) , &errorCount , yylineno);}
#line 1803 "maker.tab.c"
    break;

  case 71: /* type_fucntion_node: TYPE_FUNCTION '(' e ')'  */
#line 377 "maker.y"
                                            {(yyval.ListOfNodes)=new ASTNode((yyvsp[-3].string) , (yyvsp[-1].ListOfNodes) , &errorCount , yylineno);}
#line 1809 "maker.tab.c"
    break;

  case 72: /* expression_for: assign_node  */
#line 378 "maker.y"
                          {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1815 "maker.tab.c"
    break;

  case 73: /* expression_for: e  */
#line 379 "maker.y"
                 {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1821 "maker.tab.c"
    break;

  case 76: /* boolean_expression: '(' boolean_expression ')'  */
#line 386 "maker.y"
                                               {(yyval.ListOfNodes)=(yyvsp[-1].ListOfNodes);}
#line 1827 "maker.tab.c"
    break;

  case 77: /* boolean_expression: '(' boolean_expression ')' CONNECT '(' boolean_expression ')'  */
#line 387 "maker.y"
                                                                            {(yyval.ListOfNodes)=new ASTNode((yyvsp[-3].string) , (yyvsp[-5].ListOfNodes) , (yyvsp[-1].ListOfNodes) , &errorCount);}
#line 1833 "maker.tab.c"
    break;

  case 78: /* boolean_expression: y  */
#line 388 "maker.y"
                    {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1839 "maker.tab.c"
    break;

  case 79: /* y: e CMP e  */
#line 390 "maker.y"
            {(yyval.ListOfNodes)=new ASTNode((yyvsp[-1].string) , (yyvsp[-2].ListOfNodes) , (yyvsp[0].ListOfNodes) , &errorCount);}
#line 1845 "maker.tab.c"
    break;

  case 82: /* $@18: %empty  */
#line 397 "maker.y"
          {
            current->check_existance_for_declaration((yyvsp[-3].string), (yyvsp[-2].string) , "class" , errorCount , yylineno);
            SymTable* class_scope;
            class_scope=new SymTable((yyvsp[-2].string));
            class_scope->assign_stack_above(current->return_stack_above());
            class_scope->add_above(current);
            current->add_bellow(class_scope);
            current=class_scope;
            Vector_Tabele.push_back(current);
          }
#line 1860 "maker.tab.c"
    break;

  case 83: /* class: Class_Type Class_ID ':' CBEGIN $@18 global_classes_declaration CEND ';'  */
#line 408 "maker.y"
          {
            current=current->next_domain_scope();
          }
#line 1868 "maker.tab.c"
    break;

  case 89: /* $@19: %empty  */
#line 425 "maker.y"
                             {current->check_existance_for_class_instance((yyvsp[-1].string) , (yyvsp[0].string), errorCount , yylineno);}
#line 1874 "maker.tab.c"
    break;

  case 91: /* class_instance_interior: Class_ID ID  */
#line 427 "maker.y"
                                      {current->check_existance_for_class_instance((yyvsp[-1].string) , (yyvsp[0].string), errorCount , yylineno);}
#line 1880 "maker.tab.c"
    break;

  case 94: /* param: TYPE ID  */
#line 435 "maker.y"
                {current->check_existance_for_declaration((yyvsp[-1].string), (yyvsp[0].string) , "param" , errorCount , yylineno);
                 current->add_function_params(current->get_that_variable((yyvsp[0].string)));
               //   current->next_domain_scope()->add_params(current->get_dom_name(), current->get_that_variable($2));//adaugam in parametrii varaibilei ID FUNC care e declarata in domeniu de deasupra
                }
#line 1889 "maker.tab.c"
    break;

  case 95: /* call_list: e  */
#line 442 "maker.y"
               {
                    //cout<<"Apelat e "<<$1->evaluatei()<<endl;
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
#line 1926 "maker.tab.c"
    break;

  case 96: /* call_list: call_list ',' e  */
#line 474 "maker.y"
                           {
               // cout<<"Apelat call_list , e "<<$3->evaluatei()<<endl;
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
#line 1963 "maker.tab.c"
    break;

  case 97: /* e: e '+' e  */
#line 508 "maker.y"
              {(yyval.ListOfNodes)=new ASTNode("+" , (yyvsp[-2].ListOfNodes) , (yyvsp[0].ListOfNodes) , &errorCount);}
#line 1969 "maker.tab.c"
    break;

  case 98: /* e: e '*' e  */
#line 509 "maker.y"
              {(yyval.ListOfNodes)=new ASTNode("*" , (yyvsp[-2].ListOfNodes) , (yyvsp[0].ListOfNodes) , &errorCount);}
#line 1975 "maker.tab.c"
    break;

  case 99: /* e: e '-' e  */
#line 510 "maker.y"
              {(yyval.ListOfNodes)=new ASTNode("-" , (yyvsp[-2].ListOfNodes) , (yyvsp[0].ListOfNodes) , &errorCount);}
#line 1981 "maker.tab.c"
    break;

  case 100: /* e: e '/' e  */
#line 511 "maker.y"
              {(yyval.ListOfNodes)=new ASTNode("/" , (yyvsp[-2].ListOfNodes) , (yyvsp[0].ListOfNodes) , &errorCount);}
#line 1987 "maker.tab.c"
    break;

  case 101: /* e: '(' e ')'  */
#line 512 "maker.y"
              {(yyval.ListOfNodes)=(yyvsp[-1].ListOfNodes);}
#line 1993 "maker.tab.c"
    break;

  case 102: /* e: TRUTH_VALUE  */
#line 513 "maker.y"
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
#line 2008 "maker.tab.c"
    break;

  case 103: /* e: NR  */
#line 523 "maker.y"
              {Value val(atoi(yytext));
               (yyval.ListOfNodes)=new ASTNode(val , "int" , &errorCount);}
#line 2015 "maker.tab.c"
    break;

  case 104: /* e: REAL  */
#line 525 "maker.y"
              {Value val((float)atof(yytext));
               (yyval.ListOfNodes)=new ASTNode(val , "float" , &errorCount);}
#line 2022 "maker.tab.c"
    break;

  case 105: /* e: ID  */
#line 527 "maker.y"
              {
               domeniul_caruia_ii_apartine_varabila=current->check_existance_for_use((yyvsp[0].string) , errorCount , yylineno);
               (yyval.ListOfNodes)=new ASTNode( domeniul_caruia_ii_apartine_varabila->get_that_variable((yyvsp[0].string)), &errorCount , yylineno);//??? MAybe it will work like this?
               //$$=new ASTNode($1 , current , errorCount , yylineno); FUCK THIS LINE IN PARTICULAR (AM TRECUT PRIN MUSCIAL DE 3 ORI LA ASTA)
              }
#line 2032 "maker.tab.c"
    break;

  case 106: /* e: ID '.' ID  */
#line 532 "maker.y"
            {
               string buff1=(yyvsp[-2].string);
               string buff3=(yyvsp[0].string);
               string class_mem=buff1+'.'+buff3;
               domeniul_caruia_ii_apartine_varabila=current->check_existance_for_use(class_mem.c_str() , errorCount , yylineno);
               (yyval.ListOfNodes)=new ASTNode( domeniul_caruia_ii_apartine_varabila->get_that_variable(class_mem.c_str()), &errorCount , yylineno);
               }
#line 2044 "maker.tab.c"
    break;

  case 107: /* e: function_call_node  */
#line 539 "maker.y"
                     {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 2050 "maker.tab.c"
    break;

  case 108: /* e: STRING  */
#line 540 "maker.y"
               {Value val((yyvsp[0].string));     
               (yyval.ListOfNodes)=new ASTNode(val , "string" , &errorCount);}
#line 2057 "maker.tab.c"
    break;


#line 2061 "maker.tab.c"

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

#line 544 "maker.y"

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
//TO DO : Baga apelul de functie in AST
//1TO DO: TRANZITIE AST ;(
//2TO DO: Fa sa poti accesa Membrii unei clase , si dupa fiecare instanta sa aiba o copie independenta a acelor Membrii
