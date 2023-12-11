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
#line 1 "parser.y"


#define YYDEBUG 1
#include <ctype.h>
#include <stdio.h>

int yylex();
void yyerror(const char *s);

extern FILE* yyin;
extern int yydebug;
char output[100][100];

#include "modulos/listaId.h"
#include "modulos/tablaDeCuadruplas.h"
extern TablaCuadruplas tablaDeCuadruplas;


#line 90 "parser.tab.c"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TK_ASIGNACION = 3,              /* TK_ASIGNACION  */
  YYSYMBOL_TK_SEPARADOR = 4,               /* TK_SEPARADOR  */
  YYSYMBOL_TK_DEFINICION = 5,              /* TK_DEFINICION  */
  YYSYMBOL_TK_SUBRANGO = 6,                /* TK_SUBRANGO  */
  YYSYMBOL_TK_ENTONCES = 7,                /* TK_ENTONCES  */
  YYSYMBOL_TK_SUMA = 8,                    /* TK_SUMA  */
  YYSYMBOL_TK_RESTA = 9,                   /* TK_RESTA  */
  YYSYMBOL_TK_DIV = 10,                    /* TK_DIV  */
  YYSYMBOL_TK_PROD = 11,                   /* TK_PROD  */
  YYSYMBOL_TK_MOD = 12,                    /* TK_MOD  */
  YYSYMBOL_TK_R_MOD = 13,                  /* TK_R_MOD  */
  YYSYMBOL_TK_DIV_REA = 14,                /* TK_DIV_REA  */
  YYSYMBOL_TK_IGUAL = 15,                  /* TK_IGUAL  */
  YYSYMBOL_TK_O = 16,                      /* TK_O  */
  YYSYMBOL_TK_Y = 17,                      /* TK_Y  */
  YYSYMBOL_TK_MAYOR = 18,                  /* TK_MAYOR  */
  YYSYMBOL_TK_MENOR = 19,                  /* TK_MENOR  */
  YYSYMBOL_TK_MENOR_IGUAL = 20,            /* TK_MENOR_IGUAL  */
  YYSYMBOL_TK_MAYOR_IGUAL = 21,            /* TK_MAYOR_IGUAL  */
  YYSYMBOL_TK_DISTINTO = 22,               /* TK_DISTINTO  */
  YYSYMBOL_TK_ABRIR_TABLA = 23,            /* TK_ABRIR_TABLA  */
  YYSYMBOL_TK_CERRAR_TABLA = 24,           /* TK_CERRAR_TABLA  */
  YYSYMBOL_TK_BOOLEANO = 25,               /* TK_BOOLEANO  */
  YYSYMBOL_TK_ABRIR_PARENTESIS = 26,       /* TK_ABRIR_PARENTESIS  */
  YYSYMBOL_TK_CERRAR_PARENTESIS = 27,      /* TK_CERRAR_PARENTESIS  */
  YYSYMBOL_TK_TIPO_BASE = 28,              /* TK_TIPO_BASE  */
  YYSYMBOL_TK_OPREL = 29,                  /* TK_OPREL  */
  YYSYMBOL_TK_LITERAL = 30,                /* TK_LITERAL  */
  YYSYMBOL_TK_PUNTO_COMA = 31,             /* TK_PUNTO_COMA  */
  YYSYMBOL_TK_PUNTO = 32,                  /* TK_PUNTO  */
  YYSYMBOL_TK_CARACTER = 33,               /* TK_CARACTER  */
  YYSYMBOL_TK_CADENA = 34,                 /* TK_CADENA  */
  YYSYMBOL_TK_COMENTARIO = 35,             /* TK_COMENTARIO  */
  YYSYMBOL_TK_ACCION = 36,                 /* TK_ACCION  */
  YYSYMBOL_TK_ALGORITMO = 37,              /* TK_ALGORITMO  */
  YYSYMBOL_TK_CONST = 38,                  /* TK_CONST  */
  YYSYMBOL_TK_CONTINUAR = 39,              /* TK_CONTINUAR  */
  YYSYMBOL_TK_DE = 40,                     /* TK_DE  */
  YYSYMBOL_TK_DEV = 41,                    /* TK_DEV  */
  YYSYMBOL_TK_ENT = 42,                    /* TK_ENT  */
  YYSYMBOL_TK_ES = 43,                     /* TK_ES  */
  YYSYMBOL_TK_FACCION = 44,                /* TK_FACCION  */
  YYSYMBOL_TK_FALGORITMO = 45,             /* TK_FALGORITMO  */
  YYSYMBOL_TK_FALSO = 46,                  /* TK_FALSO  */
  YYSYMBOL_TK_FCONST = 47,                 /* TK_FCONST  */
  YYSYMBOL_TK_FFUNCION = 48,               /* TK_FFUNCION  */
  YYSYMBOL_TK_FMIENTRAS = 49,              /* TK_FMIENTRAS  */
  YYSYMBOL_TK_FPARA = 50,                  /* TK_FPARA  */
  YYSYMBOL_TK_FSI = 51,                    /* TK_FSI  */
  YYSYMBOL_TK_FTIPO = 52,                  /* TK_FTIPO  */
  YYSYMBOL_TK_FTUPLA = 53,                 /* TK_FTUPLA  */
  YYSYMBOL_TK_FUNCION = 54,                /* TK_FUNCION  */
  YYSYMBOL_TK_FVAR = 55,                   /* TK_FVAR  */
  YYSYMBOL_TK_HACER = 56,                  /* TK_HACER  */
  YYSYMBOL_TK_HASTA = 57,                  /* TK_HASTA  */
  YYSYMBOL_TK_MIENTRAS = 58,               /* TK_MIENTRAS  */
  YYSYMBOL_TK_NO = 59,                     /* TK_NO  */
  YYSYMBOL_TK_PARA = 60,                   /* TK_PARA  */
  YYSYMBOL_TK_REF = 61,                    /* TK_REF  */
  YYSYMBOL_TK_SAL = 62,                    /* TK_SAL  */
  YYSYMBOL_TK_SI = 63,                     /* TK_SI  */
  YYSYMBOL_TK_SINOSI = 64,                 /* TK_SINOSI  */
  YYSYMBOL_TK_TABLA = 65,                  /* TK_TABLA  */
  YYSYMBOL_TK_TIPO = 66,                   /* TK_TIPO  */
  YYSYMBOL_TK_TUPLA = 67,                  /* TK_TUPLA  */
  YYSYMBOL_TK_VAR = 68,                    /* TK_VAR  */
  YYSYMBOL_TK_VERDADERO = 69,              /* TK_VERDADERO  */
  YYSYMBOL_TK_R_REAL = 70,                 /* TK_R_REAL  */
  YYSYMBOL_TK_R_BOOLEANO = 71,             /* TK_R_BOOLEANO  */
  YYSYMBOL_TK_R_CADENA = 72,               /* TK_R_CADENA  */
  YYSYMBOL_TK_R_CARACTER = 73,             /* TK_R_CARACTER  */
  YYSYMBOL_TK_R_ENTERO = 74,               /* TK_R_ENTERO  */
  YYSYMBOL_TK_IDENTIFICADOR = 75,          /* TK_IDENTIFICADOR  */
  YYSYMBOL_YYACCEPT = 76,                  /* $accept  */
  YYSYMBOL_desc_algoritmo = 77,            /* desc_algoritmo  */
  YYSYMBOL_cabecera_alg = 78,              /* cabecera_alg  */
  YYSYMBOL_bloque_alg = 79,                /* bloque_alg  */
  YYSYMBOL_decl_globales = 80,             /* decl_globales  */
  YYSYMBOL_decl_a_f = 81,                  /* decl_a_f  */
  YYSYMBOL_bloque = 82,                    /* bloque  */
  YYSYMBOL_declaraciones = 83,             /* declaraciones  */
  YYSYMBOL_decl_tipo = 84,                 /* decl_tipo  */
  YYSYMBOL_decl_cte = 85,                  /* decl_cte  */
  YYSYMBOL_decl_var = 86,                  /* decl_var  */
  YYSYMBOL_lista_d_tipo = 87,              /* lista_d_tipo  */
  YYSYMBOL_d_tipo = 88,                    /* d_tipo  */
  YYSYMBOL_expresion_t = 89,               /* expresion_t  */
  YYSYMBOL_lista_campos = 90,              /* lista_campos  */
  YYSYMBOL_lista_d_cte = 91,               /* lista_d_cte  */
  YYSYMBOL_lista_d_var = 92,               /* lista_d_var  */
  YYSYMBOL_lista_id = 93,                  /* lista_id  */
  YYSYMBOL_decl_ent_sal = 94,              /* decl_ent_sal  */
  YYSYMBOL_decl_ent = 95,                  /* decl_ent  */
  YYSYMBOL_decl_sal = 96,                  /* decl_sal  */
  YYSYMBOL_exp_a = 97,                     /* exp_a  */
  YYSYMBOL_expresion = 98,                 /* expresion  */
  YYSYMBOL_operando = 99,                  /* operando  */
  YYSYMBOL_instrucciones = 100,            /* instrucciones  */
  YYSYMBOL_instruccion = 101,              /* instruccion  */
  YYSYMBOL_asignacion = 102,               /* asignacion  */
  YYSYMBOL_alternativa = 103,              /* alternativa  */
  YYSYMBOL_lista_opciones = 104,           /* lista_opciones  */
  YYSYMBOL_iteracion = 105,                /* iteracion  */
  YYSYMBOL_it_cota_fija = 106,             /* it_cota_fija  */
  YYSYMBOL_it_cota_exp = 107,              /* it_cota_exp  */
  YYSYMBOL_accion_d = 108,                 /* accion_d  */
  YYSYMBOL_funcion_d = 109,                /* funcion_d  */
  YYSYMBOL_a_cabecera = 110,               /* a_cabecera  */
  YYSYMBOL_f_cabecera = 111,               /* f_cabecera  */
  YYSYMBOL_d_par_form = 112,               /* d_par_form  */
  YYSYMBOL_d_p_form = 113,                 /* d_p_form  */
  YYSYMBOL_accion_ll = 114,                /* accion_ll  */
  YYSYMBOL_funcion_ll = 115,               /* funcion_ll  */
  YYSYMBOL_l_ll = 116,                     /* l_ll  */
  YYSYMBOL_M = 117                         /* M  */
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

#if 1

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
#endif /* 1 */

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
#define YYLAST   258

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  76
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  93
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  227

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   330


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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   126,   126,   131,   133,   135,   136,   137,   139,   140,
     141,   143,   145,   146,   147,   148,   150,   151,   153,   155,
     156,   158,   159,   160,   161,   162,   163,   165,   166,   168,
     169,   171,   172,   174,   175,   186,   188,   192,   199,   200,
     201,   203,   212,   220,   254,   288,   322,   356,   371,   386,
     389,   400,   401,   420,   427,   434,   440,   441,   442,   451,
     452,   454,   466,   467,   468,   470,   474,   479,   480,   483,
     484,   485,   487,   505,   523,   540,   542,   543,   545,   547,
     549,   551,   553,   555,   557,   558,   560,   561,   562,   564,
     566,   568,   569,   571
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "TK_ASIGNACION",
  "TK_SEPARADOR", "TK_DEFINICION", "TK_SUBRANGO", "TK_ENTONCES", "TK_SUMA",
  "TK_RESTA", "TK_DIV", "TK_PROD", "TK_MOD", "TK_R_MOD", "TK_DIV_REA",
  "TK_IGUAL", "TK_O", "TK_Y", "TK_MAYOR", "TK_MENOR", "TK_MENOR_IGUAL",
  "TK_MAYOR_IGUAL", "TK_DISTINTO", "TK_ABRIR_TABLA", "TK_CERRAR_TABLA",
  "TK_BOOLEANO", "TK_ABRIR_PARENTESIS", "TK_CERRAR_PARENTESIS",
  "TK_TIPO_BASE", "TK_OPREL", "TK_LITERAL", "TK_PUNTO_COMA", "TK_PUNTO",
  "TK_CARACTER", "TK_CADENA", "TK_COMENTARIO", "TK_ACCION", "TK_ALGORITMO",
  "TK_CONST", "TK_CONTINUAR", "TK_DE", "TK_DEV", "TK_ENT", "TK_ES",
  "TK_FACCION", "TK_FALGORITMO", "TK_FALSO", "TK_FCONST", "TK_FFUNCION",
  "TK_FMIENTRAS", "TK_FPARA", "TK_FSI", "TK_FTIPO", "TK_FTUPLA",
  "TK_FUNCION", "TK_FVAR", "TK_HACER", "TK_HASTA", "TK_MIENTRAS", "TK_NO",
  "TK_PARA", "TK_REF", "TK_SAL", "TK_SI", "TK_SINOSI", "TK_TABLA",
  "TK_TIPO", "TK_TUPLA", "TK_VAR", "TK_VERDADERO", "TK_R_REAL",
  "TK_R_BOOLEANO", "TK_R_CADENA", "TK_R_CARACTER", "TK_R_ENTERO",
  "TK_IDENTIFICADOR", "$accept", "desc_algoritmo", "cabecera_alg",
  "bloque_alg", "decl_globales", "decl_a_f", "bloque", "declaraciones",
  "decl_tipo", "decl_cte", "decl_var", "lista_d_tipo", "d_tipo",
  "expresion_t", "lista_campos", "lista_d_cte", "lista_d_var", "lista_id",
  "decl_ent_sal", "decl_ent", "decl_sal", "exp_a", "expresion", "operando",
  "instrucciones", "instruccion", "asignacion", "alternativa",
  "lista_opciones", "iteracion", "it_cota_fija", "it_cota_exp", "accion_d",
  "funcion_d", "a_cabecera", "f_cabecera", "d_par_form", "d_p_form",
  "accion_ll", "funcion_ll", "l_ll", "M", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-125)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-29)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -16,   -37,    82,    67,  -125,    -4,    29,    32,   -15,    83,
      -4,    -4,    85,    79,   103,    86,    59,   107,   122,   -21,
     -15,   -15,   -15,   101,   102,   -27,    83,    83,  -125,  -125,
     112,   129,    94,   147,   175,   126,   178,  -125,  -125,  -125,
     141,   109,  -125,   159,    14,  -125,   157,  -125,  -125,  -125,
    -125,  -125,  -125,  -125,  -125,  -125,   170,   -15,   173,   -15,
      59,    59,   166,   142,  -125,  -125,  -125,   172,  -125,   141,
     141,  -125,    21,  -125,   141,    94,   183,   132,  -125,    -1,
     180,   204,   210,   184,   -13,  -125,  -125,    59,   186,    97,
    -125,   188,     4,   209,   141,   141,   141,   141,   153,  -125,
     -21,    50,   185,    59,   189,  -125,  -125,  -125,  -125,    29,
    -125,   184,   181,   210,  -125,   156,   217,   179,   141,    32,
     156,   141,   141,   141,   141,   141,   141,  -125,  -125,   141,
    -125,  -125,   115,   202,   -21,   141,    15,    72,   207,   184,
     146,  -125,    -6,  -125,    59,    59,    59,   208,   205,  -125,
     211,   141,  -125,  -125,   231,    94,  -125,   212,  -125,  -125,
    -125,  -125,  -125,  -125,  -125,  -125,   141,   141,  -125,    59,
      59,   191,    12,  -125,   141,  -125,  -125,   236,   237,   238,
     213,    50,   206,    48,   156,   214,  -125,  -125,  -125,  -125,
    -125,  -125,   141,   -21,  -125,    94,    94,    94,  -125,  -125,
      94,  -125,   222,   132,    18,   187,  -125,  -125,  -125,   218,
     215,  -125,   -21,  -125,   197,  -125,    94,   200,   141,  -125,
    -125,  -125,    71,  -125,   -21,   187,  -125
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     7,    32,    20,    15,    10,
       7,     7,     0,     0,     0,     0,    35,     0,     0,     0,
      15,    15,    15,     0,     0,     0,    10,    10,     5,     6,
       0,     0,     0,     0,    37,     0,     0,     2,     4,    67,
       0,     0,    93,    61,     0,    11,    66,    68,    69,    70,
      76,    77,    71,    12,    13,    14,     0,    15,     0,    15,
      35,    35,     0,    38,    40,     8,     9,     0,    17,     0,
       0,    26,    51,    57,     0,     0,     0,    30,    56,    61,
       0,     0,    59,    27,    50,    60,    16,     0,     0,     0,
      51,    61,     0,     0,     0,     0,     0,     0,     0,    64,
       0,    85,     0,    35,     0,    41,    42,     3,    39,    32,
      52,     0,    59,    55,    25,     0,     0,     0,     0,    20,
       0,     0,     0,     0,     0,     0,     0,    93,    93,     0,
      36,    18,    61,     0,     0,     0,     0,    92,     0,    72,
       0,    61,    62,    65,     0,     0,     0,     0,     0,    80,
       0,     0,    31,    49,     0,     0,    21,     0,    19,    24,
      43,    44,    48,    45,    47,    46,     0,     0,    58,    35,
      35,     0,     0,    93,     0,    89,    63,     0,     0,     0,
       0,    85,     0,     0,     0,     0,    90,    54,    53,    33,
      34,    79,     0,     0,    91,     0,     0,     0,    82,    84,
       0,    81,     0,    30,     0,    75,    86,    88,    87,     0,
       0,    29,     0,    93,     0,    83,     0,     0,     0,    73,
      22,    78,     0,    93,     0,    75,    74
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -125,  -125,  -125,  -125,    84,     2,   111,   127,   100,   134,
    -125,   133,   -65,  -114,    51,   144,   -53,   -73,  -125,  -125,
     193,   -58,   -38,   -19,   -91,  -125,  -125,  -125,    33,  -125,
    -125,  -125,  -125,  -125,  -125,  -125,    76,  -125,  -125,  -125,
    -113,  -124
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     8,    17,     9,    25,    18,    19,    20,    21,
      22,    15,    80,    81,   117,    13,    35,    36,    62,    63,
      64,    82,    83,    84,    45,    46,    47,    48,   214,    49,
      50,    51,    26,    27,    57,    59,   147,   148,    52,    85,
     138,    94
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      44,   154,    92,   166,   167,   157,   159,   105,   106,   143,
     114,   110,   112,    97,   130,    60,   113,    96,    39,    98,
      97,     1,   173,     6,   133,   118,   -28,   -28,    65,    66,
     -23,   111,   111,   129,     6,    61,   111,    40,     3,    41,
      97,   129,    42,   171,   129,   -28,    98,   129,    99,   193,
     150,     7,   -28,    16,    43,    99,   136,   137,   139,   140,
     134,   194,     7,   160,   161,   162,   163,   164,   165,   192,
     202,   177,   178,   179,   212,    99,   174,   129,   223,   142,
     137,    44,     4,   111,   111,   111,   111,   111,   111,   218,
     185,   168,   144,   145,    28,    29,   201,   172,     5,   224,
     129,   129,   205,    69,    12,    10,    69,    14,   187,   188,
      10,    10,   146,   183,    30,    44,   189,   190,    32,    23,
      70,   217,    71,    70,    72,    71,    31,    72,   111,   111,
     206,   207,   208,   225,    34,   209,   137,    24,    33,    11,
      73,   118,    67,    73,    11,    11,   169,    53,    54,    55,
      69,   220,    37,    74,   204,    75,    74,    38,    75,    76,
      68,    77,    76,    78,    77,    69,    78,    70,   102,    79,
     104,    90,   132,   176,    44,   129,    56,    58,    86,    87,
     222,    88,    70,    89,    93,    95,    72,    73,   100,   121,
     122,   123,   124,    44,   125,   126,   101,   127,   128,   103,
      74,   107,    73,   109,    61,    44,   115,   116,   153,   120,
      78,   119,   135,   129,   118,    74,    91,   131,   121,   122,
     123,   124,   155,   125,   126,    78,   127,   128,   141,   149,
     151,    91,   156,   170,   175,   180,   181,   184,   182,   186,
     191,   195,   196,   197,   198,   203,   210,   200,   219,   215,
     221,   213,   158,   152,   211,   216,   108,   199,   226
};

static const yytype_uint8 yycheck[] =
{
      19,   115,    40,   127,   128,   118,   120,    60,    61,   100,
      75,    69,    70,    26,    87,    42,    74,     3,    39,    32,
      26,    37,     7,    38,    89,    26,     5,     6,    26,    27,
      31,    69,    70,    29,    38,    62,    74,    58,    75,    60,
      26,    29,    63,   134,    29,    24,    32,    29,    61,   173,
     103,    66,    31,    68,    75,    61,    94,    95,    96,    97,
      56,   174,    66,   121,   122,   123,   124,   125,   126,    57,
     184,   144,   145,   146,    56,    61,     4,    29,     7,    98,
     118,   100,     0,   121,   122,   123,   124,   125,   126,   213,
     155,   129,    42,    43,    10,    11,    48,   135,    31,   223,
      29,    29,   193,     9,    75,     5,     9,    75,   166,   167,
      10,    11,    62,   151,    29,   134,   169,   170,    15,    36,
      26,   212,    28,    26,    30,    28,    47,    30,   166,   167,
     195,   196,   197,   224,    75,   200,   174,    54,    52,     5,
      46,    26,    30,    46,    10,    11,    31,    20,    21,    22,
       9,   216,    45,    59,   192,    61,    59,    35,    61,    65,
      31,    67,    65,    69,    67,     9,    69,    26,    57,    75,
      59,    30,    75,    27,   193,    29,    75,    75,    31,     4,
     218,    55,    26,     5,    75,    26,    30,    46,    31,     8,
       9,    10,    11,   212,    13,    14,    26,    16,    17,    26,
      59,    35,    46,    31,    62,   224,    23,    75,    27,     5,
      69,    31,     3,    29,    26,    59,    75,    31,     8,     9,
      10,    11,     5,    13,    14,    69,    16,    17,    75,    44,
      41,    75,    53,    31,    27,    27,    31,     6,    27,    27,
      49,     5,     5,     5,    31,    31,    24,    41,    51,    31,
      50,    64,   119,   109,   203,    40,    63,   181,   225
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    37,    77,    75,     0,    31,    38,    66,    78,    80,
      84,    85,    75,    91,    75,    87,    68,    79,    82,    83,
      84,    85,    86,    36,    54,    81,   108,   109,    80,    80,
      29,    47,    15,    52,    75,    92,    93,    45,    35,    39,
      58,    60,    63,    75,    99,   100,   101,   102,   103,   105,
     106,   107,   114,    83,    83,    83,    75,   110,    75,   111,
      42,    62,    94,    95,    96,    81,    81,    30,    31,     9,
      26,    28,    30,    46,    59,    61,    65,    67,    69,    75,
      88,    89,    97,    98,    99,   115,    31,     4,    55,     5,
      30,    75,    98,    75,   117,    26,     3,    26,    32,    61,
      31,    26,    82,    26,    82,    92,    92,    35,    96,    31,
      97,    98,    97,    97,    88,    23,    75,    90,    26,    31,
       5,     8,     9,    10,    11,    13,    14,    16,    17,    29,
      93,    31,    75,    88,    56,     3,    98,    98,   116,    98,
      98,    75,    99,   100,    42,    43,    62,   112,   113,    44,
      92,    41,    91,    27,    89,     5,    53,   116,    87,    89,
      97,    97,    97,    97,    97,    97,   117,   117,    98,    31,
      31,   100,    98,     7,     4,    27,    27,    93,    93,    93,
      27,    31,    27,    98,     6,    88,    27,    97,    97,    92,
      92,    49,    57,   117,   116,     5,     5,     5,    31,   112,
      41,    48,    89,    31,    98,   100,    88,    88,    88,    88,
      24,    90,    56,    64,   104,    31,    40,   100,   117,    51,
      88,    50,    98,     7,   117,   100,   104
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    76,    77,    78,    79,    80,    80,    80,    81,    81,
      81,    82,    83,    83,    83,    83,    84,    85,    86,    87,
      87,    88,    88,    88,    88,    88,    88,    89,    89,    90,
      90,    91,    91,    92,    92,    92,    93,    93,    94,    94,
      94,    95,    96,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    98,
      98,    99,    99,    99,    99,   100,   100,   101,   101,   101,
     101,   101,   102,   103,   104,   104,   105,   105,   106,   107,
     108,   109,   110,   111,   112,   112,   113,   113,   113,   114,
     115,   116,   116,   117
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     6,     4,     2,     2,     2,     0,     2,     2,
       0,     2,     2,     2,     2,     0,     4,     4,     4,     5,
       0,     3,     8,     1,     3,     2,     1,     1,     1,     5,
       0,     5,     0,     5,     5,     0,     3,     1,     1,     2,
       1,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       1,     1,     2,     4,     4,     2,     1,     1,     3,     1,
       1,     1,     3,     4,     2,     3,     1,     1,     1,     1,
       1,     1,     3,     8,     7,     0,     1,     1,     9,     5,
       4,     6,     5,     7,     3,     0,     4,     4,     4,     4,
       4,     3,     1,     0
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
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
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
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
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
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

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

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
  case 2: /* desc_algoritmo: TK_ALGORITMO TK_IDENTIFICADOR TK_PUNTO_COMA cabecera_alg bloque_alg TK_FALGORITMO  */
#line 126 "parser.y"
                                                                                                   { 
    mostrarTablaSimbolos();
    imprimirTablaCuadruplas(stdout);
}
#line 1634 "parser.tab.c"
    break;

  case 3: /* cabecera_alg: decl_globales decl_a_f decl_ent_sal TK_COMENTARIO  */
#line 131 "parser.y"
                                                                 {}
#line 1640 "parser.tab.c"
    break;

  case 4: /* bloque_alg: bloque TK_COMENTARIO  */
#line 133 "parser.y"
                                  {}
#line 1646 "parser.tab.c"
    break;

  case 5: /* decl_globales: decl_tipo decl_globales  */
#line 135 "parser.y"
                                        {}
#line 1652 "parser.tab.c"
    break;

  case 6: /* decl_globales: decl_cte decl_globales  */
#line 136 "parser.y"
                         {}
#line 1658 "parser.tab.c"
    break;

  case 7: /* decl_globales: %empty  */
#line 137 "parser.y"
         {}
#line 1664 "parser.tab.c"
    break;

  case 8: /* decl_a_f: accion_d decl_a_f  */
#line 139 "parser.y"
                             {}
#line 1670 "parser.tab.c"
    break;

  case 9: /* decl_a_f: funcion_d decl_a_f  */
#line 140 "parser.y"
                     {}
#line 1676 "parser.tab.c"
    break;

  case 10: /* decl_a_f: %empty  */
#line 141 "parser.y"
         {}
#line 1682 "parser.tab.c"
    break;

  case 11: /* bloque: declaraciones instrucciones  */
#line 143 "parser.y"
                                     { }
#line 1688 "parser.tab.c"
    break;

  case 12: /* declaraciones: decl_tipo declaraciones  */
#line 145 "parser.y"
                                        {}
#line 1694 "parser.tab.c"
    break;

  case 13: /* declaraciones: decl_cte declaraciones  */
#line 146 "parser.y"
                         {}
#line 1700 "parser.tab.c"
    break;

  case 14: /* declaraciones: decl_var declaraciones  */
#line 147 "parser.y"
                         {}
#line 1706 "parser.tab.c"
    break;

  case 15: /* declaraciones: %empty  */
#line 148 "parser.y"
         {}
#line 1712 "parser.tab.c"
    break;

  case 16: /* decl_tipo: TK_TIPO lista_d_tipo TK_FTIPO TK_PUNTO_COMA  */
#line 150 "parser.y"
                                                        {}
#line 1718 "parser.tab.c"
    break;

  case 17: /* decl_cte: TK_CONST lista_d_cte TK_FCONST TK_PUNTO_COMA  */
#line 151 "parser.y"
                                                        {}
#line 1724 "parser.tab.c"
    break;

  case 18: /* decl_var: TK_VAR lista_d_var TK_FVAR TK_PUNTO_COMA  */
#line 153 "parser.y"
                                                    {}
#line 1730 "parser.tab.c"
    break;

  case 19: /* lista_d_tipo: TK_IDENTIFICADOR TK_IGUAL d_tipo TK_PUNTO_COMA lista_d_tipo  */
#line 155 "parser.y"
                                                                           {}
#line 1736 "parser.tab.c"
    break;

  case 20: /* lista_d_tipo: %empty  */
#line 156 "parser.y"
         {}
#line 1742 "parser.tab.c"
    break;

  case 21: /* d_tipo: TK_TUPLA lista_campos TK_FTUPLA  */
#line 158 "parser.y"
                                         {}
#line 1748 "parser.tab.c"
    break;

  case 22: /* d_tipo: TK_TABLA TK_ABRIR_TABLA expresion_t TK_SUBRANGO expresion_t TK_CERRAR_TABLA TK_DE d_tipo  */
#line 159 "parser.y"
                                                                                           {}
#line 1754 "parser.tab.c"
    break;

  case 23: /* d_tipo: TK_IDENTIFICADOR  */
#line 160 "parser.y"
                   {}
#line 1760 "parser.tab.c"
    break;

  case 24: /* d_tipo: expresion_t TK_DEFINICION expresion_t  */
#line 161 "parser.y"
                                        {}
#line 1766 "parser.tab.c"
    break;

  case 25: /* d_tipo: TK_REF d_tipo  */
#line 162 "parser.y"
                {}
#line 1772 "parser.tab.c"
    break;

  case 26: /* d_tipo: TK_TIPO_BASE  */
#line 163 "parser.y"
               {(yyval.tipoBase) = (yyvsp[0].tipoBase);}
#line 1778 "parser.tab.c"
    break;

  case 27: /* expresion_t: expresion  */
#line 165 "parser.y"
                        {}
#line 1784 "parser.tab.c"
    break;

  case 28: /* expresion_t: TK_LITERAL  */
#line 166 "parser.y"
             {}
#line 1790 "parser.tab.c"
    break;

  case 29: /* lista_campos: TK_IDENTIFICADOR TK_DEFINICION d_tipo TK_PUNTO_COMA lista_campos  */
#line 168 "parser.y"
                                                                                {}
#line 1796 "parser.tab.c"
    break;

  case 30: /* lista_campos: %empty  */
#line 169 "parser.y"
         {}
#line 1802 "parser.tab.c"
    break;

  case 31: /* lista_d_cte: TK_IDENTIFICADOR TK_OPREL TK_LITERAL TK_PUNTO_COMA lista_d_cte  */
#line 171 "parser.y"
                                                                             {}
#line 1808 "parser.tab.c"
    break;

  case 32: /* lista_d_cte: %empty  */
#line 172 "parser.y"
         {}
#line 1814 "parser.tab.c"
    break;

  case 33: /* lista_d_var: lista_id TK_DEFINICION TK_IDENTIFICADOR TK_PUNTO_COMA lista_d_var  */
#line 174 "parser.y"
                                                                                {}
#line 1820 "parser.tab.c"
    break;

  case 34: /* lista_d_var: lista_id TK_DEFINICION d_tipo TK_PUNTO_COMA lista_d_var  */
#line 175 "parser.y"
                                                          {
    // Recorrer lista_id estableciendo TK_IDENTIFICADOR como tipo
    for (int i = 0; i < listaIdTamano(&(yyvsp[-4].listaId)); i++) {
        char* id = listaIdObtener(&(yyvsp[-4].listaId), i);
        // $3 es TK_IDENTIFICADOR, que es el tipo
        // printf("Creando %s\n", id);
        crearSimbolo(id, (yyvsp[-2].tipoBase));
    }
    // Copiar: destino, fuente
    listaIdCopiar(&(yyval.listaId), &(yyvsp[-4].listaId));
}
#line 1836 "parser.tab.c"
    break;

  case 35: /* lista_d_var: %empty  */
#line 186 "parser.y"
         {}
#line 1842 "parser.tab.c"
    break;

  case 36: /* lista_id: TK_IDENTIFICADOR TK_SEPARADOR lista_id  */
#line 188 "parser.y"
                                                  {
    listaIdAnadir(&(yyvsp[0].listaId), (yyvsp[-2].nombreVariable));
    (yyval.listaId) = (yyvsp[0].listaId);
}
#line 1851 "parser.tab.c"
    break;

  case 37: /* lista_id: TK_IDENTIFICADOR  */
#line 192 "parser.y"
                   {
    // Añadir $1 a la lista de identificadores
    listaIdInicializar(&(yyval.listaId));

    listaIdAnadir(&(yyval.listaId), (yyvsp[0].nombreVariable));
}
#line 1862 "parser.tab.c"
    break;

  case 38: /* decl_ent_sal: decl_ent  */
#line 199 "parser.y"
                        {}
#line 1868 "parser.tab.c"
    break;

  case 39: /* decl_ent_sal: decl_ent decl_sal  */
#line 200 "parser.y"
                    {}
#line 1874 "parser.tab.c"
    break;

  case 40: /* decl_ent_sal: decl_sal  */
#line 201 "parser.y"
           {}
#line 1880 "parser.tab.c"
    break;

  case 41: /* decl_ent: TK_ENT lista_d_var  */
#line 203 "parser.y"
                              { 
    for (int i = 0; i < listaIdTamano(&(yyvsp[0].listaId)); i++){
        char* nombre = listaIdObtener(&(yyvsp[0].listaId), i);
        int posicionSimbolo = obtenerPosicionSimbolo(nombre);
        // printf("Posición símbolo: %d\n", posicionSimbolo);
        generarCuadrupla(posicionSimbolo, INPUT, 0, 200);
    }
}
#line 1893 "parser.tab.c"
    break;

  case 42: /* decl_sal: TK_SAL lista_d_var  */
#line 212 "parser.y"
                              {
    for (int i = 0; i < listaIdTamano(&(yyvsp[0].listaId)); i++){
        char* nombre = listaIdObtener(&(yyvsp[0].listaId), i);
        int posicionSimbolo = obtenerPosicionSimbolo(nombre);
        generarCuadrupla(posicionSimbolo, OUTPUT, 0, 200);
    }
}
#line 1905 "parser.tab.c"
    break;

  case 43: /* exp_a: exp_a TK_SUMA exp_a  */
#line 220 "parser.y"
                            {
    int posTemp;
    if ((yyvsp[-2].expresion).tipo == TIPO_ENTERO && (yyvsp[0].expresion).tipo == TIPO_ENTERO) {
        // Resultado: tipo entero
        posTemp = crearTemp(TIPO_ENTERO);
        // La expresión sigue siendo de tipo entero
        (yyval.expresion).tipo = TIPO_ENTERO;
        // Generar cuádrupla
        generarCuadrupla((yyvsp[-2].expresion).place, OPERADOR_SUMA, (yyvsp[0].expresion).place, posTemp);
    } else if ((yyvsp[-2].expresion).tipo == TIPO_ENTERO && (yyvsp[0].expresion).tipo == TIPO_REAL) {
        // Resultado: tipo real
        posTemp = crearTemp(TIPO_REAL);
        (yyval.expresion).tipo = TIPO_REAL;
        // Cambiar $1 a real
        generarCuadrupla((yyvsp[-2].expresion).place, OPERADOR_INT_A_REAL, 0, posTemp);
        generarCuadrupla(posTemp, OPERADOR_SUMA,  (yyvsp[0].expresion).place, posTemp);
    } else if ((yyvsp[-2].expresion).tipo == TIPO_REAL && (yyvsp[0].expresion).tipo == TIPO_ENTERO) {
        // Resultado: tipo real
        posTemp = crearTemp(TIPO_REAL);
        (yyval.expresion).tipo = TIPO_REAL;
        // Cambiar $1 a real
        generarCuadrupla((yyvsp[0].expresion).place, OPERADOR_INT_A_REAL, 0, posTemp);
        generarCuadrupla(posTemp, OPERADOR_SUMA,  (yyvsp[-2].expresion).place, posTemp);
    } else if ((yyvsp[-2].expresion).tipo == TIPO_REAL && (yyvsp[0].expresion).tipo == TIPO_REAL) {
        // Resultado: tipo real
        posTemp = crearTemp(TIPO_REAL);
        (yyval.expresion).tipo = TIPO_REAL;
        generarCuadrupla((yyvsp[-2].expresion).place, OPERADOR_SUMA,  (yyvsp[0].expresion).place, posTemp);
    } else {
        // Error
        yyerror("Error: tipos incompatibles en la expresión\n");
    }
    (yyval.expresion).place = posTemp;
}
#line 1944 "parser.tab.c"
    break;

  case 44: /* exp_a: exp_a TK_RESTA exp_a  */
#line 254 "parser.y"
                       {
    int posTemp;
    if ((yyvsp[-2].expresion).tipo == TIPO_ENTERO && (yyvsp[0].expresion).tipo == TIPO_ENTERO) {
        // Resultado: tipo entero
        posTemp = crearTemp(TIPO_ENTERO);
        // La expresión sigue siendo de tipo entero
        (yyval.expresion).tipo = TIPO_ENTERO;
        // Generar cuádrupla
        generarCuadrupla((yyvsp[-2].expresion).place, OPERADOR_RESTA, (yyvsp[0].expresion).place, posTemp);
    } else if ((yyvsp[-2].expresion).tipo == TIPO_ENTERO && (yyvsp[0].expresion).tipo == TIPO_REAL) {
        // Resultado: tipo real
        posTemp = crearTemp(TIPO_REAL);
        (yyval.expresion).tipo = TIPO_REAL;
        // Cambiar $1 a real
        generarCuadrupla((yyvsp[-2].expresion).place, OPERADOR_INT_A_REAL, 0, posTemp);
        generarCuadrupla(posTemp, OPERADOR_RESTA,  (yyvsp[0].expresion).place, posTemp);
    } else if ((yyvsp[-2].expresion).tipo == TIPO_REAL && (yyvsp[0].expresion).tipo == TIPO_ENTERO) {
        // Resultado: tipo real
        posTemp = crearTemp(TIPO_REAL);
        (yyval.expresion).tipo = TIPO_REAL;
        // Cambiar $1 a real
        generarCuadrupla((yyvsp[0].expresion).place, OPERADOR_INT_A_REAL, 0, posTemp);
        generarCuadrupla(posTemp, OPERADOR_RESTA,  (yyvsp[-2].expresion).place, posTemp);
    } else if ((yyvsp[-2].expresion).tipo == TIPO_REAL && (yyvsp[0].expresion).tipo == TIPO_REAL) {
        // Resultado: tipo real
        posTemp = crearTemp(TIPO_REAL);
        (yyval.expresion).tipo = TIPO_REAL;
        generarCuadrupla((yyvsp[-2].expresion).place, OPERADOR_RESTA,  (yyvsp[0].expresion).place, posTemp);
    } else {
        // Error
        yyerror("Error: tipos incompatibles en la expresión\n");
    }
    (yyval.expresion).place = posTemp;
}
#line 1983 "parser.tab.c"
    break;

  case 45: /* exp_a: exp_a TK_PROD exp_a  */
#line 288 "parser.y"
                      {
    int posTemp;
    if ((yyvsp[-2].expresion).tipo == TIPO_ENTERO && (yyvsp[0].expresion).tipo == TIPO_ENTERO) {
        // Resultado: tipo entero
        posTemp = crearTemp(TIPO_ENTERO);
        // La expresión sigue siendo de tipo entero
        (yyval.expresion).tipo = TIPO_ENTERO;
        // Generar cuádrupla
        generarCuadrupla((yyvsp[-2].expresion).place, OPERADOR_PROD, (yyvsp[0].expresion).place, posTemp);
    } else if ((yyvsp[-2].expresion).tipo == TIPO_ENTERO && (yyvsp[0].expresion).tipo == TIPO_REAL) {
        // Resultado: tipo real
        posTemp = crearTemp(TIPO_REAL);
        (yyval.expresion).tipo = TIPO_REAL;
        // Cambiar $1 a real
        generarCuadrupla((yyvsp[-2].expresion).place, OPERADOR_INT_A_REAL, 0, posTemp);
        generarCuadrupla(posTemp, OPERADOR_PROD,  (yyvsp[0].expresion).place, posTemp);
    } else if ((yyvsp[-2].expresion).tipo == TIPO_REAL && (yyvsp[0].expresion).tipo == TIPO_ENTERO) {
        // Resultado: tipo real
        posTemp = crearTemp(TIPO_REAL);
        (yyval.expresion).tipo = TIPO_REAL;
        // Cambiar $1 a real
        generarCuadrupla((yyvsp[0].expresion).place, OPERADOR_INT_A_REAL, 0, posTemp);
        generarCuadrupla(posTemp, OPERADOR_PROD,  (yyvsp[-2].expresion).place, posTemp);
    } else if ((yyvsp[-2].expresion).tipo == TIPO_REAL && (yyvsp[0].expresion).tipo == TIPO_REAL) {
        // Resultado: tipo real
        posTemp = crearTemp(TIPO_REAL);
        (yyval.expresion).tipo = TIPO_REAL;
        generarCuadrupla((yyvsp[-2].expresion).place, OPERADOR_PROD,  (yyvsp[0].expresion).place, posTemp);
    } else {
        // Error
        yyerror("Error: tipos incompatibles en la expresión\n");
    }
    (yyval.expresion).place = posTemp;
}
#line 2022 "parser.tab.c"
    break;

  case 46: /* exp_a: exp_a TK_DIV_REA exp_a  */
#line 322 "parser.y"
                         {
    int posTemp;
    if ((yyvsp[-2].expresion).tipo == TIPO_ENTERO && (yyvsp[0].expresion).tipo == TIPO_ENTERO) {
        // Resultado: tipo entero
        posTemp = crearTemp(TIPO_ENTERO);
        // La expresión sigue siendo de tipo entero
        (yyval.expresion).tipo = TIPO_ENTERO;
        // Generar cuádrupla
        generarCuadrupla((yyvsp[-2].expresion).place, OPERADOR_DIV_REA, (yyvsp[0].expresion).place, posTemp);
    } else if ((yyvsp[-2].expresion).tipo == TIPO_ENTERO && (yyvsp[0].expresion).tipo == TIPO_REAL) {
        // Resultado: tipo real
        posTemp = crearTemp(TIPO_REAL);
        (yyval.expresion).tipo = TIPO_REAL;
        // Cambiar $1 a real
        generarCuadrupla((yyvsp[-2].expresion).place, OPERADOR_INT_A_REAL, 0, posTemp);
        generarCuadrupla(posTemp, OPERADOR_DIV_REA,  (yyvsp[0].expresion).place, posTemp);
    } else if ((yyvsp[-2].expresion).tipo == TIPO_REAL && (yyvsp[0].expresion).tipo == TIPO_ENTERO) {
        // Resultado: tipo real
        posTemp = crearTemp(TIPO_REAL);
        (yyval.expresion).tipo = TIPO_REAL;
        // Cambiar $1 a real
        generarCuadrupla((yyvsp[0].expresion).place, OPERADOR_INT_A_REAL, 0, posTemp);
        generarCuadrupla(posTemp, OPERADOR_DIV_REA,  (yyvsp[-2].expresion).place, posTemp);
    } else if ((yyvsp[-2].expresion).tipo == TIPO_REAL && (yyvsp[0].expresion).tipo == TIPO_REAL) {
        // Resultado: tipo real
        posTemp = crearTemp(TIPO_REAL);
        (yyval.expresion).tipo = TIPO_REAL;
        generarCuadrupla((yyvsp[-2].expresion).place, OPERADOR_DIV_REA,  (yyvsp[0].expresion).place, posTemp);
    } else {
        // Error
        yyerror("Error: tipos incompatibles en la expresión\n");
    }
    (yyval.expresion).place = posTemp;
}
#line 2061 "parser.tab.c"
    break;

  case 47: /* exp_a: exp_a TK_R_MOD exp_a  */
#line 356 "parser.y"
                       {
    int posTemp;
    if ((yyvsp[-2].expresion).tipo == TIPO_ENTERO && (yyvsp[0].expresion).tipo == TIPO_ENTERO) {
        // Resultado: tipo entero
        posTemp = crearTemp(TIPO_ENTERO);
        // La expresión sigue siendo de tipo entero
        (yyval.expresion).tipo = TIPO_ENTERO;
        // Generar cuádrupla
        generarCuadrupla((yyvsp[-2].expresion).place, OPERADOR_MOD, (yyvsp[0].expresion).place, posTemp);
    } else {
        // Error
        yyerror("Error: tipos incompatibles en la expresión\n");
    }
    (yyval.expresion).place = posTemp;
}
#line 2081 "parser.tab.c"
    break;

  case 48: /* exp_a: exp_a TK_DIV exp_a  */
#line 371 "parser.y"
                     {
    int posTemp;
    if ((yyvsp[-2].expresion).tipo == TIPO_ENTERO && (yyvsp[0].expresion).tipo == TIPO_ENTERO) {
        // Resultado: tipo entero
        posTemp = crearTemp(TIPO_ENTERO);
        // La expresión sigue siendo de tipo entero
        (yyval.expresion).tipo = TIPO_ENTERO;
        // Generar cuádrupla
        generarCuadrupla((yyvsp[-2].expresion).place, OPERADOR_DIV, (yyvsp[0].expresion).place, posTemp);
    } else {
        // Error
        yyerror("Error: tipos incompatibles en la expresión\n");
    }
    (yyval.expresion).place = posTemp;
}
#line 2101 "parser.tab.c"
    break;

  case 49: /* exp_a: TK_ABRIR_PARENTESIS exp_a TK_CERRAR_PARENTESIS  */
#line 386 "parser.y"
                                                 {
    (yyval.expresion) = (yyvsp[-1].expresion);
}
#line 2109 "parser.tab.c"
    break;

  case 50: /* exp_a: operando  */
#line 389 "parser.y"
           {
    // Guardar place y tipo
    if ((yyvsp[0].expresion).tipo == TIPO_BOOLEANO){
        memcpy((yyval.expresion).falso, (yyvsp[0].expresion).falso, TAMANO_TABLA*sizeof(int));
        (yyval.expresion).numFalsos = (yyvsp[0].expresion).numFalsos;
        memcpy((yyval.expresion).verdadero, (yyvsp[0].expresion).verdadero, TAMANO_TABLA*sizeof(int));
        (yyval.expresion).numVerdaderos = (yyvsp[0].expresion).numVerdaderos;
    }
    (yyval.expresion).place = (yyvsp[0].expresion).place;
    (yyval.expresion).tipo = (yyvsp[0].expresion).tipo;
}
#line 2125 "parser.tab.c"
    break;

  case 51: /* exp_a: TK_LITERAL  */
#line 400 "parser.y"
             {}
#line 2131 "parser.tab.c"
    break;

  case 52: /* exp_a: TK_RESTA exp_a  */
#line 401 "parser.y"
                  {
    int posTemp;
    if ((yyvsp[0].expresion).tipo == TIPO_ENTERO) {
        // Resultado: tipo entero
        // La expresión sigue siendo de tipo entero
        posTemp = crearTemp(TIPO_ENTERO);
        (yyval.expresion).tipo = TIPO_ENTERO;
    } else if ((yyvsp[0].expresion).tipo == TIPO_REAL) {
        // Resultado: tipo real
        posTemp = crearTemp(TIPO_REAL);
        (yyval.expresion).tipo = TIPO_REAL;
    } else {
        // Error
        yyerror("Error: tipos incompatibles en la expresión\n");
    }
    (yyval.expresion).place = posTemp;
    // Generar cuádrupla
    generarCuadrupla(0, OPERADOR_RESTA, (yyvsp[0].expresion).place, posTemp);
}
#line 2155 "parser.tab.c"
    break;

  case 53: /* exp_a: exp_a TK_Y M exp_a  */
#line 420 "parser.y"
                     {
    backpatch((yyvsp[-3].expresion).verdadero, (yyvsp[-3].expresion).numVerdaderos, (yyvsp[-1].entero));
    merge((yyvsp[-3].expresion).falso, (yyvsp[-3].expresion).numFalsos, (yyvsp[0].expresion).falso, (yyvsp[0].expresion).numFalsos, (yyval.expresion).falso);
    (yyval.expresion).numFalsos = (yyvsp[-3].expresion).numFalsos + (yyvsp[0].expresion).numFalsos;
    (yyval.expresion).numVerdaderos = (yyvsp[0].expresion).numVerdaderos;
    memcpy((yyval.expresion).verdadero, (yyvsp[0].expresion).verdadero, TAMANO_TABLA*sizeof(int));
}
#line 2167 "parser.tab.c"
    break;

  case 54: /* exp_a: exp_a TK_O M exp_a  */
#line 427 "parser.y"
                     {
    backpatch((yyvsp[-3].expresion).falso, (yyvsp[-3].expresion).numFalsos, (yyvsp[-1].entero));
    merge((yyvsp[-3].expresion).verdadero, (yyvsp[-3].expresion).numVerdaderos, (yyvsp[0].expresion).verdadero, (yyvsp[0].expresion).numVerdaderos, (yyval.expresion).verdadero);
    (yyval.expresion).numVerdaderos = (yyvsp[-3].expresion).numVerdaderos + (yyvsp[0].expresion).numVerdaderos;
    (yyval.expresion).numFalsos = (yyvsp[0].expresion).numFalsos;
    memcpy((yyval.expresion).falso, (yyvsp[0].expresion).falso, TAMANO_TABLA*sizeof(int));
}
#line 2179 "parser.tab.c"
    break;

  case 55: /* exp_a: TK_NO exp_a  */
#line 434 "parser.y"
              {
    memcpy((yyval.expresion).verdadero, (yyvsp[0].expresion).falso, TAMANO_TABLA*sizeof(int));
    (yyval.expresion).numVerdaderos = (yyvsp[0].expresion).numFalsos;
    memcpy((yyval.expresion).falso, (yyvsp[0].expresion).verdadero, TAMANO_TABLA*sizeof(int));
    (yyval.expresion).numFalsos = (yyvsp[0].expresion).numVerdaderos;
}
#line 2190 "parser.tab.c"
    break;

  case 56: /* exp_a: TK_VERDADERO  */
#line 440 "parser.y"
               {}
#line 2196 "parser.tab.c"
    break;

  case 57: /* exp_a: TK_FALSO  */
#line 441 "parser.y"
           {}
#line 2202 "parser.tab.c"
    break;

  case 58: /* exp_a: expresion TK_OPREL expresion  */
#line 442 "parser.y"
                               {
    (yyval.expresion).verdadero[0] = tablaDeCuadruplas.tamano;
    (yyval.expresion).numVerdaderos = 1;
    (yyval.expresion).falso[0] = tablaDeCuadruplas.tamano+1;
    (yyval.expresion).numFalsos = 1;
    generarCuadrupla((yyvsp[-2].expresion).place, (yyvsp[-1].oprel), (yyvsp[0].expresion).place, -1);
    generarCuadrupla(0,OPERADOR_GOTO,0,-1);
}
#line 2215 "parser.tab.c"
    break;

  case 59: /* expresion: exp_a  */
#line 451 "parser.y"
                  {}
#line 2221 "parser.tab.c"
    break;

  case 60: /* expresion: funcion_ll  */
#line 452 "parser.y"
             {}
#line 2227 "parser.tab.c"
    break;

  case 61: /* operando: TK_IDENTIFICADOR  */
#line 454 "parser.y"
                            {
    if (consultarTipo((yyvsp[0].nombreVariable)) == TIPO_BOOLEANO){
        (yyval.expresion).verdadero[0] = tablaDeCuadruplas.tamano;
        (yyval.expresion).numVerdaderos = 1;
        (yyval.expresion).falso[0] = tablaDeCuadruplas.tamano+1;
        (yyval.expresion).numFalsos = 1;
        //generarCuadrupla($1.place, OPERADOR_ASIGNACION, 0, -1);
        generarCuadrupla(0,OPERADOR_GOTO,0,-1);
    }
    (yyval.expresion).place = obtenerPosicionSimbolo((yyvsp[0].nombreVariable));
    (yyval.expresion).tipo = consultarTipo((yyvsp[0].nombreVariable));
}
#line 2244 "parser.tab.c"
    break;

  case 62: /* operando: operando TK_PUNTO operando  */
#line 466 "parser.y"
                             {}
#line 2250 "parser.tab.c"
    break;

  case 63: /* operando: operando TK_ABRIR_PARENTESIS expresion TK_CERRAR_PARENTESIS  */
#line 467 "parser.y"
                                                              {}
#line 2256 "parser.tab.c"
    break;

  case 64: /* operando: operando TK_REF  */
#line 468 "parser.y"
                  {}
#line 2262 "parser.tab.c"
    break;

  case 65: /* instrucciones: instruccion TK_PUNTO_COMA instrucciones  */
#line 470 "parser.y"
                                                        {
    (yyval.instruccion).siguiente = (yyvsp[0].instruccion).siguiente;
    memcpy((yyval.instruccion).cuadruplas, (yyvsp[0].instruccion).cuadruplas,TAMANO_TABLA*sizeof(int));
}
#line 2271 "parser.tab.c"
    break;

  case 66: /* instrucciones: instruccion  */
#line 474 "parser.y"
              {
    // Solo hay una instrucción, instrucciones es instrucción
    (yyval.instruccion) = (yyvsp[0].instruccion);
}
#line 2280 "parser.tab.c"
    break;

  case 67: /* instruccion: TK_CONTINUAR  */
#line 479 "parser.y"
                           {}
#line 2286 "parser.tab.c"
    break;

  case 68: /* instruccion: asignacion  */
#line 480 "parser.y"
             {
    (yyval.instruccion) = (yyvsp[0].instruccion);
}
#line 2294 "parser.tab.c"
    break;

  case 69: /* instruccion: alternativa  */
#line 483 "parser.y"
              {}
#line 2300 "parser.tab.c"
    break;

  case 70: /* instruccion: iteracion  */
#line 484 "parser.y"
            {}
#line 2306 "parser.tab.c"
    break;

  case 71: /* instruccion: accion_ll  */
#line 485 "parser.y"
            {}
#line 2312 "parser.tab.c"
    break;

  case 72: /* asignacion: operando TK_ASIGNACION expresion  */
#line 487 "parser.y"
                                              {
    // Guardar en operando $1 expresión $3
    // Evita asignar por ejemplo un booleano a un entero
    if ((yyvsp[-2].expresion).tipo == (yyvsp[0].expresion).tipo || ((yyvsp[-2].expresion).tipo == TIPO_REAL && (yyvsp[0].expresion).tipo == TIPO_ENTERO)) {
        if ((yyvsp[-2].expresion).tipo == TIPO_BOOLEANO){
            backpatch((yyvsp[0].expresion).falso, (yyvsp[0].expresion).numFalsos, tablaDeCuadruplas.tamano);
            generarCuadrupla((yyvsp[0].expresion).place, OPERADOR_ASIGNACION, -1, (yyvsp[-2].expresion).place);
            generarCuadrupla(-1, OPERADOR_GOTO, -1, tablaDeCuadruplas.tamano + 2);
            
            backpatch((yyvsp[0].expresion).verdadero, (yyvsp[0].expresion).numVerdaderos, tablaDeCuadruplas.tamano);
            generarCuadrupla((yyvsp[0].expresion).place, OPERADOR_ASIGNACION, -1, (yyvsp[-2].expresion).place);
        }
        generarCuadrupla((yyvsp[0].expresion).place, OPERADOR_ASIGNACION, -1, (yyvsp[-2].expresion).place);
    } else {
        yyerror("Error en la asignación: tipos incompatibles\n");
    }
}
#line 2334 "parser.tab.c"
    break;

  case 73: /* alternativa: TK_SI M expresion TK_ENTONCES M instrucciones lista_opciones TK_FSI  */
#line 505 "parser.y"
                                                                                  {
     backpatch((yyvsp[-5].expresion).verdadero, (yyvsp[-5].expresion).numVerdaderos, (yyvsp[-3].entero));
     if ((yyvsp[-2].instruccion).siguiente != 0){
        backpatch((yyvsp[-5].expresion).falso, (yyvsp[-5].expresion).numFalsos, (yyvsp[-2].instruccion).cuadruplas[(yyvsp[-2].instruccion).siguiente-1]);
        merge((yyvsp[-5].expresion).falso, (yyvsp[-5].expresion).numFalsos, (yyvsp[-2].instruccion).cuadruplas, (yyvsp[-2].instruccion).siguiente, (yyval.instruccion).cuadruplas);
        (yyval.instruccion).siguiente = (yyvsp[-5].expresion).numFalsos + (yyvsp[-2].instruccion).siguiente;
    } else {
        backpatch((yyvsp[-5].expresion).falso, (yyvsp[-5].expresion).numFalsos, tablaDeCuadruplas.tamano);
        int nextquad[1];
        nextquad[0] = tablaDeCuadruplas.tamano;
        merge((yyvsp[-5].expresion).falso, (yyvsp[-5].expresion).numFalsos, nextquad, 1, (yyval.instruccion).cuadruplas);
        (yyval.instruccion).siguiente = (yyvsp[-5].expresion).numFalsos+1;
        generarCuadrupla(0, OPERADOR_GOTO, 0, -1);
    }
    //$$.cuadruplas[$$.siguiente] = $2;
    //$$.siguiente++;
}
#line 2356 "parser.tab.c"
    break;

  case 74: /* lista_opciones: TK_SINOSI M expresion TK_ENTONCES M instrucciones lista_opciones  */
#line 523 "parser.y"
                                                                                  {
    backpatch((yyvsp[-4].expresion).verdadero, (yyvsp[-4].expresion).numVerdaderos, (yyvsp[-2].entero));
     if ((yyvsp[-1].instruccion).siguiente != 0){
        backpatch((yyvsp[-4].expresion).falso, (yyvsp[-4].expresion).numFalsos, (yyvsp[-1].instruccion).cuadruplas[(yyvsp[-1].instruccion).siguiente-1]);
        merge((yyvsp[-4].expresion).falso, (yyvsp[-4].expresion).numFalsos, (yyvsp[-1].instruccion).cuadruplas, (yyvsp[-1].instruccion).siguiente, (yyval.instruccion).cuadruplas);
        (yyval.instruccion).siguiente = (yyvsp[-4].expresion).numFalsos + (yyvsp[-1].instruccion).siguiente;
    } else {
        backpatch((yyvsp[-4].expresion).falso, (yyvsp[-4].expresion).numFalsos, tablaDeCuadruplas.tamano);
        int nextquad[1];
        nextquad[0] = tablaDeCuadruplas.tamano;
        merge((yyvsp[-4].expresion).falso, (yyvsp[-4].expresion).numFalsos, nextquad, 1, (yyval.instruccion).cuadruplas);
        (yyval.instruccion).siguiente = (yyvsp[-4].expresion).numFalsos+1;
        generarCuadrupla(0, OPERADOR_GOTO, 0, -1);
    }
    //$$.cuadruplas[$$.siguiente] = $2;
    //$$.siguiente++;
}
#line 2378 "parser.tab.c"
    break;

  case 75: /* lista_opciones: %empty  */
#line 540 "parser.y"
         {(yyval.instruccion).siguiente == 0;}
#line 2384 "parser.tab.c"
    break;

  case 76: /* iteracion: it_cota_fija  */
#line 542 "parser.y"
                         {}
#line 2390 "parser.tab.c"
    break;

  case 77: /* iteracion: it_cota_exp  */
#line 543 "parser.y"
              {}
#line 2396 "parser.tab.c"
    break;

  case 78: /* it_cota_fija: TK_PARA TK_IDENTIFICADOR TK_ASIGNACION expresion TK_HASTA expresion TK_HACER instrucciones TK_FPARA  */
#line 545 "parser.y"
                                                                                                                   {}
#line 2402 "parser.tab.c"
    break;

  case 79: /* it_cota_exp: TK_MIENTRAS expresion TK_HACER instrucciones TK_FMIENTRAS  */
#line 547 "parser.y"
                                                                        {}
#line 2408 "parser.tab.c"
    break;

  case 80: /* accion_d: TK_ACCION a_cabecera bloque TK_FACCION  */
#line 549 "parser.y"
                                                  {}
#line 2414 "parser.tab.c"
    break;

  case 81: /* funcion_d: TK_FUNCION f_cabecera bloque TK_DEV expresion TK_FFUNCION  */
#line 551 "parser.y"
                                                                      {}
#line 2420 "parser.tab.c"
    break;

  case 82: /* a_cabecera: TK_IDENTIFICADOR TK_ABRIR_PARENTESIS d_par_form TK_CERRAR_PARENTESIS TK_PUNTO_COMA  */
#line 553 "parser.y"
                                                                                                {}
#line 2426 "parser.tab.c"
    break;

  case 83: /* f_cabecera: TK_IDENTIFICADOR TK_ABRIR_PARENTESIS lista_d_var TK_CERRAR_PARENTESIS TK_DEV d_tipo TK_PUNTO_COMA  */
#line 555 "parser.y"
                                                                                                               {}
#line 2432 "parser.tab.c"
    break;

  case 84: /* d_par_form: d_p_form TK_PUNTO_COMA d_par_form  */
#line 557 "parser.y"
                                               {}
#line 2438 "parser.tab.c"
    break;

  case 85: /* d_par_form: %empty  */
#line 558 "parser.y"
         {}
#line 2444 "parser.tab.c"
    break;

  case 86: /* d_p_form: TK_ENT lista_id TK_DEFINICION d_tipo  */
#line 560 "parser.y"
                                                {}
#line 2450 "parser.tab.c"
    break;

  case 87: /* d_p_form: TK_SAL lista_id TK_DEFINICION d_tipo  */
#line 561 "parser.y"
                                       {}
#line 2456 "parser.tab.c"
    break;

  case 88: /* d_p_form: TK_ES lista_id TK_DEFINICION d_tipo  */
#line 562 "parser.y"
                                      {}
#line 2462 "parser.tab.c"
    break;

  case 89: /* accion_ll: TK_IDENTIFICADOR TK_ABRIR_PARENTESIS l_ll TK_CERRAR_PARENTESIS  */
#line 564 "parser.y"
                                                                           {}
#line 2468 "parser.tab.c"
    break;

  case 90: /* funcion_ll: TK_IDENTIFICADOR TK_ABRIR_PARENTESIS l_ll TK_CERRAR_PARENTESIS  */
#line 566 "parser.y"
                                                                            {}
#line 2474 "parser.tab.c"
    break;

  case 91: /* l_ll: expresion TK_SEPARADOR l_ll  */
#line 568 "parser.y"
                                   {}
#line 2480 "parser.tab.c"
    break;

  case 92: /* l_ll: expresion  */
#line 569 "parser.y"
            {}
#line 2486 "parser.tab.c"
    break;

  case 93: /* M: %empty  */
#line 571 "parser.y"
           {
    (yyval.entero) = tablaDeCuadruplas.tamano;
}
#line 2494 "parser.tab.c"
    break;


#line 2498 "parser.tab.c"

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
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
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
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 576 "parser.y"


int main(int argc, char* argv[]) {
    // Activar modo debug
    //yydebug = 1;

    if (argc <= 1) {
        printf("Error: No se ha recibido un fichero de entrada");
        return -1;
    }

    yyin = fopen(argv[1], "r");
    if (yyin == NULL) {
        printf("Error: No se ha recibido un fichero de entrada");
        return -1;
    }

    inicializarTablaDeSimbolos();
    tablaDeCuadruplas.tamano = 0;

    int result = yyparse();
    if (result == 0) {
        printf("Parseo correcto\n");
    } else {
        printf("Parseo incorrecto\n");
    }

    return result;
}

void yyerror(char const *s) {
    fprintf(stderr, "Error: %s\n", s);
    exit(-1);
}
