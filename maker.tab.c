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
#include "ASTNode.h"
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
extern int yylex();
void yyerror(const char * s);
class SymTable* current;
class SymTable* domeniul_caruia_ii_apartine_varabila;
std::vector<SymTable*> Vector_Tabele;
std::stack<SymTable*> Stack_Table;
int errorCount = 0;

#line 89 "maker.tab.c"

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
  YYSYMBOL_ASSIGN = 5,                     /* ASSIGN  */
  YYSYMBOL_NR = 6,                         /* NR  */
  YYSYMBOL_TRUTH_VALUE = 7,                /* TRUTH_VALUE  */
  YYSYMBOL_CBEGIN = 8,                     /* CBEGIN  */
  YYSYMBOL_CEND = 9,                       /* CEND  */
  YYSYMBOL_REAL = 10,                      /* REAL  */
  YYSYMBOL_CONNECT = 11,                   /* CONNECT  */
  YYSYMBOL_CMP = 12,                       /* CMP  */
  YYSYMBOL_ID = 13,                        /* ID  */
  YYSYMBOL_TYPE = 14,                      /* TYPE  */
  YYSYMBOL_Class_ID = 15,                  /* Class_ID  */
  YYSYMBOL_Class_Type = 16,                /* Class_Type  */
  YYSYMBOL_CTRL = 17,                      /* CTRL  */
  YYSYMBOL_18_ = 18,                       /* '+'  */
  YYSYMBOL_19_ = 19,                       /* '-'  */
  YYSYMBOL_20_ = 20,                       /* '*'  */
  YYSYMBOL_21_ = 21,                       /* '/'  */
  YYSYMBOL_22_ = 22,                       /* '('  */
  YYSYMBOL_23_ = 23,                       /* ')'  */
  YYSYMBOL_24_ = 24,                       /* ';'  */
  YYSYMBOL_25_ = 25,                       /* '['  */
  YYSYMBOL_26_ = 26,                       /* ']'  */
  YYSYMBOL_27_ = 27,                       /* ':'  */
  YYSYMBOL_28_ = 28,                       /* ','  */
  YYSYMBOL_YYACCEPT = 29,                  /* $accept  */
  YYSYMBOL_progr = 30,                     /* progr  */
  YYSYMBOL_main = 31,                      /* main  */
  YYSYMBOL_32_1 = 32,                      /* $@1  */
  YYSYMBOL_declarations = 33,              /* declarations  */
  YYSYMBOL_fundamental_type = 34,          /* fundamental_type  */
  YYSYMBOL_decl = 35,                      /* decl  */
  YYSYMBOL_36_2 = 36,                      /* $@2  */
  YYSYMBOL_arrays = 37,                    /* arrays  */
  YYSYMBOL_arr = 38,                       /* arr  */
  YYSYMBOL_arr_list = 39,                  /* arr_list  */
  YYSYMBOL_list = 40,                      /* list  */
  YYSYMBOL_statement = 41,                 /* statement  */
  YYSYMBOL_42_3 = 42,                      /* $@3  */
  YYSYMBOL_43_4 = 43,                      /* $@4  */
  YYSYMBOL_44_5 = 44,                      /* $@5  */
  YYSYMBOL_45_6 = 45,                      /* $@6  */
  YYSYMBOL_declarations_interior = 46,     /* declarations_interior  */
  YYSYMBOL_fundamental_type_interior = 47, /* fundamental_type_interior  */
  YYSYMBOL_decl_interior = 48,             /* decl_interior  */
  YYSYMBOL_49_7 = 49,                      /* $@7  */
  YYSYMBOL_arrays_interior = 50,           /* arrays_interior  */
  YYSYMBOL_arr_interior = 51,              /* arr_interior  */
  YYSYMBOL_condition_chain = 52,           /* condition_chain  */
  YYSYMBOL_condition = 53,                 /* condition  */
  YYSYMBOL_classes = 54,                   /* classes  */
  YYSYMBOL_class = 55,                     /* class  */
  YYSYMBOL_56_8 = 56,                      /* $@8  */
  YYSYMBOL_class_initialize_initial = 57,  /* class_initialize_initial  */
  YYSYMBOL_class_initialize = 58,          /* class_initialize  */
  YYSYMBOL_class_initialize_interior = 59, /* class_initialize_interior  */
  YYSYMBOL_class_instance = 60,            /* class_instance  */
  YYSYMBOL_61_9 = 61,                      /* $@9  */
  YYSYMBOL_class_instance_interior = 62,   /* class_instance_interior  */
  YYSYMBOL_list_param = 63,                /* list_param  */
  YYSYMBOL_param = 64,                     /* param  */
  YYSYMBOL_call_list = 65,                 /* call_list  */
  YYSYMBOL_statement_for_call_list = 66,   /* statement_for_call_list  */
  YYSYMBOL_67_10 = 67,                     /* $@10  */
  YYSYMBOL_68_11 = 68,                     /* $@11  */
  YYSYMBOL_69_12 = 69,                     /* $@12  */
  YYSYMBOL_e = 70                          /* e  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 23 "maker.y"

     void check_existance_for_declaration(SymTable*currento, const char* a , const char* b , const char* c){ //used for 
          if(!currento->existsId(b)) {
               std::stack<SymTable*> Copy_table; //Verificam daca a fost declarata anterior intr-un Domeniu de vizibilitate local sau nu
               Copy_table=Stack_Table;
               while(!Copy_table.empty()){
                    SymTable* iterator;
                    iterator=Copy_table.top();
                    Copy_table.pop();
                    if(iterator->existsId(b)){
                         errorCount++;
                         char*buff=new char[256];
                         strcpy(buff ,"Variable ");
                         strcat(buff , b);
                         strcat(buff ," already defined"); 
                         yyerror(buff);
                         delete [] buff;
                         buff=nullptr;
                         break;
                    }
               }
                    currento->addVar(a,b, c);
               } else {
                    errorCount++; 
                    char*buff=new char[256];
                    strcpy(buff ,"Variable ");
                    strcat(buff , b);
                    strcat(buff ," already defined"); 
                    yyerror(buff);
                    delete [] buff;
                    buff=nullptr;
                    }
     }

     SymTable* check_existance_for_use(SymTable*currento , const char* b){ //used for 
          if(!currento->existsId(b)) {//Nu exista in domeniul actual =>cautam daca exista mai sus
               int found=0;
               // cout<<"Nu exista in "<<currento->get_dom_name()<<endl;
               std::stack<SymTable*> Copy_table;
               Copy_table=Stack_Table;
               while(!Copy_table.empty()){
                    SymTable* iterator;
                    iterator=Copy_table.top();
                    Copy_table.pop();
                    if(iterator->existsId(b)){
                         found=1;
                         // cout<<"Exista in "<<iterator->get_dom_name()<<endl;
                         return iterator;
                         break;
                    }
               }
               if(found==0){
               errorCount++; 
               char*buff=new char[256];
               strcpy(buff ,"Variable ");
               strcat(buff , b);
               strcat(buff ," doesnt exist"); 
               yyerror(buff);
               delete [] buff;
               buff=nullptr;
               return nullptr;
               }
          } 
          else{
               return currento;
          }
          return nullptr;
     }
     //Functie care verifica daca acea variabila (ID) a fost declarat deja si da eroare daca NU;

     void check_existance_for_class_instance(SymTable* currento, const char* a ,const char* b)
     {
          SymTable* global_domain;
          global_domain=Vector_Tabele[0];
          //std::cout<<"VERIFICARE GLOBAL DOMAIN IN CHECK_EXIStANCE USER"<<endl;
          if(global_domain->existsId(a)){
               //std::cout<<"Exista clasa "<<a<<endl;
               // SymTable* not_used;
               // std::cout<<currento->get_dom_name();
               // not_used=check_existance_for_use(currento, b);
               check_existance_for_declaration(currento , a, b , "class_instance");
               //currento->addVar(a ,b, "class_instance");
               return;
          }
          else{
               errorCount++;
               char*buff=new char[256];
               strcpy(buff ,"Nu exista clasa ");
               strcat(buff , a);
               yyerror(buff);
               delete [] buff;
               buff=nullptr;
          }
     }
     

#line 290 "maker.tab.c"


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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   166

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  29
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  78
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  141

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   272


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
      22,    23,    20,    18,    28,    19,     2,    21,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    27,    24,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    25,     2,    26,     2,     2,     2,     2,     2,     2,
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
      15,    16,    17
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   125,   125,   126,   130,   129,   141,   142,   143,   144,
     147,   148,   152,   151,   164,   167,   168,   171,   174,   175,
     179,   180,   183,   183,   208,   208,   225,   225,   244,   243,
     256,   259,   260,   261,   264,   265,   269,   268,   281,   284,
     285,   288,   292,   293,   296,   299,   300,   303,   303,   317,
     318,   322,   323,   326,   327,   330,   330,   335,   341,   342,
     346,   349,   350,   351,   352,   355,   355,   380,   380,   397,
     397,   419,   420,   421,   422,   423,   424,   425,   426
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
  "ASSIGN", "NR", "TRUTH_VALUE", "CBEGIN", "CEND", "REAL", "CONNECT",
  "CMP", "ID", "TYPE", "Class_ID", "Class_Type", "CTRL", "'+'", "'-'",
  "'*'", "'/'", "'('", "')'", "';'", "'['", "']'", "':'", "','", "$accept",
  "progr", "main", "$@1", "declarations", "fundamental_type", "decl",
  "$@2", "arrays", "arr", "arr_list", "list", "statement", "$@3", "$@4",
  "$@5", "$@6", "declarations_interior", "fundamental_type_interior",
  "decl_interior", "$@7", "arrays_interior", "arr_interior",
  "condition_chain", "condition", "classes", "class", "$@8",
  "class_initialize_initial", "class_initialize",
  "class_initialize_interior", "class_instance", "$@9",
  "class_instance_interior", "list_param", "param", "call_list",
  "statement_for_call_list", "$@10", "$@11", "$@12", "e", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-75)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-70)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -10,    -7,    10,    15,   -10,   -75,    12,   -75,    28,   -75,
     -75,    23,   -75,    79,   -75,   -75,    12,    29,   -75,   -75,
      24,    27,    31,    76,    47,    59,   -75,    84,    81,   -75,
      67,    73,    86,   -75,    96,    89,    90,    82,    33,    83,
     -75,    91,   -75,    92,   -75,    93,   -75,   101,   -75,   -75,
     -75,    67,    97,    16,   -75,   104,    94,     2,   -75,     1,
     105,   -75,    88,   -75,   102,   -75,   106,   -75,   -75,   -75,
      98,   -75,   -75,    99,    86,     6,   107,     7,   -75,    95,
     -75,   -75,   -75,     1,   109,   103,    49,   -75,   -75,   108,
      67,   -10,   -75,   -75,   -75,     6,    45,   -75,     0,    17,
     -75,    45,    86,    39,     6,   -75,     6,     6,     6,     6,
       6,    76,   112,    63,   111,   110,   -75,     7,    50,   -75,
     113,    45,    77,    77,   -75,   -75,    62,   100,     6,   118,
       7,   -75,    45,   -75,   -75,   -75,   -75,    45,   -75,    57,
     -75
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       9,     0,     0,     0,     7,    10,     8,    15,    12,     1,
       4,     0,     3,    50,    45,    11,     6,     0,    16,    14,
       0,     0,     0,     0,     0,     0,    46,     0,    49,    51,
       0,     0,     0,    17,    24,     0,     0,     0,     0,     0,
      30,    31,    34,    32,    39,    33,    53,     0,    55,     2,
      52,    19,     0,     0,    58,    22,     0,    38,    57,     0,
       0,     5,     0,    20,     0,    35,     0,    40,    54,    47,
       0,    18,    60,     0,     0,     0,     0,     0,    41,     0,
      76,    77,    78,     0,     0,     0,     0,    28,    21,    38,
       0,     9,    56,    13,    59,     0,    23,    27,    78,     0,
      63,    61,     0,     0,     0,    42,     0,     0,     0,     0,
       0,     0,     0,     0,    65,     0,    25,     0,     0,    75,
       0,    44,    71,    73,    72,    74,     0,     0,     0,     0,
       0,    64,    62,    37,    43,    29,    48,    66,    70,     0,
      68
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -75,   -75,   114,   -75,    36,   -75,   124,   -75,   125,     9,
     -49,    20,   -38,   -75,   -75,   -75,   -75,   -75,   -75,   115,
     -75,   -75,   116,   117,    30,   -75,   120,   -75,   -75,   -75,
     -75,   119,   -75,   121,    35,    61,     8,    22,   -75,   -75,
     -75,   -74
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,    12,    23,     3,     4,     5,    21,     6,     7,
      22,    38,    39,    75,    56,    76,   111,    40,    41,    42,
      79,    43,    44,    84,    85,    13,    14,    91,    27,    28,
      45,    29,    70,    46,    53,    54,    99,   100,   128,   115,
     129,    86
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      62,    96,    71,   101,     1,   114,     8,    80,    78,   103,
       9,    81,    80,    80,    82,    18,    81,    81,    10,    82,
      98,   113,   -67,    83,   -36,    18,    17,    20,    95,    95,
      31,    11,   121,   122,   123,   124,   125,    61,    24,    73,
     116,    78,    30,   132,    74,   117,    34,    35,    36,    32,
      37,   106,    19,    20,   137,    33,   101,   107,   108,   109,
     110,   106,   119,   107,   108,   109,   110,   107,   108,   109,
     110,   135,    48,   133,    47,    34,    35,    36,    74,    37,
     140,   107,   108,   109,   110,   117,   119,    10,    62,    34,
      35,    36,    20,    37,    25,    11,    25,   109,   110,    51,
      52,    55,    57,    58,    59,    64,    66,    63,    36,    69,
      72,   -26,    88,    87,    97,    89,    77,   102,   -69,    90,
     104,   127,    92,    93,   136,   138,   105,   112,    15,    16,
     -36,   126,   130,    26,   120,    94,   134,   118,   139,   131,
       0,    49,     0,     0,     0,     0,     0,    50,     0,     0,
       0,     0,     0,     0,    60,     0,    65,     0,     0,    67,
       0,     0,     0,     0,     0,     0,    68
};

static const yytype_int16 yycheck[] =
{
      38,    75,    51,    77,    14,     5,    13,     6,    57,    83,
       0,    10,     6,     6,    13,     6,    10,    10,     3,    13,
      13,    95,    22,    22,    22,    16,    14,    25,    22,    22,
       6,    16,   106,   107,   108,   109,   110,     4,    15,    23,
      23,    90,    13,   117,    28,    28,    13,    14,    15,    22,
      17,    12,    24,    25,   128,    24,   130,    18,    19,    20,
      21,    12,    23,    18,    19,    20,    21,    18,    19,    20,
      21,     9,    13,    23,    27,    13,    14,    15,    28,    17,
      23,    18,    19,    20,    21,    28,    23,     3,   126,    13,
      14,    15,    25,    17,    15,    16,    15,    20,    21,    26,
      14,     5,    13,    13,    22,    14,    14,    24,    15,     8,
      13,     7,    24,     8,     7,    13,    22,    22,     7,    13,
      11,     9,    24,    24,    24,     7,    23,    91,     4,     4,
      22,   111,    22,    13,   104,    74,    23,   102,   130,   117,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    -1,    41,    -1,    -1,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    45
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    14,    30,    33,    34,    35,    37,    38,    13,     0,
       3,    16,    31,    54,    55,    35,    37,    14,    38,    24,
      25,    36,    39,    32,    15,    15,    55,    57,    58,    60,
      13,     6,    22,    24,    13,    14,    15,    17,    40,    41,
      46,    47,    48,    50,    51,    59,    62,    27,    13,    31,
      60,    26,    14,    63,    64,     5,    43,    13,    13,    22,
      52,     4,    41,    24,    14,    48,    14,    51,    62,     8,
      61,    39,    13,    23,    28,    42,    44,    22,    39,    49,
       6,    10,    13,    22,    52,    53,    70,     8,    24,    13,
      13,    56,    24,    24,    64,    22,    70,     7,    13,    65,
      66,    70,    22,    70,    11,    23,    12,    18,    19,    20,
      21,    45,    33,    70,     5,    68,    23,    28,    63,    23,
      53,    70,    70,    70,    70,    70,    40,     9,    67,    69,
      22,    66,    70,    23,    23,     9,    24,    70,     7,    65,
      23
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    29,    30,    30,    32,    31,    33,    33,    33,    33,
      34,    34,    36,    35,    35,    37,    37,    38,    39,    39,
      40,    40,    42,    41,    43,    41,    44,    41,    45,    41,
      41,    46,    46,    46,    47,    47,    49,    48,    48,    50,
      50,    51,    52,    52,    53,    54,    54,    56,    55,    57,
      57,    58,    58,    59,    59,    61,    60,    62,    63,    63,
      64,    65,    65,    65,    65,    67,    66,    68,    66,    69,
      66,    70,    70,    70,    70,    70,    70,    70,    70
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     2,     0,     4,     2,     1,     1,     0,
       1,     2,     0,     7,     3,     1,     2,     4,     4,     3,
       2,     3,     0,     4,     0,     5,     0,     4,     0,     6,
       1,     1,     1,     1,     1,     2,     0,     6,     2,     1,
       2,     3,     3,     5,     3,     1,     2,     0,     8,     1,
       0,     1,     2,     1,     2,     0,     4,     2,     1,     3,
       2,     1,     3,     1,     3,     0,     4,     0,     5,     0,
       4,     3,     3,     3,     3,     3,     1,     1,     1
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
  case 2: /* progr: declarations classes class_initialize_initial main  */
#line 125 "maker.y"
                                                            {if (errorCount == 0) cout<< "The program is correct!" << endl;}
#line 1347 "maker.tab.c"
    break;

  case 3: /* progr: declarations main  */
#line 126 "maker.y"
                           {if (errorCount == 0) cout<< "The program is correct!" << endl;}
#line 1353 "maker.tab.c"
    break;

  case 4: /* $@1: %empty  */
#line 130 "maker.y"
          {SymTable* currentmain;     
           currentmain = new SymTable("main");
           Stack_Table.push(currentmain);
           current=currentmain;  
           Vector_Tabele.push_back(current);
          }
#line 1364 "maker.tab.c"
    break;

  case 5: /* main: BGIN $@1 list END  */
#line 137 "maker.y"
                    {Stack_Table.pop();
                     current=Stack_Table.top();
                    }
#line 1372 "maker.tab.c"
    break;

  case 12: /* $@2: %empty  */
#line 152 "maker.y"
                { check_existance_for_declaration(current , (yyvsp[-1].string) , (yyvsp[0].string) , "func");
                  class SymTable* function_scope;
                  function_scope=new SymTable((yyvsp[0].string));
                  Stack_Table.push(function_scope);
                  current=function_scope;
                  Vector_Tabele.push_back(current);
                }
#line 1384 "maker.tab.c"
    break;

  case 13: /* decl: TYPE ID $@2 '(' list_param ')' ';'  */
#line 160 "maker.y"
                                   {
                                    Stack_Table.pop();
                                    current=Stack_Table.top();
                                   }
#line 1393 "maker.tab.c"
    break;

  case 14: /* decl: TYPE ID ';'  */
#line 164 "maker.y"
                  {check_existance_for_declaration(current , (yyvsp[-2].string) , (yyvsp[-1].string) , "var");}
#line 1399 "maker.tab.c"
    break;

  case 17: /* arr: TYPE ID arr_list ';'  */
#line 171 "maker.y"
                           {check_existance_for_declaration(current , (yyvsp[-3].string) , (yyvsp[-2].string) , "pointer");}
#line 1405 "maker.tab.c"
    break;

  case 22: /* $@3: %empty  */
#line 183 "maker.y"
                     {domeniul_caruia_ii_apartine_varabila=check_existance_for_use(current , (yyvsp[-1].string) );
                      if(domeniul_caruia_ii_apartine_varabila!=nullptr)
                         {
                              if (domeniul_caruia_ii_apartine_varabila->getValueType((yyvsp[-1].string))=="bool")
                              {
                                   {errorCount++; 
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
                     }
#line 1427 "maker.tab.c"
    break;

  case 23: /* statement: ID ASSIGN $@3 e  */
#line 200 "maker.y"
                           {
                              if(domeniul_caruia_ii_apartine_varabila!=nullptr)
                                   {
                                        // cout<<domeniul_caruia_ii_apartine_varabila->getValue_IDType($1)
                                        // <<"   "<<$1<<"   "
                                        // <<domeniul_caruia_ii_apartine_varabila->get_dom_name()<<endl;
                                   }
                           }
#line 1440 "maker.tab.c"
    break;

  case 24: /* $@4: %empty  */
#line 208 "maker.y"
              {
               domeniul_caruia_ii_apartine_varabila=check_existance_for_use(current , (yyvsp[0].string) );
               if(domeniul_caruia_ii_apartine_varabila!=nullptr)
                    {
                    if(domeniul_caruia_ii_apartine_varabila->getValue_IDType((yyvsp[0].string))!="func")
                         {errorCount++; 
                         char*buff=new char[256];
                         strcpy(buff ,"ID ");
                         strcat(buff , (yyvsp[0].string));
                         strcat(buff ," exists but is NOT a funciton"); 
                         yyerror(buff);
                         delete [] buff;
                         buff=nullptr;
                         }
                    }
              }
#line 1461 "maker.tab.c"
    break;

  case 26: /* $@5: %empty  */
#line 225 "maker.y"
                     {
                         domeniul_caruia_ii_apartine_varabila=check_existance_for_use(current , (yyvsp[-1].string));
                     }
#line 1469 "maker.tab.c"
    break;

  case 27: /* statement: ID ASSIGN $@5 TRUTH_VALUE  */
#line 228 "maker.y"
                                     {
                                        if(domeniul_caruia_ii_apartine_varabila!=nullptr){
                                             if (domeniul_caruia_ii_apartine_varabila->getValueType((yyvsp[-3].string))!="bool")
                                                  {
                                                       errorCount++; 
                                                       char*buff=new char[256];
                                                       strcpy(buff ,"Variable ");
                                                       strcat(buff , (yyvsp[-3].string));
                                                       strcat(buff ," is not a bool"); 
                                                       yyerror(buff);
                                                       delete [] buff;
                                                       buff=nullptr;
                                                  }   
                                        }
                                     }
#line 1489 "maker.tab.c"
    break;

  case 28: /* $@6: %empty  */
#line 244 "maker.y"
                                        {
                                             SymTable* currentCTRL;     
                                             currentCTRL = new SymTable((yyvsp[-2].string));
                                             Stack_Table.push(currentCTRL);
                                             current=currentCTRL;
                                             Vector_Tabele.push_back(current);
                                        }
#line 1501 "maker.tab.c"
    break;

  case 29: /* statement: CTRL condition_chain CBEGIN $@6 list CEND  */
#line 252 "maker.y"
                                                       {
                                                            Stack_Table.pop();
                                                            current=Stack_Table.top();
                                                       }
#line 1510 "maker.tab.c"
    break;

  case 36: /* $@7: %empty  */
#line 269 "maker.y"
                        { check_existance_for_declaration(current , (yyvsp[-1].string) , (yyvsp[0].string) , "func");
                        class SymTable* function_scope;
                        function_scope=new SymTable((yyvsp[0].string));
                        Stack_Table.push(function_scope);
                        current=function_scope;
                        Vector_Tabele.push_back(current);
                        }
#line 1522 "maker.tab.c"
    break;

  case 37: /* decl_interior: TYPE ID $@7 '(' list_param ')'  */
#line 277 "maker.y"
                                   {
                                    Stack_Table.pop();
                                    current=Stack_Table.top();
                                   }
#line 1531 "maker.tab.c"
    break;

  case 38: /* decl_interior: TYPE ID  */
#line 281 "maker.y"
                              {check_existance_for_declaration(current , (yyvsp[-1].string) , (yyvsp[0].string) , "var");}
#line 1537 "maker.tab.c"
    break;

  case 41: /* arr_interior: TYPE ID arr_list  */
#line 288 "maker.y"
                                {check_existance_for_declaration(current , (yyvsp[-2].string) , (yyvsp[-1].string) , "pointer");
                           }
#line 1544 "maker.tab.c"
    break;

  case 47: /* $@8: %empty  */
#line 303 "maker.y"
                                        {
                                        check_existance_for_declaration(current , (yyvsp[-3].string) , (yyvsp[-2].string) , "class");
                                        class SymTable* class_scope;
                                        class_scope=new SymTable((yyvsp[-2].string));
                                        Stack_Table.push(class_scope);
                                        current=class_scope;
                                        Vector_Tabele.push_back(current);
                                        }
#line 1557 "maker.tab.c"
    break;

  case 48: /* class: Class_Type Class_ID ':' CBEGIN $@8 declarations CEND ';'  */
#line 311 "maker.y"
                                                    {
                                                            Stack_Table.pop();
                                                       current=Stack_Table.top();
                                                    }
#line 1566 "maker.tab.c"
    break;

  case 55: /* $@9: %empty  */
#line 330 "maker.y"
                             {
                                        check_existance_for_class_instance(current , (yyvsp[-1].string) , (yyvsp[0].string));//Trebuie sa putem isntantia pest tot nu numa global

                                     }
#line 1575 "maker.tab.c"
    break;

  case 57: /* class_instance_interior: Class_ID ID  */
#line 335 "maker.y"
                                      {
                                        check_existance_for_class_instance(current , (yyvsp[-1].string) , (yyvsp[0].string));//Trebuie sa putem isntantia pest tot nu numa global

                                     }
#line 1584 "maker.tab.c"
    break;

  case 60: /* param: TYPE ID  */
#line 346 "maker.y"
                {check_existance_for_declaration(current , (yyvsp[-1].string) , (yyvsp[0].string) ,"var");}
#line 1590 "maker.tab.c"
    break;

  case 65: /* $@10: %empty  */
#line 355 "maker.y"
                                        {domeniul_caruia_ii_apartine_varabila=check_existance_for_use(current , (yyvsp[-1].string) );
                                        if(domeniul_caruia_ii_apartine_varabila!=nullptr)
                                             {
                                                  if (domeniul_caruia_ii_apartine_varabila->getValueType((yyvsp[-1].string))=="bool")
                                                  {
                                                       {errorCount++; 
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
                                        }
#line 1612 "maker.tab.c"
    break;

  case 66: /* statement_for_call_list: ID ASSIGN $@10 e  */
#line 372 "maker.y"
                                               {
                                                  // if(domeniul_caruia_ii_apartine_varabila!=nullptr)
                                                  //      {
                                                  //           cout<<domeniul_caruia_ii_apartine_varabila->getValue_IDType($1)
                                                  //           <<"   "<<$1<<"   "
                                                  //           <<domeniul_caruia_ii_apartine_varabila->get_dom_name()<<endl;
                                                  //      }
                                             }
#line 1625 "maker.tab.c"
    break;

  case 67: /* $@11: %empty  */
#line 380 "maker.y"
                              {
                                   domeniul_caruia_ii_apartine_varabila=check_existance_for_use(current , (yyvsp[0].string) );
                                   if(domeniul_caruia_ii_apartine_varabila!=nullptr)
                                   {
                                        if(domeniul_caruia_ii_apartine_varabila->getValue_IDType((yyvsp[0].string))!="func")
                                             {errorCount++; 
                                             char*buff=new char[256];
                                             strcpy(buff ,"ID ");
                                             strcat(buff , (yyvsp[0].string));
                                             strcat(buff ," exists but is NOT a funciton"); 
                                             yyerror(buff);
                                             delete [] buff;
                                             buff=nullptr;
                                             }
                                   }
                              }
#line 1646 "maker.tab.c"
    break;

  case 69: /* $@12: %empty  */
#line 397 "maker.y"
                                     {
                                             domeniul_caruia_ii_apartine_varabila=check_existance_for_use(current , (yyvsp[-1].string));
                                        }
#line 1654 "maker.tab.c"
    break;

  case 70: /* statement_for_call_list: ID ASSIGN $@12 TRUTH_VALUE  */
#line 400 "maker.y"
                                                         {
                                                            if(domeniul_caruia_ii_apartine_varabila!=nullptr)
                                                            {
                                                                 if (domeniul_caruia_ii_apartine_varabila->getValueType((yyvsp[-3].string))!="bool")
                                                                      {
                                                                           errorCount++; 
                                                                           char*buff=new char[256];
                                                                           strcpy(buff ,"Variable ");
                                                                           strcat(buff , (yyvsp[-3].string));
                                                                           strcat(buff ," is not a bool"); 
                                                                           yyerror(buff);
                                                                           delete [] buff;
                                                                           buff=nullptr;
                                                                      }   
                                                            }
                                                       }
#line 1675 "maker.tab.c"
    break;

  case 71: /* e: e '+' e  */
#line 419 "maker.y"
              {}
#line 1681 "maker.tab.c"
    break;

  case 72: /* e: e '*' e  */
#line 420 "maker.y"
              {}
#line 1687 "maker.tab.c"
    break;

  case 73: /* e: e '-' e  */
#line 421 "maker.y"
              {}
#line 1693 "maker.tab.c"
    break;

  case 74: /* e: e '/' e  */
#line 422 "maker.y"
              {}
#line 1699 "maker.tab.c"
    break;

  case 75: /* e: '(' e ')'  */
#line 423 "maker.y"
              {}
#line 1705 "maker.tab.c"
    break;

  case 76: /* e: NR  */
#line 424 "maker.y"
              {}
#line 1711 "maker.tab.c"
    break;

  case 77: /* e: REAL  */
#line 425 "maker.y"
              {}
#line 1717 "maker.tab.c"
    break;

  case 78: /* e: ID  */
#line 426 "maker.y"
              {domeniul_caruia_ii_apartine_varabila=check_existance_for_use(current , (yyvsp[0].string));}
#line 1723 "maker.tab.c"
    break;


#line 1727 "maker.tab.c"

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

#line 430 "maker.y"

void yyerror(const char * s){
     cout << "error:" << s << " at line: " << yylineno << endl;
}

int main(int argc, char** argv){
     yyin=fopen(argv[1],"r");
     current = new SymTable("global");
     Stack_Table.push(current);
     Vector_Tabele.push_back(current);
     yyparse();
     cout << "Variables:" <<endl;
     for (auto i : Vector_Tabele){
          i->printVars();
          delete i;
     }
} 
