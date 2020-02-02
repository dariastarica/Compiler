/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "comp.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
extern int yylex();
extern int yyerror(char *s);
void declarare(char* a);
void este_declarata(char* a);
void declarare_functie(char* a);
void este_declarata_fct(char* a);
void declarare_tip(int tip);
int verif_tip(char* a, int b);
void declarare_tip_fct(int tip);
int return_tip(char* nume);

struct {
    char* nume;
    int tip;
}variabile[100],functii[100];
int nrvar = 0,nrtip,nrfct = 0;
char* aux;


#line 93 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ASSIGN = 258,
    EVAL = 259,
    OPPR = 260,
    CLPR = 261,
    COMMA = 262,
    DOT = 263,
    OPBR = 264,
    CLBR = 265,
    INT = 266,
    FLOAT = 267,
    CHAR = 268,
    STRING = 269,
    BOOL = 270,
    VOID = 271,
    IF = 272,
    FOR = 273,
    WHILE = 274,
    ELSE = 275,
    OR = 276,
    AND = 277,
    GREQ = 278,
    LESEQ = 279,
    EQ = 280,
    NOTEQ = 281,
    GR = 282,
    LES = 283,
    NUM = 284,
    VAR = 285,
    PLUS = 286,
    MINUS = 287,
    MULT = 288,
    DIV = 289,
    MOD = 290
  };
#endif
/* Tokens.  */
#define ASSIGN 258
#define EVAL 259
#define OPPR 260
#define CLPR 261
#define COMMA 262
#define DOT 263
#define OPBR 264
#define CLBR 265
#define INT 266
#define FLOAT 267
#define CHAR 268
#define STRING 269
#define BOOL 270
#define VOID 271
#define IF 272
#define FOR 273
#define WHILE 274
#define ELSE 275
#define OR 276
#define AND 277
#define GREQ 278
#define LESEQ 279
#define EQ 280
#define NOTEQ 281
#define GR 282
#define LES 283
#define NUM 284
#define VAR 285
#define PLUS 286
#define MINUS 287
#define MULT 288
#define DIV 289
#define MOD 290

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 27 "comp.y" /* yacc.c:355  */

    char* ch;
    int i;

#line 208 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 225 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   211

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  16
/* YYNRULES -- Number of rules.  */
#define YYNRULES  62
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  139

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   290

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
      35
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    46,    46,    49,    50,    51,    52,    53,    56,    57,
      60,    61,    62,    63,    66,    67,    70,    71,    74,    75,
      78,    79,    80,    81,    82,    83,    86,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     104,   105,   107,   109,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ASSIGN", "EVAL", "OPPR", "CLPR",
  "COMMA", "DOT", "OPBR", "CLBR", "INT", "FLOAT", "CHAR", "STRING", "BOOL",
  "VOID", "IF", "FOR", "WHILE", "ELSE", "OR", "AND", "GREQ", "LESEQ", "EQ",
  "NOTEQ", "GR", "LES", "NUM", "VAR", "PLUS", "MINUS", "MULT", "DIV",
  "MOD", "$accept", "progr", "declaratii", "declaratie", "lista_var",
  "declaratii_fct", "lista_parametri", "parametru", "tip", "bloc",
  "lista_instr", "if_instr", "while_instr", "for_instr", "bool_expr",
  "instructiune", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290
};
# endif

#define YYPACT_NINF -60

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-60)))

#define YYTABLE_NINF -45

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     125,   -60,   -60,   -60,   -60,   -60,   -60,    -2,     6,   175,
     125,   -60,   -16,   181,   -60,   100,   -60,    -6,   -60,   -60,
     -60,     4,    50,    26,    31,    51,    33,    60,    72,   -60,
      10,   181,   116,   -60,   -60,   -60,    63,    74,   167,    43,
      52,   -60,    78,    51,   119,    19,   102,    95,   102,    51,
     136,   -60,    24,   -60,   -60,   -60,    68,   -60,    51,    51,
      51,    51,    51,   134,   -60,   103,   -60,   114,   120,   123,
     124,    67,    29,   -60,    51,   148,   137,   164,   168,   -13,
     169,   117,    -4,   -60,   -13,   -13,   -13,   -13,   -13,   -60,
     134,   181,    74,   -60,   146,   -60,   -60,    35,   134,    51,
      51,    51,    51,    51,    51,    51,    51,   147,   134,   -60,
     177,   190,   121,   -60,   -60,   166,   194,   182,   -13,   -13,
     -13,   -13,   -13,   -13,   -13,   -13,   196,   -60,   -60,   -60,
     193,   -60,   134,   102,   -60,   -60,   198,   134,   -60
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    20,    21,    23,    24,    22,    25,     0,     0,     0,
       3,     6,     0,     0,     1,     0,     7,     0,     2,     5,
       4,    10,     0,     0,     0,     0,     0,     0,     0,    55,
      54,    28,     0,    33,    34,    35,     0,     0,     0,     0,
       0,     8,     0,     0,    54,     0,     0,     0,     0,     0,
       0,    26,    54,    30,    31,    32,     0,    27,     0,     0,
       0,     0,     0,     0,    19,     0,    16,     0,     0,    11,
      10,     0,     0,    56,     0,     0,     0,     0,     0,    53,
       0,     0,     0,    29,    57,    58,    59,    60,    61,    15,
       0,     0,    18,    12,     0,     9,    62,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    39,
       0,     0,     0,    14,    17,     0,    56,    40,    46,    45,
      47,    49,    52,    51,    48,    50,     0,    42,    37,    38,
       0,    13,     0,     0,    36,    41,     0,     0,    43
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -60,   -60,   191,   195,   -34,     2,   -60,   118,    -8,   -59,
     -60,   176,   178,   179,   -41,   -15
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     8,     9,    10,    22,    11,    65,    66,    12,    18,
      32,    33,    34,    35,    75,    76
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      36,    17,   111,    13,    89,    23,    14,    78,    71,    38,
      45,    16,    20,    49,    21,    50,    81,    56,    58,    59,
      60,    61,    62,    17,    37,    73,    70,    49,    72,    82,
      67,   113,    42,    16,    79,    96,    43,    39,    46,   117,
      64,   116,    23,    84,    85,    86,    87,    88,   112,   127,
      58,    59,    60,    61,    62,    24,    25,    40,    41,    97,
      58,    59,    60,    61,    62,    47,    58,    59,    60,    61,
      62,    57,    68,   135,    40,    95,    83,    48,   138,    38,
      29,    44,    69,    67,   118,   119,   120,   121,   122,   123,
     124,   125,   136,    64,    58,    59,    60,    61,    62,    58,
      59,    60,    61,    62,    24,    25,    24,    74,    70,    90,
      91,     1,     2,     3,     4,     5,     6,    26,    27,    28,
      24,    25,    49,   110,    40,    77,    51,   130,    40,    29,
      30,    29,    44,    26,    27,    28,     1,     2,     3,     4,
       5,     6,    80,    15,    92,    29,    52,     1,     2,     3,
       4,     5,     6,    93,    98,     7,    94,    39,    99,   100,
     101,   102,   103,   104,   105,   106,    70,   107,    58,    59,
      60,    61,    62,    63,   108,   115,   126,   109,     1,     2,
       3,     4,     5,     6,    15,   128,     1,     2,     3,     4,
       5,     6,     1,     2,     3,     4,     5,     6,   129,   131,
     -44,   134,   132,   133,   137,    19,    31,     0,    53,   114,
      54,    55
};

static const yytype_int16 yycheck[] =
{
      15,     9,     6,     5,    63,    13,     0,    48,    42,     5,
      25,     9,    10,     3,    30,     5,    50,    32,    31,    32,
      33,    34,    35,    31,    30,     6,    30,     3,    43,     5,
      38,    90,     6,    31,    49,     6,     5,    33,     5,    98,
      38,     6,    50,    58,    59,    60,    61,    62,    82,   108,
      31,    32,    33,    34,    35,     4,     5,     7,     8,    74,
      31,    32,    33,    34,    35,     5,    31,    32,    33,    34,
      35,     8,    29,   132,     7,     8,     8,     5,   137,     5,
      29,    30,    30,    91,    99,   100,   101,   102,   103,   104,
     105,   106,   133,    91,    31,    32,    33,    34,    35,    31,
      32,    33,    34,    35,     4,     5,     4,     5,    30,     6,
       7,    11,    12,    13,    14,    15,    16,    17,    18,    19,
       4,     5,     3,     6,     7,    30,    10,     6,     7,    29,
      30,    29,    30,    17,    18,    19,    11,    12,    13,    14,
      15,    16,     6,     9,    30,    29,    30,    11,    12,    13,
      14,    15,    16,    33,     6,    30,    33,    33,    21,    22,
      23,    24,    25,    26,    27,    28,    30,     3,    31,    32,
      33,    34,    35,     6,     6,    29,    29,     8,    11,    12,
      13,    14,    15,    16,     9,     8,    11,    12,    13,    14,
      15,    16,    11,    12,    13,    14,    15,    16,     8,    33,
       6,     8,    20,     7,     6,    10,    15,    -1,    32,    91,
      32,    32
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    11,    12,    13,    14,    15,    16,    30,    37,    38,
      39,    41,    44,     5,     0,     9,    41,    44,    45,    39,
      41,    30,    40,    44,     4,     5,    17,    18,    19,    29,
      30,    38,    46,    47,    48,    49,    51,    30,     5,    33,
       7,     8,     6,     5,    30,    51,     5,     5,     5,     3,
       5,    10,    30,    47,    48,    49,    51,     8,    31,    32,
      33,    34,    35,     6,    41,    42,    43,    44,    29,    30,
      30,    40,    51,     6,     5,    50,    51,    30,    50,    51,
       6,    40,     5,     8,    51,    51,    51,    51,    51,    45,
       6,     7,    30,    33,    33,     8,     6,    51,     6,    21,
      22,    23,    24,    25,    26,    27,    28,     3,     6,     8,
       6,     6,    40,    45,    43,    29,     6,    45,    51,    51,
      51,    51,    51,    51,    51,    51,    29,    45,     8,     8,
       6,    33,    20,     7,     8,    45,    50,     6,    45
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    36,    37,    38,    38,    38,    38,    38,    39,    39,
      40,    40,    40,    40,    41,    41,    42,    42,    43,    43,
      44,    44,    44,    44,    44,    44,    45,    46,    46,    46,
      46,    46,    46,    46,    46,    46,    46,    46,    46,    46,
      47,    47,    48,    49,    50,    50,    50,    50,    50,    50,
      50,    50,    50,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    51
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     2,     2,     1,     2,     3,     6,
       1,     3,     4,     6,     6,     5,     1,     3,     2,     1,
       1,     1,     1,     1,     1,     1,     3,     2,     1,     3,
       2,     2,     2,     1,     1,     1,     6,     5,     5,     4,
       5,     7,     5,     9,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     3,     3,     3,     3,
       3,     3,     4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
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
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

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
      int yyn = yypact[*yyssp];
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
          yyp++;
          yyformat++;
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

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
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
#line 46 "comp.y" /* yacc.c:1646  */
    {printf("Program corect sintactic!\n");}
#line 1404 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 56 "comp.y" /* yacc.c:1646  */
    {declarare_tip((yyvsp[-2].i));}
#line 1410 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 57 "comp.y" /* yacc.c:1646  */
    {declarare_tip((yyvsp[-3].i));}
#line 1416 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 60 "comp.y" /* yacc.c:1646  */
    {declarare((yyvsp[0].ch));}
#line 1422 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 61 "comp.y" /* yacc.c:1646  */
    {declarare((yyvsp[0].ch));}
#line 1428 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 62 "comp.y" /* yacc.c:1646  */
    {declarare((yyvsp[-3].ch));}
#line 1434 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 63 "comp.y" /* yacc.c:1646  */
    {declarare((yyvsp[-3].ch));}
#line 1440 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 66 "comp.y" /* yacc.c:1646  */
    {declarare_functie((yyvsp[-4].ch)); declarare_tip_fct((yyvsp[-5].i)); }
#line 1446 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 67 "comp.y" /* yacc.c:1646  */
    {declarare_functie((yyvsp[-3].ch)); declarare_tip_fct((yyvsp[-4].i));}
#line 1452 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 78 "comp.y" /* yacc.c:1646  */
    {(yyval.i)=1; nrtip=1;}
#line 1458 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 79 "comp.y" /* yacc.c:1646  */
    {(yyval.i)=2; nrtip=2;}
#line 1464 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 80 "comp.y" /* yacc.c:1646  */
    {(yyval.i)=5; nrtip=5;}
#line 1470 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 81 "comp.y" /* yacc.c:1646  */
    {(yyval.i)=3; nrtip=3;}
#line 1476 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 82 "comp.y" /* yacc.c:1646  */
    {(yyval.i)=4; nrtip=4;}
#line 1482 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 83 "comp.y" /* yacc.c:1646  */
    {(yyval.i)=0; nrtip=0;}
#line 1488 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 98 "comp.y" /* yacc.c:1646  */
    {este_declarata_fct((yyvsp[-4].ch));}
#line 1494 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 99 "comp.y" /* yacc.c:1646  */
    {este_declarata_fct((yyvsp[-4].ch));}
#line 1500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 100 "comp.y" /* yacc.c:1646  */
    {este_declarata_fct((yyvsp[-3].ch));}
#line 1506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 101 "comp.y" /* yacc.c:1646  */
    {este_declarata_fct((yyvsp[-3].ch));}
#line 1512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 109 "comp.y" /* yacc.c:1646  */
    {este_declarata((yyvsp[-6].ch));}
#line 1518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 112 "comp.y" /* yacc.c:1646  */
    {(yyval.i)=(yyvsp[-1].i);}
#line 1524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 113 "comp.y" /* yacc.c:1646  */
    {(yyval.i)=2;}
#line 1530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 114 "comp.y" /* yacc.c:1646  */
    {(yyval.i)=2;}
#line 1536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 115 "comp.y" /* yacc.c:1646  */
    {(yyval.i)=2;}
#line 1542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 116 "comp.y" /* yacc.c:1646  */
    {(yyval.i)=2;}
#line 1548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 117 "comp.y" /* yacc.c:1646  */
    {(yyval.i)=2;}
#line 1554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 118 "comp.y" /* yacc.c:1646  */
    {(yyval.i)=2;}
#line 1560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 119 "comp.y" /* yacc.c:1646  */
    {(yyval.i)=2;}
#line 1566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 120 "comp.y" /* yacc.c:1646  */
    {(yyval.i)=2;}
#line 1572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 122 "comp.y" /* yacc.c:1646  */
    {este_declarata((yyvsp[-2].ch)); verif_tip((yyvsp[-2].ch),(yyvsp[0].i));}
#line 1578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 123 "comp.y" /* yacc.c:1646  */
    {este_declarata((yyvsp[0].ch)); (yyval.i)=return_tip((yyvsp[0].ch)); }
#line 1584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 124 "comp.y" /* yacc.c:1646  */
    {(yyval.i)=1;}
#line 1590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 125 "comp.y" /* yacc.c:1646  */
    {(yyval.i)=(yyvsp[-1].i);}
#line 1596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 126 "comp.y" /* yacc.c:1646  */
    {(yyval.i)=(yyvsp[-2].i)+(yyvsp[0].i);}
#line 1602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 127 "comp.y" /* yacc.c:1646  */
    {(yyval.i)=(yyvsp[-2].i)-(yyvsp[0].i);}
#line 1608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 128 "comp.y" /* yacc.c:1646  */
    {(yyval.i)=(yyvsp[-2].i)*(yyvsp[0].i);}
#line 1614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 129 "comp.y" /* yacc.c:1646  */
    {(yyval.i)=(yyvsp[-2].i)/(yyvsp[0].i);}
#line 1620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 130 "comp.y" /* yacc.c:1646  */
    {(yyval.i)=(yyvsp[-2].i)%(yyvsp[0].i);}
#line 1626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 131 "comp.y" /* yacc.c:1646  */
    {if((yyvsp[-1].i) != 1) printf("Functia eval nu are parametru de tip int\n");}
#line 1632 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1636 "y.tab.c" /* yacc.c:1646  */
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

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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
                  yystos[*yyssp], yyvsp);
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
#line 134 "comp.y" /* yacc.c:1906  */


int return_tip(char* nume)
{ 
    for(int i=0;i<nrvar;i++)
        {
            if(strcmp(variabile[i].nume,nume)==0)
                return variabile[i].tip;
        }

}

void declarare(char* a){
    int ok=0;
    char buffer[100];
    for(int i=0; i<nrvar;i++){
        if(!strcmp(variabile[i].nume, a)){
            ok=1;
            break;
        }
    }
    if(ok==0){
        variabile[nrvar++].nume=strdup(a);
        //printf("Variabila %s a fost declarata!\n",a);
    }
    else 
    {
        sprintf(buffer,"Variabila \"%s\" a mai fost declarata",a);
        yyerror(buffer);

    }
}

void declarare_functie(char* a){

    int ok=0;
    char buffer[100];
    for(int i=0; i<nrfct;i++){
        if(!strcmp(functii[i].nume, a)){
            ok=1;
            break;
        }
    }
    if(ok==0){
        functii[nrfct++].nume=strdup(a);
        //printf("Variabila %s a fost declarata!\n",a);
    }
    else 
    {
        sprintf(buffer,"Functia \"%s\" a mai fost declarata",a);
        yyerror(buffer);
    }
}
  
int verif_tip(char* a, int b){
int tipa;
for(int i=0; i<nrvar;i++)
        {
            if(strcmp(variabile[i].nume,a)==0)
                {tipa=variabile[i].tip;
                 break;
                }

        }
        if(tipa!=b)
    {
        printf("eroare: Variabilele nu sunt de acelasi tip\n");
        return 0;
    }
}
void este_declarata(char* a){
    int ok=0, tipDeReturnat;
    char buffer[100];
    for(int i=0; i<nrvar;i++){
        if(!strcmp(variabile[i].nume, a)){
            ok=1;
            break;
        }
    }
    if(ok==0){
        printf("Variabila \"%s\" nu a fost declarata!\n",a);
    }
}
void este_declarata_fct(char* a){
    int ok=0;
    char buffer[100];
    for(int i=0; i<nrfct;i++){
        if(!strcmp(functii[i].nume, a)){
            ok=1;
            break;
        }
    }
    if(ok==0){
        printf("Functia \"%s\" nu a fost declarata!\n",a);
    }
}

void declarare_tip(int tip)
{
    int i;
    for(i=0;i<nrvar;i++)
        variabile[i].tip=tip;
}

void declarare_tip_fct(int tip)
{
    int i;
    for(i=0;i<nrfct;i++)
        functii[i].tip=tip;
}
int yyerror (char* s){
    printf("eroare: %s la linia %d\n",s,yylineno);
}
int main(int argc, char** argv)
{
    yyin=fopen(argv[1],"r");
    yyparse();
    FILE* fisier = fopen("tabel_simb.txt", "w");
    fprintf(fisier, "Variabilele noastre sunt: \n");
    for(int contor = 0; contor<nrvar; contor++){
        fprintf(fisier, "Variabila %s, de tipul", variabile[contor].nume); 
        if(variabile[contor].tip==1)
            fprintf(fisier, " INT\n");
        if(variabile[contor].tip==2)
            fprintf(fisier, " FLOAT\n");
        if(variabile[contor].tip==3)
            fprintf(fisier, " CHAR\n");
        if(variabile[contor].tip==4)
            fprintf(fisier, " STRING\n");
        if(variabile[contor].tip==5)
            fprintf(fisier, " VOID\n");
    }
    fprintf(fisier, "Functiile noastre sunt: \n");
    for(int contor = 0; contor<nrfct; contor++){
        fprintf(fisier, "Functia %s, de tipul", functii[contor].nume); 
        if(functii[contor].tip==1)
            fprintf(fisier, " INT\n");
        if(functii[contor].tip==2)
            fprintf(fisier, " FLOAT\n");
        if(functii[contor].tip==3)
            fprintf(fisier, " CHAR\n");
        if(functii[contor].tip==4)
            fprintf(fisier, " STRING\n");
        if(functii[contor].tip==5)
            fprintf(fisier, " VOID\n");
    }
}
