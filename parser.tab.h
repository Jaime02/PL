/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 23 "parser.y"

    #include "modulos/tablaDeSimbolos.h"
    #include "modulos/tablaDeCuadruplas.h"
    #include "modulos/definiciones.h"
    #include "modulos/listaId.h"

#line 56 "parser.tab.h"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    TK_ASIGNACION = 258,           /* TK_ASIGNACION  */
    TK_SEPARADOR = 259,            /* TK_SEPARADOR  */
    TK_DEFINICION = 260,           /* TK_DEFINICION  */
    TK_SUBRANGO = 261,             /* TK_SUBRANGO  */
    TK_ENTONCES = 262,             /* TK_ENTONCES  */
    TK_SUMA = 263,                 /* TK_SUMA  */
    TK_RESTA = 264,                /* TK_RESTA  */
    TK_DIV = 265,                  /* TK_DIV  */
    TK_PROD = 266,                 /* TK_PROD  */
    TK_MOD = 267,                  /* TK_MOD  */
    TK_R_MOD = 268,                /* TK_R_MOD  */
    TK_DIV_REA = 269,              /* TK_DIV_REA  */
    TK_IGUAL = 270,                /* TK_IGUAL  */
    TK_O = 271,                    /* TK_O  */
    TK_Y = 272,                    /* TK_Y  */
    TK_MAYOR = 273,                /* TK_MAYOR  */
    TK_MENOR = 274,                /* TK_MENOR  */
    TK_MENOR_IGUAL = 275,          /* TK_MENOR_IGUAL  */
    TK_MAYOR_IGUAL = 276,          /* TK_MAYOR_IGUAL  */
    TK_DISTINTO = 277,             /* TK_DISTINTO  */
    TK_ABRIR_TABLA = 278,          /* TK_ABRIR_TABLA  */
    TK_CERRAR_TABLA = 279,         /* TK_CERRAR_TABLA  */
    TK_BOOLEANO = 280,             /* TK_BOOLEANO  */
    TK_ABRIR_PARENTESIS = 281,     /* TK_ABRIR_PARENTESIS  */
    TK_CERRAR_PARENTESIS = 282,    /* TK_CERRAR_PARENTESIS  */
    TK_TIPO_BASE = 283,            /* TK_TIPO_BASE  */
    TK_OPREL = 284,                /* TK_OPREL  */
    TK_LITERAL = 285,              /* TK_LITERAL  */
    TK_PUNTO_COMA = 286,           /* TK_PUNTO_COMA  */
    TK_PUNTO = 287,                /* TK_PUNTO  */
    TK_CARACTER = 288,             /* TK_CARACTER  */
    TK_CADENA = 289,               /* TK_CADENA  */
    TK_COMENTARIO = 290,           /* TK_COMENTARIO  */
    TK_ACCION = 291,               /* TK_ACCION  */
    TK_ALGORITMO = 292,            /* TK_ALGORITMO  */
    TK_CONST = 293,                /* TK_CONST  */
    TK_CONTINUAR = 294,            /* TK_CONTINUAR  */
    TK_DE = 295,                   /* TK_DE  */
    TK_DEV = 296,                  /* TK_DEV  */
    TK_ENT = 297,                  /* TK_ENT  */
    TK_ES = 298,                   /* TK_ES  */
    TK_FACCION = 299,              /* TK_FACCION  */
    TK_FALGORITMO = 300,           /* TK_FALGORITMO  */
    TK_FALSO = 301,                /* TK_FALSO  */
    TK_FCONST = 302,               /* TK_FCONST  */
    TK_FFUNCION = 303,             /* TK_FFUNCION  */
    TK_FMIENTRAS = 304,            /* TK_FMIENTRAS  */
    TK_FPARA = 305,                /* TK_FPARA  */
    TK_FSI = 306,                  /* TK_FSI  */
    TK_FTIPO = 307,                /* TK_FTIPO  */
    TK_FTUPLA = 308,               /* TK_FTUPLA  */
    TK_FUNCION = 309,              /* TK_FUNCION  */
    TK_FVAR = 310,                 /* TK_FVAR  */
    TK_HACER = 311,                /* TK_HACER  */
    TK_HASTA = 312,                /* TK_HASTA  */
    TK_MIENTRAS = 313,             /* TK_MIENTRAS  */
    TK_NO = 314,                   /* TK_NO  */
    TK_PARA = 315,                 /* TK_PARA  */
    TK_REF = 316,                  /* TK_REF  */
    TK_SAL = 317,                  /* TK_SAL  */
    TK_SI = 318,                   /* TK_SI  */
    TK_SINOSI = 319,               /* TK_SINOSI  */
    TK_TABLA = 320,                /* TK_TABLA  */
    TK_TIPO = 321,                 /* TK_TIPO  */
    TK_TUPLA = 322,                /* TK_TUPLA  */
    TK_VAR = 323,                  /* TK_VAR  */
    TK_VERDADERO = 324,            /* TK_VERDADERO  */
    TK_R_REAL = 325,               /* TK_R_REAL  */
    TK_R_BOOLEANO = 326,           /* TK_R_BOOLEANO  */
    TK_R_CADENA = 327,             /* TK_R_CADENA  */
    TK_R_CARACTER = 328,           /* TK_R_CARACTER  */
    TK_R_ENTERO = 329,             /* TK_R_ENTERO  */
    TK_IDENTIFICADOR = 330         /* TK_IDENTIFICADOR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 31 "parser.y"

    char nombreVariable[100];
    Oprel oprel;
    Literal literal;
    TipoBase tipoBase;
    TipoListaId listaId;
    TipoExpresion expresion;
    TipoInstruccion instruccion;
    int entero;
    int* listaEnteros;

#line 160 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
