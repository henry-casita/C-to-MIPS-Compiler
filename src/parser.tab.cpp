/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1





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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_SRC_PARSER_TAB_HPP_INCLUDED
# define YY_YY_SRC_PARSER_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "src/parser.y"

  #include "ast.hpp"

  #include <cassert>
  #include <string.h>

  extern const Node *g_root; // A way of getting the AST out

  //! This is to fix problems when generating C++
  // We are declaring the functions provided by Flex, so
  // that Bison generated code can call them.
  int yylex(void);
  void yyerror(const char *);

#line 126 "src/parser.tab.cpp"

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENTIFIER = 258,
    CONSTANT = 259,
    STRING_LITERAL = 260,
    SIZEOF = 261,
    PTR_OP = 262,
    INC_OP = 263,
    DEC_OP = 264,
    LEFT_OP = 265,
    RIGHT_OP = 266,
    LE_OP = 267,
    GE_OP = 268,
    EQ_OP = 269,
    NE_OP = 270,
    AND_OP = 271,
    OR_OP = 272,
    MUL_ASSIGN = 273,
    DIV_ASSIGN = 274,
    MOD_ASSIGN = 275,
    ADD_ASSIGN = 276,
    SUB_ASSIGN = 277,
    LEFT_ASSIGN = 278,
    RIGHT_ASSIGN = 279,
    AND_ASSIGN = 280,
    XOR_ASSIGN = 281,
    OR_ASSIGN = 282,
    TYPE_NAME = 283,
    TYPEDEF = 284,
    EXTERN = 285,
    STATIC = 286,
    AUTO = 287,
    REGISTER = 288,
    CHAR = 289,
    SHORT = 290,
    INT = 291,
    LONG = 292,
    SIGNED = 293,
    UNSIGNED = 294,
    FLOAT = 295,
    DOUBLE = 296,
    CONST = 297,
    VOLATILE = 298,
    VOID = 299,
    STRUCT = 300,
    UNION = 301,
    ENUM = 302,
    ELLIPSIS = 303,
    NUMBER = 304,
    CASE = 305,
    DEFAULT = 306,
    IF = 307,
    ELSE = 308,
    SWITCH = 309,
    WHILE = 310,
    DO = 311,
    FOR = 312,
    GOTO = 313,
    CONTINUE = 314,
    BREAK = 315,
    RETURN = 316
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 18 "src/parser.y"

  const Node *expr;
  double number;
  std::string *string;
  LPtr	list;

#line 206 "src/parser.tab.cpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_PARSER_TAB_HPP_INCLUDED  */



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
typedef yytype_int16 yy_state_t;

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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


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
#define YYFINAL  62
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1097

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  86
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  60
/* YYNRULES -- Number of rules.  */
#define YYNRULES  197
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  340

#define YYUNDEFTOK  2
#define YYMAXUTOK   316


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    70,     2,     2,     2,    74,    77,     2,
      62,    63,    72,    71,    67,    68,    66,    73,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    81,    83,
      75,    82,    76,    80,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    64,     2,    65,    78,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    84,    79,    85,    69,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    59,    59,    60,    62,    66,    67,    68,    69,    70,
      71,    72,    73,    77,    78,    82,    83,    84,    86,    87,
      88,    89,    90,    91,   110,   111,   112,   113,   117,   118,
     119,   123,   124,   125,   129,   130,   131,   132,   133,   137,
     138,   139,   143,   144,   148,   149,   153,   154,   158,   159,
     163,   164,   168,   169,   173,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   203,   208,   212,   213,
     217,   218,   219,   220,   221,   222,   231,   232,   236,   237,
     238,   239,   240,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   259,   260,   261,   265,   266,
     270,   271,   275,   279,   280,   281,   282,   286,   291,   292,
     293,   297,   298,   299,   303,   304,   308,   309,   313,   314,
     318,   319,   323,   324,   325,   326,   327,   328,   329,   333,
     334,   335,   336,   340,   341,   351,   352,   356,   357,   358,
     362,   367,   368,   372,   373,   374,   378,   379,   380,   381,
     382,   383,   384,   385,   386,   390,   391,   396,   401,   402,
     403,   404,   405,   407,   411,   412,   413,   417,   418,   419,
     420,   424,   425,   429,   430,   434,   435,   439,   440,   441,
     445,   446,   447,   448,   452,   453,   454,   455,   456,   460,
     461,   466,   467,   471,   472,   473,   474,   477
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "CONSTANT",
  "STRING_LITERAL", "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP",
  "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP",
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN",
  "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN",
  "TYPE_NAME", "TYPEDEF", "EXTERN", "STATIC", "AUTO", "REGISTER", "CHAR",
  "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE", "CONST",
  "VOLATILE", "VOID", "STRUCT", "UNION", "ENUM", "ELLIPSIS", "NUMBER",
  "CASE", "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "GOTO",
  "CONTINUE", "BREAK", "RETURN", "'('", "')'", "'['", "']'", "'.'", "','",
  "'-'", "'~'", "'!'", "'+'", "'*'", "'/'", "'%'", "'<'", "'>'", "'&'",
  "'^'", "'|'", "'?'", "':'", "'='", "';'", "'{'", "'}'", "$accept",
  "primary_expression", "postfix_expression", "argument_expression_list",
  "unary_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "expression",
  "constant_expression", "declaration", "declaration_specifiers",
  "init_declarator", "storage_class_specifier", "type_specifier",
  "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "initializer", "initializer_list",
  "statement", "labeled_statement", "compound_statement",
  "declaration_list", "statement_list", "expression_statement",
  "selection_statement", "iteration_statement", "jump_statement",
  "translation_unit", "external_declaration", "function_definition",
  "program", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,    40,    41,    91,    93,    46,    44,    45,   126,
      33,    43,    42,    47,    37,    60,    62,    38,    94,   124,
      63,    58,    61,    59,   123,   125
};
# endif

#define YYPACT_NINF (-198)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     590,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,
    -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,
    -198,     4,    13,     6,  -198,   145,  1050,  1050,  -198,     9,
    -198,  1050,   912,   119,    22,   590,  -198,  -198,    34,   -61,
      37,   -20,  -198,  -198,     6,  -198,   -37,   892,  -198,  -198,
     -24,   728,  -198,   275,  -198,   145,  -198,   912,   784,   596,
     119,  -198,  -198,    37,    18,   -38,  -198,  -198,  -198,  -198,
    -198,   202,  -198,   912,   728,   728,   814,  -198,   140,   728,
      -5,  -198,   724,   735,   735,   735,    14,    47,    50,    80,
     485,    85,   172,    97,   102,   170,   735,   735,   735,   735,
     735,  -198,  -198,  -198,   550,   269,    -3,   -50,   120,    29,
     136,   111,   123,   118,   197,     7,  -198,  -198,   131,  -198,
    -198,  -198,   344,   413,  -198,  -198,  -198,  -198,   148,  -198,
    -198,  -198,  -198,   186,    -4,  -198,   153,  -198,  -198,  -198,
    -198,   166,   -11,   735,    37,  -198,   202,  -198,  -198,  -198,
     834,  -198,  -198,  -198,   735,   135,  -198,   152,  -198,   485,
     635,  -198,  -198,  -198,   156,   485,   735,   735,   735,   188,
     362,   163,  -198,  -198,  -198,   164,   192,  -198,  -198,  -198,
    -198,   246,  -198,  -198,   645,   735,   248,   735,   735,   735,
     735,   735,   735,   735,   735,   735,   735,   735,   735,   735,
     735,   735,   735,   735,   735,   735,   735,   735,   735,   735,
     735,   735,   735,   735,   735,   735,   735,  -198,  -198,   449,
    -198,  -198,   545,   680,  -198,    27,  -198,   122,  -198,  1050,
    -198,  -198,  -198,  -198,  -198,  -198,   171,  -198,  -198,  -198,
     735,  -198,    -7,   196,   485,  -198,   203,   204,   205,   212,
     362,  -198,  -198,  -198,  -198,  -198,    -1,  -198,   200,  -198,
    -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,
    -198,  -198,  -198,  -198,    -3,    -3,   -50,   -50,   120,   120,
     120,   120,    29,    29,   136,   111,   123,   118,   197,   194,
    -198,  -198,     5,   213,  -198,   217,   122,  1014,   690,  -198,
    -198,  -198,   969,   134,  -198,  -198,  -198,   485,   485,   485,
     735,   714,  -198,   735,  -198,   735,  -198,  -198,  -198,  -198,
      82,  -198,   220,   224,  -198,  -198,   235,   485,   236,  -198,
    -198,  -198,  -198,   485,   218,  -198,   485,  -198,  -198,  -198
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   122,    94,    78,    79,    80,    81,    82,    84,    85,
      86,    87,    90,    91,    88,    89,   118,   119,    83,    98,
      99,     0,     0,   129,   192,     0,    70,    72,    92,     0,
      93,    74,     0,   121,     0,   197,   189,   191,     0,   113,
       0,     0,   133,   131,   130,    68,     0,    76,    71,    73,
      97,     0,    75,     0,   171,     0,   196,     0,     0,     0,
     120,   190,     1,     0,   116,     0,   114,   123,   134,   132,
      69,     0,   194,     0,     0,   104,     0,   100,     0,   106,
       2,     3,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   175,   167,     5,    15,    24,    28,    31,    34,    39,
      42,    44,    46,    48,    50,    52,    54,    66,     0,   173,
     158,   159,     0,     0,   160,   161,   162,   163,    76,   172,
     195,   140,   128,   139,     0,   135,     0,     2,   125,    24,
      67,     0,     0,     0,     0,   111,     0,   155,    77,   193,
       0,   103,    96,   101,     0,     0,   107,   108,   105,     0,
       0,    18,    16,    17,     0,     0,     0,     0,     0,     0,
       0,     0,   185,   186,   187,     0,     0,    20,    21,    22,
      23,     0,    11,    12,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   176,   169,     0,
     168,   174,     0,     0,   137,   143,   138,   144,   126,     0,
     127,   124,   112,   117,   115,   157,     0,    95,   109,   102,
       0,   164,   141,     0,     0,   166,     0,     0,     0,     0,
       0,   184,   188,     4,    10,     7,     0,    13,     0,     9,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      55,    25,    26,    27,    30,    29,    32,    33,    37,    38,
      35,    36,    40,    41,    43,    45,    47,    49,    51,     0,
     170,   151,     0,     0,   147,     0,   145,     0,     0,   136,
     156,   110,     0,   143,   142,    19,   165,     0,     0,     0,
       0,     0,     8,     0,     6,     0,   152,   146,   148,   153,
       0,   149,     0,   177,   179,   180,     0,     0,     0,    14,
      53,   154,   150,     0,     0,   182,     0,   178,   181,   183
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -198,  -198,  -198,  -198,   -46,   -65,    23,   -15,    -6,    89,
     112,   110,   114,   124,  -198,   -53,   -69,   -87,   -41,    10,
       0,  -198,  -198,    65,  -198,  -198,   264,   -43,   -64,  -198,
    -198,  -198,   277,   198,    59,    39,   -30,   -22,  -198,   -55,
     125,  -198,  -198,  -128,  -197,   195,  -198,   -73,  -198,   361,
     -33,   227,  -151,  -198,  -198,  -198,  -198,   320,  -198,  -198
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   103,   104,   256,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   141,    54,
      55,    46,    26,    27,    28,    29,    76,    77,    78,   155,
     156,    30,    65,    66,    31,    32,    33,    34,    44,   292,
     135,   136,   243,   293,   227,   148,   236,   119,   120,   121,
      57,   123,   124,   125,   126,   127,    35,    36,    37,    38
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      25,    43,   147,   134,    60,   226,   140,    39,   175,   176,
      24,   151,    50,   139,    73,   158,     1,   169,   201,   250,
     122,   202,    69,    63,   215,     1,    48,    49,   296,   144,
       1,    52,   140,   153,    62,    25,   161,   162,   163,   139,
      64,   205,   206,    67,   164,    24,    70,   145,    16,    17,
     221,   177,   178,   179,   180,   302,   144,   223,   133,   228,
      74,    41,   312,   229,    47,    23,   313,   129,   316,   198,
     199,   200,   229,   176,   232,    22,   159,   147,    23,   246,
     247,   248,    42,   129,    22,    23,   241,   216,    40,   222,
     140,   223,   245,    51,   128,   165,   242,   139,   258,   311,
     143,   140,   233,    68,   207,   208,   296,   153,   139,   166,
      79,   225,   167,   238,   304,   257,    75,   157,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   289,
     203,   204,   129,    79,    79,    79,   274,   275,    79,    75,
      75,    75,   168,     1,    75,   331,   221,   170,     1,   229,
     209,   210,   271,   272,   273,   139,   139,   139,   139,   139,
     139,   139,   139,   139,   139,   139,   139,   139,   139,   139,
     140,   306,   224,   137,    81,   171,    82,   139,    83,    84,
     172,    58,   295,    59,   297,   173,   298,   140,   211,     1,
     278,   279,   280,   281,   139,    60,   302,   213,   223,   301,
     225,   212,    22,   282,   283,   137,    81,    22,    82,    79,
      83,    84,    23,   214,   217,    75,   230,    23,   239,    79,
     303,   154,   133,   326,   328,    75,   276,   277,    45,   133,
      71,   231,    96,   240,   323,   324,   325,   244,    97,    98,
      99,   100,   320,   249,   329,   140,   251,   252,   222,   254,
     223,   259,   139,   174,   335,   253,   300,   322,    23,   305,
     337,    41,   330,   339,    96,   314,   307,   308,   309,   139,
      97,    98,    99,   100,   310,   315,   317,   333,    80,    81,
     303,    82,   318,    83,    84,   332,   146,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   133,   334,   336,
     284,   338,   133,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,   286,   285,    85,    86,    87,   287,    88,
      89,    90,    91,    92,    93,    94,    95,    96,   150,   288,
     142,   235,   234,    97,    98,    99,   100,    80,    81,   219,
      82,   197,    83,    84,   299,    61,     0,     0,   101,    53,
     102,     0,     0,     0,     0,   137,    81,     0,    82,     0,
      83,    84,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,    56,    85,    86,    87,     0,    88,    89,
      90,    91,    92,    93,    94,    95,    96,     0,    72,     0,
       0,     0,    97,    98,    99,   100,    80,    81,   130,    82,
       0,    83,    84,     0,    96,     0,     0,   101,    53,   218,
      97,    98,    99,   100,   149,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   101,     0,     0,     0,     0,
       0,     0,    80,    81,     0,    82,     0,    83,    84,     0,
       0,     0,     0,    85,    86,    87,     0,    88,    89,    90,
      91,    92,    93,    94,    95,    96,     0,     0,     0,     0,
       0,    97,    98,    99,   100,     0,     0,     0,    80,    81,
       0,    82,     0,    83,    84,     0,   101,    53,   220,    85,
      86,    87,     0,    88,    89,    90,    91,    92,    93,    94,
      95,    96,     0,     0,     0,     0,     0,    97,    98,    99,
     100,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   101,    53,   290,    85,    86,    87,     0,    88,
      89,    90,    91,    92,    93,    94,    95,    96,     1,     0,
       0,     0,     0,    97,    98,    99,   100,   181,   182,   183,
       0,     0,     0,     0,     0,     0,     0,     0,   101,    53,
       0,     0,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     1,     0,     0,     0,     0,     0,   137,
      81,     0,    82,     0,    83,    84,     0,   222,   291,   223,
       0,     0,   184,     0,   185,     0,   186,    23,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,   137,    81,
       0,    82,     0,    83,    84,     0,     0,     0,   137,    81,
       0,    82,    22,    83,    84,     0,     0,     0,    96,     0,
       0,   138,    23,     2,    97,    98,    99,   100,     0,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,   137,    81,     0,    82,     0,    83,    84,
       0,     0,     0,   137,    81,     0,    82,    96,    83,    84,
       0,     0,     0,    97,    98,    99,   100,    96,   255,     0,
       0,     0,     0,    97,    98,    99,   100,   137,    81,     0,
      82,     0,    83,    84,     0,     0,     0,   137,    81,     0,
      82,     0,    83,    84,     0,     0,     0,     0,   137,    81,
       0,    82,    96,    83,    84,   294,     0,     0,    97,    98,
      99,   100,    96,     0,     0,   321,     2,     0,    97,    98,
      99,   100,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    96,   327,     0,     0,
       0,     0,    97,    98,    99,   100,   160,   131,     0,     0,
       0,     0,    97,    98,    99,   100,     0,    96,     0,     0,
       0,     0,     0,    97,    98,    99,   100,     0,     0,     0,
       0,     0,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     0,     0,     0,     0,   132,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     2,     0,     0,     0,     0,     0,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   152,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   237,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    71,     0,    53,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    53,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   302,   291,   223,     0,     0,     0,     0,     0,     0,
       0,    23,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   319,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
       0,    23,    71,    58,    34,   133,    59,     3,    95,    96,
       0,    75,     3,    59,    47,    79,     3,    90,    68,   170,
      53,    71,    44,    84,    17,     3,    26,    27,   225,    67,
       3,    31,    85,    76,     0,    35,    82,    83,    84,    85,
       3,    12,    13,    63,    85,    35,    83,    85,    42,    43,
     123,    97,    98,    99,   100,    62,    67,    64,    58,    63,
      84,    22,    63,    67,    25,    72,    67,    57,    63,    72,
      73,    74,    67,   160,    85,    62,    81,   146,    72,   166,
     167,   168,    23,    73,    62,    72,   159,    80,    84,    62,
     143,    64,   165,    84,    55,    81,   160,   143,   185,   250,
      82,   154,   143,    44,    75,    76,   303,   150,   154,    62,
      51,   133,    62,   154,   242,   184,    51,    78,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   216,
      10,    11,   122,    74,    75,    76,   201,   202,    79,    74,
      75,    76,    62,     3,    79,    63,   219,    62,     3,    67,
      14,    15,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     223,   244,   133,     3,     4,     3,     6,   223,     8,     9,
      83,    62,   223,    64,    62,    83,    64,   240,    77,     3,
     205,   206,   207,   208,   240,   225,    62,    79,    64,   240,
     222,    78,    62,   209,   210,     3,     4,    62,     6,   150,
       8,     9,    72,    16,    83,   150,    63,    72,    83,   160,
     242,    81,   222,   310,   311,   160,   203,   204,    83,   229,
      82,    65,    62,    81,   307,   308,   309,    81,    68,    69,
      70,    71,   297,    55,   313,   298,    83,    83,    62,     3,
      64,     3,   298,    83,   327,    63,    85,   298,    72,    63,
     333,   222,   315,   336,    62,    65,    63,    63,    63,   315,
      68,    69,    70,    71,    62,    81,    63,    53,     3,     4,
     302,     6,    65,     8,     9,    65,    84,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,   297,    63,    63,
     211,    83,   302,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,   213,   212,    50,    51,    52,   214,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    74,   215,
      63,   146,   144,    68,    69,    70,    71,     3,     4,   122,
       6,    82,     8,     9,   229,    35,    -1,    -1,    83,    84,
      85,    -1,    -1,    -1,    -1,     3,     4,    -1,     6,    -1,
       8,     9,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    32,    50,    51,    52,    -1,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    -1,    47,    -1,
      -1,    -1,    68,    69,    70,    71,     3,     4,    57,     6,
      -1,     8,     9,    -1,    62,    -1,    -1,    83,    84,    85,
      68,    69,    70,    71,    73,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,    -1,     6,    -1,     8,     9,    -1,
      -1,    -1,    -1,    50,    51,    52,    -1,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    -1,    -1,    -1,    -1,
      -1,    68,    69,    70,    71,    -1,    -1,    -1,     3,     4,
      -1,     6,    -1,     8,     9,    -1,    83,    84,    85,    50,
      51,    52,    -1,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    -1,    -1,    -1,    -1,    -1,    68,    69,    70,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    84,    85,    50,    51,    52,    -1,    54,
      55,    56,    57,    58,    59,    60,    61,    62,     3,    -1,
      -1,    -1,    -1,    68,    69,    70,    71,     7,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    84,
      -1,    -1,    -1,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,     3,    -1,    -1,    -1,    -1,    -1,     3,
       4,    -1,     6,    -1,     8,     9,    -1,    62,    63,    64,
      -1,    -1,    62,    -1,    64,    -1,    66,    72,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,     3,     4,
      -1,     6,    -1,     8,     9,    -1,    -1,    -1,     3,     4,
      -1,     6,    62,     8,     9,    -1,    -1,    -1,    62,    -1,
      -1,    65,    72,    28,    68,    69,    70,    71,    -1,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,     3,     4,    -1,     6,    -1,     8,     9,
      -1,    -1,    -1,     3,     4,    -1,     6,    62,     8,     9,
      -1,    -1,    -1,    68,    69,    70,    71,    62,    63,    -1,
      -1,    -1,    -1,    68,    69,    70,    71,     3,     4,    -1,
       6,    -1,     8,     9,    -1,    -1,    -1,     3,     4,    -1,
       6,    -1,     8,     9,    -1,    -1,    -1,    -1,     3,     4,
      -1,     6,    62,     8,     9,    65,    -1,    -1,    68,    69,
      70,    71,    62,    -1,    -1,    65,    28,    -1,    68,    69,
      70,    71,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    62,    63,    -1,    -1,
      -1,    -1,    68,    69,    70,    71,    62,     3,    -1,    -1,
      -1,    -1,    68,    69,    70,    71,    -1,    62,    -1,    -1,
      -1,    -1,    -1,    68,    69,    70,    71,    -1,    -1,    -1,
      -1,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    -1,    -1,    63,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    28,    -1,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    84,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    62,    72,   105,   106,   108,   109,   110,   111,
     117,   120,   121,   122,   123,   142,   143,   144,   145,     3,
      84,   121,   120,   123,   124,    83,   107,   121,   106,   106,
       3,    84,   106,    84,   105,   106,   135,   136,    62,    64,
     122,   143,     0,    84,     3,   118,   119,    63,   120,   123,
      83,    82,   135,   136,    84,   109,   112,   113,   114,   120,
       3,     4,     6,     8,     9,    50,    51,    52,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    68,    69,    70,
      71,    83,    85,    87,    88,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   121,   105,
     135,     3,    63,   106,   125,   126,   127,     3,    65,    90,
     101,   104,   118,    82,    67,    85,    84,   102,   131,   135,
     112,   114,    85,   113,    81,   115,   116,   121,   114,    81,
      62,    90,    90,    90,   104,    81,    62,    62,    62,   133,
      62,     3,    83,    83,    83,   103,   103,    90,    90,    90,
      90,     7,     8,     9,    62,    64,    66,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    82,    72,    73,
      74,    68,    71,    10,    11,    12,    13,    75,    76,    14,
      15,    77,    78,    79,    16,    17,    80,    83,    85,   137,
      85,   133,    62,    64,   121,   123,   129,   130,    63,    67,
      63,    65,    85,   104,   119,   131,   132,    85,   104,    83,
      81,   133,   114,   128,    81,   133,   103,   103,   103,    55,
     138,    83,    83,    63,     3,    63,    89,   102,   103,     3,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,    90,    90,    90,    91,    91,    92,    92,    93,    93,
      93,    93,    94,    94,    95,    96,    97,    98,    99,   103,
      85,    63,   125,   129,    65,   104,   130,    62,    64,   126,
      85,   104,    62,   123,   129,    63,   133,    63,    63,    63,
      62,   138,    63,    67,    65,    81,    63,    63,    65,    63,
     125,    65,   104,   133,   133,   133,   103,    63,   103,   102,
     101,    63,    65,    53,    63,   133,    63,   133,    83,   133
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    86,    87,    87,    87,    88,    88,    88,    88,    88,
      88,    88,    88,    89,    89,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    91,    91,    91,    91,    92,    92,
      92,    93,    93,    93,    94,    94,    94,    94,    94,    95,
      95,    95,    96,    96,    97,    97,    98,    98,    99,    99,
     100,   100,   101,   101,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   103,   104,   105,   105,
     106,   106,   106,   106,   106,   106,   107,   107,   108,   108,
     108,   108,   108,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   110,   110,   110,   111,   111,
     112,   112,   113,   114,   114,   114,   114,   115,   116,   116,
     116,   117,   117,   117,   118,   118,   119,   119,   120,   120,
     121,   121,   122,   122,   122,   122,   122,   122,   122,   123,
     123,   123,   123,   124,   124,   125,   125,   126,   126,   126,
     127,   128,   128,   129,   129,   129,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   131,   131,   132,   133,   133,
     133,   133,   133,   133,   134,   134,   134,   135,   135,   135,
     135,   136,   136,   137,   137,   138,   138,   139,   139,   139,
     140,   140,   140,   140,   141,   141,   141,   141,   141,   142,
     142,   143,   143,   144,   144,   144,   144,   145
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     3,     1,     4,     3,     4,     3,
       3,     2,     2,     1,     3,     1,     2,     2,     2,     4,
       2,     2,     2,     2,     1,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     5,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     1,     2,     3,
       1,     2,     1,     2,     1,     2,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     4,     2,     1,     1,
       1,     2,     3,     2,     1,     2,     1,     1,     1,     2,
       3,     4,     5,     2,     1,     3,     1,     3,     1,     1,
       2,     1,     1,     3,     4,     3,     4,     4,     3,     1,
       2,     2,     3,     1,     2,     1,     3,     2,     2,     1,
       1,     1,     2,     1,     1,     2,     3,     2,     3,     3,
       4,     2,     3,     3,     4,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     3,     4,     3,     2,     3,     3,
       4,     1,     2,     1,     2,     1,     2,     5,     7,     5,
       5,     7,     6,     7,     3,     2,     2,     2,     3,     1,
       2,     1,     1,     4,     3,     3,     2,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
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

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
  case 2:
#line 59 "src/parser.y"
                     {(yyval.expr) = new Identifier((yyvsp[0].string)); }
#line 1797 "src/parser.tab.cpp"
    break;

  case 3:
#line 60 "src/parser.y"
                   {(yyval.expr) = new Number((yyvsp[0].string)); }
#line 1803 "src/parser.tab.cpp"
    break;

  case 4:
#line 62 "src/parser.y"
                             {(yyval.expr) = (yyvsp[-1].expr); }
#line 1809 "src/parser.tab.cpp"
    break;

  case 5:
#line 66 "src/parser.y"
                             { (yyval.expr) = (yyvsp[0].expr); }
#line 1815 "src/parser.tab.cpp"
    break;

  case 7:
#line 68 "src/parser.y"
                                     {(yyval.expr) = new FunctionCall((yyvsp[-2].expr),NULL);}
#line 1821 "src/parser.tab.cpp"
    break;

  case 8:
#line 69 "src/parser.y"
                                                              {(yyval.expr) = new FunctionCall((yyvsp[-3].expr), (yyvsp[-1].list));}
#line 1827 "src/parser.tab.cpp"
    break;

  case 11:
#line 72 "src/parser.y"
                                    {(yyval.expr) = new Increment((yyvsp[-1].expr)); }
#line 1833 "src/parser.tab.cpp"
    break;

  case 12:
#line 73 "src/parser.y"
                                    {(yyval.expr) = new Decrement((yyvsp[-1].expr)); }
#line 1839 "src/parser.tab.cpp"
    break;

  case 13:
#line 77 "src/parser.y"
                                {(yyval.list) = form_list((yyvsp[0].expr));}
#line 1845 "src/parser.tab.cpp"
    break;

  case 14:
#line 78 "src/parser.y"
                                                             {(yyval.list) = add_to_list((yyvsp[0].expr), (yyvsp[-2].list));}
#line 1851 "src/parser.tab.cpp"
    break;

  case 15:
#line 82 "src/parser.y"
                             {(yyval.expr) = (yyvsp[0].expr); }
#line 1857 "src/parser.tab.cpp"
    break;

  case 16:
#line 83 "src/parser.y"
                                  {(yyval.expr) = new Increment((yyvsp[0].expr)); }
#line 1863 "src/parser.tab.cpp"
    break;

  case 17:
#line 84 "src/parser.y"
                                  {(yyval.expr) = new Decrement((yyvsp[0].expr)); }
#line 1869 "src/parser.tab.cpp"
    break;

  case 20:
#line 88 "src/parser.y"
                               { (yyval.expr) = new UnaryNeg((yyvsp[0].expr)); }
#line 1875 "src/parser.tab.cpp"
    break;

  case 21:
#line 89 "src/parser.y"
                               { (yyval.expr) = new UnaryNot((yyvsp[0].expr)); }
#line 1881 "src/parser.tab.cpp"
    break;

  case 22:
#line 90 "src/parser.y"
                               { (yyval.expr) = new UnaryNot2((yyvsp[0].expr)); }
#line 1887 "src/parser.tab.cpp"
    break;

  case 23:
#line 91 "src/parser.y"
                               { (yyval.expr) = (yyvsp[0].expr); }
#line 1893 "src/parser.tab.cpp"
    break;

  case 24:
#line 110 "src/parser.y"
                           {(yyval.expr) = (yyvsp[0].expr); }
#line 1899 "src/parser.tab.cpp"
    break;

  case 25:
#line 111 "src/parser.y"
                                                                {(yyval.expr) = new BinaryMul((yyvsp[-2].expr),(yyvsp[0].expr));}
#line 1905 "src/parser.tab.cpp"
    break;

  case 26:
#line 112 "src/parser.y"
                                                                {(yyval.expr) = new BinaryDiv((yyvsp[-2].expr),(yyvsp[0].expr));}
#line 1911 "src/parser.tab.cpp"
    break;

  case 27:
#line 113 "src/parser.y"
                                                                {(yyval.expr) = new BinaryMod((yyvsp[-2].expr),(yyvsp[0].expr));}
#line 1917 "src/parser.tab.cpp"
    break;

  case 28:
#line 117 "src/parser.y"
                                    {(yyval.expr) = (yyvsp[0].expr);}
#line 1923 "src/parser.tab.cpp"
    break;

  case 29:
#line 118 "src/parser.y"
                                                            {(yyval.expr) = new BinaryAdd((yyvsp[-2].expr),(yyvsp[0].expr));}
#line 1929 "src/parser.tab.cpp"
    break;

  case 30:
#line 119 "src/parser.y"
                                                                {(yyval.expr) = new BinarySub((yyvsp[-2].expr),(yyvsp[0].expr));}
#line 1935 "src/parser.tab.cpp"
    break;

  case 31:
#line 123 "src/parser.y"
                              {(yyval.expr) = (yyvsp[0].expr);}
#line 1941 "src/parser.tab.cpp"
    break;

  case 32:
#line 124 "src/parser.y"
                                                       {(yyval.expr) = new LeftShift((yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1947 "src/parser.tab.cpp"
    break;

  case 33:
#line 125 "src/parser.y"
                                                        {(yyval.expr) = new RightShift((yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1953 "src/parser.tab.cpp"
    break;

  case 34:
#line 129 "src/parser.y"
                           {(yyval.expr) = (yyvsp[0].expr);}
#line 1959 "src/parser.tab.cpp"
    break;

  case 35:
#line 130 "src/parser.y"
                                                     { (yyval.expr) = new LessThan((yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1965 "src/parser.tab.cpp"
    break;

  case 36:
#line 131 "src/parser.y"
                                                     { (yyval.expr) = new GreaterThan((yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1971 "src/parser.tab.cpp"
    break;

  case 37:
#line 132 "src/parser.y"
                                                       { (yyval.expr) = new LessThanEqual((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1977 "src/parser.tab.cpp"
    break;

  case 38:
#line 133 "src/parser.y"
                                                       { (yyval.expr) = new GreaterThanEqual((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 1983 "src/parser.tab.cpp"
    break;

  case 39:
#line 137 "src/parser.y"
                                {(yyval.expr) = (yyvsp[0].expr);}
#line 1989 "src/parser.tab.cpp"
    break;

  case 40:
#line 138 "src/parser.y"
                                                          {(yyval.expr) = new BinaryEqual((yyvsp[-2].expr), (yyvsp[0].expr));}
#line 1995 "src/parser.tab.cpp"
    break;

  case 42:
#line 143 "src/parser.y"
                              {(yyval.expr) = (yyvsp[0].expr);}
#line 2001 "src/parser.tab.cpp"
    break;

  case 43:
#line 144 "src/parser.y"
                                                 {(yyval.expr) = new BinaryAnd((yyvsp[-2].expr), (yyvsp[0].expr));}
#line 2007 "src/parser.tab.cpp"
    break;

  case 44:
#line 148 "src/parser.y"
                         {(yyval.expr) = (yyvsp[0].expr);}
#line 2013 "src/parser.tab.cpp"
    break;

  case 45:
#line 149 "src/parser.y"
                                                     {(yyval.expr) = new BinaryXor((yyvsp[-2].expr), (yyvsp[0].expr));}
#line 2019 "src/parser.tab.cpp"
    break;

  case 46:
#line 153 "src/parser.y"
                                  {(yyval.expr) = (yyvsp[0].expr);}
#line 2025 "src/parser.tab.cpp"
    break;

  case 47:
#line 154 "src/parser.y"
                                                              {(yyval.expr) = new BinaryOr((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2031 "src/parser.tab.cpp"
    break;

  case 48:
#line 158 "src/parser.y"
                                  {(yyval.expr) = (yyvsp[0].expr);}
#line 2037 "src/parser.tab.cpp"
    break;

  case 49:
#line 159 "src/parser.y"
                                                                {(yyval.expr) = new LogicalAnd((yyvsp[-2].expr), (yyvsp[0].expr));}
#line 2043 "src/parser.tab.cpp"
    break;

  case 50:
#line 163 "src/parser.y"
                                 {(yyval.expr) = (yyvsp[0].expr);}
#line 2049 "src/parser.tab.cpp"
    break;

  case 51:
#line 164 "src/parser.y"
                                                             {(yyval.expr) = new LogicalOr((yyvsp[-2].expr), (yyvsp[0].expr));}
#line 2055 "src/parser.tab.cpp"
    break;

  case 52:
#line 168 "src/parser.y"
                                {(yyval.expr) = (yyvsp[0].expr);}
#line 2061 "src/parser.tab.cpp"
    break;

  case 53:
#line 169 "src/parser.y"
                                                                          {(yyval.expr) = new Conditional((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr));}
#line 2067 "src/parser.tab.cpp"
    break;

  case 54:
#line 173 "src/parser.y"
                                 {(yyval.expr) = (yyvsp[0].expr);}
#line 2073 "src/parser.tab.cpp"
    break;

  case 55:
#line 175 "src/parser.y"
                                                     {(yyval.expr) = new AssignmentEqual((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2079 "src/parser.tab.cpp"
    break;

  case 56:
#line 176 "src/parser.y"
                                                            {(yyval.expr) = new AssignmentMul((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2085 "src/parser.tab.cpp"
    break;

  case 57:
#line 177 "src/parser.y"
                                                            {(yyval.expr) = new AssignmentDiv((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2091 "src/parser.tab.cpp"
    break;

  case 58:
#line 178 "src/parser.y"
                                                            {(yyval.expr) = new AssignmentMod((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2097 "src/parser.tab.cpp"
    break;

  case 59:
#line 179 "src/parser.y"
                                                            {(yyval.expr) = new AssignmentAdd((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2103 "src/parser.tab.cpp"
    break;

  case 60:
#line 180 "src/parser.y"
                                                            {(yyval.expr) = new AssignmentSub((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2109 "src/parser.tab.cpp"
    break;

  case 61:
#line 181 "src/parser.y"
                                                             {(yyval.expr) = new AssignmentLeft((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2115 "src/parser.tab.cpp"
    break;

  case 62:
#line 182 "src/parser.y"
                                                              {(yyval.expr) = new AssignmentRight((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2121 "src/parser.tab.cpp"
    break;

  case 63:
#line 183 "src/parser.y"
                                                            {(yyval.expr) = new AssignmentAnd((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2127 "src/parser.tab.cpp"
    break;

  case 64:
#line 184 "src/parser.y"
                                                            {(yyval.expr) = new AssignmentXor((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2133 "src/parser.tab.cpp"
    break;

  case 65:
#line 185 "src/parser.y"
                                                           {(yyval.expr) = new AssignmentOr((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2139 "src/parser.tab.cpp"
    break;

  case 66:
#line 203 "src/parser.y"
                                {(yyval.expr) = (yyvsp[0].expr);}
#line 2145 "src/parser.tab.cpp"
    break;

  case 67:
#line 208 "src/parser.y"
                                 {(yyval.expr) = (yyvsp[0].expr);}
#line 2151 "src/parser.tab.cpp"
    break;

  case 68:
#line 212 "src/parser.y"
                                                                        { (yyval.expr)=(yyvsp[-1].expr); }
#line 2157 "src/parser.tab.cpp"
    break;

  case 69:
#line 213 "src/parser.y"
                                                                                                                                { (yyval.expr)=(yyvsp[-1].expr);}
#line 2163 "src/parser.tab.cpp"
    break;

  case 72:
#line 219 "src/parser.y"
                         {(yyval.expr) = (yyvsp[0].expr); }
#line 2169 "src/parser.tab.cpp"
    break;

  case 76:
#line 231 "src/parser.y"
                     {(yyval.expr) = (yyvsp[0].expr);}
#line 2175 "src/parser.tab.cpp"
    break;

  case 77:
#line 232 "src/parser.y"
                                     {(yyval.expr) = new InitDeclarator((yyvsp[-2].expr), (yyvsp[0].expr));}
#line 2181 "src/parser.tab.cpp"
    break;

  case 86:
#line 247 "src/parser.y"
              {(yyval.expr) = new Typespec("int");}
#line 2187 "src/parser.tab.cpp"
    break;

  case 121:
#line 319 "src/parser.y"
                            {(yyval.expr) = (yyvsp[0].expr);}
#line 2193 "src/parser.tab.cpp"
    break;

  case 122:
#line 323 "src/parser.y"
                     {(yyval.expr) = new Identifier((yyvsp[0].string));}
#line 2199 "src/parser.tab.cpp"
    break;

  case 126:
#line 327 "src/parser.y"
                                                    {(yyval.expr) = new FunctionArguments((yyvsp[-3].expr), (yyvsp[-1].list));}
#line 2205 "src/parser.tab.cpp"
    break;

  case 127:
#line 328 "src/parser.y"
                                                    {(yyval.expr) = (yyvsp[-3].expr);}
#line 2211 "src/parser.tab.cpp"
    break;

  case 128:
#line 329 "src/parser.y"
                                    {(yyval.expr) = (yyvsp[-2].expr);}
#line 2217 "src/parser.tab.cpp"
    break;

  case 135:
#line 351 "src/parser.y"
                                {(yyval.list) = form_list((yyvsp[0].expr));}
#line 2223 "src/parser.tab.cpp"
    break;

  case 136:
#line 352 "src/parser.y"
                                                   {(yyval.list) = add_to_list((yyvsp[0].expr),(yyvsp[-2].list));}
#line 2229 "src/parser.tab.cpp"
    break;

  case 137:
#line 356 "src/parser.y"
                                            {(yyval.expr) = new ParameterDeclaration((yyvsp[-1].expr), (yyvsp[0].expr));}
#line 2235 "src/parser.tab.cpp"
    break;

  case 155:
#line 390 "src/parser.y"
                                {(yyval.expr) = (yyvsp[0].expr); }
#line 2241 "src/parser.tab.cpp"
    break;

  case 157:
#line 396 "src/parser.y"
                      {(yyval.expr) = (yyvsp[0].expr);}
#line 2247 "src/parser.tab.cpp"
    break;

  case 158:
#line 401 "src/parser.y"
                            {(yyval.expr) = (yyvsp[0].expr);}
#line 2253 "src/parser.tab.cpp"
    break;

  case 159:
#line 402 "src/parser.y"
                             {(yyval.expr) = (yyvsp[0].expr);}
#line 2259 "src/parser.tab.cpp"
    break;

  case 160:
#line 403 "src/parser.y"
                               {(yyval.expr) = (yyvsp[0].expr);}
#line 2265 "src/parser.tab.cpp"
    break;

  case 161:
#line 404 "src/parser.y"
                              {(yyval.expr) = (yyvsp[0].expr);}
#line 2271 "src/parser.tab.cpp"
    break;

  case 162:
#line 405 "src/parser.y"
                              { (yyval.expr) = (yyvsp[0].expr);}
#line 2277 "src/parser.tab.cpp"
    break;

  case 163:
#line 407 "src/parser.y"
                         {(yyval.expr) = (yyvsp[0].expr);}
#line 2283 "src/parser.tab.cpp"
    break;

  case 167:
#line 417 "src/parser.y"
                  {(yyval.expr) = new CompoundStatement(NULL, NULL);}
#line 2289 "src/parser.tab.cpp"
    break;

  case 168:
#line 418 "src/parser.y"
                                 {(yyval.expr) = new CompoundStatement((yyvsp[-1].list), NULL); }
#line 2295 "src/parser.tab.cpp"
    break;

  case 169:
#line 419 "src/parser.y"
                                   {(yyval.expr) = new CompoundStatement(NULL, (yyvsp[-1].list)); }
#line 2301 "src/parser.tab.cpp"
    break;

  case 170:
#line 420 "src/parser.y"
                                                 {(yyval.expr) = new CompoundStatement ((yyvsp[-1].list), (yyvsp[-2].list)); }
#line 2307 "src/parser.tab.cpp"
    break;

  case 171:
#line 424 "src/parser.y"
                      {(yyval.list) = form_list((yyvsp[0].expr));}
#line 2313 "src/parser.tab.cpp"
    break;

  case 172:
#line 425 "src/parser.y"
                                       {(yyval.list) = add_to_list((yyvsp[0].expr), (yyvsp[-1].list));}
#line 2319 "src/parser.tab.cpp"
    break;

  case 173:
#line 429 "src/parser.y"
                    {(yyval.list) = form_list((yyvsp[0].expr));}
#line 2325 "src/parser.tab.cpp"
    break;

  case 174:
#line 430 "src/parser.y"
                                   {(yyval.list) = add_to_list((yyvsp[0].expr), (yyvsp[-1].list)); }
#line 2331 "src/parser.tab.cpp"
    break;

  case 177:
#line 439 "src/parser.y"
                                          { (yyval.expr) = new IfStatement((yyvsp[-2].expr), (yyvsp[0].expr), NULL);}
#line 2337 "src/parser.tab.cpp"
    break;

  case 178:
#line 440 "src/parser.y"
                                                         { (yyval.expr) = new IfStatement((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr));}
#line 2343 "src/parser.tab.cpp"
    break;

  case 180:
#line 445 "src/parser.y"
                                             { (yyval.expr) = new While((yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2349 "src/parser.tab.cpp"
    break;

  case 182:
#line 447 "src/parser.y"
                                                                          {(yyval.expr) = new ForFunction((yyvsp[-3].expr), (yyvsp[-2].expr), NULL, (yyvsp[0].expr)); }
#line 2355 "src/parser.tab.cpp"
    break;

  case 183:
#line 448 "src/parser.y"
                                                                                     {(yyval.expr) = new ForFunction((yyvsp[-4].expr), (yyvsp[-3].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
#line 2361 "src/parser.tab.cpp"
    break;

  case 188:
#line 456 "src/parser.y"
                                {(yyval.expr) = new Return((yyvsp[-1].expr));}
#line 2367 "src/parser.tab.cpp"
    break;

  case 189:
#line 460 "src/parser.y"
                               {(yyval.list) = form_list((yyvsp[0].expr));}
#line 2373 "src/parser.tab.cpp"
    break;

  case 190:
#line 461 "src/parser.y"
                                                {(yyval.list) = add_to_list((yyvsp[0].expr), (yyvsp[-1].list));}
#line 2379 "src/parser.tab.cpp"
    break;

  case 191:
#line 466 "src/parser.y"
                              {(yyval.expr) = (yyvsp[0].expr);}
#line 2385 "src/parser.tab.cpp"
    break;

  case 194:
#line 472 "src/parser.y"
                                                               {(yyval.expr) = new FunctionDefinition ((yyvsp[-2].expr), (yyvsp[-1].expr), (yyvsp[0].expr)); }
#line 2391 "src/parser.tab.cpp"
    break;

  case 197:
#line 477 "src/parser.y"
                           { g_root= new Translation((yyvsp[0].list)); }
#line 2397 "src/parser.tab.cpp"
    break;


#line 2401 "src/parser.tab.cpp"

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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
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
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 478 "src/parser.y"

#include <stdio.h>

extern char yytext[];
extern int column;

const Node *g_root; // Definition of variable (to match declaration earlier)

const Node *parseAST()
{
  g_root=0;
  yyparse();
  return g_root;
}
/*
yyerror(s);
char *s;
{
	fflush(stdout);
	printf("\n%*s\n%*s\n", column, "^", column, s);
}
*/
