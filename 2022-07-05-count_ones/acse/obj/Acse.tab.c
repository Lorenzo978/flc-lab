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
#line 1 "Acse.y" /* yacc.c:339  */

/*
 * Andrea Di Biagio
 * Politecnico di Milano, 2007
 * 
 * Acse.y
 * Formal Languages & Compilers Machine, 2007/2008
 */

/*************************************************************************

                   Compiler for the language LANCE

***************************************************************************/

#include <stdio.h>       
#include <stdlib.h>
#include <assert.h>
#include "axe_struct.h"
#include "axe_engine.h"
#include "symbol_table.h"
#include "axe_target_asm_print.h"
#include "axe_target_transform.h"
#include "axe_errors.h"
#include "collections.h"
#include "axe_expressions.h"
#include "axe_gencode.h"
#include "axe_utils.h"
#include "axe_array.h"
#include "axe_cflow_graph.h"
#include "cflow_constants.h"
#include "axe_transform.h"
#include "axe_reg_alloc.h"
#include "reg_alloc_constants.h"
#include "axe_io_manager.h"
#ifndef NDEBUG
#  include "axe_debug.h"
#endif

/* global variables */
int line_num;        /* this variable will keep track of the
                      * source code line number. Every time that a newline
                      * is encountered while parsing the input file, this
                      * value is increased by 1. This value is then used
                      * for error tracking: if the parser returns an error
                      * or a warning, this value is used in order to notify
                      * in which line of code the error has been found */
int num_error;       /* the number of errors found in the code. This value
                      * is increased by 1 every time a new error is found
                      * in the code. */
int num_warning;     /* As for the `num_error' global variable, this one
                      * keeps track of all the warning messages displayed */

int input_random;

/* errorcode is defined inside "axe_engine.c" */
extern int errorcode;   /* this variable is used to test if an error is found
                         * while parsing the input file. It also is set
                         * to notify if the compiler internal state is invalid.
                         * When the parsing process is started, the value
                         * of `errorcode' is set to the value of the macro
                         * `AXE_OK' defined in "axe_constants.h".
                         * As long as everything (the parsed source code and
                         * the internal state of the compiler) is correct,
                         * the value of `errorcode' is set to `AXE_OK'.
                         * When an error occurs (because the input file contains
                         * one or more syntax errors or because something went
                         * wrong in the machine internal state), the errorcode
                         * is set to a value that is different from `AXE_OK'. */
extern const char *errormsg; /* When errorcode is not equal to AXE_OK,
                         * this variable may be set to an error message to print
                         * if desired. */

extern int cflow_errorcode;   /* As for `errorcode' this value is used to
                        * test if an error occurs during the creation process of
                        * a control flow graph. More informations can be found
                        * analyzing the file `axe_cflow_graph.h'. */
                     
/* program informations */
t_program_infos *program;  /* The singleton instance of `program'.
                            * An instance of `t_program_infos' holds in its
                            * internal structure, all the useful informations
                            * about a program. For example: the assembly
                            * (code and directives); the symbol table;
                            * the label manager (see axe_labels.h) etc. */
t_cflow_Graph *graph;      /* An instance of a control flow graph. This instance
                            * will be generated starting from `program' and will
                            * be used during the register allocation process */

t_reg_allocator *RA;       /* Register allocator. It implements the "Linear
                            * scan" algorithm */

t_io_infos *file_infos;    /* input and output files used by the compiler */


extern int yylex(void);
extern void yyerror(const char*);


#line 166 "obj/Acse.tab.c" /* yacc.c:339  */

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
   by #include "Acse.tab.h".  */
#ifndef YY_YY_OBJ_ACSE_TAB_H_INCLUDED
# define YY_YY_OBJ_ACSE_TAB_H_INCLUDED
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
    EOF_TOK = 258,
    LBRACE = 259,
    RBRACE = 260,
    LPAR = 261,
    RPAR = 262,
    LSQUARE = 263,
    RSQUARE = 264,
    SEMI = 265,
    PLUS = 266,
    MINUS = 267,
    MUL_OP = 268,
    DIV_OP = 269,
    AND_OP = 270,
    OR_OP = 271,
    NOT_OP = 272,
    ASSIGN = 273,
    LT = 274,
    GT = 275,
    SHL_OP = 276,
    SHR_OP = 277,
    EQ = 278,
    NOTEQ = 279,
    LTEQ = 280,
    GTEQ = 281,
    ANDAND = 282,
    OROR = 283,
    COMMA = 284,
    RETURN = 285,
    READ = 286,
    WRITE = 287,
    COUNT_ONES = 288,
    RANDOM = 289,
    RANDOMIZE = 290,
    ZIP = 291,
    DO = 292,
    WHILE = 293,
    IF = 294,
    ELSE = 295,
    TYPE = 296,
    IDENTIFIER = 297,
    NUMBER = 298
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 106 "Acse.y" /* yacc.c:355  */
            
   int intval;
   char *svalue;
   t_axe_expression expr;
   t_axe_declaration *decl;
   t_list *list;
   t_axe_label *label;
   t_while_statement while_stmt;

#line 260 "obj/Acse.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_OBJ_ACSE_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 277 "obj/Acse.tab.c" /* yacc.c:358  */

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   447

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  69
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  147

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

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
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   177,   177,   176,   193,   194,   197,   204,   208,   215,
     224,   233,   246,   247,   251,   252,   257,   258,   259,   260,
     261,   262,   265,   277,   327,   328,   329,   330,   333,   334,
     337,   354,   387,   393,   392,   412,   418,   411,   432,   441,
     431,   469,   468,   490,   497,   517,   535,   536,   549,   562,
     586,   587,   588,   589,   590,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   621,   658
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "EOF_TOK", "LBRACE", "RBRACE", "LPAR",
  "RPAR", "LSQUARE", "RSQUARE", "SEMI", "PLUS", "MINUS", "MUL_OP",
  "DIV_OP", "AND_OP", "OR_OP", "NOT_OP", "ASSIGN", "LT", "GT", "SHL_OP",
  "SHR_OP", "EQ", "NOTEQ", "LTEQ", "GTEQ", "ANDAND", "OROR", "COMMA",
  "RETURN", "READ", "WRITE", "COUNT_ONES", "RANDOM", "RANDOMIZE", "ZIP",
  "DO", "WHILE", "IF", "ELSE", "TYPE", "IDENTIFIER", "NUMBER", "$accept",
  "program", "$@1", "var_declarations", "var_declaration",
  "declaration_list", "declaration", "code_block", "statements",
  "statement", "randomize_statement", "zip_statement", "control_statement",
  "read_write_statement", "assign_statement", "if_statement", "$@2",
  "if_stmt", "$@3", "$@4", "while_statement", "$@5", "$@6",
  "do_while_statement", "$@7", "return_statement", "read_statement",
  "write_statement", "exp", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298
};
# endif

#define YYPACT_NINF -60

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-60)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -60,     3,   -34,   -60,   -31,   112,   -60,    -6,    -9,   -60,
     -60,   -60,     2,     7,    17,   -60,   -60,   -60,     1,    15,
     -60,    14,    23,   -60,    25,    29,   -60,   -14,   -60,    32,
      33,   -60,   -60,     8,    12,   -60,   -31,    18,   123,   123,
      82,    38,    50,   123,    -2,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,    49,   -60,   -60,    74,   123,   123,
     123,    76,    78,    75,   -60,   148,   170,   112,    47,   -60,
     123,   123,   300,    81,   338,    82,   -60,   -60,   192,    -8,
     -60,   123,    86,   123,   -60,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   -60,    95,    88,   214,   236,    83,    53,   -60,   -60,
     258,   -60,   320,    -8,    -8,   -60,   -60,   405,   389,    77,
      77,    16,    16,   421,   421,    77,    77,   373,   356,   -60,
     123,   -60,   -60,   123,    67,   -60,   -60,   280,    82,    82,
     338,    60,   -60,   -60,   -60,    96,   -60
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,     0,     2,     1,     0,     0,     4,    11,     0,     8,
      21,    43,     0,     0,     0,    41,    38,    35,     0,     0,
      15,     0,     0,    17,     0,     0,    24,    32,    25,     0,
       0,    28,    29,     0,     0,     6,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     3,    14,    19,    20,    18,
      16,    33,    26,    27,     0,     9,     7,     0,     0,     0,
       0,     0,     0,    47,    46,     0,     0,     0,     0,    12,
       0,     0,     0,     0,    31,     0,    10,    44,     0,    67,
      49,     0,     0,     0,    45,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    22,     0,     0,     0,     0,     0,     0,    34,    66,
       0,    69,     0,    52,    53,    54,    55,    50,    51,    56,
      57,    62,    63,    58,    59,    60,    61,    64,    65,    13,
       0,    39,    36,     0,     0,    68,    48,     0,     0,     0,
      30,     0,    42,    40,    37,     0,    23
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -60,   -60,   -60,   -60,   -60,   -60,    68,   -59,    39,    -5,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -22
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     5,     2,     6,     8,     9,    68,    19,    69,
      21,    22,    23,    24,    25,    26,    75,    27,    42,   139,
      28,    41,   138,    29,    40,    30,    31,    32,    65
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      20,    35,    33,     3,    58,    87,    88,     4,    37,    43,
      59,     7,    34,    38,    46,    60,   108,    66,    45,    44,
      36,    72,    74,    39,    47,    10,    51,    85,    86,    87,
      88,    61,    62,    48,    73,    49,    78,    79,    80,    50,
      63,    64,    52,    53,    70,    11,    12,    13,   104,   105,
      14,    54,    15,    16,    17,    55,    71,    18,    76,   110,
      57,   112,    20,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   143,
     144,    77,    81,    83,    82,   103,    67,   107,    85,    86,
      87,    88,    10,   111,   130,   134,   141,    46,    93,    94,
     129,   133,   145,   146,    56,    10,   102,     0,   137,     0,
       0,   140,    11,    12,    13,     0,     0,    14,     0,    15,
      16,    17,    10,     0,    18,    11,    12,    13,     0,    58,
      14,     0,    15,    16,    17,    59,     0,    18,     0,     0,
      60,     0,    11,    12,    13,     0,     0,    14,     0,    15,
      16,    17,     0,     0,    18,    84,    61,    62,     0,    85,
      86,    87,    88,    89,    90,    63,    64,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,     0,     0,
       0,    85,    86,    87,    88,    89,    90,     0,     0,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   109,
       0,     0,     0,    85,    86,    87,    88,    89,    90,     0,
       0,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   131,     0,     0,     0,    85,    86,    87,    88,    89,
      90,     0,     0,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   132,     0,     0,     0,    85,    86,    87,
      88,    89,    90,     0,     0,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   135,     0,     0,     0,    85,
      86,    87,    88,    89,    90,     0,     0,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   142,     0,     0,
       0,    85,    86,    87,    88,    89,    90,     0,     0,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   106,
       0,    85,    86,    87,    88,    89,    90,     0,     0,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   136,
       0,    85,    86,    87,    88,    89,    90,     0,     0,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,    85,
      86,    87,    88,    89,    90,     0,     0,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,    85,    86,    87,
      88,    89,    90,     0,     0,    91,    92,    93,    94,    95,
      96,    97,    98,    99,    85,    86,    87,    88,    89,    90,
       0,     0,    91,    92,    93,    94,    95,    96,    97,    98,
      85,    86,    87,    88,    89,     0,     0,     0,    91,    92,
      93,    94,    95,    96,    97,    98,    85,    86,    87,    88,
       0,     0,     0,     0,    91,    92,    93,    94,    95,    96,
      97,    98,    85,    86,    87,    88,     0,     0,     0,     0,
      91,    92,    93,    94,     0,     0,    97,    98
};

static const yytype_int16 yycheck[] =
{
       5,    10,     8,     0,     6,    13,    14,    41,     6,     8,
      12,    42,    18,     6,    19,    17,    75,    39,     3,    18,
      29,    43,    44,     6,    10,    10,    40,    11,    12,    13,
      14,    33,    34,    10,    36,    10,    58,    59,    60,    10,
      42,    43,    10,    10,     6,    30,    31,    32,    70,    71,
      35,    43,    37,    38,    39,    43,     6,    42,     9,    81,
      42,    83,    67,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   138,
     139,     7,     6,     8,     6,    38,     4,     6,    11,    12,
      13,    14,    10,     7,     6,    42,    29,   102,    21,    22,
       5,    18,    42,     7,    36,    10,    67,    -1,   130,    -1,
      -1,   133,    30,    31,    32,    -1,    -1,    35,    -1,    37,
      38,    39,    10,    -1,    42,    30,    31,    32,    -1,     6,
      35,    -1,    37,    38,    39,    12,    -1,    42,    -1,    -1,
      17,    -1,    30,    31,    32,    -1,    -1,    35,    -1,    37,
      38,    39,    -1,    -1,    42,     7,    33,    34,    -1,    11,
      12,    13,    14,    15,    16,    42,    43,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,     7,    -1,    -1,
      -1,    11,    12,    13,    14,    15,    16,    -1,    -1,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,     7,
      -1,    -1,    -1,    11,    12,    13,    14,    15,    16,    -1,
      -1,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,     7,    -1,    -1,    -1,    11,    12,    13,    14,    15,
      16,    -1,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,     7,    -1,    -1,    -1,    11,    12,    13,
      14,    15,    16,    -1,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,     7,    -1,    -1,    -1,    11,
      12,    13,    14,    15,    16,    -1,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,     7,    -1,    -1,
      -1,    11,    12,    13,    14,    15,    16,    -1,    -1,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,     9,
      -1,    11,    12,    13,    14,    15,    16,    -1,    -1,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,     9,
      -1,    11,    12,    13,    14,    15,    16,    -1,    -1,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    11,
      12,    13,    14,    15,    16,    -1,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    11,    12,    13,
      14,    15,    16,    -1,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    11,    12,    13,    14,    15,    16,
      -1,    -1,    19,    20,    21,    22,    23,    24,    25,    26,
      11,    12,    13,    14,    15,    -1,    -1,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    11,    12,    13,    14,
      -1,    -1,    -1,    -1,    19,    20,    21,    22,    23,    24,
      25,    26,    11,    12,    13,    14,    -1,    -1,    -1,    -1,
      19,    20,    21,    22,    -1,    -1,    25,    26
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    45,    47,     0,    41,    46,    48,    42,    49,    50,
      10,    30,    31,    32,    35,    37,    38,    39,    42,    52,
      53,    54,    55,    56,    57,    58,    59,    61,    64,    67,
      69,    70,    71,     8,    18,    10,    29,     6,     6,     6,
      68,    65,    62,     8,    18,     3,    53,    10,    10,    10,
      10,    40,    10,    10,    43,    43,    50,    42,     6,    12,
      17,    33,    34,    42,    43,    72,    72,     4,    51,    53,
       6,     6,    72,    36,    72,    60,     9,     7,    72,    72,
      72,     6,     6,     8,     7,    11,    12,    13,    14,    15,
      16,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,     7,    52,    38,    72,    72,     9,     6,    51,     7,
      72,     7,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,     5,
       6,     7,     7,    18,    42,     7,     9,    72,    66,    63,
      72,    29,     7,    51,    51,    42,     7
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    44,    46,    45,    47,    47,    48,    49,    49,    50,
      50,    50,    51,    51,    52,    52,    53,    53,    53,    53,
      53,    53,    54,    55,    56,    56,    56,    56,    57,    57,
      58,    58,    59,    60,    59,    62,    63,    61,    65,    66,
      64,    68,    67,    69,    70,    71,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     4,     2,     0,     3,     3,     1,     3,
       4,     1,     1,     3,     2,     1,     2,     1,     2,     2,
       2,     1,     4,     8,     1,     1,     2,     2,     1,     1,
       6,     3,     1,     0,     4,     0,     0,     7,     0,     0,
       7,     0,     7,     1,     4,     4,     1,     1,     4,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     4,     3
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
#line 177 "Acse.y" /* yacc.c:1646  */
    {
            input_random = gen_load_immediate(program, 12345);
         }
#line 1515 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 181 "Acse.y" /* yacc.c:1646  */
    {
            /* Notify the end of the program. Once called
             * the function `set_end_Program' - if necessary -
             * introduces a `HALT' instruction into the
             * list of instructions. */
            set_end_Program(program);

            /* return from yyparse() */
            YYACCEPT;
         }
#line 1530 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 193 "Acse.y" /* yacc.c:1646  */
    { /* does nothing */ }
#line 1536 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 194 "Acse.y" /* yacc.c:1646  */
    { /* does nothing */ }
#line 1542 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 198 "Acse.y" /* yacc.c:1646  */
    {
                     /* update the program infos by adding new variables */
                     set_new_variables(program, (yyvsp[-2].intval), (yyvsp[-1].list));
                  }
#line 1551 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 205 "Acse.y" /* yacc.c:1646  */
    {  /* add the new declaration to the list of declarations */
                     (yyval.list) = addElement((yyvsp[-2].list), (yyvsp[0].decl), -1);
                  }
#line 1559 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 209 "Acse.y" /* yacc.c:1646  */
    {
                     /* add the new declaration to the list of declarations */
                     (yyval.list) = addElement(NULL, (yyvsp[0].decl), -1);
                  }
#line 1568 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 216 "Acse.y" /* yacc.c:1646  */
    {
               /* create a new instance of t_axe_declaration */
               (yyval.decl) = alloc_declaration((yyvsp[-2].svalue), 0, 0, (yyvsp[0].intval));

               /* test if an `out of memory' occurred */
               if ((yyval.decl) == NULL)
                  notifyError(AXE_OUT_OF_MEMORY);
            }
#line 1581 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 225 "Acse.y" /* yacc.c:1646  */
    {
               /* create a new instance of t_axe_declaration */
               (yyval.decl) = alloc_declaration((yyvsp[-3].svalue), 1, (yyvsp[-1].intval), 0);

                  /* test if an `out of memory' occurred */
               if ((yyval.decl) == NULL)
                  notifyError(AXE_OUT_OF_MEMORY);
            }
#line 1594 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 234 "Acse.y" /* yacc.c:1646  */
    {
               /* create a new instance of t_axe_declaration */
               (yyval.decl) = alloc_declaration((yyvsp[0].svalue), 0, 0, 0);
               
               /* test if an `out of memory' occurred */
               if ((yyval.decl) == NULL)
                  notifyError(AXE_OUT_OF_MEMORY);
            }
#line 1607 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 246 "Acse.y" /* yacc.c:1646  */
    { /* does nothing */ }
#line 1613 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 247 "Acse.y" /* yacc.c:1646  */
    { /* does nothing */ }
#line 1619 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 251 "Acse.y" /* yacc.c:1646  */
    { /* does nothing */ }
#line 1625 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 252 "Acse.y" /* yacc.c:1646  */
    { /* does nothing */ }
#line 1631 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 257 "Acse.y" /* yacc.c:1646  */
    { /* does nothing */ }
#line 1637 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 258 "Acse.y" /* yacc.c:1646  */
    { /* does nothing */ }
#line 1643 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 259 "Acse.y" /* yacc.c:1646  */
    { /* does nothing */ }
#line 1649 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 262 "Acse.y" /* yacc.c:1646  */
    { gen_nop_instruction(program); }
#line 1655 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 266 "Acse.y" /* yacc.c:1646  */
    {
   if((yyvsp[-1].expr).expression_type == IMMEDIATE)
   {
      gen_move_immediate(program, input_random, (yyvsp[-1].expr).value);
   }
   else
   {
      gen_add_instruction(program, input_random, REG_0, (yyvsp[-1].expr).value, CG_DIRECT_ALL);
   }
}
#line 1670 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 278 "Acse.y" /* yacc.c:1646  */
    {

   t_axe_variable* v_dest = getVariable(program, (yyvsp[-7].svalue));
   t_axe_variable* v_src1 = getVariable(program, (yyvsp[-3].svalue));
   t_axe_variable* v_src2 = getVariable(program, (yyvsp[-1].svalue));

   if(!v_dest->isArray || !v_src1->isArray || !v_src2->isArray)
   {
      yyerror("Source or destination not an array");
      YYERROR;
   }

   int r_i = gen_load_immediate(program,0);
   int r_x = gen_load_immediate(program, 0);
   t_axe_label* exit_for = newLabel(program);
   t_axe_label* enter_for = assignNewLabel(program);
   gen_subi_instruction(program, REG_0, r_i, v_dest->arraySize);
   gen_beq_instruction(program, exit_for,0);

   gen_subi_instruction(program, REG_0, r_x, v_src1->arraySize);
   gen_beq_instruction(program, exit_for,0);

   gen_subi_instruction(program, REG_0, r_x, v_src2->arraySize);
   gen_beq_instruction(program, exit_for,0);

   int r_e1 = loadArrayElement(program, (yyvsp[-3].svalue), create_expression(r_x, REGISTER));
   int r_e2 = loadArrayElement(program, (yyvsp[-1].svalue), create_expression(r_x, REGISTER));

   storeArrayElement(program, (yyvsp[-7].svalue), create_expression(r_i, REGISTER), create_expression(r_e1, REGISTER));

   gen_addi_instruction(program, r_i, r_i, 1);

   gen_subi_instruction(program, REG_0, r_i, v_dest->arraySize);
   gen_beq_instruction(program, exit_for,0);

   storeArrayElement(program, (yyvsp[-7].svalue), create_expression(r_i, REGISTER), create_expression(r_e2, REGISTER));

   gen_addi_instruction(program, r_i, r_i, 1);
   gen_addi_instruction(program, r_x, r_x, 1);

   gen_bt_instruction(program, enter_for,0);

   assignLabel(program,exit_for);

   free((yyvsp[-7].svalue));
   free((yyvsp[-3].svalue));
   free((yyvsp[-1].svalue));   
}
#line 1723 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 327 "Acse.y" /* yacc.c:1646  */
    { /* does nothing */ }
#line 1729 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 328 "Acse.y" /* yacc.c:1646  */
    { /* does nothing */ }
#line 1735 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 329 "Acse.y" /* yacc.c:1646  */
    { /* does nothing */ }
#line 1741 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 330 "Acse.y" /* yacc.c:1646  */
    { /* does nothing */ }
#line 1747 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 333 "Acse.y" /* yacc.c:1646  */
    { /* does nothing */ }
#line 1753 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 334 "Acse.y" /* yacc.c:1646  */
    { /* does nothing */ }
#line 1759 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 338 "Acse.y" /* yacc.c:1646  */
    {
               /* Notify to `program' that the value $6
                * have to be assigned to the location
                * addressed by $1[$3]. Where $1 is obviously
                * the array/pointer identifier, $3 is an expression
                * that holds an integer value. That value will be
                * used as an index for the array $1 */
               storeArrayElement(program, (yyvsp[-5].svalue), (yyvsp[-3].expr), (yyvsp[0].expr));

               /* free the memory associated with the IDENTIFIER.
                * The use of the free instruction is required
                * because of the value associated with IDENTIFIER.
                * The value of IDENTIFIER is a string created
                * by a call to the function `strdup' (see Acse.lex) */
               free((yyvsp[-5].svalue));
            }
#line 1780 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 355 "Acse.y" /* yacc.c:1646  */
    {
               int location;

               /* in order to assign a value to a variable, we have to
                * know where the variable is located (i.e. in which register).
                * the function `get_symbol_location' is used in order
                * to retrieve the register location assigned to
                * a given identifier.
                * A symbol table keeps track of the location of every
                * declared variable.
                * `get_symbol_location' perform a query on the symbol table
                * in order to discover the correct location of
                * the variable with $1 as identifier */
               
               /* get the location of the symbol with the given ID. */
               location = get_symbol_location(program, (yyvsp[-2].svalue), 0);

               /* update the value of location */
               if ((yyvsp[0].expr).expression_type == IMMEDIATE)
                  gen_move_immediate(program, location, (yyvsp[0].expr).value);
               else
                  gen_add_instruction(program,
                                      location,
                                      REG_0,
                                      (yyvsp[0].expr).value,
                                      CG_DIRECT_ALL);

               /* free the memory associated with the IDENTIFIER */
               free((yyvsp[-2].svalue));
            }
#line 1815 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 388 "Acse.y" /* yacc.c:1646  */
    {
                  /* fix the `label_else' */
                  assignLabel(program, (yyvsp[0].label));
               }
#line 1824 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 393 "Acse.y" /* yacc.c:1646  */
    {
                  /* reserve a new label that points to the address where to
                   * jump if `exp' is verified */
                  (yyvsp[0].label) = newLabel(program);
   
                  /* exit from the if-else */
                  gen_bt_instruction (program, (yyvsp[0].label), 0);
   
                  /* fix the `label_else' */
                  assignLabel(program, (yyvsp[-1].label));
               }
#line 1840 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 405 "Acse.y" /* yacc.c:1646  */
    {
                  /* fix the `label_else' */
                  assignLabel(program, (yyvsp[-2].label));
               }
#line 1849 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 412 "Acse.y" /* yacc.c:1646  */
    {
                  /* the label that points to the address where to jump if
                   * `exp' is not verified */
                  (yyvsp[0].label) = newLabel(program);
               }
#line 1859 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 418 "Acse.y" /* yacc.c:1646  */
    {
                     if ((yyvsp[-1].expr).expression_type == IMMEDIATE)
                         gen_load_immediate(program, (yyvsp[-1].expr).value);
                     else
                         gen_andb_instruction(program, (yyvsp[-1].expr).value,
                             (yyvsp[-1].expr).value, (yyvsp[-1].expr).value, CG_DIRECT_ALL);

                     /* if `exp' returns FALSE, jump to the label $1 */
                     gen_beq_instruction (program, (yyvsp[-4].label), 0);
               }
#line 1874 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 428 "Acse.y" /* yacc.c:1646  */
    { (yyval.label) = (yyvsp[-6].label); }
#line 1880 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 432 "Acse.y" /* yacc.c:1646  */
    {
                     /* initialize the value of the non-terminal */
                     (yyvsp[0].while_stmt) = create_while_statement();

                     /* reserve and fix a new label */
                     (yyvsp[0].while_stmt).label_condition
                           = assignNewLabel(program);
                  }
#line 1893 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 441 "Acse.y" /* yacc.c:1646  */
    {
                     if ((yyvsp[-1].expr).expression_type == IMMEDIATE)
                        gen_load_immediate(program, (yyvsp[-1].expr).value);
                     else
                         gen_andb_instruction(program, (yyvsp[-1].expr).value,
                             (yyvsp[-1].expr).value, (yyvsp[-1].expr).value, CG_DIRECT_ALL);

                     /* reserve a new label. This new label will point
                      * to the first instruction after the while code
                      * block */
                     (yyvsp[-4].while_stmt).label_end = newLabel(program);

                     /* if `exp' returns FALSE, jump to the label 
                      * $1.label_end */
                     gen_beq_instruction (program, (yyvsp[-4].while_stmt).label_end, 0);
                  }
#line 1914 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 458 "Acse.y" /* yacc.c:1646  */
    {
                     /* jump to the beginning of the loop */
                     gen_bt_instruction
                           (program, (yyvsp[-6].while_stmt).label_condition, 0);

                     /* fix the label `label_end' */
                     assignLabel(program, (yyvsp[-6].while_stmt).label_end);
                  }
#line 1927 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 469 "Acse.y" /* yacc.c:1646  */
    {
                        /* the label that points to the address where to jump if
                         * `exp' is not verified */
                        (yyvsp[0].label) = newLabel(program);
                        
                        /* fix the label */
                        assignLabel(program, (yyvsp[0].label));
                     }
#line 1940 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 478 "Acse.y" /* yacc.c:1646  */
    {
                           if ((yyvsp[-1].expr).expression_type == IMMEDIATE)
                               gen_load_immediate(program, (yyvsp[-1].expr).value);
                           else
                               gen_andb_instruction(program, (yyvsp[-1].expr).value,
                                   (yyvsp[-1].expr).value, (yyvsp[-1].expr).value, CG_DIRECT_ALL);

                           /* if `exp' returns TRUE, jump to the label $1 */
                           gen_bne_instruction (program, (yyvsp[-6].label), 0);
                     }
#line 1955 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 491 "Acse.y" /* yacc.c:1646  */
    {
               /* insert an HALT instruction */
               gen_halt_instruction(program);
            }
#line 1964 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 498 "Acse.y" /* yacc.c:1646  */
    {
               int location;
               
               /* read from standard input an integer value and assign
                * it to a variable associated with the given identifier */
               /* get the location of the symbol with the given ID */
               
               /* lookup the symbol table and fetch the register location
                * associated with the IDENTIFIER $3. */
               location = get_symbol_location(program, (yyvsp[-1].svalue), 0);

               /* insert a read instruction */
               gen_read_instruction (program, location);

               /* free the memory associated with the IDENTIFIER */
               free((yyvsp[-1].svalue));
            }
#line 1986 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 518 "Acse.y" /* yacc.c:1646  */
    {
               int location;

               if ((yyvsp[-1].expr).expression_type == IMMEDIATE)
               {
                  /* load `immediate' into a new register. Returns the new
                   * register identifier or REG_INVALID if an error occurs */
                  location = gen_load_immediate(program, (yyvsp[-1].expr).value);
               }
               else
                  location = (yyvsp[-1].expr).value;

               /* write to standard output an integer value */
               gen_write_instruction (program, location);
            }
#line 2006 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 535 "Acse.y" /* yacc.c:1646  */
    { (yyval.expr) = create_expression ((yyvsp[0].intval), IMMEDIATE); }
#line 2012 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 536 "Acse.y" /* yacc.c:1646  */
    {
                     int location;
   
                     /* get the location of the symbol with the given ID */
                     location = get_symbol_location(program, (yyvsp[0].svalue), 0);
                     
                     /* return the register location of IDENTIFIER as
                      * a value for `exp' */
                     (yyval.expr) = create_expression (location, REGISTER);

                     /* free the memory associated with the IDENTIFIER */
                     free((yyvsp[0].svalue));
   }
#line 2030 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 549 "Acse.y" /* yacc.c:1646  */
    {
                     int reg;
                     
                     /* load the value IDENTIFIER[exp]
                      * into `arrayElement' */
                     reg = loadArrayElement(program, (yyvsp[-3].svalue), (yyvsp[-1].expr));

                     /* create a new expression */
                     (yyval.expr) = create_expression (reg, REGISTER);

                     /* free the memory associated with the IDENTIFIER */
                     free((yyvsp[-3].svalue));
   }
#line 2048 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 562 "Acse.y" /* yacc.c:1646  */
    {
               if ((yyvsp[0].expr).expression_type == IMMEDIATE)
               {
                  /* IMMEDIATE (constant) expression: compute the value at
                   * compile-time and place the result in a new IMMEDIATE
                   * expression */
                  (yyval.expr) = create_expression(!((yyvsp[0].expr).value), IMMEDIATE);
               }
               else
               {
                  /* REGISTER expression: generate the code that will compute
                   * the result at compile time */

                  /* Reserve a new register for the result */
                  int output_register = getNewRegister(program);

                  /* Generate a NOTL instruction which will store the negated
                   * logic value into the register we reserved */
                  gen_notl_instruction(program, output_register, (yyvsp[0].expr).value);
                  
                  /* Return a REGISTER expression with the result register */
                  (yyval.expr) = create_expression(output_register, REGISTER);
               }
   }
#line 2077 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 586 "Acse.y" /* yacc.c:1646  */
    { (yyval.expr) = handle_bin_numeric_op(program, (yyvsp[-2].expr), (yyvsp[0].expr), ANDB); }
#line 2083 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 587 "Acse.y" /* yacc.c:1646  */
    { (yyval.expr) = handle_bin_numeric_op(program, (yyvsp[-2].expr), (yyvsp[0].expr), ORB); }
#line 2089 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 588 "Acse.y" /* yacc.c:1646  */
    { (yyval.expr) = handle_bin_numeric_op(program, (yyvsp[-2].expr), (yyvsp[0].expr), ADD); }
#line 2095 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 589 "Acse.y" /* yacc.c:1646  */
    { (yyval.expr) = handle_bin_numeric_op(program, (yyvsp[-2].expr), (yyvsp[0].expr), SUB); }
#line 2101 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 590 "Acse.y" /* yacc.c:1646  */
    { (yyval.expr) = handle_bin_numeric_op(program, (yyvsp[-2].expr), (yyvsp[0].expr), MUL); }
#line 2107 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 591 "Acse.y" /* yacc.c:1646  */
    { (yyval.expr) = handle_bin_numeric_op(program, (yyvsp[-2].expr), (yyvsp[0].expr), DIV); }
#line 2113 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 592 "Acse.y" /* yacc.c:1646  */
    { (yyval.expr) = handle_binary_comparison(program, (yyvsp[-2].expr), (yyvsp[0].expr), _LT_); }
#line 2119 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 593 "Acse.y" /* yacc.c:1646  */
    { (yyval.expr) = handle_binary_comparison(program, (yyvsp[-2].expr), (yyvsp[0].expr), _GT_); }
#line 2125 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 594 "Acse.y" /* yacc.c:1646  */
    { (yyval.expr) = handle_binary_comparison(program, (yyvsp[-2].expr), (yyvsp[0].expr), _EQ_); }
#line 2131 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 595 "Acse.y" /* yacc.c:1646  */
    { (yyval.expr) = handle_binary_comparison(program, (yyvsp[-2].expr), (yyvsp[0].expr), _NOTEQ_); }
#line 2137 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 596 "Acse.y" /* yacc.c:1646  */
    { (yyval.expr) = handle_binary_comparison(program, (yyvsp[-2].expr), (yyvsp[0].expr), _LTEQ_); }
#line 2143 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 597 "Acse.y" /* yacc.c:1646  */
    { (yyval.expr) = handle_binary_comparison(program, (yyvsp[-2].expr), (yyvsp[0].expr), _GTEQ_); }
#line 2149 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 598 "Acse.y" /* yacc.c:1646  */
    { (yyval.expr) = handle_bin_numeric_op(program, (yyvsp[-2].expr), (yyvsp[0].expr), SHL); }
#line 2155 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 599 "Acse.y" /* yacc.c:1646  */
    { (yyval.expr) = handle_bin_numeric_op(program, (yyvsp[-2].expr), (yyvsp[0].expr), SHR); }
#line 2161 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 600 "Acse.y" /* yacc.c:1646  */
    { (yyval.expr) = handle_bin_numeric_op(program, (yyvsp[-2].expr), (yyvsp[0].expr), ANDL); }
#line 2167 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 601 "Acse.y" /* yacc.c:1646  */
    { (yyval.expr) = handle_bin_numeric_op(program, (yyvsp[-2].expr), (yyvsp[0].expr), ORL); }
#line 2173 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 602 "Acse.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 2179 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 603 "Acse.y" /* yacc.c:1646  */
    {
                  if ((yyvsp[0].expr).expression_type == IMMEDIATE)
                  {
                     (yyval.expr) = (yyvsp[0].expr);
                     (yyval.expr).value = - ((yyval.expr).value);
                  }
                  else
                  {
                     t_axe_expression exp_r0;

                     /* create an expression for register REG_0 */
                     exp_r0.value = REG_0;
                     exp_r0.expression_type = REGISTER;
                     
                     (yyval.expr) = handle_bin_numeric_op
                           (program, exp_r0, (yyvsp[0].expr), SUB);
                  }
               }
#line 2202 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 621 "Acse.y" /* yacc.c:1646  */
    {

         if((yyvsp[-1].expr).expression_type == IMMEDIATE)
         {
            int result = 0;
            uint32_t n = (yyvsp[-1].expr).value;

            while(n)
            {
               result = result + (n & 1);
               n = n >> 1;
            }
            (yyval.expr) = create_expression(result, IMMEDIATE);
         }
         else
         {
            int r_result = gen_load_immediate(program,0);
            int r_n = getNewRegister(program);
            gen_add_instruction(program, r_n, REG_0, (yyvsp[-1].expr).value, CG_DIRECT_ALL);
            
            t_axe_label* l_out = newLabel(program);
            t_axe_label* enter_while = assignNewLabel(program);
            
            gen_subi_instruction(program, REG_0, r_n,0);
            gen_beq_instruction(program,l_out, 0);

            int r_hasbitone = getNewRegister(program);
            gen_andbi_instruction(program, r_hasbitone, r_n,1);
            gen_add_instruction(program, r_result, r_hasbitone, r_result, CG_DIRECT_ALL);
            gen_shri_instruction(program, r_n, r_n, 1);
            gen_bt_instruction(program, enter_while,0);
            assignLabel(program, l_out);

            (yyval.expr) = create_expression(r_result, REGISTER);

         }
   }
#line 2244 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 659 "Acse.y" /* yacc.c:1646  */
    {
      int r_res = getNewRegister(program);

      gen_muli_instruction(program, r_res, input_random, 1664525);
      gen_addi_instruction(program, r_res, r_res, 1013904223);
      gen_add_instruction(program, input_random, REG_0, r_res, CG_DIRECT_ALL);

      (yyval.expr) = create_expression(r_res, REGISTER);
   }
#line 2258 "obj/Acse.tab.c" /* yacc.c:1646  */
    break;


#line 2262 "obj/Acse.tab.c" /* yacc.c:1646  */
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
#line 670 "Acse.y" /* yacc.c:1906  */

/*=========================================================================
                                  MAIN
=========================================================================*/
int main (int argc, char **argv)
{
   /* initialize all the compiler data structures and global variables */
   init_compiler(argc, argv);
   
   /* start the parsing procedure */
   yyparse();
   
#ifndef NDEBUG
   fprintf(stdout, "Parsing process completed. \n");
   printProgramInfos(program, file_infos->frontend_output);
#endif

   /* test if the parsing process completed succesfully */
   checkConsistency();

   /* do not attach a line number to the instructions generated by the
    * transformations that follow. */
   line_num = -1;

   doTargetSpecificTransformations(program);
   
#ifndef NDEBUG
   fprintf(stdout, "Creating a control flow graph. \n");
#endif

   /* create the control flow graph */
   graph = createFlowGraph(program->instructions);
   checkConsistency();

#ifndef NDEBUG
   assert(program != NULL);
   assert(program->sy_table != NULL);
   assert(file_infos != NULL);
   assert(file_infos->syTable_output != NULL);
   printSymbolTable(program->sy_table, file_infos->syTable_output);
   printGraphInfos(graph, file_infos->cfg_1, 0);
      
   fprintf(stdout, "Updating the basic blocks. \n");
#endif
      
   /* update the control flow graph by inserting load and stores inside
   * every basic block */
   graph = insertLoadAndStoreInstr(program, graph);

#ifndef NDEBUG
   fprintf(stdout, "Executing a liveness analysis on the intermediate code \n");
#endif
   performLivenessAnalysis(graph);
   checkConsistency();

#ifndef NDEBUG
   printGraphInfos(graph, file_infos->cfg_2, 1);
#endif
      
#ifndef NDEBUG
   fprintf(stdout, "Starting the register allocation process. \n");
#endif
   /* initialize the register allocator by using the control flow
    * informations stored into the control flow graph */
   RA = initializeRegAlloc(graph);
      
   /* execute the linear scan algorithm */
   execute_linear_scan(RA);
      
#ifndef NDEBUG
   printRegAllocInfos(RA, file_infos->reg_alloc_output);
#endif

#ifndef NDEBUG
   fprintf(stdout, "Updating the control flow informations. \n");
#endif
   /* apply changes to the program informations by using the informations
   * of the register allocation process */
   materializeRegisterAllocation(program, graph, RA);
   updateProgramInfos(program, graph);

#ifndef NDEBUG
   fprintf(stdout, "Writing the assembly file... \n");
#endif
   writeAssembly(program, file_infos->output_file_name);
      
#ifndef NDEBUG
   fprintf(stdout, "Assembly written on file \"%s\".\n", file_infos->output_file_name);
#endif
   
   /* shutdown the compiler */
   shutdownCompiler(0);

   return 0;
}

/*=========================================================================
                                 YYERROR
=========================================================================*/
void yyerror(const char* msg)
{
   errorcode = AXE_SYNTAX_ERROR;
   free((void *)errormsg);
   errormsg = strdup(msg);
}
