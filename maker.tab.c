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
  YYSYMBOL_PRINT = 12,                     /* PRINT  */
  YYSYMBOL_TYPE_FUNCTION = 13,             /* TYPE_FUNCTION  */
  YYSYMBOL_ID = 14,                        /* ID  */
  YYSYMBOL_TYPE = 15,                      /* TYPE  */
  YYSYMBOL_Class_ID = 16,                  /* Class_ID  */
  YYSYMBOL_Class_Type = 17,                /* Class_Type  */
  YYSYMBOL_IF = 18,                        /* IF  */
  YYSYMBOL_ELSE = 19,                      /* ELSE  */
  YYSYMBOL_WHILE = 20,                     /* WHILE  */
  YYSYMBOL_FOR = 21,                       /* FOR  */
  YYSYMBOL_CMP = 22,                       /* CMP  */
  YYSYMBOL_INC = 23,                       /* INC  */
  YYSYMBOL_DEC = 24,                       /* DEC  */
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
  YYSYMBOL_declarations = 40,              /* declarations  */
  YYSYMBOL_fundamental_type = 41,          /* fundamental_type  */
  YYSYMBOL_decl = 42,                      /* decl  */
  YYSYMBOL_43_2 = 43,                      /* $@2  */
  YYSYMBOL_arrays = 44,                    /* arrays  */
  YYSYMBOL_arr = 45,                       /* arr  */
  YYSYMBOL_arr_list = 46,                  /* arr_list  */
  YYSYMBOL_list = 47,                      /* list  */
  YYSYMBOL_list_for_else = 48,             /* list_for_else  */
  YYSYMBOL_statement = 49,                 /* statement  */
  YYSYMBOL_50_3 = 50,                      /* $@3  */
  YYSYMBOL_51_4 = 51,                      /* $@4  */
  YYSYMBOL_52_5 = 52,                      /* $@5  */
  YYSYMBOL_53_6 = 53,                      /* $@6  */
  YYSYMBOL_54_7 = 54,                      /* $@7  */
  YYSYMBOL_55_8 = 55,                      /* $@8  */
  YYSYMBOL_56_9 = 56,                      /* $@9  */
  YYSYMBOL_57_10 = 57,                     /* $@10  */
  YYSYMBOL_58_11 = 58,                     /* $@11  */
  YYSYMBOL_59_12 = 59,                     /* $@12  */
  YYSYMBOL_inc_dec = 60,                   /* inc_dec  */
  YYSYMBOL_declarations_interior = 61,     /* declarations_interior  */
  YYSYMBOL_fundamental_type_interior = 62, /* fundamental_type_interior  */
  YYSYMBOL_decl_interior = 63,             /* decl_interior  */
  YYSYMBOL_64_13 = 64,                     /* $@13  */
  YYSYMBOL_arrays_interior = 65,           /* arrays_interior  */
  YYSYMBOL_arr_interior = 66,              /* arr_interior  */
  YYSYMBOL_condition_chain = 67,           /* condition_chain  */
  YYSYMBOL_condition = 68,                 /* condition  */
  YYSYMBOL_classes = 69,                   /* classes  */
  YYSYMBOL_class = 70,                     /* class  */
  YYSYMBOL_71_14 = 71,                     /* $@14  */
  YYSYMBOL_class_initialize_initial = 72,  /* class_initialize_initial  */
  YYSYMBOL_class_initialize = 73,          /* class_initialize  */
  YYSYMBOL_class_initialize_interior = 74, /* class_initialize_interior  */
  YYSYMBOL_class_instance = 75,            /* class_instance  */
  YYSYMBOL_76_15 = 76,                     /* $@15  */
  YYSYMBOL_class_instance_interior = 77,   /* class_instance_interior  */
  YYSYMBOL_list_param = 78,                /* list_param  */
  YYSYMBOL_param = 79,                     /* param  */
  YYSYMBOL_call_list = 80,                 /* call_list  */
  YYSYMBOL_statement_for_call_list = 81,   /* statement_for_call_list  */
  YYSYMBOL_82_16 = 82,                     /* $@16  */
  YYSYMBOL_83_17 = 83,                     /* $@17  */
  YYSYMBOL_84_18 = 84,                     /* $@18  */
  YYSYMBOL_e = 85                          /* e  */
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
     

#line 305 "maker.tab.c"


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
#define YYLAST   244

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  93
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  189

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
       0,   125,   125,   126,   130,   129,   141,   142,   143,   144,
     147,   148,   152,   151,   164,   167,   168,   171,   174,   175,
     179,   180,   182,   183,   185,   185,   210,   210,   228,   228,
     247,   246,   260,   268,   273,   259,   286,   304,   319,   285,
     331,   332,   333,   336,   337,   340,   341,   342,   345,   346,
     350,   349,   363,   366,   367,   370,   373,   374,   375,   378,
     381,   382,   386,   385,   401,   402,   406,   407,   410,   411,
     414,   414,   416,   419,   420,   424,   427,   428,   429,   430,
     434,   433,   453,   453,   472,   471,   492,   493,   494,   495,
     496,   497,   498,   499
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
  "PRINT", "TYPE_FUNCTION", "ID", "TYPE", "Class_ID", "Class_Type", "IF",
  "ELSE", "WHILE", "FOR", "CMP", "INC", "DEC", "'+'", "'-'", "'*'", "'/'",
  "'('", "')'", "';'", "'['", "']'", "':'", "','", "$accept", "progr",
  "main", "$@1", "declarations", "fundamental_type", "decl", "$@2",
  "arrays", "arr", "arr_list", "list", "list_for_else", "statement", "$@3",
  "$@4", "$@5", "$@6", "$@7", "$@8", "$@9", "$@10", "$@11", "$@12",
  "inc_dec", "declarations_interior", "fundamental_type_interior",
  "decl_interior", "$@13", "arrays_interior", "arr_interior",
  "condition_chain", "condition", "classes", "class", "$@14",
  "class_initialize_initial", "class_initialize",
  "class_initialize_interior", "class_instance", "$@15",
  "class_instance_interior", "list_param", "param", "call_list",
  "statement_for_call_list", "$@16", "$@17", "$@18", "e", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-151)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-85)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -4,    12,    22,     3,    -4,  -151,    26,  -151,    85,  -151,
    -151,    32,  -151,   170,  -151,  -151,    26,    45,  -151,  -151,
      68,    43,    59,   109,    52,    84,  -151,    99,    88,  -151,
     101,    95,   124,  -151,   161,   162,   163,   148,   160,   164,
     166,   167,    42,   149,  -151,   177,  -151,   179,  -151,   181,
    -151,   190,  -151,  -151,  -151,   101,   185,    31,  -151,     2,
       2,   193,   172,     5,  -151,     4,     4,   188,  -151,   173,
    -151,   189,  -151,   191,  -151,  -151,  -151,   175,  -151,  -151,
     176,   124,  -151,  -151,  -151,     2,   133,   139,     2,   201,
      11,  -151,   180,     2,    -2,  -151,    56,     8,   205,  -151,
     182,   101,    -4,  -151,  -151,  -151,   145,     2,     2,     2,
       2,  -151,  -151,   157,  -151,     0,    66,  -151,   157,   124,
      17,   183,   206,     2,   207,  -151,   204,  -151,   128,   128,
    -151,  -151,   209,   192,  -151,    11,    83,     2,     2,  -151,
    -151,   157,  -151,     2,   186,     2,   211,    11,  -151,   157,
    -151,   151,   110,   109,   109,   115,  -151,   157,  -151,    96,
    -151,    55,    79,     2,  -151,  -151,  -151,   122,   200,     2,
     212,   126,  -151,   208,   109,  -151,   109,   214,   165,  -151,
    -151,  -151,   194,   196,   216,  -151,   109,    94,  -151
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       9,     0,     0,     0,     7,    10,     8,    15,    12,     1,
       4,     0,     3,    65,    60,    11,     6,     0,    16,    14,
       0,     0,     0,     0,     0,     0,    61,     0,    64,    66,
       0,     0,     0,    17,     0,     0,    26,     0,     0,     0,
       0,     0,     0,     0,    40,    45,    48,    46,    53,    47,
      68,     0,    70,     2,    67,    19,     0,     0,    73,     0,
       0,    24,     0,    52,    72,     0,     0,     0,     5,     0,
      20,     0,    49,     0,    54,    69,    62,     0,    18,    75,
       0,     0,    91,    92,    93,     0,     0,     0,     0,     0,
       0,    55,     0,     0,     0,    56,     0,     0,     0,    21,
      52,     0,     9,    71,    13,    74,     0,     0,     0,     0,
       0,    41,    42,    25,    29,    93,     0,    78,    76,     0,
       0,     0,     0,     0,     0,    36,     0,    90,    86,    88,
      87,    89,    80,     0,    27,     0,     0,     0,     0,    57,
      32,    58,    30,     0,     0,     0,     0,     0,    79,    77,
      51,     0,     0,     0,     0,     0,    63,    81,    85,     0,
      59,     0,     0,     0,    83,    33,    31,     0,     0,     0,
       0,     0,    34,     0,    23,    37,    22,     0,     0,    35,
      43,    44,     0,     0,     0,    38,     0,     0,    39
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -151,  -151,   202,  -151,   125,  -151,   224,  -151,   226,     7,
     -48,  -150,  -151,   -42,  -151,  -151,  -151,  -151,  -151,  -151,
    -151,  -151,  -151,  -151,  -151,  -151,  -151,   187,  -151,  -151,
     184,   168,   112,  -151,   222,  -151,  -151,  -151,  -151,   210,
    -151,   195,   117,   156,    92,   105,  -151,  -151,  -151,   -58
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,    12,    23,     3,     4,     5,    21,     6,     7,
      22,    42,   177,    43,    88,    62,    89,   154,   153,   168,
     174,   143,   178,   186,   182,    44,    45,    46,    92,    47,
      48,    94,    95,    13,    14,   102,    27,    28,    49,    29,
      77,    50,    57,    58,   116,   117,   145,   133,   146,    96
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      69,    86,    87,   161,   162,   132,    10,    78,    82,   121,
      82,     1,    83,    18,    83,    91,    84,    82,    84,   121,
      11,    83,     9,    18,   176,   115,     8,   106,   122,   -82,
     113,    85,   118,    93,   -50,   120,   187,    20,   124,   137,
      85,    17,   107,   108,   109,   110,    68,   127,    24,   128,
     129,   130,   131,    91,    34,    35,    36,    37,    38,    30,
      39,    80,    40,    41,   165,   141,    81,    34,    35,    36,
      37,    38,    32,    39,    31,    40,    41,   149,   123,   151,
     152,   107,   108,   109,   110,   155,    51,   157,   166,   118,
      33,    34,    35,    36,    37,    38,   134,    39,    52,    40,
      41,   135,    10,   188,    25,   167,    34,    35,    36,    37,
      38,   171,    39,   150,    40,    41,    19,    20,    81,    69,
      69,    34,    35,    36,    37,    38,   164,    39,    55,    40,
      41,   135,   137,    20,    69,   107,   108,   109,   110,    56,
     107,   108,   109,   110,   169,    69,   163,   107,   108,   109,
     110,   107,   108,   109,   110,   109,   110,   173,   107,   108,
     109,   110,    63,   111,   107,   108,   109,   110,    61,   112,
     107,   108,   109,   110,    64,   127,   107,   108,   109,   110,
      70,   160,   107,   108,   109,   110,    25,    11,   180,   181,
      59,    60,    71,    65,    73,    66,    67,    38,    76,    79,
     -28,    90,    98,   100,    99,   101,   103,   104,   114,   119,
     125,   -50,   138,   144,   140,   142,   -84,   156,   158,   170,
     172,   147,   175,   179,   185,   183,   184,   126,    15,    53,
      16,    74,    72,   139,    97,    26,   136,   105,    54,   159,
     148,     0,     0,     0,    75
};

static const yytype_int16 yycheck[] =
{
      42,    59,    60,   153,   154,     5,     3,    55,     6,    11,
       6,    15,    10,     6,    10,    63,    14,     6,    14,    11,
      17,    10,     0,    16,   174,    14,    14,    85,    30,    29,
      88,    29,    90,    29,    29,    93,   186,    32,    30,    22,
      29,    15,    25,    26,    27,    28,     4,    30,    16,   107,
     108,   109,   110,   101,    12,    13,    14,    15,    16,    14,
      18,    30,    20,    21,     9,   123,    35,    12,    13,    14,
      15,    16,    29,    18,     6,    20,    21,   135,    22,   137,
     138,    25,    26,    27,    28,   143,    34,   145,     9,   147,
      31,    12,    13,    14,    15,    16,    30,    18,    14,    20,
      21,    35,     3,     9,    16,   163,    12,    13,    14,    15,
      16,   169,    18,    30,    20,    21,    31,    32,    35,   161,
     162,    12,    13,    14,    15,    16,    30,    18,    33,    20,
      21,    35,    22,    32,   176,    25,    26,    27,    28,    15,
      25,    26,    27,    28,    22,   187,    31,    25,    26,    27,
      28,    25,    26,    27,    28,    27,    28,    31,    25,    26,
      27,    28,    14,    30,    25,    26,    27,    28,     5,    30,
      25,    26,    27,    28,    14,    30,    25,    26,    27,    28,
      31,    30,    25,    26,    27,    28,    16,    17,    23,    24,
      29,    29,    15,    29,    15,    29,    29,    16,     8,    14,
       7,    29,    14,    14,    31,    14,    31,    31,     7,    29,
       5,    29,    29,     9,     8,     8,     7,    31,     7,    19,
       8,    29,    14,     9,     8,    31,    30,   102,     4,    27,
       4,    47,    45,   121,    66,    13,   119,    81,    28,   147,
     135,    -1,    -1,    -1,    49
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    15,    37,    40,    41,    42,    44,    45,    14,     0,
       3,    17,    38,    69,    70,    42,    44,    15,    45,    31,
      32,    43,    46,    39,    16,    16,    70,    72,    73,    75,
      14,     6,    29,    31,    12,    13,    14,    15,    16,    18,
      20,    21,    47,    49,    61,    62,    63,    65,    66,    74,
      77,    34,    14,    38,    75,    33,    15,    78,    79,    29,
      29,     5,    51,    14,    14,    29,    29,    29,     4,    49,
      31,    15,    63,    15,    66,    77,     8,    76,    46,    14,
      30,    35,     6,    10,    14,    29,    85,    85,    50,    52,
      29,    46,    64,    29,    67,    68,    85,    67,    14,    31,
      14,    14,    71,    31,    31,    79,    85,    25,    26,    27,
      28,    30,    30,    85,     7,    14,    80,    81,    85,    29,
      85,    11,    30,    22,    30,     5,    40,    30,    85,    85,
      85,    85,     5,    83,    30,    35,    78,    22,    29,    68,
       8,    85,     8,    57,     9,    82,    84,    29,    81,    85,
      30,    85,    85,    54,    53,    85,    31,    85,     7,    80,
      30,    47,    47,    31,    30,     9,     9,    85,    55,    22,
      19,    85,     8,    31,    56,    14,    47,    48,    58,     9,
      23,    24,    60,    31,    30,     8,    59,    47,     9
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    36,    37,    37,    39,    38,    40,    40,    40,    40,
      41,    41,    43,    42,    42,    44,    44,    45,    46,    46,
      47,    47,    48,    48,    50,    49,    51,    49,    52,    49,
      53,    49,    54,    55,    56,    49,    57,    58,    59,    49,
      49,    49,    49,    60,    60,    61,    61,    61,    62,    62,
      64,    63,    63,    65,    65,    66,    67,    67,    67,    68,
      69,    69,    71,    70,    72,    72,    73,    73,    74,    74,
      76,    75,    77,    78,    78,    79,    80,    80,    80,    80,
      82,    81,    83,    81,    84,    81,    85,    85,    85,    85,
      85,    85,    85,    85
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     2,     0,     4,     2,     1,     1,     0,
       1,     2,     0,     7,     3,     1,     2,     4,     4,     3,
       2,     3,     1,     0,     0,     4,     0,     5,     0,     4,
       0,     8,     0,     0,     0,    14,     0,     0,     0,    20,
       1,     4,     4,     1,     1,     1,     1,     1,     1,     2,
       0,     6,     2,     1,     2,     3,     1,     3,     3,     5,
       1,     2,     0,     8,     1,     0,     1,     2,     1,     2,
       0,     4,     2,     1,     3,     2,     1,     3,     1,     3,
       0,     4,     0,     5,     0,     4,     3,     3,     3,     3,
       3,     1,     1,     1
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
#line 1398 "maker.tab.c"
    break;

  case 3: /* progr: declarations main  */
#line 126 "maker.y"
                           {if (errorCount == 0) cout<< "The program is correct!" << endl;}
#line 1404 "maker.tab.c"
    break;

  case 4: /* $@1: %empty  */
#line 130 "maker.y"
          {SymTable* currentmain;     
           currentmain = new SymTable("main");
           Stack_Table.push(currentmain);
           current=currentmain;  
           Vector_Tabele.push_back(current);
          }
#line 1415 "maker.tab.c"
    break;

  case 5: /* main: BGIN $@1 list END  */
#line 137 "maker.y"
                    {Stack_Table.pop();
                     current=Stack_Table.top();
                    }
#line 1423 "maker.tab.c"
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
#line 1435 "maker.tab.c"
    break;

  case 13: /* decl: TYPE ID $@2 '(' list_param ')' ';'  */
#line 160 "maker.y"
                                   {
                                    Stack_Table.pop();
                                    current=Stack_Table.top();
                                   }
#line 1444 "maker.tab.c"
    break;

  case 14: /* decl: TYPE ID ';'  */
#line 164 "maker.y"
                  {check_existance_for_declaration(current , (yyvsp[-2].string) , (yyvsp[-1].string) , "var");}
#line 1450 "maker.tab.c"
    break;

  case 17: /* arr: TYPE ID arr_list ';'  */
#line 171 "maker.y"
                           {check_existance_for_declaration(current , (yyvsp[-3].string) , (yyvsp[-2].string) , "array");}
#line 1456 "maker.tab.c"
    break;

  case 24: /* $@3: %empty  */
#line 185 "maker.y"
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
#line 1478 "maker.tab.c"
    break;

  case 25: /* statement: ID ASSIGN $@3 e  */
#line 202 "maker.y"
                           {
                              if(domeniul_caruia_ii_apartine_varabila!=nullptr)
                                   {
                                        // cout<<domeniul_caruia_ii_apartine_varabila->getValue_IDType($1)
                                        // <<"   "<<$1<<"   "
                                        // <<domeniul_caruia_ii_apartine_varabila->get_dom_name()<<endl;
                                   }
                           }
#line 1491 "maker.tab.c"
    break;

  case 26: /* $@4: %empty  */
#line 210 "maker.y"
              {
               domeniul_caruia_ii_apartine_varabila=check_existance_for_use(current , (yyvsp[0].string) );
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
                    }
              }
#line 1513 "maker.tab.c"
    break;

  case 28: /* $@5: %empty  */
#line 228 "maker.y"
                     {
                         domeniul_caruia_ii_apartine_varabila=check_existance_for_use(current , (yyvsp[-1].string));
                     }
#line 1521 "maker.tab.c"
    break;

  case 29: /* statement: ID ASSIGN $@5 TRUTH_VALUE  */
#line 231 "maker.y"
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
#line 1541 "maker.tab.c"
    break;

  case 30: /* $@6: %empty  */
#line 247 "maker.y"
                                   {
                                     SymTable* currentCTRL;     
                                     currentCTRL = new SymTable((yyvsp[-4].string));
                                     Stack_Table.push(currentCTRL);
                                     current=currentCTRL;
                                     Vector_Tabele.push_back(current);
                                   }
#line 1553 "maker.tab.c"
    break;

  case 31: /* statement: WHILE '(' condition_chain ')' CBEGIN $@6 list CEND  */
#line 255 "maker.y"
                                                       {
                                                            Stack_Table.pop();
                                                            current=Stack_Table.top();
                                                       }
#line 1562 "maker.tab.c"
    break;

  case 32: /* $@7: %empty  */
#line 260 "maker.y"
                                        {
                                          SymTable* currentCTRL;     
                                          currentCTRL = new SymTable((yyvsp[-4].string));
                                          Stack_Table.push(currentCTRL);
                                          current=currentCTRL;
                                          Vector_Tabele.push_back(current);
                                        }
#line 1574 "maker.tab.c"
    break;

  case 33: /* $@8: %empty  */
#line 268 "maker.y"
                                                       {
                                                         Stack_Table.pop();
                                                         current=Stack_Table.top();
                                                       }
#line 1583 "maker.tab.c"
    break;

  case 34: /* $@9: %empty  */
#line 273 "maker.y"
                                        {
                                          SymTable* currentCTRL;     
                                          currentCTRL = new SymTable((yyvsp[-10].string));
                                          Stack_Table.push(currentCTRL);
                                          current=currentCTRL;
                                          Vector_Tabele.push_back(current);
                                        }
#line 1595 "maker.tab.c"
    break;

  case 35: /* statement: IF '(' condition_chain ')' CBEGIN $@7 list CEND $@8 ELSE CBEGIN $@9 list_for_else CEND  */
#line 281 "maker.y"
                                        {
                                          Stack_Table.pop();
                                          current=Stack_Table.top();
                                        }
#line 1604 "maker.tab.c"
    break;

  case 36: /* $@10: %empty  */
#line 286 "maker.y"
               {
                 domeniul_caruia_ii_apartine_varabila=check_existance_for_use(current , (yyvsp[-1].string) );
                 if(domeniul_caruia_ii_apartine_varabila!=nullptr)
                    {
                      if (domeniul_caruia_ii_apartine_varabila->getValueType((yyvsp[-1].string))=="bool")
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
#line 1626 "maker.tab.c"
    break;

  case 37: /* $@11: %empty  */
#line 304 "maker.y"
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
#line 1645 "maker.tab.c"
    break;

  case 38: /* $@12: %empty  */
#line 319 "maker.y"
               {
                 SymTable* currentCTRL;     
                 currentCTRL = new SymTable((yyvsp[-16].string));
                 Stack_Table.push(currentCTRL);
                 current=currentCTRL;
                 Vector_Tabele.push_back(current);
               }
#line 1657 "maker.tab.c"
    break;

  case 39: /* statement: FOR '(' ID ASSIGN $@10 e ';' e CMP e ';' ID $@11 inc_dec ';' ')' CBEGIN $@12 list CEND  */
#line 327 "maker.y"
               {
                 Stack_Table.pop();
                 current=Stack_Table.top();
               }
#line 1666 "maker.tab.c"
    break;

  case 50: /* $@13: %empty  */
#line 350 "maker.y"
                        { 
                           check_existance_for_declaration(current , (yyvsp[-1].string) , (yyvsp[0].string) , "func");
                           class SymTable* function_scope;
                           function_scope=new SymTable((yyvsp[0].string));
                           Stack_Table.push(function_scope);
                           current=function_scope;
                           Vector_Tabele.push_back(current);
                        }
#line 1679 "maker.tab.c"
    break;

  case 51: /* decl_interior: TYPE ID $@13 '(' list_param ')'  */
#line 359 "maker.y"
                        {
                           Stack_Table.pop();
                           current=Stack_Table.top();
                        }
#line 1688 "maker.tab.c"
    break;

  case 52: /* decl_interior: TYPE ID  */
#line 363 "maker.y"
                              {check_existance_for_declaration(current , (yyvsp[-1].string) , (yyvsp[0].string) , "var");}
#line 1694 "maker.tab.c"
    break;

  case 55: /* arr_interior: TYPE ID arr_list  */
#line 370 "maker.y"
                                {check_existance_for_declaration(current , (yyvsp[-2].string) , (yyvsp[-1].string) , "array");}
#line 1700 "maker.tab.c"
    break;

  case 62: /* $@14: %empty  */
#line 386 "maker.y"
          {
            check_existance_for_declaration(current , (yyvsp[-3].string) , (yyvsp[-2].string) , "class");
            class SymTable* class_scope;
            class_scope=new SymTable((yyvsp[-2].string));
            Stack_Table.push(class_scope);
            current=class_scope;
            Vector_Tabele.push_back(current);
          }
#line 1713 "maker.tab.c"
    break;

  case 63: /* class: Class_Type Class_ID ':' CBEGIN $@14 declarations CEND ';'  */
#line 395 "maker.y"
          {
            Stack_Table.pop();
            current=Stack_Table.top();
          }
#line 1722 "maker.tab.c"
    break;

  case 70: /* $@15: %empty  */
#line 414 "maker.y"
                             {check_existance_for_class_instance(current , (yyvsp[-1].string) , (yyvsp[0].string));}
#line 1728 "maker.tab.c"
    break;

  case 72: /* class_instance_interior: Class_ID ID  */
#line 416 "maker.y"
                                      {check_existance_for_class_instance(current , (yyvsp[-1].string) , (yyvsp[0].string));}
#line 1734 "maker.tab.c"
    break;

  case 75: /* param: TYPE ID  */
#line 424 "maker.y"
                {check_existance_for_declaration(current , (yyvsp[-1].string) , (yyvsp[0].string) ,"var");}
#line 1740 "maker.tab.c"
    break;

  case 80: /* $@16: %empty  */
#line 434 "maker.y"
                         {
                              domeniul_caruia_ii_apartine_varabila=check_existance_for_use(current , (yyvsp[-1].string) );
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
#line 1763 "maker.tab.c"
    break;

  case 82: /* $@17: %empty  */
#line 453 "maker.y"
                              {
                                   domeniul_caruia_ii_apartine_varabila=check_existance_for_use(current , (yyvsp[0].string) );
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
                                        }
                              }
#line 1785 "maker.tab.c"
    break;

  case 84: /* $@18: %empty  */
#line 472 "maker.y"
                                   {domeniul_caruia_ii_apartine_varabila=check_existance_for_use(current , (yyvsp[-1].string));}
#line 1791 "maker.tab.c"
    break;

  case 85: /* statement_for_call_list: ID ASSIGN $@18 TRUTH_VALUE  */
#line 473 "maker.y"
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
#line 1812 "maker.tab.c"
    break;

  case 86: /* e: e '+' e  */
#line 492 "maker.y"
              {}
#line 1818 "maker.tab.c"
    break;

  case 87: /* e: e '*' e  */
#line 493 "maker.y"
              {}
#line 1824 "maker.tab.c"
    break;

  case 88: /* e: e '-' e  */
#line 494 "maker.y"
              {}
#line 1830 "maker.tab.c"
    break;

  case 89: /* e: e '/' e  */
#line 495 "maker.y"
              {}
#line 1836 "maker.tab.c"
    break;

  case 90: /* e: '(' e ')'  */
#line 496 "maker.y"
              {}
#line 1842 "maker.tab.c"
    break;

  case 91: /* e: NR  */
#line 497 "maker.y"
              {}
#line 1848 "maker.tab.c"
    break;

  case 92: /* e: REAL  */
#line 498 "maker.y"
              {}
#line 1854 "maker.tab.c"
    break;

  case 93: /* e: ID  */
#line 499 "maker.y"
              {domeniul_caruia_ii_apartine_varabila=check_existance_for_use(current , (yyvsp[0].string));}
#line 1860 "maker.tab.c"
    break;


#line 1864 "maker.tab.c"

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

#line 503 "maker.y"

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
