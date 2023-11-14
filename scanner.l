%option caseless

%{

#include <stdio.h>
#include "gramatica.tab.h"

%}

/* Definiciones gramaticales */

LETRA                [a-z]
CIFRA                [0-9]

ASIGNACION           :=
SEPARADOR            ,
DEFINICION           :
SUBRANGO             \.\.
ENTONCES             ->
ABRIR_PARENTESIS     \(
CERRAR_PARENTESIS    \)
PUNTO_COMA           ;
PUNTO                \.

OPR_SUMA             \+
OPR_RESTA            \-
OPR_PROD             \*
OPR_MOD              %
OPR_DIV_REA          \/
OPR_IGUAL            =
OPR_MAYOR            >
OPR_MENOR            <
OPR_MENOR_IGUAL      <=
OPR_MAYOR_IGUAL      >=
OPR_DISTINTO         <>
OPR_DIV              div

ABRIR_TABLA          \[
CERRAR_TABLA         \]

ENTERO               {CIFRA}{CIFRA}*([e|E]{CIFRA}{CIFRA}*)?
REAL                 {CIFRA}{CIFRA}*(\.{CIFRA}{CIFRA}*)?([e|E]{CIFRA}{CIFRA}*)?
CARACTER             '.'
CADENA               '(\/.|[^'])*'
COMENTARIO           \{(\/.|[^}])*\}

BOOLEANO             (R_VERDADERO)|(R_FALSO)
IDENTIFICADOR        {LETRA}({LETRA}|{CIFRA})*
SALTO                \nR_CADENA

R_ACCION             accion
R_ALGORITMO          algoritmo
R_CONST              const
R_CONTINUAR          continuar
R_DE                 de
R_DEV                dev
R_ENT                ent
R_ES                 es
R_FACCION            faccion
R_FALGORITMO         falgoritmo
R_FALSO              falso
R_FCONST             fconst
R_FFUNCION           ffuncion
R_FMIENTRAS          fmientras
R_FPARA              fpara
R_FSI                fsi
R_FTIPO              ftipo
R_FTUPLA             ftupla
R_FUNCION            funcion
R_FVAR               fvar
R_HACER              hacer
R_HASTA              hasta
R_MIENTRAS           mientras
R_MOD                mod
R_NO                 no
R_O                  o
R_PARA               para
R_REF                ref
R_SAL                sal
R_SI                 si
R_SINOSI             \[\]
R_TABLA              tabla
R_TIPO               tipo
R_TUPLA              tupla
R_VAR                var
R_VERDADERO          verdadero
R_Y                  y
R_REAL               real
R_BOOLEANO           booleano
R_CADENA             cadena
R_CARACTER           caracter
R_ENTERO             entero

%%

{ASIGNACION}         { return TK_ASIGNACION; }
{SEPARADOR}          { return TK_SEPARADOR; }
{DEFINICION}         { return TK_DEFINICION; }
{SUBRANGO}           { return TK_SUBRANGO; }
{ENTONCES}           { return TK_ENTONCES; }
{ABRIR_PARENTESIS}   { return TK_ABRIR_PARENTESIS; }
{CERRAR_PARENTESIS}  { return TK_CERRAR_PARENTESIS; }
{ABRIR_TABLA}        { return TK_ABRIR_TABLA; }
{CERRAR_TABLA}       { return TK_CERRAR_TABLA; }
{BOOLEANO}           { return TK_BOOLEANO; }
{SALTO}              { }

/* Operaciones binarias */
{OPR_SUMA}           { return TK_SUMA; }
{OPR_RESTA}          { return TK_RESTA; }
{OPR_PROD}           { return TK_PROD; }
{OPR_MOD}            { return TK_MOD; }
{OPR_DIV_REA}        { return TK_DIV_REA; }
{OPR_DIV}            { return TK_DIV; }

/* Operaciones relacionales */
{OPR_IGUAL}          { yyval.oprel = OPR_IGUAL; return TK_OPREL; }
{OPR_MAYOR}          { yyval.oprel = OPR_MAYOR; return TK_OPREL; }
{OPR_MENOR}          { yyval.oprel = OPR_MENOR; return TK_OPREL; }
{OPR_MENOR_IGUAL}    { yyval.oprel = OPR_MENOR_IGUAL; return TK_OPREL; }
{OPR_MAYOR_IGUAL}    { yyval.oprel = OPR_MAYOR_IGUAL; return TK_OPREL; }
{OPR_DISTINTO}       { yyval.oprel = OPR_DISTINTO; return TK_OPREL; }

{ENTERO}             { yyval.literal = ENTERO; return TK_LITERAL; }
{REAL}               { yyval.literal = REAL; return TK_LITERAL; }
{CARACTER}           { yyval.literal = CARACTER; return TK_LITERAL; }
{CADENA}             { yyval.literal = CADENA; return TK_LITERAL; }

{PUNTO_COMA}         { return TK_PUNTO_COMA; }
{PUNTO}              { return TK_PUNTO; }

{COMENTARIO}         { return TK_COMENTARIO; }
{R_ACCION}           { return TK_ACCION; }
{R_ALGORITMO}        { return TK_ALGORITMO; }
{R_CONST}            { return TK_CONST; }
{R_CONTINUAR}        { return TK_CONTINUAR; }
{R_DE}               { return TK_DE; }
{R_DEV}              { return TK_DEV; }
{R_ENT}              { return TK_ENT; }
{R_ES}               { return TK_ES; }
{R_FACCION}          { return TK_FACCION; }
{R_FALGORITMO}       { return TK_FALGORITMO; }
{R_FALSO}            { return TK_FALSO; }
{R_FCONST}           { return TK_FCONST; }
{R_FFUNCION}         { return TK_FFUNCION; }
{R_FMIENTRAS}        { return TK_FMIENTRAS; }
{R_FPARA}            { return TK_FPARA; }
{R_FSI}              { return TK_FSI; }
{R_FTIPO}            { return TK_FTIPO; }
{R_FTUPLA}           { return TK_FTUPLA; }
{R_FUNCION}          { return TK_FUNCION; }
{R_FVAR}             { return TK_FVAR; }
{R_HACER}            { return TK_HACER; }
{R_HASTA}            { return TK_HASTA; }
{R_MIENTRAS}         { return TK_MIENTRAS; }
{R_MOD}              { return TK_R_MOD; }
{R_NO}               { return TR_CADENAK_NO; }
{R_O}                { return TK_O; }
{R_PARA}             { return TK_PARA; }
{R_REF}              { return TK_REF; }
{R_SAL}              { return TK_SAL; }
{R_SI}               { return TK_SI; }
{R_SINOSI}           { return TK_SINOSI; }
{R_TABLA}            { return TK_TABLA; }
{R_TIPO}             { return TK_TIPO; }
{R_TUPLA}            { return TK_TUPLA; }
{R_VAR}              { return TK_VAR; }
{R_VERDADERO}        { return TK_VERDADERO; }
{R_Y}                { return TK_Y; }

{IDENTIFICADOR}      { return TK_IDENTIFICADOR; }

{R_CADENA}           { yyval.tipoBase = R_CADENA; return TK_TIPO_BASE; }
{R_CARACTER}         { yyval.tipoBase = R_CARACTER; return TK_TIPO_BASE; }
{R_REAL}             { yyval.tipoBase = R_REAL; return TK_TIPO_BASE; }
{R_BOOLEANO}         { yyval.tipoBase = R_BOOLEANO; return TK_TIPO_BASE; }
{R_ENTERO}           { yyval.tipoBase = R_ENTERO; return TK_TIPO_BASE; }
%%

int yywrap(){}
