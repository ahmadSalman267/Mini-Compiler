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
#line 1 "proj1.y"

	#include<stdio.h>
	#include<stdlib.h>
	int v = 1;
	#include<string.h>
	#include<math.h>
	#include <ctype.h>
	#define null 0
	int size = 0;
	int g = 0;
	void insert(char* l,char* t,int v,char* s,int ln);
	int search(char lab[]);
	void display();
	int yyerror();
	int var = 0;
	int yylex(void);
	int lineno = 1;
	struct symbtab
	{
		int val;
		char label[20];
		char type[20];
		int value;
		char scope[20];
		int lineno;
		struct symbtab *next;
	};
	int error = 0;
	struct symbtab *first,*last,*temp;
	char* op;

#line 103 "proj1.tab.c"

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

#include "proj1.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_DIGITS = 3,                     /* DIGITS  */
  YYSYMBOL_ID = 4,                         /* ID  */
  YYSYMBOL_PLUS = 5,                       /* PLUS  */
  YYSYMBOL_MINUS = 6,                      /* MINUS  */
  YYSYMBOL_MUL = 7,                        /* MUL  */
  YYSYMBOL_DIVIDE = 8,                     /* DIVIDE  */
  YYSYMBOL_NUM = 9,                        /* NUM  */
  YYSYMBOL_STRING = 10,                    /* STRING  */
  YYSYMBOL_INTEGER = 11,                   /* INTEGER  */
  YYSYMBOL_SPECIAL = 12,                   /* SPECIAL  */
  YYSYMBOL_NL = 13,                        /* NL  */
  YYSYMBOL_SPACE = 14,                     /* SPACE  */
  YYSYMBOL_KEYWORD = 15,                   /* KEYWORD  */
  YYSYMBOL_SPECIAL_START = 16,             /* SPECIAL_START  */
  YYSYMBOL_SPECIAL_END = 17,               /* SPECIAL_END  */
  YYSYMBOL_IF = 18,                        /* IF  */
  YYSYMBOL_ELSE = 19,                      /* ELSE  */
  YYSYMBOL_WHILE = 20,                     /* WHILE  */
  YYSYMBOL_SEP = 21,                       /* SEP  */
  YYSYMBOL_END = 22,                       /* END  */
  YYSYMBOL_OR = 23,                        /* OR  */
  YYSYMBOL_AND = 24,                       /* AND  */
  YYSYMBOL_NOT = 25,                       /* NOT  */
  YYSYMBOL_IN = 26,                        /* IN  */
  YYSYMBOL_NOTIN = 27,                     /* NOTIN  */
  YYSYMBOL_T = 28,                         /* T  */
  YYSYMBOL_F = 29,                         /* F  */
  YYSYMBOL_COLON = 30,                     /* COLON  */
  YYSYMBOL_SQUAREBRACKET_START = 31,       /* SQUAREBRACKET_START  */
  YYSYMBOL_SQUAREBRACKET_END = 32,         /* SQUAREBRACKET_END  */
  YYSYMBOL_MOD = 33,                       /* MOD  */
  YYSYMBOL_EQUAL = 34,                     /* EQUAL  */
  YYSYMBOL_PLUSEQUAL = 35,                 /* PLUSEQUAL  */
  YYSYMBOL_PRINT = 36,                     /* PRINT  */
  YYSYMBOL_COMMENT = 37,                   /* COMMENT  */
  YYSYMBOL_RANGE = 38,                     /* RANGE  */
  YYSYMBOL_SINGLEQUOTE = 39,               /* SINGLEQUOTE  */
  YYSYMBOL_DOUBLEQUOTE = 40,               /* DOUBLEQUOTE  */
  YYSYMBOL_EXPONENTIAL = 41,               /* EXPONENTIAL  */
  YYSYMBOL_COMMA = 42,                     /* COMMA  */
  YYSYMBOL_INDENT = 43,                    /* INDENT  */
  YYSYMBOL_LIST = 44,                      /* LIST  */
  YYSYMBOL_DIVIDEEQUAL = 45,               /* DIVIDEEQUAL  */
  YYSYMBOL_MINUSEQUAL = 46,                /* MINUSEQUAL  */
  YYSYMBOL_MULEQUAL = 47,                  /* MULEQUAL  */
  YYSYMBOL_LESSTHAN = 48,                  /* LESSTHAN  */
  YYSYMBOL_LESSTHANEQUAL = 49,             /* LESSTHANEQUAL  */
  YYSYMBOL_GREATERTHAN = 50,               /* GREATERTHAN  */
  YYSYMBOL_GREATERTHANEQUAL = 51,          /* GREATERTHANEQUAL  */
  YYSYMBOL_DOUBLEEQUAL = 52,               /* DOUBLEEQUAL  */
  YYSYMBOL_NOTEQUAL = 53,                  /* NOTEQUAL  */
  YYSYMBOL_YYACCEPT = 54,                  /* $accept  */
  YYSYMBOL_P = 55,                         /* P  */
  YYSYMBOL_S = 56,                         /* S  */
  YYSYMBOL_Simple = 57,                    /* Simple  */
  YYSYMBOL_Assignment = 58,                /* Assignment  */
  YYSYMBOL_opassgn = 59,                   /* opassgn  */
  YYSYMBOL_list = 60,                      /* list  */
  YYSYMBOL_Arr = 61,                       /* Arr  */
  YYSYMBOL_mul = 62,                       /* mul  */
  YYSYMBOL_add = 63,                       /* add  */
  YYSYMBOL_Range = 64,                     /* Range  */
  YYSYMBOL_start = 65,                     /* start  */
  YYSYMBOL_stop = 66,                      /* stop  */
  YYSYMBOL_step = 67,                      /* step  */
  YYSYMBOL_listnum = 68,                   /* listnum  */
  YYSYMBOL_liststr = 69,                   /* liststr  */
  YYSYMBOL_Str = 70,                       /* Str  */
  YYSYMBOL_addstr = 71,                    /* addstr  */
  YYSYMBOL_string = 72,                    /* string  */
  YYSYMBOL_E1 = 73,                        /* E1  */
  YYSYMBOL_E2 = 74,                        /* E2  */
  YYSYMBOL_E3 = 75,                        /* E3  */
  YYSYMBOL_E4 = 76,                        /* E4  */
  YYSYMBOL_OP1 = 77,                       /* OP1  */
  YYSYMBOL_OP2 = 78,                       /* OP2  */
  YYSYMBOL_Compound = 79,                  /* Compound  */
  YYSYMBOL_if_else = 80,                   /* if_else  */
  YYSYMBOL_only_if = 81,                   /* only_if  */
  YYSYMBOL_else_1 = 82,                    /* else_1  */
  YYSYMBOL_while_loop = 83,                /* while_loop  */
  YYSYMBOL_condition = 84,                 /* condition  */
  YYSYMBOL_cond = 85,                      /* cond  */
  YYSYMBOL_cond1 = 86,                     /* cond1  */
  YYSYMBOL_cond2 = 87,                     /* cond2  */
  YYSYMBOL_cond3 = 88,                     /* cond3  */
  YYSYMBOL_relexp = 89,                    /* relexp  */
  YYSYMBOL_relop = 90,                     /* relop  */
  YYSYMBOL_comparison = 91,                /* comparison  */
  YYSYMBOL_bool = 92,                      /* bool  */
  YYSYMBOL_opor = 93,                      /* opor  */
  YYSYMBOL_opand = 94,                     /* opand  */
  YYSYMBOL_opnot = 95,                     /* opnot  */
  YYSYMBOL_IND = 96,                       /* IND  */
  YYSYMBOL_A = 97,                         /* A  */
  YYSYMBOL_Print = 98,                     /* Print  */
  YYSYMBOL_toprint = 99,                   /* toprint  */
  YYSYMBOL_X = 100,                        /* X  */
  YYSYMBOL_comment = 101,                  /* comment  */
  YYSYMBOL_LB = 102                        /* LB  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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
#define YYFINAL  55
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   170

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  111
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  185

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   308


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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    36,    36,    38,    39,    40,    41,    42,    44,    45,
      47,    75,    85,   104,   105,   107,   108,   109,   111,   112,
     114,   115,   116,   117,   119,   121,   124,   125,   127,   128,
     130,   131,   133,   134,   136,   137,   139,   140,   141,   142,
     144,   145,   147,   148,   149,   151,   154,   155,   158,   164,
     166,   172,   174,   175,   177,   178,   179,   191,   194,   195,
     197,   198,   201,   202,   203,   206,   208,   210,   212,   214,
     216,   217,   219,   220,   222,   223,   225,   226,   227,   229,
     230,   231,   232,   234,   235,   236,   238,   239,   240,   241,
     242,   243,   245,   246,   248,   250,   252,   255,   257,   260,
     261,   262,   263,   266,   267,   269,   270,   271,   272,   273,
     275,   276
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
  "\"end of file\"", "error", "\"invalid token\"", "DIGITS", "ID", "PLUS",
  "MINUS", "MUL", "DIVIDE", "NUM", "STRING", "INTEGER", "SPECIAL", "NL",
  "SPACE", "KEYWORD", "SPECIAL_START", "SPECIAL_END", "IF", "ELSE",
  "WHILE", "SEP", "END", "OR", "AND", "NOT", "IN", "NOTIN", "T", "F",
  "COLON", "SQUAREBRACKET_START", "SQUAREBRACKET_END", "MOD", "EQUAL",
  "PLUSEQUAL", "PRINT", "COMMENT", "RANGE", "SINGLEQUOTE", "DOUBLEQUOTE",
  "EXPONENTIAL", "COMMA", "INDENT", "LIST", "DIVIDEEQUAL", "MINUSEQUAL",
  "MULEQUAL", "LESSTHAN", "LESSTHANEQUAL", "GREATERTHAN",
  "GREATERTHANEQUAL", "DOUBLEEQUAL", "NOTEQUAL", "$accept", "P", "S",
  "Simple", "Assignment", "opassgn", "list", "Arr", "mul", "add", "Range",
  "start", "stop", "step", "listnum", "liststr", "Str", "addstr", "string",
  "E1", "E2", "E3", "E4", "OP1", "OP2", "Compound", "if_else", "only_if",
  "else_1", "while_loop", "condition", "cond", "cond1", "cond2", "cond3",
  "relexp", "relop", "comparison", "bool", "opor", "opand", "opnot", "IND",
  "A", "Print", "toprint", "X", "comment", "LB", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-124)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      52,    -4,   -27,    53,   -16,    98,    98,    21,  -124,    55,
      81,  -124,    52,    77,  -124,  -124,  -124,    62,  -124,    52,
      77,    77,    77,    77,    52,     9,    13,  -124,  -124,  -124,
      69,    68,   103,    97,  -124,  -124,    68,  -124,  -124,  -124,
      98,  -124,  -124,  -124,    99,   105,    93,  -124,  -124,    48,
    -124,    98,   100,    24,    52,  -124,  -124,  -124,  -124,   121,
    -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,
      69,    83,   116,  -124,    45,   112,  -124,    92,  -124,  -124,
      45,    45,  -124,  -124,  -124,  -124,    22,    77,  -124,    98,
    -124,    98,  -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,
      69,  -124,  -124,    77,  -124,  -124,  -124,  -124,  -124,    89,
      95,  -124,  -124,     4,    87,   102,   101,  -124,  -124,    69,
    -124,  -124,    69,    69,  -124,   104,    93,  -124,    45,   104,
    -124,   106,   108,    24,  -124,   -17,   -17,    79,   119,   124,
     112,  -124,  -124,  -124,   117,  -124,   128,   133,  -124,   137,
    -124,  -124,    27,  -124,    52,   114,  -124,    32,   132,  -124,
    -124,  -124,   109,   110,  -124,    77,  -124,   120,  -124,   136,
      94,   104,   140,  -124,  -124,  -124,   113,  -124,   139,   107,
    -124,  -124,  -124,   141,  -124
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       7,     0,    38,    42,    39,     0,     0,     0,   110,     0,
       0,     2,     7,     0,    13,    26,    27,    41,    14,     7,
       0,     0,     0,     0,     7,     0,     0,    15,    17,    16,
       0,     0,     0,     0,    43,    44,     0,    80,    81,    82,
       0,    96,    92,    93,     0,    69,    71,    73,    75,    77,
      78,     0,     0,     0,     7,     1,     3,   111,     8,     0,
       4,    62,    63,    64,     9,     5,    56,    54,    46,    55,
       0,     0,     0,    18,    11,    49,    51,    53,    47,    19,
      12,    10,    36,    45,    24,    37,     0,     0,    94,     0,
      95,     0,    84,    85,    86,    87,    88,    89,    90,    91,
       0,    83,    74,     0,   107,   108,   105,   109,   106,     0,
     103,     6,    40,     0,     0,     0,     0,    58,    59,     0,
      60,    61,     0,     0,    76,     0,    70,    72,    79,     0,
      99,     0,     0,     0,    57,     0,     0,    20,     0,     0,
      48,    50,    52,    98,    66,    68,     0,     0,   104,     0,
      22,    23,     0,    21,     7,     0,    65,     0,     0,    25,
      30,    31,     0,     0,    97,     0,   101,     0,   102,     0,
       0,     0,     0,    29,    32,    33,     0,    67,     0,     0,
     100,    34,    35,     0,    28
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -124,  -124,    -8,   148,  -124,  -124,    88,   -21,    23,  -124,
    -124,  -124,  -124,  -124,    40,   111,  -124,  -124,  -124,   -18,
      42,     2,  -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,
     156,   123,    75,   -44,  -124,  -124,  -124,  -124,  -124,  -124,
    -124,  -124,  -123,  -124,  -124,    33,  -124,  -124,   -20
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    10,    11,    12,    13,    30,    14,    73,    34,   151,
     139,   163,   176,   183,    15,    16,    17,    35,    18,    74,
      75,    76,    77,   119,   122,    19,    20,    21,   156,    22,
      44,    45,    46,    47,    48,    49,   100,   101,    50,    89,
      91,    51,   144,   154,    23,   109,   110,    24,    58
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      61,    62,    63,    64,    56,    79,   145,   102,    80,   117,
     118,    60,    81,    66,    71,    31,    65,    66,    67,    68,
      69,   134,    67,    78,    69,    70,    36,    72,   104,    70,
      25,    26,   108,   105,   106,   107,   160,    53,   161,   124,
      71,    27,    28,    29,    71,    88,   111,   127,   177,   166,
     117,   118,   113,    72,   167,    71,     1,    72,    32,     1,
      33,     2,     3,     4,     2,     3,     4,   125,    72,   162,
       5,    82,     6,    66,    92,    93,    85,     2,    67,     4,
      69,    55,   128,   129,   149,    70,    33,   114,     7,     8,
      57,     7,     2,     3,     4,     9,    94,    95,    96,    97,
      98,    99,    37,   174,    59,   175,   130,    38,    84,    39,
     131,   132,   108,    83,    40,    79,   181,    90,   182,   120,
     121,   135,   136,    41,   141,   142,    42,    43,    88,    87,
     103,     3,   116,   123,   137,   152,   155,   133,   157,   138,
     146,   153,   147,   158,   165,   171,   164,   143,   159,   168,
     178,   169,   170,   173,   172,   179,   180,    54,   184,   115,
     150,   140,    52,    86,   126,     0,   148,     0,     0,     0,
     112
};

static const yytype_int16 yycheck[] =
{
      20,    21,    22,    23,    12,    26,   129,    51,    26,     5,
       6,    19,    30,     4,    31,    42,    24,     4,     9,    10,
      11,    17,     9,    10,    11,    16,    42,    44,     4,    16,
      34,    35,    53,     9,    10,    11,     9,    16,    11,    17,
      31,    45,    46,    47,    31,    23,    54,    91,   171,    17,
       5,     6,    70,    44,    22,    31,     4,    44,     5,     4,
       7,     9,    10,    11,     9,    10,    11,    87,    44,    42,
      18,    31,    20,     4,    26,    27,    36,     9,     9,    11,
      11,     0,   100,   103,     5,    16,     7,     4,    36,    37,
      13,    36,     9,    10,    11,    43,    48,    49,    50,    51,
      52,    53,     4,     9,    42,    11,    17,     9,    11,    11,
      21,    22,   133,    10,    16,   136,     9,    24,    11,     7,
       8,    34,    35,    25,   122,   123,    28,    29,    23,    30,
      30,    10,    16,    41,    32,    16,    19,    42,    10,    38,
      34,    17,    34,    10,    30,   165,   154,    43,    11,    17,
      10,    42,    42,    17,    34,    42,    17,     9,    17,    71,
     137,   119,     6,    40,    89,    -1,   133,    -1,    -1,    -1,
      59
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,     9,    10,    11,    18,    20,    36,    37,    43,
      55,    56,    57,    58,    60,    68,    69,    70,    72,    79,
      80,    81,    83,    98,   101,    34,    35,    45,    46,    47,
      59,    42,     5,     7,    62,    71,    42,     4,     9,    11,
      16,    25,    28,    29,    84,    85,    86,    87,    88,    89,
      92,    95,    84,    16,    57,     0,    56,    13,   102,    42,
      56,   102,   102,   102,   102,    56,     4,     9,    10,    11,
      16,    31,    44,    61,    73,    74,    75,    76,    10,    61,
      73,    73,    68,    10,    11,    68,    85,    30,    23,    93,
      24,    94,    26,    27,    48,    49,    50,    51,    52,    53,
      90,    91,    87,    30,     4,     9,    10,    11,    61,    99,
     100,    56,    69,    73,     4,    60,    16,     5,     6,    77,
       7,     8,    78,    41,    17,   102,    86,    87,    73,   102,
      17,    21,    22,    42,    17,    34,    35,    32,    38,    64,
      74,    75,    75,    43,    96,    96,    34,    34,    99,     5,
      62,    63,    16,    17,    97,    19,    82,    10,    10,    11,
       9,    11,    42,    65,    56,    30,    17,    22,    17,    42,
      42,   102,    34,    17,     9,    11,    66,    96,    10,    42,
      17,     9,    11,    67,    17
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    54,    55,    56,    56,    56,    56,    56,    57,    57,
      58,    58,    58,    58,    58,    59,    59,    59,    60,    60,
      61,    61,    61,    61,    62,    63,    60,    60,    64,    64,
      65,    65,    66,    66,    67,    67,    68,    68,    68,    68,
      69,    69,    70,    70,    70,    71,    72,    72,    73,    73,
      74,    74,    75,    75,    76,    76,    76,    76,    77,    77,
      78,    78,    79,    79,    79,    80,    81,    82,    83,    84,
      85,    85,    86,    86,    87,    87,    88,    88,    88,    89,
      89,    89,    89,    90,    90,    90,    91,    91,    91,    91,
      91,    91,    92,    92,    93,    94,    95,    96,    97,    98,
      98,    98,    98,    99,    99,   100,   100,   100,   100,   100,
     101,   102
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     2,     2,     3,     0,     2,     2,
       3,     3,     3,     1,     1,     1,     1,     1,     3,     3,
       3,     4,     4,     4,     2,     2,     1,     1,     8,     5,
       1,     1,     1,     1,     1,     1,     3,     3,     1,     1,
       3,     1,     1,     2,     2,     2,     3,     3,     3,     1,
       3,     1,     3,     1,     1,     1,     1,     3,     1,     1,
       1,     1,     2,     2,     2,     6,     5,     4,     5,     1,
       3,     1,     3,     1,     2,     1,     3,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     0,     4,
      10,     7,     7,     1,     3,     1,     1,     1,     1,     1,
       1,     1
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
  case 6: /* S: INDENT Simple S  */
#line 41 "proj1.y"
                                        {g=0;}
#line 1325 "proj1.tab.c"
    break;

  case 10: /* Assignment: ID opassgn E1  */
#line 47 "proj1.y"
                                        {
    						temp = search(yyvsp[-2]);
    						if(temp != NULL){
    							var = temp->value;
	    						if(yyvsp[-1]==1){
	    							var/=yyvsp[0];
	    						}
	    						if(yyvsp[-1]==2){
	    							var*=yyvsp[0];
	    						}
	    						if(yyvsp[-1]==3){
	    							var-=yyvsp[0];
	    						}
	    						if(g==1){
	    							insert(yyvsp[-2],"IDENTIFIER",var,"local",lineno);
	    							g = 0;
	    						}
	    						else {
	    							insert(yyvsp[-2],"IDENTIFIER",var,"global",lineno);
	    						}
	    							
    						}
    						else{
    							printf("\n------------------ERROR : %s Undeclared at line number %d--------------------\n",yyvsp[-2],lineno);
    							error = 1;
    						}
    						
    					}
#line 1358 "proj1.tab.c"
    break;

  case 11: /* Assignment: ID EQUAL E1  */
#line 75 "proj1.y"
                                        {
						if(g==1){
	    							insert(yyvsp[-2],"IDENTIFIER",yyvsp[0],"local",lineno);
	    							g = 1;
	    						}
	    						else{
	    							insert(yyvsp[-2],"IDENTIFIER",yyvsp[0],"global",lineno);
	    						}
						//printf("inserted-----------\n");
					}
#line 1373 "proj1.tab.c"
    break;

  case 12: /* Assignment: ID PLUSEQUAL E1  */
#line 85 "proj1.y"
                                        {
    						temp = search(yyvsp[-2]);
    						if(temp != NULL){
	    						var = temp->value;
	    						var += yyvsp[0];
	    						if(g==1){
	    							insert(yyvsp[-2],"IDENTIFIER",var,"local",lineno);
	    							g = 0;
	    						}
	    						else{
	    							insert(yyvsp[-2],"IDENTIFIER",var,"global",lineno);
	    						}
    						}
    						else{
    							printf("\n------------------ERROR : %s Undeclared at line number %d--------------------\n",yyvsp[-2],lineno);
    							error = 1;
    						}
    						
    					}
#line 1397 "proj1.tab.c"
    break;

  case 15: /* opassgn: DIVIDEEQUAL  */
#line 107 "proj1.y"
                                        {yyval=1;}
#line 1403 "proj1.tab.c"
    break;

  case 16: /* opassgn: MULEQUAL  */
#line 108 "proj1.y"
                                        {yyval=2;}
#line 1409 "proj1.tab.c"
    break;

  case 17: /* opassgn: MINUSEQUAL  */
#line 109 "proj1.y"
                                        {yyval=3;}
#line 1415 "proj1.tab.c"
    break;

  case 48: /* E1: E1 OP1 E2  */
#line 158 "proj1.y"
                                {
    					if(yyvsp[-1]==1)
    						{yyval=yyvsp[-2]+yyvsp[0];}
    					else if(yyvsp[-1]==2)
    						{yyval=yyvsp[-2]-yyvsp[0];}
    				}
#line 1426 "proj1.tab.c"
    break;

  case 50: /* E2: E2 OP2 E3  */
#line 166 "proj1.y"
                                {
    					if(yyvsp[-1]==3)
    						{yyval=yyvsp[-2]*yyvsp[0];}
    					else if(yyvsp[-1]==4)
    						{yyval=yyvsp[-2]/yyvsp[0];}
    				}
#line 1437 "proj1.tab.c"
    break;

  case 54: /* E4: NUM  */
#line 177 "proj1.y"
                                                {yyval=atoi(yyvsp[0]);}
#line 1443 "proj1.tab.c"
    break;

  case 55: /* E4: INTEGER  */
#line 178 "proj1.y"
                                                {yyval=atoi(yyvsp[0]);}
#line 1449 "proj1.tab.c"
    break;

  case 56: /* E4: ID  */
#line 179 "proj1.y"
                                                {
                					temp = search(yyvsp[0]);
                					if(temp != NULL){
                						var = temp->value;
                						yyval = var;
                					}
                					else{
                						printf("\n------------------ERROR : %s Undeclared at line number %d--------------------\n",yyvsp[0],lineno);
    								error = 1;
                					}	
                					
                				}
#line 1466 "proj1.tab.c"
    break;

  case 57: /* E4: SPECIAL_START E1 SPECIAL_END  */
#line 191 "proj1.y"
                                                {yyval=yyvsp[-1];}
#line 1472 "proj1.tab.c"
    break;

  case 58: /* OP1: PLUS  */
#line 194 "proj1.y"
                                                {yyval=1;}
#line 1478 "proj1.tab.c"
    break;

  case 59: /* OP1: MINUS  */
#line 195 "proj1.y"
                                                {yyval=2;}
#line 1484 "proj1.tab.c"
    break;

  case 60: /* OP2: MUL  */
#line 197 "proj1.y"
                                                {yyval=3;}
#line 1490 "proj1.tab.c"
    break;

  case 61: /* OP2: DIVIDE  */
#line 198 "proj1.y"
                                                {yyval=4;}
#line 1496 "proj1.tab.c"
    break;

  case 98: /* A: %empty  */
#line 257 "proj1.y"
                                {g=1;}
#line 1502 "proj1.tab.c"
    break;

  case 110: /* comment: COMMENT  */
#line 275 "proj1.y"
                                {lineno += 1;}
#line 1508 "proj1.tab.c"
    break;

  case 111: /* LB: NL  */
#line 276 "proj1.y"
                                {lineno += 1;}
#line 1514 "proj1.tab.c"
    break;


#line 1518 "proj1.tab.c"

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

#line 279 "proj1.y"


int yyerror(){
        printf("\n------------------SYNTAX ERROR : at line number %d -------------------------\n",lineno);
    	error = 1;
	v=0;
        return 0;
}
 void insert(char* l,char* t,int v,char* s,int ln)
{
	struct symbtab *n;
	n=search(l);
	if(n!=NULL)
        {
              	n->value = v;
              	n->lineno = ln;
              	strcpy(n->scope,s);  
        }
        else
        {
        	struct symbtab *p;
                p=malloc(sizeof(struct symbtab));
                strcpy(p->label,l);
                strcpy(p->type,t);
                p->value = v;
                p->lineno = ln;
                strcpy(p->scope,s);
                p->next=null;
                if(size==0)
                {
		        first=p;
		        last=p;
                }
                else
                {
                        last->next=p;
                        last=p;
                }
                size++;
        }
}

void display()
{
        int i;
        struct symbtab *p;
        p=first;
        printf("\n------------------SYMBOL TABLE----------------\n");
        printf("----------------------------------------------\n");
        printf("LABEL\tTYPE\t\tVALUE\tSCOPE\tLINENO\n");
        for(i=0;i<size;i++)
        {
                printf("%s\t%s\t%d\t%s\t%d\n",p->label,p->type,p->value,p->scope,p->lineno);
                p=p->next;
        }
}
int search(char lab[])
{
        int i=0;
        struct symbtab *p,*flag;
        p=first;
        for(i=0;i<size;i++)
        {
                if(strcmp(p->label,lab)==0)
                {
                	flag=p;
                	return flag;
                }
                p=p->next;
        }
        p=NULL;
        return p;
}
int main(){
         extern FILE* yyin;
	 yyin = fopen("inp.py","r");
	 yyparse();
	 if(v)
	 {
	    printf("------------------------------PARSE SUCCESSFUL---------------------------\n");
	 }
	 if(!error){
	 	display();
	 }
	 return 1;
	
}
