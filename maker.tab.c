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
std::stack<IdInfo*>Temp_stack;
int hard_copy_counter=0;

#line 95 "maker.tab.c"

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
  YYSYMBOL_variables_generator = 49,       /* variables_generator  */
  YYSYMBOL_variables = 50,                 /* variables  */
  YYSYMBOL_fundamentals = 51,              /* fundamentals  */
  YYSYMBOL_arr = 52,                       /* arr  */
  YYSYMBOL_arr_list = 53,                  /* arr_list  */
  YYSYMBOL_variables_interior = 54,        /* variables_interior  */
  YYSYMBOL_fundamentals_interior = 55,     /* fundamentals_interior  */
  YYSYMBOL_arr_interior = 56,              /* arr_interior  */
  YYSYMBOL_list_main = 57,                 /* list_main  */
  YYSYMBOL_list_else = 58,                 /* list_else  */
  YYSYMBOL_list = 59,                      /* list  */
  YYSYMBOL_statement = 60,                 /* statement  */
  YYSYMBOL_statement_main = 61,            /* statement_main  */
  YYSYMBOL_assign_node = 62,               /* assign_node  */
  YYSYMBOL_function_call_node = 63,        /* function_call_node  */
  YYSYMBOL_64_6 = 64,                      /* $@6  */
  YYSYMBOL_65_7 = 65,                      /* $@7  */
  YYSYMBOL_while_node = 66,                /* while_node  */
  YYSYMBOL_67_8 = 67,                      /* $@8  */
  YYSYMBOL_68_9 = 68,                      /* $@9  */
  YYSYMBOL_if_node = 69,                   /* if_node  */
  YYSYMBOL_70_10 = 70,                     /* $@10  */
  YYSYMBOL_71_11 = 71,                     /* $@11  */
  YYSYMBOL_72_12 = 72,                     /* $@12  */
  YYSYMBOL_73_13 = 73,                     /* $@13  */
  YYSYMBOL_74_14 = 74,                     /* $@14  */
  YYSYMBOL_for_node = 75,                  /* for_node  */
  YYSYMBOL_76_15 = 76,                     /* $@15  */
  YYSYMBOL_77_16 = 77,                     /* $@16  */
  YYSYMBOL_print_node = 78,                /* print_node  */
  YYSYMBOL_type_fucntion_node = 79,        /* type_fucntion_node  */
  YYSYMBOL_expression_for = 80,            /* expression_for  */
  YYSYMBOL_declarations_interior = 81,     /* declarations_interior  */
  YYSYMBOL_boolean_expression = 82,        /* boolean_expression  */
  YYSYMBOL_y = 83,                         /* y  */
  YYSYMBOL_classes = 84,                   /* classes  */
  YYSYMBOL_class = 85,                     /* class  */
  YYSYMBOL_86_17 = 86,                     /* $@17  */
  YYSYMBOL_class_initialize_initial = 87,  /* class_initialize_initial  */
  YYSYMBOL_class_initialize = 88,          /* class_initialize  */
  YYSYMBOL_class_initialize_interior = 89, /* class_initialize_interior  */
  YYSYMBOL_class_instance = 90,            /* class_instance  */
  YYSYMBOL_91_18 = 91,                     /* $@18  */
  YYSYMBOL_class_instance_interior = 92,   /* class_instance_interior  */
  YYSYMBOL_list_param_epsilon = 93,        /* list_param_epsilon  */
  YYSYMBOL_list_param = 94,                /* list_param  */
  YYSYMBOL_param = 95,                     /* param  */
  YYSYMBOL_call_list_epsilon = 96,         /* call_list_epsilon  */
  YYSYMBOL_call_list = 97,                 /* call_list  */
  YYSYMBOL_e = 98                          /* e  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 30 "maker.y"

     

#line 231 "maker.tab.c"


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
#define YYLAST   223

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  61
/* YYNRULES -- Number of rules.  */
#define YYNRULES  114
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  219

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
       0,    40,    40,    41,    45,    52,    44,    58,    59,    60,
      61,    64,    65,    68,    67,    92,   101,    91,   107,   108,
     110,   111,   114,   117,   120,   121,   123,   124,   127,   130,
     133,   134,   136,   137,   139,   140,   142,   143,   144,   145,
     146,   147,   148,   149,   151,   152,   153,   154,   155,   156,
     157,   158,   160,   163,   166,   172,   180,   179,   240,   239,
     321,   329,   320,   340,   348,   351,   355,   363,   339,   374,
     382,   373,   392,   394,   395,   396,   399,   400,   403,   404,
     405,   407,   409,   410,   414,   413,   430,   431,   435,   436,
     439,   442,   442,   444,   447,   448,   450,   451,   455,   461,
     462,   464,   507,   551,   552,   553,   554,   555,   556,   566,
     568,   570,   575,   582,   583
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
  "$@4", "$@5", "variables_generator", "variables", "fundamentals", "arr",
  "arr_list", "variables_interior", "fundamentals_interior",
  "arr_interior", "list_main", "list_else", "list", "statement",
  "statement_main", "assign_node", "function_call_node", "$@6", "$@7",
  "while_node", "$@8", "$@9", "if_node", "$@10", "$@11", "$@12", "$@13",
  "$@14", "for_node", "$@15", "$@16", "print_node", "type_fucntion_node",
  "expression_for", "declarations_interior", "boolean_expression", "y",
  "classes", "class", "$@17", "class_initialize_initial",
  "class_initialize", "class_initialize_interior", "class_instance",
  "$@18", "class_instance_interior", "list_param_epsilon", "list_param",
  "param", "call_list_epsilon", "call_list", "e", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-111)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-59)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      72,    -3,    17,     2,    30,    31,    20,  -111,    73,  -111,
    -111,  -111,    72,  -111,    52,    11,  -111,  -111,  -111,  -111,
      41,  -111,    20,  -111,    44,  -111,  -111,    34,    50,    54,
      84,    64,    99,  -111,    90,    31,    44,  -111,    76,    97,
    -111,  -111,    97,     7,   107,   117,   102,   103,   113,   115,
     116,  -111,  -111,  -111,  -111,    98,  -111,  -111,  -111,  -111,
    -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,   122,
     141,   130,   132,  -111,    73,   136,    16,   162,   142,   122,
    -111,    16,    16,   163,    18,    18,   169,    99,   143,  -111,
    -111,   171,    97,   168,   172,  -111,   -26,  -111,  -111,  -111,
      16,  -111,  -111,  -111,   108,   158,    18,  -111,   149,   108,
     151,    32,   152,    18,   125,   131,  -111,  -111,  -111,    99,
    -111,   153,    99,   175,   155,   100,    18,    18,    18,    18,
      18,    16,   157,   159,   154,    92,   183,   184,   185,    16,
     137,  -111,  -111,   174,  -111,   160,  -111,  -111,  -111,  -111,
    -111,  -111,  -111,  -111,  -111,  -111,   165,   178,  -111,    92,
      74,    74,  -111,  -111,  -111,   108,    18,  -111,    18,  -111,
    -111,   158,   166,    18,    99,   191,   170,   -29,    92,    99,
      99,    71,   112,  -111,   167,    16,  -111,  -111,  -111,    15,
    -111,   173,    92,   195,  -111,   176,   196,   197,   198,   177,
     179,  -111,  -111,  -111,    47,   199,  -111,   200,  -111,   204,
      99,  -111,  -111,    99,   206,  -111,  -111,   208,  -111
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      10,     0,     0,     0,     0,     0,     9,    12,     8,    19,
      20,    21,    10,    82,    13,     0,    15,     1,     4,     3,
       0,    11,     7,    18,    87,    83,    22,     0,     0,     0,
       0,     0,     0,    13,     0,     0,    86,    88,     0,    95,
      23,    84,    95,    56,     0,     0,     0,     0,     0,     0,
       0,    76,    26,    27,     5,     0,    44,    45,    46,    47,
      48,    50,    51,    49,    77,    90,    91,     2,    89,    25,
       0,     0,    94,    96,    10,     0,     0,     0,     0,    28,
      93,     0,     0,     0,     0,     0,     0,    30,     0,    24,
      98,     0,     0,     0,     0,   110,   111,   109,   108,   114,
       0,   113,    53,    80,    52,    58,   100,    29,     0,     0,
       0,     0,     0,     0,     0,     0,     6,    31,    92,    33,
      97,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    99,   101,     0,     0,     0,     0,
       0,    72,    73,     0,    32,     0,    36,    37,    38,    39,
      40,    42,    43,    41,    85,    16,   112,    78,   107,    81,
     103,   105,   104,   106,    55,    54,     0,    57,     0,    63,
      60,     0,     0,     0,    34,     0,     0,     0,   102,     0,
       0,     0,     0,    35,     0,     0,    59,    64,    61,   111,
      74,     0,    75,     0,    17,     0,     0,     0,     0,     0,
       0,    79,    65,    62,   112,     0,    14,     0,    69,     0,
       0,    66,    70,    33,     0,    67,    71,     0,    68
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -111,  -111,   180,  -111,  -111,    -9,   202,     0,  -111,  -111,
    -111,  -111,   209,  -111,  -111,    26,  -111,  -111,  -111,   129,
       5,  -110,  -111,  -111,   -31,   -32,  -111,  -111,   -21,  -111,
    -111,   -15,  -111,  -111,  -111,  -111,  -111,   -14,  -111,  -111,
     -13,   -12,  -111,   -11,   -68,  -111,  -111,   207,  -111,  -111,
    -111,  -111,   186,  -111,  -111,   181,  -111,   128,  -111,    55,
     -69
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,    19,    32,    86,     5,     6,     7,    28,    31,
     175,     8,     9,    10,    11,    29,    51,    52,    53,    54,
     143,   144,   145,    55,   146,   101,    78,   132,   148,   180,
     197,   149,   179,   196,   207,   213,   217,   150,   210,   214,
     151,   152,   191,   153,   102,   103,    12,    13,    74,    35,
      36,    64,    37,    88,    65,    71,    72,    73,   133,   134,
     109
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      57,    56,   186,    24,   -56,    14,    21,   104,   168,   123,
      16,    58,   155,   108,   110,   114,   115,    59,    60,    61,
      62,    63,    21,    95,    96,    95,    96,    15,    76,    20,
      17,   125,   124,    97,    18,    97,    76,   135,    98,     3,
      98,    99,    77,    99,   140,   -56,   100,    30,   113,    33,
     198,    38,   112,    76,    34,    57,    56,   159,   160,   161,
     162,   163,   165,   164,   183,    93,    58,   138,   131,   187,
     188,   172,    59,    60,    61,    62,    63,   -58,    95,   189,
      39,     1,     1,     2,    26,    27,    40,   147,    97,    41,
     147,     3,     3,    98,    42,    89,    99,   135,    66,   178,
     212,   113,   129,   130,   182,   107,    70,    43,    44,    45,
      69,    46,   192,    47,    48,    79,   126,   195,   127,   128,
     129,   130,    49,    50,   126,    80,   127,   128,   129,   130,
      87,   158,    81,    82,   127,   128,   129,   130,   127,   128,
     129,   130,   147,    83,   193,    84,    85,   147,   147,    90,
     190,   127,   128,   129,   130,    27,   141,   127,   128,   129,
     130,    91,   142,   127,   128,   129,   130,    94,   158,    92,
     105,   111,   106,   116,   121,   118,   119,   122,   147,   131,
     136,   147,   137,   156,   139,   154,   157,   166,   169,   170,
     167,   168,   174,   171,   173,   -58,   176,   184,   181,   194,
     185,   200,   202,   203,   208,   199,   204,   201,   205,   211,
      22,   206,   216,   209,   218,    67,   117,    23,   215,    25,
     120,   177,    68,    75
};

static const yytype_uint8 yycheck[] =
{
      32,    32,    31,    12,    30,     8,     6,    76,    37,    35,
       8,    32,   122,    81,    82,    84,    85,    32,    32,    32,
      32,    32,    22,     7,     8,     7,     8,    10,    21,     9,
       0,   100,   100,    17,     3,    17,    21,   106,    22,    19,
      22,    25,    35,    25,   113,    30,    30,    36,    30,     8,
      35,    17,    83,    21,    10,    87,    87,   126,   127,   128,
     129,   130,   131,   131,   174,    74,    87,    35,    21,   179,
     180,   139,    87,    87,    87,    87,    87,    30,     7,     8,
      30,     9,     9,    11,    32,    33,    32,   119,    17,     5,
     122,    19,    19,    22,    30,    69,    25,   166,     8,   168,
     210,    30,    28,    29,   173,    79,     9,     8,     9,    10,
      34,    12,   181,    14,    15,     8,    16,   185,    26,    27,
      28,    29,    23,    24,    16,     8,    26,    27,    28,    29,
      32,    31,    30,    30,    26,    27,    28,    29,    26,    27,
      28,    29,   174,    30,    32,    30,    30,   179,   180,     8,
     181,    26,    27,    28,    29,    33,    31,    26,    27,    28,
      29,    31,    31,    26,    27,    28,    29,    31,    31,    37,
       8,     8,    30,     4,     6,    32,     5,     5,   210,    21,
      31,   213,    31,     8,    32,    32,    31,    30,     5,     5,
      31,    37,    32,     8,    20,    30,    18,     6,    32,    32,
      30,     6,     6,     6,     5,    32,     8,    31,    31,     5,
       8,    32,     6,    13,     6,    35,    87,     8,   213,    12,
      92,   166,    36,    42
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     9,    11,    19,    39,    43,    44,    45,    49,    50,
      51,    52,    84,    85,     8,    10,     8,     0,     3,    40,
       9,    45,    44,    50,    43,    85,    32,    33,    46,    53,
      36,    47,    41,     8,    10,    87,    88,    90,    17,    30,
      32,     5,    30,     8,     9,    10,    12,    14,    15,    23,
      24,    54,    55,    56,    57,    61,    62,    63,    66,    69,
      75,    78,    79,    81,    89,    92,     8,    40,    90,    34,
       9,    93,    94,    95,    86,    93,    21,    35,    64,     8,
       8,    30,    30,    30,    30,    30,    42,    32,    91,    53,
       8,    31,    37,    43,    31,     7,     8,    17,    22,    25,
      30,    63,    82,    83,    98,     8,    30,    53,    82,    98,
      82,     8,    62,    30,    98,    98,     4,    57,    32,     5,
      95,     6,     5,    35,    82,    98,    16,    26,    27,    28,
      29,    21,    65,    96,    97,    98,    31,    31,    35,    32,
      98,    31,    31,    58,    59,    60,    62,    63,    66,    69,
      75,    78,    79,    81,    32,    59,     8,    31,    31,    98,
      98,    98,    98,    98,    82,    98,    30,    31,    37,     5,
       5,     8,    82,    20,    32,    48,    18,    97,    98,    70,
      67,    32,    98,    59,     6,    30,    31,    59,    59,     8,
      62,    80,    98,    32,    32,    82,    71,    68,    35,    32,
       6,    31,     6,     6,     8,    31,    32,    72,     5,    13,
      76,     5,    59,    73,    77,    58,     6,    74,     6
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    38,    39,    39,    41,    42,    40,    43,    43,    43,
      43,    44,    44,    46,    45,    47,    48,    45,    49,    49,
      50,    50,    51,    52,    53,    53,    54,    54,    55,    56,
      57,    57,    58,    58,    59,    59,    60,    60,    60,    60,
      60,    60,    60,    60,    61,    61,    61,    61,    61,    61,
      61,    61,    62,    62,    62,    62,    64,    63,    65,    63,
      67,    68,    66,    70,    71,    72,    73,    74,    69,    76,
      77,    75,    78,    79,    80,    80,    81,    81,    82,    82,
      82,    83,    84,    84,    86,    85,    87,    87,    88,    88,
      89,    91,    90,    92,    93,    93,    94,    94,    95,    96,
      96,    97,    97,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     2,     0,     0,     5,     2,     1,     1,
       0,     2,     1,     0,    13,     0,     0,    11,     2,     1,
       1,     1,     3,     4,     4,     3,     1,     1,     2,     3,
       2,     3,     1,     0,     2,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     5,     5,     0,     5,     0,     7,
       0,     0,     9,     0,     0,     0,     0,     0,    16,     0,
       0,    14,     4,     4,     1,     1,     1,     1,     3,     7,
       1,     3,     1,     2,     0,     8,     1,     0,     1,     2,
       1,     0,     4,     2,     1,     0,     1,     3,     2,     1,
       0,     1,     3,     3,     3,     3,     3,     3,     1,     1,
       1,     1,     3,     1,     1
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
#line 40 "maker.y"
                                                                          {if (errorCount == 0) cout<< "The program is correct!" << endl;}
#line 1343 "maker.tab.c"
    break;

  case 3: /* progr: global_classes_declaration main  */
#line 41 "maker.y"
                                         {if (errorCount == 0) cout<< "The program is correct!" << endl;}
#line 1349 "maker.tab.c"
    break;

  case 4: /* $@1: %empty  */
#line 45 "maker.y"
          {SymTable* currentmain;     
           currentmain = new SymTable("main");
           currentmain->assign_stack_above(current->return_stack_above());
           currentmain->add_above(current);
           current=currentmain;  
           Vector_Tabele.push_back(current);
          }
#line 1361 "maker.tab.c"
    break;

  case 5: /* $@2: %empty  */
#line 52 "maker.y"
                    {current->set_body((yyvsp[0].ListOfNodes));
               }
#line 1368 "maker.tab.c"
    break;

  case 6: /* main: BGIN $@1 list_main $@2 END  */
#line 54 "maker.y"
                    {
                     current=current->next_domain_scope();
                    }
#line 1376 "maker.tab.c"
    break;

  case 13: /* $@3: %empty  */
#line 68 "maker.y"
                { current->check_existance_for_declaration((yyvsp[-1].string), (yyvsp[0].string) , "func" , errorCount , yylineno);
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
#line 1395 "maker.tab.c"
    break;

  case 14: /* functions: TYPE ID $@3 '(' list_param_epsilon ')' CBEGIN list_else RETURN e ';' CEND ';'  */
#line 83 "maker.y"
                                                                           {
                                                                           class ASTNode* func_return;
                                                                           func_return=new ASTNode((yyvsp[-11].string) , "<-" , (yyvsp[-3].ListOfNodes) ,current, &errorCount, yylineno);
                                                                           class ASTNode* list_return;
                                                                           list_return=new ASTNode("sequence" , (yyvsp[-5].ListOfNodes) , func_return , &errorCount , current);
                                                                           current->set_body(list_return);
                                                                           current=current->next_domain_scope();
                                                                           }
#line 1408 "maker.tab.c"
    break;

  case 15: /* $@4: %empty  */
#line 92 "maker.y"
                { current->check_existance_for_declaration((yyvsp[-1].string), (yyvsp[0].string) , "func" , errorCount , yylineno);
                  class SymTable* function_scope;
                  function_scope=new SymTable((yyvsp[0].string));
                  function_scope->assign_stack_above(current->return_stack_above());
                  function_scope->add_above(current);
                  current->add_bellow(function_scope);
                  current=function_scope;
                  Vector_Tabele.push_back(current);
                }
#line 1422 "maker.tab.c"
    break;

  case 16: /* $@5: %empty  */
#line 101 "maker.y"
                                                     {    current->set_body((yyvsp[0].ListOfNodes));}
#line 1428 "maker.tab.c"
    break;

  case 17: /* functions: VOID ID $@4 '(' list_param_epsilon ')' CBEGIN list $@5 CEND ';'  */
#line 102 "maker.y"
                                   {
                                    current=current->next_domain_scope();
                                   }
#line 1436 "maker.tab.c"
    break;

  case 22: /* fundamentals: TYPE ID ';'  */
#line 114 "maker.y"
                          {current->check_existance_for_declaration((yyvsp[-2].string), (yyvsp[-1].string) , "var" , errorCount , yylineno);}
#line 1442 "maker.tab.c"
    break;

  case 23: /* arr: TYPE ID arr_list ';'  */
#line 117 "maker.y"
                           {current->check_existance_for_declaration((yyvsp[-3].string), (yyvsp[-2].string) , "array" , errorCount , yylineno);}
#line 1448 "maker.tab.c"
    break;

  case 28: /* fundamentals_interior: TYPE ID  */
#line 127 "maker.y"
                                {current->check_existance_for_declaration((yyvsp[-1].string), (yyvsp[0].string) , "var" , errorCount , yylineno);}
#line 1454 "maker.tab.c"
    break;

  case 29: /* arr_interior: TYPE ID arr_list  */
#line 130 "maker.y"
                                 {current->check_existance_for_declaration((yyvsp[-2].string), (yyvsp[-1].string) , "array" , errorCount , yylineno);}
#line 1460 "maker.tab.c"
    break;

  case 30: /* list_main: statement_main ';'  */
#line 133 "maker.y"
                                {(yyval.ListOfNodes)=new ASTNode("final_sequence" , (yyvsp[-1].ListOfNodes) , &errorCount , yylineno, current);}
#line 1466 "maker.tab.c"
    break;

  case 31: /* list_main: statement_main ';' list_main  */
#line 134 "maker.y"
                                          {(yyval.ListOfNodes)=new ASTNode("sequence" , (yyvsp[-2].ListOfNodes) ,(yyvsp[0].ListOfNodes) , &errorCount , current);}
#line 1472 "maker.tab.c"
    break;

  case 32: /* list_else: list  */
#line 136 "maker.y"
               {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1478 "maker.tab.c"
    break;

  case 33: /* list_else: %empty  */
#line 137 "maker.y"
                       {(yyval.ListOfNodes)=new ASTNode();}
#line 1484 "maker.tab.c"
    break;

  case 34: /* list: statement ';'  */
#line 139 "maker.y"
                      {(yyval.ListOfNodes)=new ASTNode("final_sequence" , (yyvsp[-1].ListOfNodes) , &errorCount , yylineno, current);}
#line 1490 "maker.tab.c"
    break;

  case 35: /* list: statement ';' list  */
#line 140 "maker.y"
                           {(yyval.ListOfNodes)=new ASTNode("sequence" , (yyvsp[-2].ListOfNodes) ,(yyvsp[0].ListOfNodes) , &errorCount , current);}
#line 1496 "maker.tab.c"
    break;

  case 36: /* statement: assign_node  */
#line 142 "maker.y"
                       {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1502 "maker.tab.c"
    break;

  case 37: /* statement: function_call_node  */
#line 143 "maker.y"
                            {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1508 "maker.tab.c"
    break;

  case 38: /* statement: while_node  */
#line 144 "maker.y"
                    {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1514 "maker.tab.c"
    break;

  case 39: /* statement: if_node  */
#line 145 "maker.y"
                 {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1520 "maker.tab.c"
    break;

  case 40: /* statement: for_node  */
#line 146 "maker.y"
                  {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1526 "maker.tab.c"
    break;

  case 41: /* statement: declarations_interior  */
#line 147 "maker.y"
                                {(yyval.ListOfNodes)=new ASTNode();}
#line 1532 "maker.tab.c"
    break;

  case 42: /* statement: print_node  */
#line 148 "maker.y"
                     {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1538 "maker.tab.c"
    break;

  case 43: /* statement: type_fucntion_node  */
#line 149 "maker.y"
                             {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1544 "maker.tab.c"
    break;

  case 44: /* statement_main: assign_node  */
#line 151 "maker.y"
                            {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);(yyval.ListOfNodes)->run();}
#line 1550 "maker.tab.c"
    break;

  case 45: /* statement_main: function_call_node  */
#line 152 "maker.y"
                            {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);(yyval.ListOfNodes)->run();}
#line 1556 "maker.tab.c"
    break;

  case 46: /* statement_main: while_node  */
#line 153 "maker.y"
                    {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);(yyval.ListOfNodes)->run();}
#line 1562 "maker.tab.c"
    break;

  case 47: /* statement_main: if_node  */
#line 154 "maker.y"
                 {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);(yyval.ListOfNodes)->run();}
#line 1568 "maker.tab.c"
    break;

  case 48: /* statement_main: for_node  */
#line 155 "maker.y"
                  {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);(yyval.ListOfNodes)->run();}
#line 1574 "maker.tab.c"
    break;

  case 49: /* statement_main: declarations_interior  */
#line 156 "maker.y"
                                {(yyval.ListOfNodes)=new ASTNode();}
#line 1580 "maker.tab.c"
    break;

  case 50: /* statement_main: print_node  */
#line 157 "maker.y"
                     {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);(yyval.ListOfNodes)->run();}
#line 1586 "maker.tab.c"
    break;

  case 51: /* statement_main: type_fucntion_node  */
#line 158 "maker.y"
                             {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);(yyval.ListOfNodes)->run();}
#line 1592 "maker.tab.c"
    break;

  case 52: /* assign_node: ID ASSIGN e  */
#line 160 "maker.y"
                        {
                         (yyval.ListOfNodes)=new ASTNode((yyvsp[-2].string) , "<-" , (yyvsp[0].ListOfNodes) ,current, &errorCount, yylineno);
                         }
#line 1600 "maker.tab.c"
    break;

  case 53: /* assign_node: ID ASSIGN boolean_expression  */
#line 163 "maker.y"
                                         {
                         (yyval.ListOfNodes)=new ASTNode((yyvsp[-2].string) , "<-" , (yyvsp[0].ListOfNodes) ,current, &errorCount, yylineno);
                         }
#line 1608 "maker.tab.c"
    break;

  case 54: /* assign_node: ID '.' ID ASSIGN e  */
#line 166 "maker.y"
                             {
                         string buff1=(yyvsp[-4].string);
                         string buff3=(yyvsp[-2].string);
                         string class_mem=buff1+'.'+buff3;
                         (yyval.ListOfNodes)=new ASTNode(class_mem , "<-" , (yyvsp[0].ListOfNodes) ,current, &errorCount, yylineno);
                         }
#line 1619 "maker.tab.c"
    break;

  case 55: /* assign_node: ID '.' ID ASSIGN boolean_expression  */
#line 172 "maker.y"
                                              {
                         string buff1=(yyvsp[-4].string);
                         string buff3=(yyvsp[-2].string);
                         string class_mem=buff1+'.'+buff3;
                         (yyval.ListOfNodes)=new ASTNode(class_mem , "<-" , (yyvsp[0].ListOfNodes) ,current, &errorCount, yylineno);
                         }
#line 1630 "maker.tab.c"
    break;

  case 56: /* $@6: %empty  */
#line 180 "maker.y"
               {
                    if(!param_checker.empty()){
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
#line 1676 "maker.tab.c"
    break;

  case 57: /* function_call_node: ID $@6 '(' call_list_epsilon ')'  */
#line 221 "maker.y"
                                         {
                                  if(!param_checker.empty()){
                                   errorCount++;
                                   yyerror("Not enough parameters in function call");
                                   while(!param_checker.empty()){
                                        cout<<param_checker.top()->name<<endl;
                                        param_checker.pop();
                                   }
                                  }
                                  (yyval.ListOfNodes)=new ASTNode("func_call" , functia_apelata->get_body() , functia_apelata->get_function_core() , &errorCount , yylineno , current);//S-ar putea s- schimb sa semene cu o expresie    //COPIE??
                                  if(!Temp_stack.empty()){
                                   while(!Temp_stack.empty()){
                                        param_checker.push(Temp_stack.top());
                                        Temp_stack.pop();
                                   }
                                  }
                                 }
#line 1698 "maker.tab.c"
    break;

  case 58: /* $@7: %empty  */
#line 240 "maker.y"
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
                    // SymTable* hard_copy=current->deep_copy();
                    // ++hard_copy_counter;
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
                         //cout<<"++++++++++++++"<<current->get_IdInfo_Type($1)<<endl;
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
                         // cout<<"Continut clasa"<<endl;
                         while(!stacks.empty()){
                              // cout<<stacks.top()->get_dom_name()<<endl;
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
#line 1764 "maker.tab.c"
    break;

  case 59: /* function_call_node: ID '.' ID $@7 '(' call_list ')'  */
#line 301 "maker.y"
                                 {
                                 if(!param_checker.empty()){
                                   errorCount++;
                                   yyerror("Not enough parameters in function call");
                                   while(!param_checker.empty()){
                                        cout<<param_checker.top()->name<<endl;
                                        param_checker.pop();
                                   }
                                  }
                                  (yyval.ListOfNodes)=new ASTNode("func_call" , functia_apelata->get_body() , functia_apelata->get_function_core() , &errorCount , yylineno , current);//S-ar putea s- schimb sa semene cu o expresie    //COPIE??
                                  if(!Temp_stack.empty()){
                                   while(!Temp_stack.empty()){
                                        param_checker.push(Temp_stack.top());
                                        Temp_stack.pop();
                                   }
                                  }
                                 }
#line 1786 "maker.tab.c"
    break;

  case 60: /* $@8: %empty  */
#line 321 "maker.y"
               {
                    SymTable* currentCTRL;     
                    currentCTRL = new SymTable((yyvsp[-4].string));
                    currentCTRL->assign_stack_above(current->return_stack_above());
                    currentCTRL->add_above(current);
                    current=currentCTRL;
                    Vector_Tabele.push_back(current);
               }
#line 1799 "maker.tab.c"
    break;

  case 61: /* $@9: %empty  */
#line 329 "maker.y"
                             {
                              
                              current->set_body((yyvsp[0].ListOfNodes));
                              }
#line 1808 "maker.tab.c"
    break;

  case 62: /* while_node: WHILE '(' boolean_expression ')' CBEGIN $@8 list $@9 CEND  */
#line 334 "maker.y"
                                   {
                                        (yyval.ListOfNodes)=new ASTNode("while" , (yyvsp[-6].ListOfNodes) , (yyvsp[-2].ListOfNodes) , &errorCount , yylineno);
                                        current=current->next_domain_scope();
                                   }
#line 1817 "maker.tab.c"
    break;

  case 63: /* $@10: %empty  */
#line 340 "maker.y"
                    {
                         SymTable* currentCTRL;     
                         currentCTRL = new SymTable((yyvsp[-4].string));
                         currentCTRL->assign_stack_above(current->return_stack_above());
                         currentCTRL->add_above(current);
                         current=currentCTRL;
                         Vector_Tabele.push_back(current);
                    }
#line 1830 "maker.tab.c"
    break;

  case 64: /* $@11: %empty  */
#line 348 "maker.y"
                             {
                              current->set_body((yyvsp[0].ListOfNodes));
                         }
#line 1838 "maker.tab.c"
    break;

  case 65: /* $@12: %empty  */
#line 351 "maker.y"
                                   {
                                        current=current->next_domain_scope();
                                   }
#line 1846 "maker.tab.c"
    break;

  case 66: /* $@13: %empty  */
#line 355 "maker.y"
                              {
                                   SymTable* currentCTRL;     
                                   currentCTRL = new SymTable((yyvsp[-11].string));
                                   currentCTRL->assign_stack_above(current->return_stack_above());
                                   currentCTRL->add_above(current);
                                   current=currentCTRL;
                                   Vector_Tabele.push_back(current);
                              }
#line 1859 "maker.tab.c"
    break;

  case 67: /* $@14: %empty  */
#line 363 "maker.y"
                                                           {
                                                       current->set_body((yyvsp[0].ListOfNodes));
                                                  }
#line 1867 "maker.tab.c"
    break;

  case 68: /* if_node: IF '(' boolean_expression ')' CBEGIN $@10 list $@11 CEND $@12 ELSE CBEGIN $@13 list_else $@14 CEND  */
#line 366 "maker.y"
                              {
                                   class ASTNode* combine;
                                   combine=new ASTNode((yyvsp[-9].ListOfNodes) , (yyvsp[-2].ListOfNodes) , &errorCount);
                                   (yyval.ListOfNodes)=new ASTNode("if" , (yyvsp[-13].ListOfNodes) , combine , &errorCount , yylineno);
                                   current=current->next_domain_scope();
                              }
#line 1878 "maker.tab.c"
    break;

  case 69: /* $@15: %empty  */
#line 374 "maker.y"
               {
                 SymTable* currentCTRL;     
                 currentCTRL = new SymTable((yyvsp[-9].string));
                 currentCTRL->assign_stack_above(current->return_stack_above());
                 currentCTRL->add_above(current);
                 current=currentCTRL;
                 Vector_Tabele.push_back(current);
               }
#line 1891 "maker.tab.c"
    break;

  case 70: /* $@16: %empty  */
#line 382 "maker.y"
                                                                                        {current->set_body((yyvsp[0].ListOfNodes));}
#line 1897 "maker.tab.c"
    break;

  case 71: /* for_node: FOR '(' assign_node ';' boolean_expression ';' expression_for ';' ')' CBEGIN $@15 list $@16 CEND  */
#line 383 "maker.y"
               {
                 class ASTNode* combination1;
                 combination1=new ASTNode((yyvsp[-11].ListOfNodes) , (yyvsp[-9].ListOfNodes) , &errorCount);
                 class ASTNode* combination2;
                 combination2=new ASTNode((yyvsp[-2].ListOfNodes) , (yyvsp[-7].ListOfNodes) , &errorCount);
                 (yyval.ListOfNodes)=new ASTNode("for", combination1 , combination2 , &errorCount , yylineno );
                 current=current->next_domain_scope();
               }
#line 1910 "maker.tab.c"
    break;

  case 72: /* print_node: PRINT '(' e ')'  */
#line 392 "maker.y"
                           {(yyval.ListOfNodes)=new ASTNode((yyvsp[-3].string) , (yyvsp[-1].ListOfNodes) , &errorCount , yylineno);}
#line 1916 "maker.tab.c"
    break;

  case 73: /* type_fucntion_node: TYPE_FUNCTION '(' e ')'  */
#line 394 "maker.y"
                                            {(yyval.ListOfNodes)=new ASTNode((yyvsp[-3].string) , (yyvsp[-1].ListOfNodes) , &errorCount , yylineno);}
#line 1922 "maker.tab.c"
    break;

  case 74: /* expression_for: assign_node  */
#line 395 "maker.y"
                          {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1928 "maker.tab.c"
    break;

  case 75: /* expression_for: e  */
#line 396 "maker.y"
                 {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1934 "maker.tab.c"
    break;

  case 78: /* boolean_expression: '(' boolean_expression ')'  */
#line 403 "maker.y"
                                               {(yyval.ListOfNodes)=(yyvsp[-1].ListOfNodes);}
#line 1940 "maker.tab.c"
    break;

  case 79: /* boolean_expression: '(' boolean_expression ')' CONNECT '(' boolean_expression ')'  */
#line 404 "maker.y"
                                                                            {(yyval.ListOfNodes)=new ASTNode((yyvsp[-3].string) , (yyvsp[-5].ListOfNodes) , (yyvsp[-1].ListOfNodes) , &errorCount);}
#line 1946 "maker.tab.c"
    break;

  case 80: /* boolean_expression: y  */
#line 405 "maker.y"
                    {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 1952 "maker.tab.c"
    break;

  case 81: /* y: e CMP e  */
#line 407 "maker.y"
            {(yyval.ListOfNodes)=new ASTNode((yyvsp[-1].string) , (yyvsp[-2].ListOfNodes) , (yyvsp[0].ListOfNodes) , &errorCount);}
#line 1958 "maker.tab.c"
    break;

  case 84: /* $@17: %empty  */
#line 414 "maker.y"
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
#line 1973 "maker.tab.c"
    break;

  case 85: /* class: Class_Type Class_ID ':' CBEGIN $@17 global_classes_declaration CEND ';'  */
#line 425 "maker.y"
          {
            current=current->next_domain_scope();
          }
#line 1981 "maker.tab.c"
    break;

  case 91: /* $@18: %empty  */
#line 442 "maker.y"
                             {current->check_existance_for_class_instance((yyvsp[-1].string) , (yyvsp[0].string), errorCount , yylineno);}
#line 1987 "maker.tab.c"
    break;

  case 93: /* class_instance_interior: Class_ID ID  */
#line 444 "maker.y"
                                      {current->check_existance_for_class_instance((yyvsp[-1].string) , (yyvsp[0].string), errorCount , yylineno);}
#line 1993 "maker.tab.c"
    break;

  case 98: /* param: TYPE ID  */
#line 455 "maker.y"
                {current->check_existance_for_declaration((yyvsp[-1].string), (yyvsp[0].string) , "param" , errorCount , yylineno);
                 current->add_function_params(current->get_that_variable((yyvsp[0].string)));
               //   current->next_domain_scope()->add_params(current->get_dom_name(), current->get_that_variable($2));//adaugam in parametrii varaibilei ID FUNC care e declarata in domeniu de deasupra
                }
#line 2002 "maker.tab.c"
    break;

  case 101: /* call_list: e  */
#line 465 "maker.y"
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
#line 2049 "maker.tab.c"
    break;

  case 102: /* call_list: call_list ',' e  */
#line 507 "maker.y"
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
#line 2096 "maker.tab.c"
    break;

  case 103: /* e: e '+' e  */
#line 551 "maker.y"
              {(yyval.ListOfNodes)=new ASTNode("+" , (yyvsp[-2].ListOfNodes) , (yyvsp[0].ListOfNodes) , &errorCount);}
#line 2102 "maker.tab.c"
    break;

  case 104: /* e: e '*' e  */
#line 552 "maker.y"
              {(yyval.ListOfNodes)=new ASTNode("*" , (yyvsp[-2].ListOfNodes) , (yyvsp[0].ListOfNodes) , &errorCount);}
#line 2108 "maker.tab.c"
    break;

  case 105: /* e: e '-' e  */
#line 553 "maker.y"
              {(yyval.ListOfNodes)=new ASTNode("-" , (yyvsp[-2].ListOfNodes) , (yyvsp[0].ListOfNodes) , &errorCount);}
#line 2114 "maker.tab.c"
    break;

  case 106: /* e: e '/' e  */
#line 554 "maker.y"
              {(yyval.ListOfNodes)=new ASTNode("/" , (yyvsp[-2].ListOfNodes) , (yyvsp[0].ListOfNodes) , &errorCount);}
#line 2120 "maker.tab.c"
    break;

  case 107: /* e: '(' e ')'  */
#line 555 "maker.y"
              {(yyval.ListOfNodes)=(yyvsp[-1].ListOfNodes);}
#line 2126 "maker.tab.c"
    break;

  case 108: /* e: TRUTH_VALUE  */
#line 556 "maker.y"
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
#line 2141 "maker.tab.c"
    break;

  case 109: /* e: NR  */
#line 566 "maker.y"
              {Value val(atoi(yytext));
               (yyval.ListOfNodes)=new ASTNode(val , "int" , &errorCount);}
#line 2148 "maker.tab.c"
    break;

  case 110: /* e: REAL  */
#line 568 "maker.y"
              {Value val((float)atof(yytext));
               (yyval.ListOfNodes)=new ASTNode(val , "float" , &errorCount);}
#line 2155 "maker.tab.c"
    break;

  case 111: /* e: ID  */
#line 570 "maker.y"
              {
               domeniul_caruia_ii_apartine_varabila=current->check_existance_for_use((yyvsp[0].string) , errorCount , yylineno);
               (yyval.ListOfNodes)=new ASTNode( domeniul_caruia_ii_apartine_varabila->get_that_variable((yyvsp[0].string)), &errorCount , yylineno);//??? MAybe it will work like this?
               //$$=new ASTNode($1 , current , errorCount , yylineno); FUCK THIS LINE IN PARTICULAR (AM TRECUT PRIN MUSCIAL DE 3 ORI LA ASTA)
              }
#line 2165 "maker.tab.c"
    break;

  case 112: /* e: ID '.' ID  */
#line 575 "maker.y"
            {
               string buff1=(yyvsp[-2].string);
               string buff3=(yyvsp[0].string);
               string class_mem=buff1+'.'+buff3;
               domeniul_caruia_ii_apartine_varabila=current->check_existance_for_use(class_mem.c_str() , errorCount , yylineno);
               (yyval.ListOfNodes)=new ASTNode( domeniul_caruia_ii_apartine_varabila->get_that_variable(class_mem.c_str()), &errorCount , yylineno);
               }
#line 2177 "maker.tab.c"
    break;

  case 113: /* e: function_call_node  */
#line 582 "maker.y"
                     {(yyval.ListOfNodes)=(yyvsp[0].ListOfNodes);}
#line 2183 "maker.tab.c"
    break;

  case 114: /* e: STRING  */
#line 583 "maker.y"
               {Value val((yyvsp[0].string));     
               (yyval.ListOfNodes)=new ASTNode(val , "string" , &errorCount);}
#line 2190 "maker.tab.c"
    break;


#line 2194 "maker.tab.c"

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

#line 587 "maker.y"

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
