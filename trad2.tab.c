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
#line 4 "trad2.y"
                          // SECCION 1 Declaraciones de C-Yacc

#include <stdio.h>
#include <ctype.h>            // declaraciones para tolower
#include <string.h>           // declaraciones para code
#include <stdlib.h>           // declaraciones para exit ()

#define FF fflush(stdout);    // para forzar la impresion inmediata
#define ARIT 1            // para identificar el tipo de expresion    
#define BOOL 2                // para identificar el tipo de expresion

int yylex () ;
void yyerror () ;
char *my_malloc (int) ;
char *gen_code (char *) ;
char *int_to_string (int) ;
char *char_to_string (char) ;

char temp [2048] ;
char nombre_funcion [1024];
char var_let [100][2048];
int cont = 0;
char var_expresion [2048];
char var_expresion2 [2048];


// Definitions for explicit attributes

typedef struct s_attr {
        int value ;
        char *code ;
        int type ;
} t_attr ;

#define YYSTYPE t_attr


#line 109 "trad2.tab.c"

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


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    NUMBER = 258,                  /* NUMBER  */
    IDENTIF = 259,                 /* IDENTIF  */
    INTEGER = 260,                 /* INTEGER  */
    STRING = 261,                  /* STRING  */
    MAIN = 262,                    /* MAIN  */
    WHILE = 263,                   /* WHILE  */
    IF = 264,                      /* IF  */
    FOR = 265,                     /* FOR  */
    RETURN = 266,                  /* RETURN  */
    ELSE = 267,                    /* ELSE  */
    PUTS = 268,                    /* PUTS  */
    PRINTF = 269,                  /* PRINTF  */
    MAYOR_IGUAL = 270,             /* MAYOR_IGUAL  */
    MENOR_IGUAL = 271,             /* MENOR_IGUAL  */
    IGUAL_IGUAL = 272,             /* IGUAL_IGUAL  */
    DISTINTO = 273,                /* DISTINTO  */
    AND = 274,                     /* AND  */
    OR = 275,                      /* OR  */
    UNARY_SIGN = 276               /* UNARY_SIGN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NUMBER = 3,                     /* NUMBER  */
  YYSYMBOL_IDENTIF = 4,                    /* IDENTIF  */
  YYSYMBOL_INTEGER = 5,                    /* INTEGER  */
  YYSYMBOL_STRING = 6,                     /* STRING  */
  YYSYMBOL_MAIN = 7,                       /* MAIN  */
  YYSYMBOL_WHILE = 8,                      /* WHILE  */
  YYSYMBOL_IF = 9,                         /* IF  */
  YYSYMBOL_FOR = 10,                       /* FOR  */
  YYSYMBOL_RETURN = 11,                    /* RETURN  */
  YYSYMBOL_ELSE = 12,                      /* ELSE  */
  YYSYMBOL_PUTS = 13,                      /* PUTS  */
  YYSYMBOL_PRINTF = 14,                    /* PRINTF  */
  YYSYMBOL_MAYOR_IGUAL = 15,               /* MAYOR_IGUAL  */
  YYSYMBOL_MENOR_IGUAL = 16,               /* MENOR_IGUAL  */
  YYSYMBOL_IGUAL_IGUAL = 17,               /* IGUAL_IGUAL  */
  YYSYMBOL_DISTINTO = 18,                  /* DISTINTO  */
  YYSYMBOL_AND = 19,                       /* AND  */
  YYSYMBOL_OR = 20,                        /* OR  */
  YYSYMBOL_21_ = 21,                       /* '='  */
  YYSYMBOL_22_ = 22,                       /* '>'  */
  YYSYMBOL_23_ = 23,                       /* '<'  */
  YYSYMBOL_24_ = 24,                       /* '+'  */
  YYSYMBOL_25_ = 25,                       /* '-'  */
  YYSYMBOL_26_ = 26,                       /* '%'  */
  YYSYMBOL_27_ = 27,                       /* '*'  */
  YYSYMBOL_28_ = 28,                       /* '/'  */
  YYSYMBOL_UNARY_SIGN = 29,                /* UNARY_SIGN  */
  YYSYMBOL_30_ = 30,                       /* ';'  */
  YYSYMBOL_31_ = 31,                       /* ','  */
  YYSYMBOL_32_ = 32,                       /* '['  */
  YYSYMBOL_33_ = 33,                       /* ']'  */
  YYSYMBOL_34_ = 34,                       /* '('  */
  YYSYMBOL_35_ = 35,                       /* ')'  */
  YYSYMBOL_36_ = 36,                       /* '{'  */
  YYSYMBOL_37_ = 37,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 38,                  /* $accept  */
  YYSYMBOL_axioma = 39,                    /* axioma  */
  YYSYMBOL_40_1 = 40,                      /* $@1  */
  YYSYMBOL_bloque_funciones = 41,          /* bloque_funciones  */
  YYSYMBOL_42_2 = 42,                      /* $@2  */
  YYSYMBOL_funcion_recur = 43,             /* funcion_recur  */
  YYSYMBOL_bloque_variables = 44,          /* bloque_variables  */
  YYSYMBOL_45_3 = 45,                      /* $@3  */
  YYSYMBOL_r_variables_gl = 46,            /* r_variables_gl  */
  YYSYMBOL_variables_globales = 47,        /* variables_globales  */
  YYSYMBOL_decla_variables_recur = 48,     /* decla_variables_recur  */
  YYSYMBOL_funcion = 49,                   /* funcion  */
  YYSYMBOL_50_4 = 50,                      /* $@4  */
  YYSYMBOL_main_nt = 51,                   /* main_nt  */
  YYSYMBOL_52_5 = 52,                      /* $@5  */
  YYSYMBOL_parametros = 53,                /* parametros  */
  YYSYMBOL_parametros_recur = 54,          /* parametros_recur  */
  YYSYMBOL_n_sentencias_loc = 55,          /* n_sentencias_loc  */
  YYSYMBOL_sentencias_loc = 56,            /* sentencias_loc  */
  YYSYMBOL_57_6 = 57,                      /* $@6  */
  YYSYMBOL_return_recursivo = 58,          /* return_recursivo  */
  YYSYMBOL_r_variables_loc = 59,           /* r_variables_loc  */
  YYSYMBOL_decla_variables_recur_loc = 60, /* decla_variables_recur_loc  */
  YYSYMBOL_multiples_variables = 61,       /* multiples_variables  */
  YYSYMBOL_expresion_recur = 62,           /* expresion_recur  */
  YYSYMBOL_argumentos_funcion = 63,        /* argumentos_funcion  */
  YYSYMBOL_argumentos_funcion_recur = 64,  /* argumentos_funcion_recur  */
  YYSYMBOL_sentencia_if = 65,              /* sentencia_if  */
  YYSYMBOL_sentencia_if_recur = 66,        /* sentencia_if_recur  */
  YYSYMBOL_sentencia_if_recur_2 = 67,      /* sentencia_if_recur_2  */
  YYSYMBOL_condicion_else = 68,            /* condicion_else  */
  YYSYMBOL_inicializar_for = 69,           /* inicializar_for  */
  YYSYMBOL_cadena_printf = 70,             /* cadena_printf  */
  YYSYMBOL_n_cadena_printf = 71,           /* n_cadena_printf  */
  YYSYMBOL_expresion = 72,                 /* expresion  */
  YYSYMBOL_termino = 73,                   /* termino  */
  YYSYMBOL_operando = 74                   /* operando  */
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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   478

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  105
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  247

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   276


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
       2,     2,     2,     2,     2,     2,     2,    26,     2,     2,
      34,    35,    27,    24,    31,    25,     2,    28,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    30,
      23,    21,    22,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    32,     2,    33,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    36,     2,    37,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    29
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    95,    95,    95,   102,   103,   103,   108,   110,   117,
     118,   118,   123,   125,   130,   136,   138,   140,   149,   151,
     157,   159,   165,   175,   175,   181,   181,   188,   190,   194,
     196,   203,   205,   211,   217,   224,   229,   229,   234,   240,
     244,   246,   250,   257,   260,   269,   275,   281,   292,   296,
     302,   310,   316,   325,   327,   332,   334,   340,   342,   344,
     356,   358,   363,   369,   380,   382,   391,   393,   405,   407,
     411,   415,   417,   425,   427,   434,   436,   438,   440,   446,
     454,   460,   468,   470,   477,   478,   490,   504,   518,   532,
     546,   560,   574,   588,   602,   616,   630,   644,   661,   662,
     664,   669,   672,   676,   684,   688
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
  "\"end of file\"", "error", "\"invalid token\"", "NUMBER", "IDENTIF",
  "INTEGER", "STRING", "MAIN", "WHILE", "IF", "FOR", "RETURN", "ELSE",
  "PUTS", "PRINTF", "MAYOR_IGUAL", "MENOR_IGUAL", "IGUAL_IGUAL",
  "DISTINTO", "AND", "OR", "'='", "'>'", "'<'", "'+'", "'-'", "'%'", "'*'",
  "'/'", "UNARY_SIGN", "';'", "','", "'['", "']'", "'('", "')'", "'{'",
  "'}'", "$accept", "axioma", "$@1", "bloque_funciones", "$@2",
  "funcion_recur", "bloque_variables", "$@3", "r_variables_gl",
  "variables_globales", "decla_variables_recur", "funcion", "$@4",
  "main_nt", "$@5", "parametros", "parametros_recur", "n_sentencias_loc",
  "sentencias_loc", "$@6", "return_recursivo", "r_variables_loc",
  "decla_variables_recur_loc", "multiples_variables", "expresion_recur",
  "argumentos_funcion", "argumentos_funcion_recur", "sentencia_if",
  "sentencia_if_recur", "sentencia_if_recur_2", "condicion_else",
  "inicializar_for", "cadena_printf", "n_cadena_printf", "expresion",
  "termino", "operando", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-154)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-8)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      23,    20,    47,  -154,    30,   -17,  -154,    19,    65,    42,
      91,    53,  -154,  -154,  -154,    72,   -14,    30,  -154,  -154,
      28,    53,    53,    91,   422,  -154,  -154,    57,    59,    92,
    -154,    91,    53,  -154,    23,    91,    91,  -154,  -154,   177,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    89,   108,  -154,  -154,   422,    81,  -154,
     253,    82,   289,  -154,   120,   120,   111,   111,   450,   436,
     120,   120,   -18,   -18,   -18,  -154,  -154,    91,   116,    90,
      96,   102,  -154,  -154,    91,  -154,   422,  -154,   108,   107,
     114,    91,   289,    90,    95,   115,   422,  -154,  -154,    75,
      75,   -20,   146,   118,   122,   123,    91,   124,   127,  -154,
      75,    75,    91,   158,    53,    91,    27,    91,    91,   101,
     272,   159,    67,    75,   130,    75,   131,   374,   133,   149,
     138,   137,    91,   169,    53,   144,   211,   225,   155,   173,
     148,  -154,    91,   145,   150,   151,   422,    75,  -154,  -154,
    -154,  -154,   158,    94,   162,   154,   306,    32,   156,   152,
    -154,   153,   170,    91,   167,    91,   160,   323,   168,    91,
      67,   172,   171,  -154,    34,   340,    91,  -154,   179,    91,
      53,  -154,    44,    75,    75,   422,   207,   390,  -154,    91,
    -154,   422,   151,   181,  -154,    91,    91,   406,  -154,   422,
     180,    91,   184,    75,    41,   203,  -154,   212,  -154,  -154,
    -154,   183,   189,   357,  -154,   199,   306,  -154,   185,  -154,
      75,   187,   196,  -154,   200,   252,  -154,    91,    53,   254,
    -154,  -154,  -154,  -154,    75,    91,  -154,  -154,  -154,  -154,
    -154,   239,   247,    75,    75,   248,  -154
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       9,     0,     0,     2,    12,    15,     1,     4,    18,     0,
       0,     0,    23,     3,     5,     7,    20,    12,    10,   102,
     101,     0,     0,     0,    14,    84,    98,     0,     0,     0,
       8,     0,     0,    13,     9,     0,    64,    99,   100,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    16,    27,    25,     6,    19,     0,    11,
       0,     0,    66,   105,    95,    94,    93,    92,    90,    91,
      97,    96,    85,    86,    89,    87,    88,     0,     0,    29,
       0,    22,   103,   104,     0,    65,    17,    28,    27,     0,
       0,     0,    66,    29,     0,     0,    21,    67,    30,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    36,
      31,    31,     0,     0,     0,    64,    53,     0,     0,    75,
       0,     0,     0,     0,     0,    31,     0,     0,    60,     0,
       0,     0,     0,    55,     0,     0,     0,     0,    79,     0,
       0,    49,     0,     0,     0,    82,    81,    31,    24,    32,
      26,    33,     0,     0,     0,     0,    53,    57,    53,     0,
      35,     0,     0,     0,    77,     0,     0,    51,     0,     0,
       0,     0,     0,    61,   101,     0,     0,    48,     0,     0,
       0,    54,    53,     0,     0,    78,     0,     0,    50,     0,
      41,    80,    82,     0,    37,    64,     0,     0,    34,    56,
       0,     0,     0,    31,     0,    73,    76,     0,    52,    83,
      40,     0,     0,    62,    42,    59,    53,    43,     0,    68,
      71,     0,     0,    46,     0,   104,    38,     0,     0,     0,
      45,    72,    70,    69,     0,     0,    39,    63,    58,    44,
      74,     0,     0,     0,    31,     0,    47
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -154,  -154,  -154,  -154,  -154,   278,   267,  -154,   293,  -154,
    -154,  -154,  -154,  -154,  -154,   230,   226,  -103,   -80,  -154,
     147,  -153,  -154,   175,   117,  -113,   243,   119,   132,  -154,
    -154,  -154,   191,   178,   -10,  -154,    -5
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     7,    13,    29,    14,     3,    34,     9,     4,
      17,    15,    28,    56,    80,    79,    89,   124,   125,   123,
     166,   135,   158,   129,   212,    61,    85,   205,   221,   232,
     223,   140,   145,   171,    62,    25,    26
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      24,   112,   131,   178,    10,   181,    27,    31,   126,    51,
      52,   113,   114,    39,   115,    11,    37,    38,    32,   110,
     111,    57,   149,    12,     5,    60,    -7,    58,     1,   202,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,   147,   172,   101,   102,     6,   132,   103,
     104,   105,   106,   179,   107,   108,    19,    20,   133,   134,
      35,     8,    36,   229,   180,   201,    35,    86,   195,    16,
      19,    20,    18,   144,    92,   133,    12,   109,   219,   101,
     102,    96,   211,   103,   104,   105,   106,    23,   107,   108,
      53,    21,    22,    54,    19,    20,   120,    19,   174,    55,
     218,    23,   127,   203,   204,   138,   139,   136,   137,   130,
      77,   109,   146,    78,    81,    21,    22,    83,    21,    22,
      87,    88,   156,    91,   220,    23,    40,    41,    23,   159,
      90,    99,   167,    46,    47,    48,    49,    50,    51,    52,
     220,   245,    94,   175,    48,    49,    50,    51,    52,    95,
     116,   100,   117,   185,   204,   187,   118,   119,   121,   191,
     146,   122,   128,   244,   152,   143,   197,   148,   150,   199,
     153,   154,   155,   157,   160,   200,   163,   164,   165,   167,
     168,   169,   170,   176,   177,   182,   213,   133,   186,   183,
     188,   216,    40,    41,    42,    43,    44,    45,   190,    46,
      47,    48,    49,    50,    51,    52,   184,   193,   194,   198,
     206,   210,    63,   215,   217,   222,   224,   213,   225,   226,
     228,   235,   230,   238,   233,   241,    40,    41,    42,    43,
      44,    45,   234,    46,    47,    48,    49,    50,    51,    52,
      40,    41,    42,    43,    44,    45,   161,    46,    47,    48,
      49,    50,    51,    52,    40,    41,    42,    43,    44,    45,
     162,    46,    47,    48,    49,    50,    51,    52,    40,    41,
      42,    43,    44,    45,   242,    46,    47,    48,    49,    50,
      51,    52,   236,   243,   239,   246,    82,    40,    41,    42,
      43,    44,    45,    30,    46,    47,    48,    49,    50,    51,
      52,    59,   141,   142,    40,    41,    42,    43,    44,    45,
      33,    46,    47,    48,    49,    50,    51,    52,    93,    98,
      84,    40,    41,    42,    43,    44,    45,   173,    46,    47,
      48,    49,    50,    51,    52,    97,   208,   133,    40,    41,
      42,    43,    44,    45,   237,    46,    47,    48,    49,    50,
      51,    52,   231,   240,   189,    40,    41,    42,    43,    44,
      45,   192,    46,    47,    48,    49,    50,    51,    52,     0,
     209,   196,    40,    41,    42,    43,    44,    45,     0,    46,
      47,    48,    49,    50,    51,    52,     0,     0,   227,    40,
      41,    42,    43,    44,    45,     0,    46,    47,    48,    49,
      50,    51,    52,     0,   151,    40,    41,    42,    43,    44,
      45,     0,    46,    47,    48,    49,    50,    51,    52,     0,
     207,    40,    41,    42,    43,    44,    45,     0,    46,    47,
      48,    49,    50,    51,    52,     0,   214,    40,    41,    42,
      43,    44,    45,     0,    46,    47,    48,    49,    50,    51,
      52,    40,    41,    42,    43,    44,     0,     0,    46,    47,
      48,    49,    50,    51,    52,    40,    41,    42,    43,     0,
       0,     0,    46,    47,    48,    49,    50,    51,    52
};

static const yytype_int16 yycheck[] =
{
      10,    21,   115,   156,    21,   158,    11,    21,   111,    27,
      28,    31,    32,    23,    34,    32,    21,    22,    32,    99,
     100,    31,   125,     4,     4,    35,     7,    32,     5,   182,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,   123,   147,     4,     5,     0,    21,     8,
       9,    10,    11,    21,    13,    14,     3,     4,    31,    32,
      32,    31,    34,   216,    32,    21,    32,    77,    34,     4,
       3,     4,    30,     6,    84,    31,     4,    36,    37,     4,
       5,    91,   195,     8,     9,    10,    11,    34,    13,    14,
      33,    24,    25,    34,     3,     4,   106,     3,     4,     7,
     203,    34,   112,   183,   184,     4,     5,   117,   118,   114,
      21,    36,   122,     5,    33,    24,    25,    35,    24,    25,
       4,    31,   132,    21,   204,    34,    15,    16,    34,   134,
      34,    36,   142,    22,    23,    24,    25,    26,    27,    28,
     220,   244,    35,   153,    24,    25,    26,    27,    28,    35,
       4,    36,    34,   163,   234,   165,    34,    34,    34,   169,
     170,    34,     4,   243,    31,     6,   176,    37,    37,   179,
      21,    33,    35,     4,    30,   180,    21,     4,    30,   189,
      35,    31,    31,    21,    30,    33,   196,    31,    21,    36,
      30,   201,    15,    16,    17,    18,    19,    20,    30,    22,
      23,    24,    25,    26,    27,    28,    36,    35,    37,    30,
       3,    30,    35,    33,    30,    12,     4,   227,    35,    30,
      21,    21,    37,   228,    37,   235,    15,    16,    17,    18,
      19,    20,    36,    22,    23,    24,    25,    26,    27,    28,
      15,    16,    17,    18,    19,    20,    35,    22,    23,    24,
      25,    26,    27,    28,    15,    16,    17,    18,    19,    20,
      35,    22,    23,    24,    25,    26,    27,    28,    15,    16,
      17,    18,    19,    20,    35,    22,    23,    24,    25,    26,
      27,    28,    30,    36,    30,    37,    33,    15,    16,    17,
      18,    19,    20,    15,    22,    23,    24,    25,    26,    27,
      28,    34,    30,    31,    15,    16,    17,    18,    19,    20,
      17,    22,    23,    24,    25,    26,    27,    28,    88,    93,
      31,    15,    16,    17,    18,    19,    20,   152,    22,    23,
      24,    25,    26,    27,    28,    92,   189,    31,    15,    16,
      17,    18,    19,    20,   227,    22,    23,    24,    25,    26,
      27,    28,   220,   234,    31,    15,    16,    17,    18,    19,
      20,   170,    22,    23,    24,    25,    26,    27,    28,    -1,
     192,    31,    15,    16,    17,    18,    19,    20,    -1,    22,
      23,    24,    25,    26,    27,    28,    -1,    -1,    31,    15,
      16,    17,    18,    19,    20,    -1,    22,    23,    24,    25,
      26,    27,    28,    -1,    30,    15,    16,    17,    18,    19,
      20,    -1,    22,    23,    24,    25,    26,    27,    28,    -1,
      30,    15,    16,    17,    18,    19,    20,    -1,    22,    23,
      24,    25,    26,    27,    28,    -1,    30,    15,    16,    17,
      18,    19,    20,    -1,    22,    23,    24,    25,    26,    27,
      28,    15,    16,    17,    18,    19,    -1,    -1,    22,    23,
      24,    25,    26,    27,    28,    15,    16,    17,    18,    -1,
      -1,    -1,    22,    23,    24,    25,    26,    27,    28
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,    39,    44,    47,     4,     0,    40,    31,    46,
      21,    32,     4,    41,    43,    49,     4,    48,    30,     3,
       4,    24,    25,    34,    72,    73,    74,    74,    50,    42,
      43,    21,    32,    46,    45,    32,    34,    74,    74,    72,
      15,    16,    17,    18,    19,    20,    22,    23,    24,    25,
      26,    27,    28,    33,    34,     7,    51,    72,    74,    44,
      72,    63,    72,    35,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    21,     5,    53,
      52,    33,    33,    35,    31,    64,    72,     4,    31,    54,
      34,    21,    72,    53,    35,    35,    72,    64,    54,    36,
      36,     4,     5,     8,     9,    10,    11,    13,    14,    36,
      56,    56,    21,    31,    32,    34,     4,    34,    34,    34,
      72,    34,    34,    57,    55,    56,    55,    72,     4,    61,
      74,    63,    21,    31,    32,    59,    72,    72,     4,     5,
      69,    30,    31,     6,     6,    70,    72,    56,    37,    55,
      37,    30,    31,    21,    33,    35,    72,     4,    60,    74,
      30,    35,    35,    21,     4,    30,    58,    72,    35,    31,
      31,    71,    55,    61,     4,    72,    21,    30,    59,    21,
      32,    59,    33,    36,    36,    72,    21,    72,    30,    31,
      30,    72,    70,    35,    37,    34,    31,    72,    30,    72,
      74,    21,    59,    56,    56,    65,     3,    30,    58,    71,
      30,    63,    62,    72,    30,    33,    72,    30,    55,    37,
      56,    66,    12,    68,     4,    35,    30,    31,    21,    59,
      37,    66,    67,    37,    36,    21,    30,    62,    74,    30,
      65,    72,    35,    36,    56,    55,    37
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    38,    40,    39,    41,    42,    41,    43,    43,    44,
      45,    44,    46,    46,    47,    47,    47,    47,    48,    48,
      48,    48,    48,    50,    49,    52,    51,    53,    53,    54,
      54,    55,    55,    56,    56,    56,    57,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    58,    58,    59,    59,    60,    60,    60,    60,    60,
      61,    61,    62,    62,    63,    63,    64,    64,    65,    65,
      66,    67,    67,    68,    68,    69,    69,    69,    69,    69,
      70,    70,    71,    71,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    73,    73,
      73,    74,    74,    74,    74,    74
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     3,     0,     0,     3,     0,     2,     0,
       0,     5,     0,     3,     4,     2,     5,     7,     0,     3,
       1,     6,     4,     0,    10,     0,     8,     0,     2,     0,
       3,     0,     2,     4,     6,     4,     0,     5,     8,     9,
       6,     5,     7,     7,     9,     8,     7,    14,     5,     3,
       5,     1,     3,     0,     3,     0,     3,     1,     6,     4,
       1,     3,     1,     3,     0,     2,     0,     3,     2,     3,
       2,     0,     1,     0,     3,     0,     4,     2,     3,     1,
       3,     1,     0,     3,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     2,
       2,     1,     1,     4,     4,     3
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
  case 2: /* $@1: %empty  */
#line 95 "trad2.y"
                                                { ; }
#line 1428 "trad2.tab.c"
    break;

  case 3: /* axioma: bloque_variables $@1 bloque_funciones  */
#line 96 "trad2.y"
                                                { ; }
#line 1434 "trad2.tab.c"
    break;

  case 4: /* bloque_funciones: %empty  */
#line 102 "trad2.y"
                                      { ; }
#line 1440 "trad2.tab.c"
    break;

  case 5: /* $@2: %empty  */
#line 103 "trad2.y"
                                 { printf ("%s", yyvsp[0].code) ; }
#line 1446 "trad2.tab.c"
    break;

  case 6: /* bloque_funciones: funcion_recur $@2 main_nt  */
#line 104 "trad2.y"
                                            { printf("%s",temp) ; }
#line 1452 "trad2.tab.c"
    break;

  case 7: /* funcion_recur: %empty  */
#line 108 "trad2.y"
                                { sprintf(temp, "");
                                        yyval.code = gen_code(temp ) ;}
#line 1459 "trad2.tab.c"
    break;

  case 8: /* funcion_recur: funcion funcion_recur  */
#line 110 "trad2.y"
                                     { sprintf (temp, "%s\n%s", yyvsp[-1].code, yyvsp[0].code) ;
                                        yyval.code = gen_code (temp) ; }
#line 1466 "trad2.tab.c"
    break;

  case 9: /* bloque_variables: %empty  */
#line 117 "trad2.y"
                                       { ; }
#line 1472 "trad2.tab.c"
    break;

  case 10: /* $@3: %empty  */
#line 118 "trad2.y"
                                                                  { printf ("%s %s\n", yyvsp[-2].code, yyvsp[-1].code) ; }
#line 1478 "trad2.tab.c"
    break;

  case 11: /* bloque_variables: variables_globales r_variables_gl ';' $@3 bloque_variables  */
#line 119 "trad2.y"
                                                     { ; }
#line 1484 "trad2.tab.c"
    break;

  case 12: /* r_variables_gl: %empty  */
#line 123 "trad2.y"
                                        { sprintf(temp, "");
                                        yyval.code = gen_code(temp ) ;}
#line 1491 "trad2.tab.c"
    break;

  case 13: /* r_variables_gl: ',' decla_variables_recur r_variables_gl  */
#line 125 "trad2.y"
                                                         { sprintf (temp, "%s %s", yyvsp[-1].code, yyvsp[0].code) ;
                                                            yyval.code = gen_code (temp) ; }
#line 1498 "trad2.tab.c"
    break;

  case 14: /* variables_globales: INTEGER IDENTIF '=' expresion  */
#line 130 "trad2.y"
                                                    {if (yyvsp[0].type == ARIT){
                                                    sprintf(var_expresion, "%s", yyvsp[0].code);}
                                                    else if(yyvsp[0].type == BOOL){
                                                    { sprintf (var_expresion, "(if %s 1 0)", yyvsp[0].code); }}
                                                    sprintf (temp, "(setq %s %s)", yyvsp[-2].code, var_expresion) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1509 "trad2.tab.c"
    break;

  case 15: /* variables_globales: INTEGER IDENTIF  */
#line 136 "trad2.y"
                                           { sprintf (temp, "(setq %s 0)", yyvsp[0].code) ;
                                            yyval.code = gen_code (temp) ; }
#line 1516 "trad2.tab.c"
    break;

  case 16: /* variables_globales: INTEGER IDENTIF '[' operando ']'  */
#line 138 "trad2.y"
                                             { sprintf (temp, "(setq %s (make-array %s))", yyvsp[-3].code, yyvsp[-1].code) ;
                                             yyval.code = gen_code (temp) ; }
#line 1523 "trad2.tab.c"
    break;

  case 17: /* variables_globales: INTEGER IDENTIF '[' operando ']' '=' expresion  */
#line 140 "trad2.y"
                                                           { if (yyvsp[0].type == ARIT){
                                                            sprintf(var_expresion, "%s", yyvsp[0].code);}
                                                            else if(yyvsp[0].type == BOOL){
                                                            { sprintf (var_expresion, "(if %s 1 0)", yyvsp[0].code); }}
                                                            sprintf (temp, "(setf (aref %s %s) %s)", yyvsp[-5].code, yyvsp[-3].code,  var_expresion) ;
                                                            yyval.code = gen_code (temp) ; }
#line 1534 "trad2.tab.c"
    break;

  case 18: /* decla_variables_recur: %empty  */
#line 149 "trad2.y"
                                    {sprintf(temp, "");
                                        yyval.code = gen_code(temp ) ;}
#line 1541 "trad2.tab.c"
    break;

  case 19: /* decla_variables_recur: IDENTIF '=' expresion  */
#line 151 "trad2.y"
                                           { if (yyvsp[0].type == ARIT){
                                                sprintf(var_expresion, "%s", yyvsp[0].code);}
                                                else if(yyvsp[0].type == BOOL){
                                                { sprintf (var_expresion, "(if %s 1 0)", yyvsp[0].code); }}
                                                 sprintf (temp, "(setq %s %s)", yyvsp[-2].code,  var_expresion) ; 
                                                yyval.code = gen_code (temp) ; }
#line 1552 "trad2.tab.c"
    break;

  case 20: /* decla_variables_recur: IDENTIF  */
#line 157 "trad2.y"
                                        { sprintf (temp, "(setq %s 0)", yyvsp[0].code) ;
                                           yyval.code = gen_code (temp) ; }
#line 1559 "trad2.tab.c"
    break;

  case 21: /* decla_variables_recur: IDENTIF '[' operando ']' '=' expresion  */
#line 159 "trad2.y"
                                                   { if (yyvsp[0].type == ARIT){
                                                        sprintf(var_expresion, "%s", yyvsp[0].code);}
                                                        else if(yyvsp[0].type == BOOL){
                                                        { sprintf (var_expresion, "(if %s 1 0)", yyvsp[0].code); }}
                                                        sprintf (temp, "(setf (aref %s %s) %s)", yyvsp[-5].code, yyvsp[-3].code,  var_expresion) ;
                                                        yyval.code = gen_code (temp) ; }
#line 1570 "trad2.tab.c"
    break;

  case 22: /* decla_variables_recur: IDENTIF '[' operando ']'  */
#line 165 "trad2.y"
                                     { sprintf (temp, "(setq %s (make-array %s))", yyvsp[-3].code, yyvsp[-1].code) ;
                                           yyval.code = gen_code (temp) ; }
#line 1577 "trad2.tab.c"
    break;

  case 23: /* $@4: %empty  */
#line 175 "trad2.y"
                    {sprintf(nombre_funcion, "%s", yyvsp[0].code);}
#line 1583 "trad2.tab.c"
    break;

  case 24: /* funcion: IDENTIF $@4 '(' parametros parametros_recur ')' '{' sentencias_loc n_sentencias_loc '}'  */
#line 175 "trad2.y"
                                                                                                                                          { sprintf (temp, "(defun %s (%s%s) \n%s \n%s%s)", yyvsp[-9].code, yyvsp[-6].code, yyvsp[-5].code, yyvsp[-2].code, yyvsp[-1].code, var_let[cont]) ;
                                                                                                                                            memset(var_let[cont], 0, sizeof(var_let[cont]));
                                                                                                                                            yyval.code = gen_code (temp) ; }
#line 1591 "trad2.tab.c"
    break;

  case 25: /* $@5: %empty  */
#line 181 "trad2.y"
                     {sprintf(nombre_funcion, "%s", yyvsp[0].code);}
#line 1597 "trad2.tab.c"
    break;

  case 26: /* main_nt: MAIN $@5 '(' ')' '{' sentencias_loc n_sentencias_loc '}'  */
#line 181 "trad2.y"
                                                                                                                { sprintf (temp, "(defun main () \n%s \n%s%s) \n", yyvsp[-2].code, yyvsp[-1].code, var_let[cont]) ;
                                                                                                                     yyval.code = gen_code (temp) ; }
#line 1604 "trad2.tab.c"
    break;

  case 27: /* parametros: %empty  */
#line 188 "trad2.y"
                                         { sprintf(temp, "");
                                        yyval.code = gen_code(temp ) ;}
#line 1611 "trad2.tab.c"
    break;

  case 28: /* parametros: INTEGER IDENTIF  */
#line 190 "trad2.y"
                                          { sprintf (temp, "%s", yyvsp[0].code) ;
                                           yyval.code = gen_code (temp) ; }
#line 1618 "trad2.tab.c"
    break;

  case 29: /* parametros_recur: %empty  */
#line 194 "trad2.y"
                                    {sprintf(temp, "");
                                        yyval.code = gen_code(temp ) ;}
#line 1625 "trad2.tab.c"
    break;

  case 30: /* parametros_recur: ',' parametros parametros_recur  */
#line 196 "trad2.y"
                                             { sprintf (temp, " %s%s", yyvsp[-1].code, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1632 "trad2.tab.c"
    break;

  case 31: /* n_sentencias_loc: %empty  */
#line 203 "trad2.y"
                                   {sprintf(temp, "");
                                        yyval.code = gen_code(temp ) ;}
#line 1639 "trad2.tab.c"
    break;

  case 32: /* n_sentencias_loc: sentencias_loc n_sentencias_loc  */
#line 205 "trad2.y"
                                               { sprintf (temp, "%s \n%s", yyvsp[-1].code, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1646 "trad2.tab.c"
    break;

  case 33: /* sentencias_loc: IDENTIF '=' expresion ';'  */
#line 211 "trad2.y"
                                                      {     if (yyvsp[-1].type == ARIT){
                                                            sprintf(var_expresion, "%s", yyvsp[-1].code);}
                                                            else if(yyvsp[-1].type == BOOL){
                                                            { sprintf (var_expresion, "(if %s 1 0)", yyvsp[-1].code); }}
                                                            sprintf (temp, "(setq %s %s) ", yyvsp[-3].code, var_expresion) ;
                                                            yyval.code = gen_code (temp) ; }
#line 1657 "trad2.tab.c"
    break;

  case 34: /* sentencias_loc: INTEGER IDENTIF '=' expresion r_variables_loc ';'  */
#line 217 "trad2.y"
                                                                 { if (yyvsp[-2].type == ARIT){
                                                                    sprintf(var_expresion, "%s", yyvsp[-2].code);}
                                                                    else if(yyvsp[-2].type == BOOL){
                                                                    { sprintf (var_expresion, "(if %s 1 0)", yyvsp[-2].code); }}
                                                                    sprintf (temp, "(let ((%s %s)%s)", yyvsp[-4].code, var_expresion, yyvsp[-1].code) ;
                                                                    sprintf(var_let[cont], "%s)\n",var_let[cont]);
                                                                    yyval.code = gen_code (temp) ; }
#line 1669 "trad2.tab.c"
    break;

  case 35: /* sentencias_loc: INTEGER IDENTIF r_variables_loc ';'  */
#line 224 "trad2.y"
                                                   { sprintf (temp, "(let ((%s 0)%s)", yyvsp[-2].code, yyvsp[-1].code) ;
                                                     sprintf(var_let[cont], "%s)\n",var_let[cont]);
                                                     yyval.code = gen_code (temp) ; }
#line 1677 "trad2.tab.c"
    break;

  case 36: /* $@6: %empty  */
#line 229 "trad2.y"
                  {cont++;}
#line 1683 "trad2.tab.c"
    break;

  case 37: /* sentencias_loc: '{' $@6 sentencias_loc n_sentencias_loc '}'  */
#line 229 "trad2.y"
                                                                 { sprintf (temp, "%s \n%s%s", yyvsp[-2].code, yyvsp[-1].code, var_let[cont]) ;
                                                                    {cont--;}
                                                                    yyval.code = gen_code (temp) ; }
#line 1691 "trad2.tab.c"
    break;

  case 38: /* sentencias_loc: IDENTIF ',' multiples_variables '=' expresion ',' expresion_recur ';'  */
#line 234 "trad2.y"
                                                                                        { if (yyvsp[-3].type == ARIT){
                                                                                          sprintf(var_expresion, "%s", yyvsp[-3].code);}
                                                                                          else if(yyvsp[-3].type == BOOL){
                                                                                          { sprintf (var_expresion, "(if %s 1 0)", yyvsp[-3].code); }}
                                                                                          sprintf (temp, "(setf (values %s %s) (values %s %s))", yyvsp[-7].code, yyvsp[-5].code, var_expresion, yyvsp[-1].code) ; 
                                                                                          yyval.code = gen_code (temp) ; }
#line 1702 "trad2.tab.c"
    break;

  case 39: /* sentencias_loc: IDENTIF ',' multiples_variables '=' IDENTIF '(' argumentos_funcion ')' ';'  */
#line 240 "trad2.y"
                                                                                        { sprintf (temp, "(setf (values %s %s) (%s %s))", yyvsp[-8].code, yyvsp[-6].code, yyvsp[-4].code, yyvsp[-2].code) ; 
                                                                    yyval.code = gen_code (temp) ; }
#line 1709 "trad2.tab.c"
    break;

  case 40: /* sentencias_loc: PRINTF '(' cadena_printf n_cadena_printf ')' ';'  */
#line 244 "trad2.y"
                                                                          { sprintf (temp, "(print %s)%s", yyvsp[-3].code, yyvsp[-2].code)  ;  
                                           yyval.code = gen_code (temp) ; }
#line 1716 "trad2.tab.c"
    break;

  case 41: /* sentencias_loc: PUTS '(' STRING ')' ';'  */
#line 246 "trad2.y"
                                           { sprintf (temp, "(print \"%s\")", yyvsp[-2].code) ;
                                           yyval.code = gen_code (temp) ; }
#line 1723 "trad2.tab.c"
    break;

  case 42: /* sentencias_loc: IDENTIF '[' operando ']' '=' expresion ';'  */
#line 250 "trad2.y"
                                                        {    if (yyvsp[-1].type == ARIT){
                                                            sprintf(var_expresion, "%s", yyvsp[-1].code);}
                                                            else if(yyvsp[-1].type == BOOL){
                                                            { sprintf (var_expresion, "(if %s 1 0)", yyvsp[-1].code); }}  
                                                            sprintf (temp, "(setf (aref %s %s) %s)", yyvsp[-6].code, yyvsp[-4].code, var_expresion) ;
                                                            yyval.code = gen_code (temp) ; }
#line 1734 "trad2.tab.c"
    break;

  case 43: /* sentencias_loc: INTEGER IDENTIF '[' operando ']' r_variables_loc ';'  */
#line 257 "trad2.y"
                                                                 { sprintf (temp, "(let (%s (make-array %s)%s)", yyvsp[-5].code, yyvsp[-3].code, yyvsp[-1].code) ;
                                                                        sprintf(var_let[cont], "%s)\n",var_let[cont]);
                                                                        yyval.code = gen_code (temp) ; }
#line 1742 "trad2.tab.c"
    break;

  case 44: /* sentencias_loc: INTEGER IDENTIF '[' operando ']' '=' expresion r_variables_loc ';'  */
#line 260 "trad2.y"
                                                                               { if (yyvsp[-2].type == ARIT){
                                                                                 sprintf(var_expresion, "%s", yyvsp[-2].code);}
                                                                                 else if(yyvsp[-2].type == BOOL){
                                                                                 { sprintf (var_expresion, "(if %s 1 0)", yyvsp[-2].code); }}
                                                                                sprintf (temp, "(let ((%s (make-array %s))%s %s)", yyvsp[-7].code, yyvsp[-5].code, var_expresion, yyvsp[-1].code) ;
                                                                                sprintf(var_let[cont], "%s)\n",var_let[cont]);
                                                                                yyval.code = gen_code (temp) ; }
#line 1754 "trad2.tab.c"
    break;

  case 45: /* sentencias_loc: WHILE '(' expresion ')' '{' sentencias_loc n_sentencias_loc '}'  */
#line 269 "trad2.y"
                                                                               { if (yyvsp[-5].type == ARIT){
                                                                                sprintf (var_expresion, "(/= 0 %s)", yyvsp[-5].code);
                                                                                }else if (yyvsp[-5].type == BOOL){
                                                                                sprintf (var_expresion,"%s", yyvsp[-5].code); }
                                                                                sprintf (temp, "(loop while %s do \n%s \n%s)", var_expresion, yyvsp[-2].code, yyvsp[-1].code) ;
                                                                                yyval.code = gen_code (temp) ; }
#line 1765 "trad2.tab.c"
    break;

  case 46: /* sentencias_loc: IF '(' expresion ')' '{' sentencia_if condicion_else  */
#line 275 "trad2.y"
                                                                             {  if (yyvsp[-4].type == ARIT){
                                                                                sprintf (var_expresion, "(/= 0 %s)", yyvsp[-4].code);
                                                                                }else if (yyvsp[-4].type == BOOL){
                                                                                sprintf(var_expresion, "%s", yyvsp[-4].code); }
                                                                                sprintf (temp, "(if %s \n%s \n%s)", var_expresion, yyvsp[-1].code, yyvsp[0].code) ;
                                                                                        yyval.code = gen_code (temp) ; }
#line 1776 "trad2.tab.c"
    break;

  case 47: /* sentencias_loc: FOR '(' inicializar_for ';' expresion ';' IDENTIF '=' expresion ')' '{' sentencias_loc n_sentencias_loc '}'  */
#line 281 "trad2.y"
                                                                                                                           { if (yyvsp[-9].type == ARIT){
                                                                                                                            sprintf (var_expresion, "(/= 0 %s)", yyvsp[-9].code);
                                                                                                                            }else if (yyvsp[-9].type == BOOL){
                                                                                                                            sprintf (var_expresion, "%s", yyvsp[-9].code); }
                                                                                                                            if (yyvsp[-5].type == ARIT){
                                                                                                                            sprintf (var_expresion2, "%s", yyvsp[-5].code);
                                                                                                                            }else if (yyvsp[-5].type == BOOL){
                                                                                                                            sprintf (var_expresion2, "(if %s 1 0)", yyvsp[-5].code); }
                                                                                                                            sprintf (temp, "%s\n(loop while %s do \n%s \n%s(setq %s %s))", yyvsp[-11].code, var_expresion, yyvsp[-2].code, yyvsp[-1].code, yyvsp[-7].code, var_expresion2) ;
                                                                                                                            yyval.code = gen_code (temp) ; }
#line 1791 "trad2.tab.c"
    break;

  case 48: /* sentencias_loc: IDENTIF '(' argumentos_funcion ')' ';'  */
#line 292 "trad2.y"
                                                     { sprintf (temp, "(%s %s)", yyvsp[-4].code, yyvsp[-2].code) ;
                                           yyval.code = gen_code (temp) ; }
#line 1798 "trad2.tab.c"
    break;

  case 49: /* sentencias_loc: RETURN expresion ';'  */
#line 296 "trad2.y"
                                   { if (yyvsp[-1].type == ARIT){
                                    sprintf(var_expresion, "%s", yyvsp[-1].code);}
                                    else if(yyvsp[-1].type == BOOL){
                                    { sprintf (var_expresion, "(if %s 1 0)", yyvsp[-1].code); }}
                                    sprintf (temp, "(return-from %s %s)", nombre_funcion, var_expresion) ;
                                    yyval.code = gen_code (temp) ; }
#line 1809 "trad2.tab.c"
    break;

  case 50: /* sentencias_loc: RETURN expresion ',' return_recursivo ';'  */
#line 302 "trad2.y"
                                                        { if (yyvsp[-3].type == ARIT){
                                                        sprintf(var_expresion,"%s", yyvsp[-3].code);}
                                                        else if(yyvsp[-3].type == BOOL){
                                                        { sprintf (var_expresion, "(if %s 1 0)", yyvsp[-3].code); }}
                                                        sprintf (temp, "(return-from %s values(%s %s))", nombre_funcion, var_expresion, yyvsp[-1].code) ;
                                                        yyval.code = gen_code (temp) ; }
#line 1820 "trad2.tab.c"
    break;

  case 51: /* return_recursivo: expresion  */
#line 310 "trad2.y"
                                 { if (yyvsp[0].type == ARIT){
                                   sprintf(var_expresion,"%s", yyvsp[0].code);}
                                    else if(yyvsp[0].type == BOOL){
                                        { sprintf (var_expresion, "(if %s 1 0)", yyvsp[0].code); }}
                                    sprintf (temp, "%s", var_expresion) ;
                                    yyval.code = gen_code (temp) ; }
#line 1831 "trad2.tab.c"
    break;

  case 52: /* return_recursivo: expresion ',' return_recursivo  */
#line 316 "trad2.y"
                                                     { if (yyvsp[-2].type == ARIT){
                                               sprintf(var_expresion,"%s", yyvsp[-2].code);}
                                                else if(yyvsp[-2].type == BOOL){
                                                    { sprintf (var_expresion, "(if %s 1 0)", yyvsp[-2].code); }}
                                                    sprintf (temp, "%s %s", var_expresion, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1842 "trad2.tab.c"
    break;

  case 53: /* r_variables_loc: %empty  */
#line 325 "trad2.y"
                                {sprintf(temp, "");
                                        yyval.code = gen_code(temp ) ;}
#line 1849 "trad2.tab.c"
    break;

  case 54: /* r_variables_loc: ',' decla_variables_recur_loc r_variables_loc  */
#line 327 "trad2.y"
                                                            { sprintf (temp, "%s %s", yyvsp[-1].code, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1856 "trad2.tab.c"
    break;

  case 55: /* decla_variables_recur_loc: %empty  */
#line 332 "trad2.y"
                                        {sprintf(temp, "");
                                        yyval.code = gen_code(temp ) ;}
#line 1863 "trad2.tab.c"
    break;

  case 56: /* decla_variables_recur_loc: IDENTIF '=' expresion  */
#line 334 "trad2.y"
                                           {    if (yyvsp[0].type == ARIT){
                                                sprintf(var_expresion, "%s", yyvsp[0].code);}
                                                else if(yyvsp[0].type == BOOL){
                                                { sprintf (var_expresion, "(if %s 1 0)", yyvsp[0].code); }}
                                                sprintf (temp, "\n(%s %s)", yyvsp[-2].code, var_expresion) ; 
                                                yyval.code = gen_code (temp) ; }
#line 1874 "trad2.tab.c"
    break;

  case 57: /* decla_variables_recur_loc: IDENTIF  */
#line 340 "trad2.y"
                                        { sprintf (temp, "\n(%s 0)", yyvsp[0].code) ;
                                           yyval.code = gen_code (temp) ; }
#line 1881 "trad2.tab.c"
    break;

  case 58: /* decla_variables_recur_loc: IDENTIF '[' operando ']' '=' operando  */
#line 342 "trad2.y"
                                                  { sprintf (temp, "\n((aref %s %s) %s)", yyvsp[-5].code, yyvsp[-3].code, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1888 "trad2.tab.c"
    break;

  case 59: /* decla_variables_recur_loc: IDENTIF '[' operando ']'  */
#line 344 "trad2.y"
                                     { sprintf (temp, "\n(setq %s (make-array %s))", yyvsp[-3].code, yyvsp[-1].code) ;
                                           yyval.code = gen_code (temp) ; }
#line 1895 "trad2.tab.c"
    break;

  case 60: /* multiples_variables: IDENTIF  */
#line 356 "trad2.y"
                                                    { sprintf (temp, "%s", yyvsp[0].code) ;
                                                        yyval.code = gen_code (temp) ; }
#line 1902 "trad2.tab.c"
    break;

  case 61: /* multiples_variables: IDENTIF ',' multiples_variables  */
#line 358 "trad2.y"
                                                     { sprintf (temp, "%s %s", yyvsp[-2].code, yyvsp[0].code) ;
                                                         yyval.code = gen_code (temp) ; }
#line 1909 "trad2.tab.c"
    break;

  case 62: /* expresion_recur: expresion  */
#line 363 "trad2.y"
                                    {   if (yyvsp[0].type == ARIT){
                                       sprintf(var_expresion,"%s", yyvsp[0].code);}
                                        else if(yyvsp[0].type == BOOL){
                                        { sprintf (var_expresion, "(if %s 1 0)", yyvsp[0].code); }}
                                        sprintf (temp, "%s", var_expresion) ;
                                        yyval.code = gen_code (temp) ; }
#line 1920 "trad2.tab.c"
    break;

  case 63: /* expresion_recur: expresion ',' expresion_recur  */
#line 369 "trad2.y"
                                            { if (yyvsp[-2].type == ARIT){
                                               sprintf(var_expresion,"%s", yyvsp[-2].code);}
                                                else if(yyvsp[-2].type == BOOL){
                                                { sprintf (var_expresion, "(if %s 1 0)", yyvsp[-2].code); }}
                                                sprintf (temp, "%s %s", var_expresion, yyvsp[0].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 1931 "trad2.tab.c"
    break;

  case 64: /* argumentos_funcion: %empty  */
#line 380 "trad2.y"
                                     { sprintf(temp, "");
                                        yyval.code = gen_code(temp ) ;}
#line 1938 "trad2.tab.c"
    break;

  case 65: /* argumentos_funcion: expresion argumentos_funcion_recur  */
#line 382 "trad2.y"
                                                  {if (yyvsp[-1].type == ARIT){
                                                   sprintf(var_expresion,"%s", yyvsp[-1].code);}
                                                    else if (yyvsp[-1].type == BOOL){
                                                    {sprintf (var_expresion, "(if %s 1 0)", yyvsp[-1].code);}} 
                                                    sprintf (temp, "%s %s", var_expresion, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1949 "trad2.tab.c"
    break;

  case 66: /* argumentos_funcion_recur: %empty  */
#line 391 "trad2.y"
                                           {  sprintf(temp, "");
                                        yyval.code = gen_code(temp ) ;}
#line 1956 "trad2.tab.c"
    break;

  case 67: /* argumentos_funcion_recur: ',' expresion argumentos_funcion_recur  */
#line 393 "trad2.y"
                                                      { if(yyvsp[-1].type == ARIT){
                                                    sprintf(var_expresion,"%s", yyvsp[-1].code);}
                                                    else if(yyvsp[-1].type == BOOL){
                                                    { sprintf (var_expresion, "(if %s 1 0)", yyvsp[-1].code); }}
                                                    sprintf (temp, "%s %s", var_expresion, yyvsp[0].code) ;
                                                    yyval.code = gen_code (temp) ; }
#line 1967 "trad2.tab.c"
    break;

  case 68: /* sentencia_if: sentencias_loc '}'  */
#line 405 "trad2.y"
                                          { sprintf (temp, "%s", yyvsp[-1].code) ;
                                           yyval.code = gen_code (temp) ; }
#line 1974 "trad2.tab.c"
    break;

  case 69: /* sentencia_if: sentencias_loc sentencia_if_recur '}'  */
#line 407 "trad2.y"
                                                    { sprintf (temp, "(progn %s\n%s)", yyvsp[-2].code, yyvsp[-1].code) ;
                                                                                        yyval.code = gen_code (temp) ; }
#line 1981 "trad2.tab.c"
    break;

  case 70: /* sentencia_if_recur: sentencias_loc sentencia_if_recur_2  */
#line 411 "trad2.y"
                                                           { sprintf (temp, "%s\n%s", yyvsp[-1].code, yyvsp[0].code) ;
                                                                                        yyval.code = gen_code (temp) ; }
#line 1988 "trad2.tab.c"
    break;

  case 71: /* sentencia_if_recur_2: %empty  */
#line 415 "trad2.y"
                                        {sprintf(temp, "");
                                        yyval.code = gen_code(temp ) ;}
#line 1995 "trad2.tab.c"
    break;

  case 72: /* sentencia_if_recur_2: sentencia_if_recur  */
#line 417 "trad2.y"
                                       {  sprintf (temp, "%s", yyvsp[0].code) ;
                                            yyval.code = gen_code (temp) ; }
#line 2002 "trad2.tab.c"
    break;

  case 73: /* condicion_else: %empty  */
#line 425 "trad2.y"
                                        {sprintf(temp, "");
                                        yyval.code = gen_code(temp ) ;}
#line 2009 "trad2.tab.c"
    break;

  case 74: /* condicion_else: ELSE '{' sentencia_if  */
#line 427 "trad2.y"
                                    { sprintf (temp, "%s", yyvsp[0].code) ;
                                           yyval.code = gen_code (temp) ; }
#line 2016 "trad2.tab.c"
    break;

  case 75: /* inicializar_for: %empty  */
#line 434 "trad2.y"
                                         {sprintf(temp, "");
                                        yyval.code = gen_code(temp ) ;}
#line 2023 "trad2.tab.c"
    break;

  case 76: /* inicializar_for: INTEGER IDENTIF '=' NUMBER  */
#line 436 "trad2.y"
                                          { sprintf (temp, "(setq %s %d)", yyvsp[-2].code, yyvsp[0].value) ;
                                           yyval.code = gen_code (temp) ; }
#line 2030 "trad2.tab.c"
    break;

  case 77: /* inicializar_for: INTEGER IDENTIF  */
#line 438 "trad2.y"
                                           { sprintf (temp, "(setq %s 0)", yyvsp[0].code) ;
                                           yyval.code = gen_code (temp) ; }
#line 2037 "trad2.tab.c"
    break;

  case 78: /* inicializar_for: IDENTIF '=' expresion  */
#line 440 "trad2.y"
                                                 { if(yyvsp[0].type == ARIT){
                                                    sprintf(var_expresion, "%s", yyvsp[0].code);}
                                                    else if(yyvsp[0].type == BOOL){
                                                    { sprintf (var_expresion, "(if %s 1 0)", yyvsp[0].code); }}
                                                    sprintf (temp, "(setq %s %s)", yyvsp[-2].code, var_expresion) ;
                                                    yyval.code = gen_code (temp) ; }
#line 2048 "trad2.tab.c"
    break;

  case 79: /* inicializar_for: IDENTIF  */
#line 446 "trad2.y"
                                            { sprintf (temp, "(setq %s 0)", yyvsp[0].code) ;
                                                yyval.code = gen_code (temp) ; }
#line 2055 "trad2.tab.c"
    break;

  case 80: /* cadena_printf: STRING ',' expresion  */
#line 454 "trad2.y"
                                     { if (yyvsp[0].type == ARIT){
                                        sprintf(var_expresion, "%s", yyvsp[0].code);}
                                        else if (yyvsp[0].type == BOOL){
                                        {sprintf (var_expresion, "(if %s 1 0)", yyvsp[0].code);}}
                                         sprintf (temp, "%s", var_expresion) ;
                                        yyval.code = gen_code (temp) ; }
#line 2066 "trad2.tab.c"
    break;

  case 81: /* cadena_printf: expresion  */
#line 460 "trad2.y"
                                      {if (yyvsp[0].type == ARIT){
                                           sprintf(var_expresion,"%s", yyvsp[0].code);}
                                            else if (yyvsp[0].type == BOOL){
                                            {sprintf (var_expresion, "(if %s 1 0)", yyvsp[0].code);}}
                                            sprintf (temp, "%s", var_expresion) ;
                                            yyval.code = gen_code (temp) ; }
#line 2077 "trad2.tab.c"
    break;

  case 82: /* n_cadena_printf: %empty  */
#line 468 "trad2.y"
                                   {sprintf(temp, "");
                                        yyval.code = gen_code(temp ) ;}
#line 2084 "trad2.tab.c"
    break;

  case 83: /* n_cadena_printf: ',' cadena_printf n_cadena_printf  */
#line 470 "trad2.y"
                                                { sprintf (temp, "(print %s)%s", yyvsp[-1].code, yyvsp[0].code) ;
                                           yyval.code = gen_code (temp) ; }
#line 2091 "trad2.tab.c"
    break;

  case 84: /* expresion: termino  */
#line 477 "trad2.y"
                                         { yyval = yyvsp[0] ; }
#line 2097 "trad2.tab.c"
    break;

  case 85: /* expresion: expresion '+' expresion  */
#line 478 "trad2.y"
                                         {  if (yyvsp[-2].type == ARIT){
                                             sprintf(var_expresion,"%s", yyvsp[-2].code);}
                                            else if(yyvsp[-2].type == BOOL){
                                            { sprintf (var_expresion, "(if %s 1 0)", yyvsp[-2].code); }}
                                            if (yyvsp[0].type == ARIT){
                                                sprintf(var_expresion2, "%s", yyvsp[0].code);
                                            }else if(yyvsp[0].type == BOOL){
                                                sprintf (var_expresion2, "(if %s 1 0)",  yyvsp[0].code) ;
                                            }
                                            sprintf (temp, "(+ %s %s)", var_expresion, var_expresion2) ;
                                            yyval.type = ARIT;
                                           yyval.code = gen_code (temp) ; }
#line 2114 "trad2.tab.c"
    break;

  case 86: /* expresion: expresion '-' expresion  */
#line 490 "trad2.y"
                                         {  if (yyvsp[-2].type == ARIT){
                                               sprintf(var_expresion,"%s", yyvsp[-2].code);
                                            }
                                            else if(yyvsp[-2].type == BOOL){
                                                { sprintf (var_expresion, "(if %s 1 0)", yyvsp[-2].code); }
                                            }
                                            if (yyvsp[0].type == ARIT){
                                                sprintf(var_expresion2, "%s", yyvsp[0].code);
                                            }else if(yyvsp[0].type == BOOL){
                                                sprintf (var_expresion2, "(if %s 1 0)",  yyvsp[0].code) ;
                                            }
                                            sprintf (temp, "(- %s %s)", var_expresion, var_expresion2) ;
                                            yyval.type = ARIT;
                                           yyval.code = gen_code (temp) ; }
#line 2133 "trad2.tab.c"
    break;

  case 87: /* expresion: expresion '*' expresion  */
#line 504 "trad2.y"
                                         {  if (yyvsp[-2].type == ARIT){
                                                sprintf (var_expresion,"%s", yyvsp[-2].code);
                                            }
                                            else if(yyvsp[-2].type == BOOL){
                                                { sprintf (var_expresion, "(if %s 1 0)", yyvsp[-2].code); }
                                            }
                                            if (yyvsp[0].type == ARIT){
                                                sprintf(var_expresion2,"%s", yyvsp[0].code);
                                            }else if(yyvsp[0].type == BOOL){
                                                sprintf (var_expresion2, "(if %s 1 0)",  yyvsp[0].code) ;
                                            }
                                            sprintf (temp, "(* %s %s)", var_expresion, var_expresion2) ;
                                            yyval.type = ARIT;
                                           yyval.code = gen_code (temp) ; }
#line 2152 "trad2.tab.c"
    break;

  case 88: /* expresion: expresion '/' expresion  */
#line 518 "trad2.y"
                                         { if (yyvsp[-2].type == ARIT){
                                             sprintf(var_expresion,"%s", yyvsp[-2].code);
                                            }
                                            else if(yyvsp[-2].type == BOOL){
                                                { sprintf (var_expresion, "(if %s 1 0)", yyvsp[-2].code); }
                                            }
                                            if (yyvsp[0].type == ARIT){
                                                sprintf(var_expresion2, "%s", yyvsp[0].code);
                                            }else if(yyvsp[0].type == BOOL){
                                                sprintf (var_expresion2, "(if %s 1 0)",  yyvsp[0].code) ;
                                            }
                                            sprintf (temp, "(/ %s %s)", var_expresion, var_expresion2) ;
                                            yyval.type = ARIT;
                                           yyval.code = gen_code (temp) ; }
#line 2171 "trad2.tab.c"
    break;

  case 89: /* expresion: expresion '%' expresion  */
#line 532 "trad2.y"
                                         {  if (yyvsp[-2].type == ARIT){
                                             sprintf(var_expresion,"%s", yyvsp[-2].code);
                                            }
                                            else if(yyvsp[-2].type == BOOL){
                                                { sprintf (var_expresion, "(if %s 1 0)", yyvsp[-2].code); }
                                            }
                                            if (yyvsp[0].type == ARIT){
                                                sprintf(var_expresion2, "%s", yyvsp[0].code);
                                            }else if(yyvsp[0].type == BOOL){
                                                sprintf (var_expresion2, "(if %s 1 0)",  yyvsp[0].code) ;
                                            }
                                            sprintf (temp, "(mod %s %s)", var_expresion, var_expresion2) ;
                                            yyval.type = ARIT;
                                             yyval.code = gen_code (temp) ; }
#line 2190 "trad2.tab.c"
    break;

  case 90: /* expresion: expresion AND expresion  */
#line 546 "trad2.y"
                                         {  if (yyvsp[-2].type == ARIT){
                                              { sprintf (var_expresion, "(/= 0 %s)", yyvsp[-2].code);}
                                            }
                                            else if(yyvsp[-2].type == BOOL){
                                               sprintf(var_expresion,"%s", yyvsp[-2].code);
                                            }
                                            if (yyvsp[0].type == ARIT){
                                                sprintf (var_expresion2, "(/= 0 %s)",  yyvsp[0].code) ;
                                            }else if(yyvsp[0].type == BOOL){
                                                sprintf(var_expresion2, "%s", yyvsp[0].code);
                                            }
                                            sprintf (temp, "(and %s %s)", var_expresion, var_expresion2) ;
                                            yyval.type = BOOL;
                                           yyval.code = gen_code (temp) ; }
#line 2209 "trad2.tab.c"
    break;

  case 91: /* expresion: expresion OR expresion  */
#line 560 "trad2.y"
                                         {   if (yyvsp[-2].type == ARIT){
                                              { sprintf (var_expresion, "(/= 0 %s)", yyvsp[-2].code);}
                                            }
                                            else if(yyvsp[-2].type == BOOL){
                                               sprintf(var_expresion,"%s", yyvsp[-2].code);
                                            }
                                            if (yyvsp[0].type == ARIT){
                                                sprintf (var_expresion2, "(/= 0 %s)",  yyvsp[0].code) ;
                                            }else if(yyvsp[0].type == BOOL){
                                                sprintf(var_expresion2, "%s", yyvsp[0].code);
                                            }
                                             sprintf (temp, "(or %s %s)", var_expresion, var_expresion2) ;
                                            yyval.type = BOOL;
                                             yyval.code = gen_code (temp) ; }
#line 2228 "trad2.tab.c"
    break;

  case 92: /* expresion: expresion DISTINTO expresion  */
#line 574 "trad2.y"
                                              {  if (yyvsp[-2].type == ARIT){
                                               sprintf(var_expresion,"%s", yyvsp[-2].code);
                                            }
                                            else if(yyvsp[-2].type == BOOL){
                                                { sprintf (var_expresion, "(if %s 1 0)", yyvsp[-2].code); }
                                            }
                                            if (yyvsp[0].type == ARIT){
                                                sprintf(var_expresion2, "%s", yyvsp[0].code);
                                            }else if(yyvsp[0].type == BOOL){
                                                sprintf (var_expresion2, "(if %s 1 0)",  yyvsp[0].code) ;
                                            }
                                            sprintf (temp, "(/= %s %s)", var_expresion, var_expresion2) ;
                                            yyval.type = BOOL;
                                             yyval.code = gen_code (temp) ; }
#line 2247 "trad2.tab.c"
    break;

  case 93: /* expresion: expresion IGUAL_IGUAL expresion  */
#line 588 "trad2.y"
                                                 {    if (yyvsp[-2].type == ARIT){
                                               sprintf(var_expresion,"%s", yyvsp[-2].code);
                                            }
                                            else if(yyvsp[-2].type == BOOL){
                                                { sprintf (var_expresion, "(if %s 1 0)", yyvsp[-2].code); }
                                            }
                                            if (yyvsp[0].type == ARIT){
                                                sprintf(var_expresion2, "%s", yyvsp[0].code);
                                            }else if(yyvsp[0].type == BOOL){
                                                sprintf (var_expresion2, "(if %s 1 0)",  yyvsp[0].code) ;
                                            }
                                            sprintf (temp, "(= %s %s)", var_expresion, var_expresion2) ;
                                            yyval.type = BOOL;
                                             yyval.code = gen_code (temp) ; }
#line 2266 "trad2.tab.c"
    break;

  case 94: /* expresion: expresion MENOR_IGUAL expresion  */
#line 602 "trad2.y"
                                                {   if (yyvsp[-2].type == ARIT){
                                             sprintf(var_expresion,"%s", yyvsp[-2].code);
                                            }
                                            else if(yyvsp[-2].type == BOOL){
                                                { sprintf (var_expresion, "(if %s 1 0)", yyvsp[-2].code); }
                                            }
                                            if (yyvsp[0].type == ARIT){
                                                sprintf(var_expresion2, "%s", yyvsp[0].code);
                                            }else if(yyvsp[0].type == BOOL){
                                                sprintf (var_expresion2, "(if %s 1 0)",  yyvsp[0].code) ;
                                            }
                                            sprintf (temp, "(<= %s %s)", var_expresion, var_expresion2) ;
                                            yyval.type = BOOL;
                                             yyval.code = gen_code (temp) ; }
#line 2285 "trad2.tab.c"
    break;

  case 95: /* expresion: expresion MAYOR_IGUAL expresion  */
#line 616 "trad2.y"
                                                {   if (yyvsp[-2].type == ARIT){
                                             sprintf(var_expresion,"%s", yyvsp[-2].code);
                                            }
                                            else if(yyvsp[-2].type == BOOL){
                                                { sprintf (var_expresion, "(if %s 1 0)", yyvsp[-2].code); }
                                            }
                                            if (yyvsp[0].type == ARIT){
                                                sprintf(var_expresion2, "%s", yyvsp[0].code);
                                            }else if(yyvsp[0].type == BOOL){
                                                sprintf (var_expresion2, "(if %s 1 0)",  yyvsp[0].code) ;
                                            }
                                            sprintf (temp, "(>= %s %s)", var_expresion, var_expresion2) ;
                                            yyval.type = BOOL;
                                            yyval.code = gen_code (temp) ; }
#line 2304 "trad2.tab.c"
    break;

  case 96: /* expresion: expresion '<' expresion  */
#line 630 "trad2.y"
                                        {    if (yyvsp[-2].type == ARIT){
                                               sprintf(var_expresion,"%s", yyvsp[-2].code);
                                            }
                                            else if(yyvsp[-2].type == BOOL){
                                                { sprintf (var_expresion, "(if %s 1 0)", yyvsp[-2].code); }
                                            }
                                            if (yyvsp[0].type == ARIT){
                                                sprintf(var_expresion2, "%s", yyvsp[0].code);
                                            }else if(yyvsp[0].type == BOOL){
                                                sprintf (var_expresion2, "(if %s 1 0)",  yyvsp[0].code) ;
                                            }
                                            sprintf (temp, "(< %s %s)", var_expresion, var_expresion2) ;
                                            yyval.type = BOOL;
                                            yyval.code = gen_code (temp) ; }
#line 2323 "trad2.tab.c"
    break;

  case 97: /* expresion: expresion '>' expresion  */
#line 644 "trad2.y"
                                        {   if (yyvsp[-2].type == ARIT){
                                             sprintf(var_expresion,"%s", yyvsp[-2].code);
                                            }
                                            else if(yyvsp[-2].type == BOOL){
                                                { sprintf (var_expresion, "(if %s 1 0)", yyvsp[-2].code); }
                                            }
                                            if (yyvsp[0].type == ARIT){
                                                sprintf(var_expresion2, "%s", yyvsp[0].code);
                                            }else if(yyvsp[0].type == BOOL){
                                                sprintf (var_expresion2, "(if %s 1 0)",  yyvsp[0].code) ;
                                            }
                                            sprintf (temp, "(> %s %s)", var_expresion, var_expresion2) ;
                                            yyval.type = BOOL;
                                            yyval.code = gen_code (temp) ; }
#line 2342 "trad2.tab.c"
    break;

  case 98: /* termino: operando  */
#line 661 "trad2.y"
                                                   { yyval = yyvsp[0] ; }
#line 2348 "trad2.tab.c"
    break;

  case 99: /* termino: '+' operando  */
#line 662 "trad2.y"
                                                   { sprintf (temp, "(+ %s)", yyvsp[0].code) ;
                                                     yyval.code = gen_code (temp) ; }
#line 2355 "trad2.tab.c"
    break;

  case 100: /* termino: '-' operando  */
#line 664 "trad2.y"
                                                   { sprintf (temp, "(- %s)", yyvsp[0].code) ;
                                                     yyval.code = gen_code (temp) ; }
#line 2362 "trad2.tab.c"
    break;

  case 101: /* operando: IDENTIF  */
#line 669 "trad2.y"
                                           { sprintf (temp, "%s", yyvsp[0].code) ;
                                            yyval.type = ARIT;
                                           yyval.code = gen_code (temp) ; }
#line 2370 "trad2.tab.c"
    break;

  case 102: /* operando: NUMBER  */
#line 672 "trad2.y"
                                         { sprintf (temp, "%d", yyvsp[0].value) ;
                                            yyval.type = ARIT;
                                           yyval.code = gen_code (temp) ; }
#line 2378 "trad2.tab.c"
    break;

  case 103: /* operando: IDENTIF '[' expresion ']'  */
#line 676 "trad2.y"
                                              {if (yyvsp[-1].type == ARIT){
                                                sprintf(var_expresion, "%s", yyvsp[-1].code);}
                                                else if(yyvsp[-1].type == BOOL){
                                                { sprintf (var_expresion, "(if %s 1 0)", yyvsp[-1].code); }}
                                                sprintf (temp, "(aref %s %s)", yyvsp[-3].code, var_expresion) ;
                                                yyval.type = ARIT;
                                                yyval.code = gen_code (temp) ; }
#line 2390 "trad2.tab.c"
    break;

  case 104: /* operando: IDENTIF '(' argumentos_funcion ')'  */
#line 684 "trad2.y"
                                                     { sprintf (temp, "(%s %s)", yyvsp[-3].code, yyvsp[-1].code) ;
                                                        yyval.code = gen_code (temp) ; 
                                                        yyval.type = ARIT;}
#line 2398 "trad2.tab.c"
    break;

  case 105: /* operando: '(' expresion ')'  */
#line 688 "trad2.y"
                                         { yyval = yyvsp[-1] ; }
#line 2404 "trad2.tab.c"
    break;


#line 2408 "trad2.tab.c"

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

#line 692 "trad2.y"
                            // SECCION 4    Codigo en C

int n_line = 1 ;

void yyerror (char *message)
{
    fprintf (stderr, "%s in line %d\n", message, n_line) ;
    printf ( "\n") ;
}

char *int_to_string (int n)
{
    sprintf (temp, "%d", n) ;
    return gen_code (temp) ;
}

char *char_to_string (char c)
{
    sprintf (temp, "%c", c) ;
    return gen_code (temp) ;
}

char *my_malloc (int nbytes)       // reserva n bytes de memoria dinamica
{
    char *p ;
    static long int nb = 0;        // sirven para contabilizar la memoria
    static int nv = 0 ;            // solicitada en total

    p = malloc (nbytes) ;
    if (p == NULL) {
        fprintf (stderr, "No memoria left for additional %d bytes\n", nbytes) ;
        fprintf (stderr, "%ld bytes reserved in %d calls\n", nb, nv) ;
        exit (0) ;
    }
    nb += (long) nbytes ;
    nv++ ;

    return p ;
}


/***************************************************************************/
/********************** Seccion de Palabras Reservadas *********************/
/***************************************************************************/

typedef struct s_keyword { // para las palabras reservadas de C
    char *name ;
    int token ;
} t_keyword ;

t_keyword keywords [] = { // define las palabras reservadas y los
    "main",        MAIN,           // y los token asociados
    "int",         INTEGER,
    "puts",        PUTS,
    "printf",      PRINTF,
    "while",       WHILE,
    "for",         FOR,
    "if",          IF,
    "return",      RETURN,
    "else",        ELSE,
    ">=",          MAYOR_IGUAL,
    "<=",          MENOR_IGUAL,
    "==",          IGUAL_IGUAL,
    "!=",          DISTINTO,
    "&&",          AND,
    "||",          OR,
    NULL,          0               // para marcar el fin de la tabla
} ;

t_keyword *search_keyword (char *symbol_name)
{                                  // Busca n_s en la tabla de pal. res.
                                   // y devuelve puntero a registro (simbolo)
    int i ;
    t_keyword *sim ;

    i = 0 ;
    sim = keywords ;
    while (sim [i].name != NULL) {
	    if (strcmp (sim [i].name, symbol_name) == 0) {
		                             // strcmp(a, b) devuelve == 0 si a==b
            return &(sim [i]) ;
        }
        i++ ;
    }

    return NULL ;
}

 
/***************************************************************************/
/******************* Seccion del Analizador Lexicografico ******************/
/***************************************************************************/

char *gen_code (char *name)     // copia el argumento a un
{                                      // string en memoria dinamica
    char *p ;
    int l ;
	
    l = strlen (name)+1 ;
    p = (char *) my_malloc (l) ;
    strcpy (p, name) ;
	
    return p ;
}


int yylex ()
{
    int i ;
    unsigned char c ;
    unsigned char cc ;
    char expandable_ops [] = "!<=>|%/&+-*" ;
    char temp_str [256] ;
    t_keyword *symbol ;

    do {
        c = getchar () ;

        if (c == '#') {	// Ignora las lineas que empiezan por #  (#define, #include)
            do {		//	OJO que puede funcionar mal si una linea contiene #
                c = getchar () ;
            } while (c != '\n') ;
        }

        if (c == '/') {	// Si la linea contiene un / puede ser inicio de comentario
            cc = getchar () ;
            if (cc != '/') {   // Si el siguiente char es /  es un comentario, pero...
                ungetc (cc, stdin) ;
            } else {
                c = getchar () ;	// ...
                if (c == '@') {	// Si es la secuencia //@  ==> transcribimos la linea
                    do {		// Se trata de codigo inline (Codigo embebido en C)
                        c = getchar () ;
                        putchar (c) ;
                    } while (c != '\n') ;
                } else {		// ==> comentario, ignorar la linea
                    while (c != '\n') {
                        c = getchar () ;
                    }
                }
            }
        } else if (c == '\\') c = getchar () ;
		
        if (c == '\n')
            n_line++ ;

    } while (c == ' ' || c == '\n' || c == '\r' || c == 10 || c == 13 || c == '\t') ;

    if (c == '\"') {
        i = 0 ;
        do {
            c = getchar () ;
            temp_str [i++] = c ;
        } while (c != '\"' && i < 255) ;
        if (i == 256) {
            printf ("WARNING: string with more than 255 characters in line %d\n", n_line) ;
        }		 	// habria que leer hasta el siguiente " , pero, y si falta?
        temp_str [--i] = '\0' ;
        yylval.code = gen_code (temp_str) ;
        return (STRING) ;
    }

    if (c == '.' || (c >= '0' && c <= '9')) {
        ungetc (c, stdin) ;
        scanf ("%d", &yylval.value) ;
//         printf ("\nDEV: NUMBER %d\n", yylval.value) ;        // PARA DEPURAR
        return NUMBER ;
    }

    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        i = 0 ;
        while (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') ||
            (c >= '0' && c <= '9') || c == '_') && i < 255) {
            temp_str [i++] = tolower (c) ;
            c = getchar () ;
        }
        temp_str [i] = '\0' ;
        ungetc (c, stdin) ;

        yylval.code = gen_code (temp_str) ;
        symbol = search_keyword (yylval.code) ;
        if (symbol == NULL) {    // no es palabra reservada -> identificador antes vrariabre
//               printf ("\nDEV: IDENTIF %s\n", yylval.code) ;    // PARA DEPURAR
            return (IDENTIF) ;
        } else {
//               printf ("\nDEV: OTRO %s\n", yylval.code) ;       // PARA DEPURAR
            return (symbol->token) ;
        }
    }

    if (strchr (expandable_ops, c) != NULL) { // busca c en operadores expandibles
        cc = getchar () ;
        sprintf (temp_str, "%c%c", (char) c, (char) cc) ;
        symbol = search_keyword (temp_str) ;
        if (symbol == NULL) {
            ungetc (cc, stdin) ;
            yylval.code = NULL ;
            return (c) ;
        } else {
            yylval.code = gen_code (temp_str) ; // aunque no se use
            return (symbol->token) ;
        }
    }

//    printf ("\nDEV: LITERAL %d #%c#\n", (int) c, c) ;      // PARA DEPURAR
    if (c == EOF || c == 255 || c == 26) {
//         printf ("tEOF ") ;                                // PARA DEPURAR
        return (0) ;
    }

    return c ;
}


int main ()
{
    yyparse () ;
    

}

// Para asignar múltiples variables vamos a crear un nuevo no terminal en la parte izquierda de la asignación, que solo pueda llamar 
// recursivamente a IDENTIF cuando se encuentre con una coma, y siempre va a tener que haber mas de una variable, tanto en la parte izquierda
// como en la parte derecha de la asignación. En esta parte derecha de la asignación, vamos a crear un nuevo no terminal expresion_recur, que
// que al igual que el anterior, solo pueda llamar recursivamente a expresion cuando se encuentre con una coma.
// Esta sería como nos quedaria el nuevo no terminal de la parte izquierda de la asignación:
