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
#line 3 "./src/fsmda.y"


 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

 #include "FsmdaHeader.h"
 #include "parser.h"


#line 82 "fsmda.tab.c"

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

#include "fsmda.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_CONSTANT = 4,                   /* CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 5,             /* STRING_LITERAL  */
  YYSYMBOL_LE_OP = 6,                      /* LE_OP  */
  YYSYMBOL_GE_OP = 7,                      /* GE_OP  */
  YYSYMBOL_EQ_OP = 8,                      /* EQ_OP  */
  YYSYMBOL_NE_OP = 9,                      /* NE_OP  */
  YYSYMBOL_AND = 10,                       /* AND  */
  YYSYMBOL_OR = 11,                        /* OR  */
  YYSYMBOL_NOT = 12,                       /* NOT  */
  YYSYMBOL_READ = 13,                      /* READ  */
  YYSYMBOL_OUT = 14,                       /* OUT  */
  YYSYMBOL_EQUAL = 15,                     /* EQUAL  */
  YYSYMBOL_COMMA = 16,                     /* COMMA  */
  YYSYMBOL_SEMIC = 17,                     /* SEMIC  */
  YYSYMBOL_SEPARATOR = 18,                 /* SEPARATOR  */
  YYSYMBOL_LT_OP = 19,                     /* LT_OP  */
  YYSYMBOL_GT_OP = 20,                     /* GT_OP  */
  YYSYMBOL_LEFT_BR = 21,                   /* LEFT_BR  */
  YYSYMBOL_RIGHT_BR = 22,                  /* RIGHT_BR  */
  YYSYMBOL_LEFT_SQBR = 23,                 /* LEFT_SQBR  */
  YYSYMBOL_RIGHT_SQBR = 24,                /* RIGHT_SQBR  */
  YYSYMBOL_MULT = 25,                      /* MULT  */
  YYSYMBOL_DIV = 26,                       /* DIV  */
  YYSYMBOL_MOD = 27,                       /* MOD  */
  YYSYMBOL_PLUS = 28,                      /* PLUS  */
  YYSYMBOL_MINUS = 29,                     /* MINUS  */
  YYSYMBOL_YYACCEPT = 30,                  /* $accept  */
  YYSYMBOL_variable = 31,                  /* variable  */
  YYSYMBOL_variable_list = 32,             /* variable_list  */
  YYSYMBOL_primary_expression = 33,        /* primary_expression  */
  YYSYMBOL_array_expression = 34,          /* array_expression  */
  YYSYMBOL_unary_expression = 35,          /* unary_expression  */
  YYSYMBOL_multiplicative_expression = 36, /* multiplicative_expression  */
  YYSYMBOL_expression = 37,                /* expression  */
  YYSYMBOL_assignment_expression = 38,     /* assignment_expression  */
  YYSYMBOL_relational_operator = 39,       /* relational_operator  */
  YYSYMBOL_primary_conditional_expression = 40, /* primary_conditional_expression  */
  YYSYMBOL_secondary_conditional_expression = 41, /* secondary_conditional_expression  */
  YYSYMBOL_conditional_expression = 42,    /* conditional_expression  */
  YYSYMBOL_state_name = 43,                /* state_name  */
  YYSYMBOL_transitions = 44,               /* transitions  */
  YYSYMBOL_operation_list = 45,            /* operation_list  */
  YYSYMBOL_operations = 46,                /* operations  */
  YYSYMBOL_substatement = 47,              /* substatement  */
  YYSYMBOL_substatement_list = 48,         /* substatement_list  */
  YYSYMBOL_statement = 49,                 /* statement  */
  YYSYMBOL_statement_list = 50,            /* statement_list  */
  YYSYMBOL_translation_fsmd = 51,          /* translation_fsmd  */
  YYSYMBOL_fsmd_name = 52,                 /* fsmd_name  */
  YYSYMBOL_additional_declaration = 53,    /* additional_declaration  */
  YYSYMBOL_argument_list = 54,             /* argument_list  */
  YYSYMBOL_uninterpreted_function = 55,    /* uninterpreted_function  */
  YYSYMBOL_function_name = 56              /* function_name  */
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
typedef yytype_int8 yy_state_t;

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   151

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  30
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  61
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  118

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   284


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
      25,    26,    27,    28,    29
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    58,    58,    62,    63,    67,    68,    69,    70,    71,
      75,    76,    80,    81,    85,    86,    87,    88,    92,    93,
      94,    98,    99,   100,   101,   105,   106,   107,   108,   109,
     110,   114,   115,   119,   120,   121,   122,   123,   127,   128,
     132,   136,   140,   141,   145,   146,   150,   154,   155,   159,
     162,   168,   169,   173,   174,   178,   182,   183,   187,   188,
     192,   196
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
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER",
  "CONSTANT", "STRING_LITERAL", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND",
  "OR", "NOT", "READ", "OUT", "EQUAL", "COMMA", "SEMIC", "SEPARATOR",
  "LT_OP", "GT_OP", "LEFT_BR", "RIGHT_BR", "LEFT_SQBR", "RIGHT_SQBR",
  "MULT", "DIV", "MOD", "PLUS", "MINUS", "$accept", "variable",
  "variable_list", "primary_expression", "array_expression",
  "unary_expression", "multiplicative_expression", "expression",
  "assignment_expression", "relational_operator",
  "primary_conditional_expression", "secondary_conditional_expression",
  "conditional_expression", "state_name", "transitions", "operation_list",
  "operations", "substatement", "substatement_list", "statement",
  "statement_list", "translation_fsmd", "fsmd_name",
  "additional_declaration", "argument_list", "uninterpreted_function",
  "function_name", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-61)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-62)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       4,   -61,     7,   133,   -61,   -61,    25,    28,   -61,     8,
       8,    53,   -61,     2,   -61,     8,   -61,   -61,   -61,    65,
      13,   -61,    14,   -61,    12,    48,    32,   -61,    36,   -61,
     108,    57,   -61,   128,    79,   -61,     9,   -61,    50,   -61,
     -61,    12,    48,    57,    87,    88,    46,   -61,    46,    46,
      46,    46,    46,   -61,   -61,   -61,   -61,   -61,   -61,    46,
      46,    46,    33,    33,    44,   -61,   -61,    46,    92,    46,
     -61,   -61,    83,    97,   103,   -61,   -61,   -61,   108,   108,
     112,    46,   -61,   -61,    99,   101,   -61,   -13,    66,   -61,
      58,     8,   112,    56,   -61,   112,   -61,   -61,   110,   110,
      46,    46,   105,   -61,    46,   -61,   126,   129,   112,   112,
     -61,   112,   110,    46,    82,    95,   -61,   -61
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    55,     0,     0,     1,    40,     0,     0,    51,    54,
       0,     0,    41,     0,    52,    53,     2,    57,     3,     0,
       2,     6,     0,    50,     0,    38,     5,    12,     9,    14,
      18,     0,    33,    39,     0,    47,     0,     8,     0,    56,
       4,     0,     0,     0,     0,     0,     0,    13,     0,     0,
       0,     0,     0,    27,    28,    29,    30,    25,    26,     0,
       0,     0,     0,     0,     0,    49,    48,     0,     0,     0,
       7,    36,     0,     0,     0,    15,    16,    17,    19,    20,
      31,     0,    34,    35,     0,     0,    44,     0,     0,    42,
      45,     0,    58,     0,    37,    32,    10,    11,     0,     0,
       0,     0,     0,    46,     0,    60,     0,     0,    21,    22,
      43,    59,     0,     0,     0,     0,    23,    24
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -61,   -11,   -61,    -3,   -60,    78,    84,   -21,    -2,   106,
      85,    20,   -61,    55,   -61,   -61,   -61,   114,   -61,    75,
     141,   -61,   -61,   -61,   -61,   -61,   -61
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    26,    19,    27,    28,    29,    30,    31,    89,    61,
      32,    33,    34,     7,    13,    90,    91,    35,    36,     8,
       9,     2,     3,    10,    93,    37,    38
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      18,    43,   100,    44,    88,    20,    21,     4,    40,     1,
      48,     5,    20,    21,    22,    20,    21,    20,    21,    23,
      44,    22,    47,    24,    22,    72,    65,    73,    74,    11,
      24,    25,    12,    24,   -61,    41,    20,    21,    25,    47,
      80,    42,    88,    42,    45,    81,    92,    16,    95,    20,
      21,    20,    21,    87,    46,    48,    16,    84,    85,    49,
      43,    68,    42,    53,    54,    55,    56,    46,    16,    46,
      17,    67,   104,    86,   102,    42,    57,    58,   105,   108,
     109,   101,    39,   111,    14,    59,    60,   106,   107,    49,
      14,    87,   115,    53,    54,    55,    56,    64,    62,    63,
     110,   114,    62,    63,   116,    70,    57,    58,    16,    70,
      71,    59,    60,    16,    94,    59,    60,   117,    84,    85,
      98,    96,    99,    59,    60,    59,    60,    97,    75,    76,
      77,    59,    60,    50,    51,    52,     5,     6,    62,    63,
      59,    60,   112,    78,    79,   113,   103,    82,    83,    69,
      66,    15
};

static const yytype_int8 yycheck[] =
{
      11,    22,    15,    24,    64,     3,     4,     0,    19,     5,
      23,     3,     3,     4,    12,     3,     4,     3,     4,    17,
      41,    12,    25,    21,    12,    46,    17,    48,    49,     4,
      21,    29,     4,    21,    21,    21,     3,     4,    29,    42,
      61,    29,   102,    29,    24,    12,    67,     3,    69,     3,
       4,     3,     4,    64,    21,    23,     3,    13,    14,    23,
      81,    41,    29,     6,     7,     8,     9,    21,     3,    21,
      17,    21,    16,    29,    16,    29,    19,    20,    22,   100,
     101,    15,    17,   104,     9,    28,    29,    98,    99,    23,
      15,   102,   113,     6,     7,     8,     9,    18,    10,    11,
     102,   112,    10,    11,    22,    22,    19,    20,     3,    22,
      22,    28,    29,     3,    22,    28,    29,    22,    13,    14,
      21,    24,    21,    28,    29,    28,    29,    24,    50,    51,
      52,    28,    29,    25,    26,    27,     3,     4,    10,    11,
      28,    29,    16,    59,    60,    16,    91,    62,    63,    43,
      36,    10
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,    51,    52,     0,     3,     4,    43,    49,    50,
      53,     4,     4,    44,    49,    50,     3,    17,    31,    32,
       3,     4,    12,    17,    21,    29,    31,    33,    34,    35,
      36,    37,    40,    41,    42,    47,    48,    55,    56,    17,
      31,    21,    29,    37,    37,    41,    21,    33,    23,    23,
      25,    26,    27,     6,     7,     8,     9,    19,    20,    28,
      29,    39,    10,    11,    18,    17,    47,    21,    41,    39,
      22,    22,    37,    37,    37,    35,    35,    35,    36,    36,
      37,    12,    40,    40,    13,    14,    29,    31,    34,    38,
      45,    46,    37,    54,    22,    37,    24,    24,    21,    21,
      15,    15,    16,    43,    16,    22,    31,    31,    37,    37,
      38,    37,    16,    16,    31,    37,    22,    22
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    30,    31,    32,    32,    33,    33,    33,    33,    33,
      34,    34,    35,    35,    36,    36,    36,    36,    37,    37,
      37,    38,    38,    38,    38,    39,    39,    39,    39,    39,
      39,    40,    40,    41,    41,    41,    41,    41,    42,    42,
      43,    44,    45,    45,    46,    46,    47,    48,    48,    49,
      49,    50,    50,    51,    51,    52,    53,    53,    54,    54,
      55,    56
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     3,     1,     1,
       4,     4,     1,     2,     1,     3,     3,     3,     1,     3,
       3,     3,     3,     6,     6,     1,     1,     1,     1,     1,
       1,     3,     4,     1,     3,     3,     3,     4,     1,     1,
       1,     1,     1,     3,     1,     1,     4,     1,     2,     4,
       3,     1,     2,     3,     2,     1,     4,     3,     1,     3,
       4,     1
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
  case 2: /* variable: IDENTIFIER  */
#line 58 "./src/fsmda.y"
                        { strcpy((yyval.string),(yyvsp[0].string)); }
#line 1211 "fsmda.tab.c"
    break;

  case 5: /* primary_expression: variable  */
#line 67 "./src/fsmda.y"
                                                                { (yyval.norm) = createVariable((yyvsp[0].string)); }
#line 1217 "fsmda.tab.c"
    break;

  case 6: /* primary_expression: CONSTANT  */
#line 68 "./src/fsmda.y"
                                                                { (yyval.norm) = createConstant((yyvsp[0].string)); }
#line 1223 "fsmda.tab.c"
    break;

  case 7: /* primary_expression: LEFT_BR expression RIGHT_BR  */
#line 69 "./src/fsmda.y"
                                        { (yyval.norm) = (yyvsp[-1].norm); }
#line 1229 "fsmda.tab.c"
    break;

  case 8: /* primary_expression: uninterpreted_function  */
#line 70 "./src/fsmda.y"
                                                { (yyval.norm) = (yyvsp[0].norm); }
#line 1235 "fsmda.tab.c"
    break;

  case 9: /* primary_expression: array_expression  */
#line 71 "./src/fsmda.y"
                                                        { (yyval.norm) = (yyvsp[0].norm); }
#line 1241 "fsmda.tab.c"
    break;

  case 10: /* array_expression: variable LEFT_SQBR expression RIGHT_SQBR  */
#line 75 "./src/fsmda.y"
                                                                                { (yyval.norm) = createArray((yyvsp[-3].string), (yyvsp[-1].norm));       }
#line 1247 "fsmda.tab.c"
    break;

  case 11: /* array_expression: array_expression LEFT_SQBR expression RIGHT_SQBR  */
#line 76 "./src/fsmda.y"
                                                                        { (yyval.norm) = addArrayDimension((yyvsp[-3].norm), (yyvsp[-1].norm)); }
#line 1253 "fsmda.tab.c"
    break;

  case 12: /* unary_expression: primary_expression  */
#line 80 "./src/fsmda.y"
                                                { (yyval.norm) = (yyvsp[0].norm); }
#line 1259 "fsmda.tab.c"
    break;

  case 13: /* unary_expression: MINUS primary_expression  */
#line 81 "./src/fsmda.y"
                                                { (yyval.norm) = negateExpression((yyvsp[0].norm)); }
#line 1265 "fsmda.tab.c"
    break;

  case 14: /* multiplicative_expression: unary_expression  */
#line 85 "./src/fsmda.y"
                                                                                                { (yyval.norm) = (yyvsp[0].norm); }
#line 1271 "fsmda.tab.c"
    break;

  case 15: /* multiplicative_expression: multiplicative_expression MULT unary_expression  */
#line 86 "./src/fsmda.y"
                                                                { (yyval.norm) = Mult_Sum_With_Sum((yyvsp[-2].norm), (yyvsp[0].norm), (yyval.norm)); }
#line 1277 "fsmda.tab.c"
    break;

  case 16: /* multiplicative_expression: multiplicative_expression DIV unary_expression  */
#line 87 "./src/fsmda.y"
                                                                { (yyval.norm) = createExpression_Mod_Div((yyvsp[-2].norm), (yyvsp[0].norm), '/'); }
#line 1283 "fsmda.tab.c"
    break;

  case 17: /* multiplicative_expression: multiplicative_expression MOD unary_expression  */
#line 88 "./src/fsmda.y"
                                                                { (yyval.norm) = createExpression_Mod_Div((yyvsp[-2].norm), (yyvsp[0].norm), '%'); }
#line 1289 "fsmda.tab.c"
    break;

  case 18: /* expression: multiplicative_expression  */
#line 92 "./src/fsmda.y"
                                                                                        { (yyval.norm) = (yyvsp[0].norm); }
#line 1295 "fsmda.tab.c"
    break;

  case 19: /* expression: expression PLUS multiplicative_expression  */
#line 93 "./src/fsmda.y"
                                                                        { (yyval.norm) = Add_Sums((yyvsp[-2].norm), (yyvsp[0].norm), (yyval.norm)); }
#line 1301 "fsmda.tab.c"
    break;

  case 20: /* expression: expression MINUS multiplicative_expression  */
#line 94 "./src/fsmda.y"
                                                                { (yyval.norm) = Add_Sums((yyvsp[-2].norm), negateExpression((yyvsp[0].norm)), (yyval.norm)); }
#line 1307 "fsmda.tab.c"
    break;

  case 21: /* assignment_expression: variable EQUAL expression  */
#line 98 "./src/fsmda.y"
                                                                                        { (yyval.data_trans) = createDataTransVar((yyvsp[-2].string), (yyvsp[0].norm));   }
#line 1313 "fsmda.tab.c"
    break;

  case 22: /* assignment_expression: array_expression EQUAL expression  */
#line 99 "./src/fsmda.y"
                                                                        { (yyval.data_trans) = createDataTransArray((yyvsp[-2].norm), (yyvsp[0].norm)); }
#line 1319 "fsmda.tab.c"
    break;

  case 23: /* assignment_expression: READ LEFT_BR variable COMMA variable RIGHT_BR  */
#line 100 "./src/fsmda.y"
                                                                { (yyval.data_trans) = createDataTransVarRead((yyvsp[-1].string), (yyvsp[-3].string)); /* port,  var: var  = port */ }
#line 1325 "fsmda.tab.c"
    break;

  case 24: /* assignment_expression: OUT LEFT_BR variable COMMA expression RIGHT_BR  */
#line 101 "./src/fsmda.y"
                                                                { (yyval.data_trans) = createDataTransVarOut((yyvsp[-3].string), (yyvsp[-1].norm));  /* port, expr: port = expr */ }
#line 1331 "fsmda.tab.c"
    break;

  case 25: /* relational_operator: LT_OP  */
#line 105 "./src/fsmda.y"
                        { strcpy((yyval.string),(yyvsp[0].string)); }
#line 1337 "fsmda.tab.c"
    break;

  case 26: /* relational_operator: GT_OP  */
#line 106 "./src/fsmda.y"
                        { strcpy((yyval.string),(yyvsp[0].string)); }
#line 1343 "fsmda.tab.c"
    break;

  case 27: /* relational_operator: LE_OP  */
#line 107 "./src/fsmda.y"
                        { strcpy((yyval.string),(yyvsp[0].string)); }
#line 1349 "fsmda.tab.c"
    break;

  case 28: /* relational_operator: GE_OP  */
#line 108 "./src/fsmda.y"
                        { strcpy((yyval.string),(yyvsp[0].string)); }
#line 1355 "fsmda.tab.c"
    break;

  case 29: /* relational_operator: EQ_OP  */
#line 109 "./src/fsmda.y"
                        { strcpy((yyval.string),(yyvsp[0].string)); }
#line 1361 "fsmda.tab.c"
    break;

  case 30: /* relational_operator: NE_OP  */
#line 110 "./src/fsmda.y"
                        { strcpy((yyval.string),(yyvsp[0].string)); }
#line 1367 "fsmda.tab.c"
    break;

  case 31: /* primary_conditional_expression: expression relational_operator expression  */
#line 114 "./src/fsmda.y"
                                                                                                        { (yyval.norm) = createConditionalExpression((yyvsp[-2].norm), (yyvsp[-1].string), (yyvsp[0].norm)); }
#line 1373 "fsmda.tab.c"
    break;

  case 32: /* primary_conditional_expression: NOT expression relational_operator expression  */
#line 115 "./src/fsmda.y"
                                                                                                { (yyval.norm) = negateConditionalExpression( createConditionalExpression((yyvsp[-2].norm), (yyvsp[-1].string), (yyvsp[0].norm)) ); }
#line 1379 "fsmda.tab.c"
    break;

  case 33: /* secondary_conditional_expression: primary_conditional_expression  */
#line 119 "./src/fsmda.y"
                                                                                                                        { (yyval.norm) = (yyvsp[0].norm); }
#line 1385 "fsmda.tab.c"
    break;

  case 34: /* secondary_conditional_expression: secondary_conditional_expression AND primary_conditional_expression  */
#line 120 "./src/fsmda.y"
                                                                                { (yyval.norm) = createAndExpression((yyvsp[-2].norm), (yyvsp[0].norm));     }
#line 1391 "fsmda.tab.c"
    break;

  case 35: /* secondary_conditional_expression: secondary_conditional_expression OR primary_conditional_expression  */
#line 121 "./src/fsmda.y"
                                                                                { (yyval.norm) = createOrExpression((yyvsp[-2].norm), (yyvsp[0].norm));      }
#line 1397 "fsmda.tab.c"
    break;

  case 36: /* secondary_conditional_expression: LEFT_BR secondary_conditional_expression RIGHT_BR  */
#line 122 "./src/fsmda.y"
                                                                                                        { (yyval.norm) = (yyvsp[-1].norm); }
#line 1403 "fsmda.tab.c"
    break;

  case 37: /* secondary_conditional_expression: NOT LEFT_BR secondary_conditional_expression RIGHT_BR  */
#line 123 "./src/fsmda.y"
                                                                                                { (yyval.norm) = negateConditionalExpression((yyvsp[-1].norm)); }
#line 1409 "fsmda.tab.c"
    break;

  case 38: /* conditional_expression: MINUS  */
#line 127 "./src/fsmda.y"
                                                                                                                                { (yyval.norm) = NULL; }
#line 1415 "fsmda.tab.c"
    break;

  case 39: /* conditional_expression: secondary_conditional_expression  */
#line 128 "./src/fsmda.y"
                                                                                                        { (yyval.norm) = (yyvsp[0].norm);   }
#line 1421 "fsmda.tab.c"
    break;

  case 40: /* state_name: IDENTIFIER  */
#line 132 "./src/fsmda.y"
                        { strcpy((yyval.string), (yyvsp[0].string)); }
#line 1427 "fsmda.tab.c"
    break;

  case 41: /* transitions: CONSTANT  */
#line 136 "./src/fsmda.y"
                                { strcpy((yyval.string), (yyvsp[0].string)); }
#line 1433 "fsmda.tab.c"
    break;

  case 42: /* operation_list: assignment_expression  */
#line 140 "./src/fsmda.y"
                                                                                { (yyval.dt_list) = (DT_LIST*)malloc(sizeof(DT_LIST)); (yyval.dt_list)->action[0].lhs = (yyvsp[0].data_trans)->lhs; (yyval.dt_list)->action[0].rhs = (yyvsp[0].data_trans)->rhs; (yyval.dt_list)->numOperations = 1; }
#line 1439 "fsmda.tab.c"
    break;

  case 43: /* operation_list: operation_list COMMA assignment_expression  */
#line 141 "./src/fsmda.y"
                                                        { (yyval.dt_list)->action[(yyval.dt_list)->numOperations].lhs = (yyvsp[0].data_trans)->lhs; (yyval.dt_list)->action[(yyval.dt_list)->numOperations].rhs = (yyvsp[0].data_trans)->rhs;  ((yyval.dt_list)->numOperations)++; }
#line 1445 "fsmda.tab.c"
    break;

  case 44: /* operations: MINUS  */
#line 145 "./src/fsmda.y"
                                        { (yyval.dt_list) = (DT_LIST*)malloc(sizeof(DT_LIST)); (yyval.dt_list)->numOperations = 0; }
#line 1451 "fsmda.tab.c"
    break;

  case 45: /* operations: operation_list  */
#line 146 "./src/fsmda.y"
                                { (yyval.dt_list) = (yyvsp[0].dt_list); }
#line 1457 "fsmda.tab.c"
    break;

  case 46: /* substatement: conditional_expression SEPARATOR operations state_name  */
#line 150 "./src/fsmda.y"
                                                                        { (yyval.substmt) = (SUBSTMT*)malloc(sizeof(SUBSTMT)); (yyval.substmt)->condition = (yyvsp[-3].norm); (yyval.substmt)->assignments = (yyvsp[-1].dt_list); strcpy((yyval.substmt)->stateName, (yyvsp[0].string)); }
#line 1463 "fsmda.tab.c"
    break;

  case 47: /* substatement_list: substatement  */
#line 154 "./src/fsmda.y"
                                                                { (yyval.substmt_list) = (SUBSTMT_LIST*)malloc(sizeof(SUBSTMT_LIST)); (yyval.substmt_list)->substmt[0] = (yyvsp[0].substmt); (yyval.substmt_list)->numSubstmts = 1; }
#line 1469 "fsmda.tab.c"
    break;

  case 48: /* substatement_list: substatement_list substatement  */
#line 155 "./src/fsmda.y"
                                                { (yyval.substmt_list)->substmt[(yyval.substmt_list)->numSubstmts] = (yyvsp[0].substmt); ((yyval.substmt_list)->numSubstmts)++; }
#line 1475 "fsmda.tab.c"
    break;

  case 49: /* statement: state_name transitions substatement_list SEMIC  */
#line 159 "./src/fsmda.y"
                                                                { (yyval.stmt) = (STMT*)malloc(sizeof(STMT)); strcpy((yyval.stmt)->stateName, (yyvsp[-3].string));
															if(constval((yyvsp[-2].string)) != (yyvsp[-1].substmt_list)->numSubstmts){printf("\n\nMismatch in number of transitions for State %s\nExiting System\n", (yyvsp[-3].string)); exit(0);}
															strcpy((yyval.stmt)->numTransitions, (yyvsp[-2].string));  (yyval.stmt)->substmts = (yyvsp[-1].substmt_list);   }
#line 1483 "fsmda.tab.c"
    break;

  case 50: /* statement: state_name transitions SEMIC  */
#line 162 "./src/fsmda.y"
                                                                                { (yyval.stmt) = (STMT*)malloc(sizeof(STMT)); strcpy((yyval.stmt)->stateName, (yyvsp[-2].string));
															if(constval((yyvsp[-1].string)) != 0){printf("\n\nMismatch in number of transitions for State %s\nExiting System\n", (yyvsp[-2].string)); exit(0);}
															strcpy((yyval.stmt)->numTransitions, "0"); (yyval.stmt)->substmts = NULL; }
#line 1491 "fsmda.tab.c"
    break;

  case 51: /* statement_list: statement  */
#line 168 "./src/fsmda.y"
                                                                        { (yyval.stmt_list) = (STMT_LIST*)malloc(sizeof(STMT_LIST)); (yyval.stmt_list)->statements[0] = (yyvsp[0].stmt); (yyval.stmt_list)->numStatements = 1; }
#line 1497 "fsmda.tab.c"
    break;

  case 52: /* statement_list: statement_list statement  */
#line 169 "./src/fsmda.y"
                                                        { (yyval.stmt_list)->statements[(yyval.stmt_list)->numStatements] = (yyvsp[0].stmt); ((yyval.stmt_list)->numStatements)++;                               }
#line 1503 "fsmda.tab.c"
    break;

  case 53: /* translation_fsmd: fsmd_name additional_declaration statement_list  */
#line 173 "./src/fsmda.y"
                                                                { createFSMD((yyvsp[-2].string), (yyvsp[0].stmt_list)); /* additional_declaration is needed for SAST tool */ }
#line 1509 "fsmda.tab.c"
    break;

  case 54: /* translation_fsmd: fsmd_name statement_list  */
#line 174 "./src/fsmda.y"
                                                                                        { createFSMD((yyvsp[-1].string), (yyvsp[0].stmt_list)); }
#line 1515 "fsmda.tab.c"
    break;

  case 55: /* fsmd_name: STRING_LITERAL  */
#line 178 "./src/fsmda.y"
                                { strcpy((yyval.string), (yyvsp[0].string)); }
#line 1521 "fsmda.tab.c"
    break;

  case 58: /* argument_list: expression  */
#line 187 "./src/fsmda.y"
                                                                                                { (yyval.norm) = (yyvsp[0].norm); }
#line 1527 "fsmda.tab.c"
    break;

  case 59: /* argument_list: argument_list COMMA expression  */
#line 188 "./src/fsmda.y"
                                                                                { (yyval.norm) = addArgument((yyvsp[-2].norm), (yyvsp[0].norm));    }
#line 1533 "fsmda.tab.c"
    break;

  case 60: /* uninterpreted_function: function_name LEFT_BR argument_list RIGHT_BR  */
#line 192 "./src/fsmda.y"
                                                                { (yyval.norm) = createFunction((yyvsp[-3].norm), (yyvsp[-1].norm)); }
#line 1539 "fsmda.tab.c"
    break;

  case 61: /* function_name: IDENTIFIER  */
#line 196 "./src/fsmda.y"
                                { (yyval.norm) = createVariable((yyvsp[0].string)); /* 'v' will later be replaced by 'f' */ }
#line 1545 "fsmda.tab.c"
    break;


#line 1549 "fsmda.tab.c"

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

#line 199 "./src/fsmda.y"



extern char yytext[];
extern int column;

extern FILE *yyin;



int yyerror(char *s)
{
	fflush(stdout);
	printf("\n%*s\n%*s\n", column, "^", column, s);
}

extern boolean flagVar_List;

void callParser(char *fileName)
{

 	printf("\nCalling Parser....");

 	printf("\nFile opening: %s\n", fileName);

 	yyin = fopen(fileName, "r");

 	if(yyin == NULL)
	{
 		printf("\nFile open error\n");
		exit(0);
	}

	indexof_symtab("-");
	//The next statement adds the variable to corresponding var_list
	if(!(flagVar_List))
		indexof_varlist("-", &V0);
	else
		indexof_varlist("-", &V1);

 	yyparse();
}
