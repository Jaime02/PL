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

ABRIR_TABLA          \[
CERRAR_TABLA         \]

ENTERO               {CIFRA}{CIFRA}*([e|E]{CIFRA}{CIFRA}*)?
REAL                 {CIFRA}{CIFRA}*(\.{CIFRA}{CIFRA}*)?([e|E]{CIFRA}{CIFRA}*)?
CARACTER             '.'
CADENA               '(\/.|[^'])*'
COMENTARIO           \{(\/.|[^}])*\}

BOOLEANO             (R_VERDADERO)|(R_FALSO)
IDENTIFICADOR        {LETRA}({LETRA}|{CIFRA})*
SALTO                \n

R_ACCION             accion
R_ALGORITMO          algoritmo
R_CONST              const
R_CONTINUAR          continuar
R_DE                 de
R_DEV                dev
R_DIV                div
R_ENT                ent
R_ES                 es
R_FACCION            faccion
R_FALGORITMO         falgoritmo
R_FALSO              falso
R_FCONST             fconst
R_FFUNCION           ffuncion
R_FMIENTRAS          fmientras
R_FPARA              fpara
R_FSI                fi
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

{ASIGNACION}         { printf("ASIGNACION"); }
{SEPARADOR}          { printf("SEPARADOR"); }
{DEFINICION}         { printf("DEFINICION"); }
{SUBRANGO}           { printf("SUBRANGO"); }
{ENTONCES}           { printf("ENTONCES"); }
{ABRIR_PARENTESIS}   { printf("ABRIR_PARENTESIS"); }
{CERRAR_PARENTESIS}  { printf("CERRAR_PARENTESIS"); }
{OPR_SUMA}           { printf("OPR_SUMA"); }
{OPR_RESTA}          { printf("OPR_RESTA"); }
{OPR_PROD}           { printf("OPR_PROD"); }
{OPR_MOD}            { printf("OPR_MOD"); }
{OPR_DIV_REA}        { printf("OPR_DIV_REA"); }
{OPR_IGUAL}          { printf("OPR_IGUAL"); }
{OPR_MAYOR}          { printf("OPR_MAYOR"); }
{OPR_MENOR}          { printf("OPR_MENOR"); }
{OPR_MENOR_IGUAL}    { printf("OPR_MENOR_IGUAL"); }
{OPR_MAYOR_IGUAL}    { printf("OPR_MAYOR_IGUAL"); }
{OPR_DISTINTO}       { printf("OPR_DISTINTO"); }
{ABRIR_TABLA}        { printf("ABRIR_TABLA"); }
{CERRAR_TABLA}       { printf("CERRAR_TABLA"); }
{BOOLEANO}           { printf("BOOLEANO"); }
{SALTO}              { printf("\n"); }

{ENTERO}             { return TK_ENTERO; }
{REAL}               { return TK_REAL; }

{CARACTER}           { printf("CARACTER"); }
{CADENA}             { printf("CADENA"); }
{COMENTARIO}         { printf("COMENTARIO"); }
{R_ACCION}           { printf("R_ACCION"); }
{R_ALGORITMO}        { printf("R_ALGORITMO"); }
{R_CONST}            { printf("R_CONST"); }
{R_CONTINUAR}        { printf("R_CONTINUAR"); }
{R_DE}               { printf("R_DE"); }
{R_DEV}              { printf("R_DEV"); }
{R_DIV}              { printf("R_DIV"); }
{R_ENT}              { printf("R_ENT"); }
{R_ES}               { printf("R_ES"); }
{R_FACCION}          { printf("R_FACCION"); }
{R_FALGORITMO}       { printf("R_FALGORITMO"); }
{R_FALSO}            { printf("R_FALSO"); }
{R_FCONST}           { printf("R_FCONST"); }
{R_FFUNCION}         { printf("R_FFUNCION"); }
{R_FMIENTRAS}        { printf("R_FMIENTRAS"); }
{R_FPARA}            { printf("R_FPARA"); }
{R_FSI}              { printf("R_FSI"); }
{R_FTIPO}            { printf("R_FTIPO"); }
{R_FTUPLA}           { printf("R_FTUPLA"); }
{R_FUNCION}          { printf("R_FUNCION"); }
{R_FVAR}             { printf("R_FVAR"); }
{R_HACER}            { printf("R_HACER"); }
{R_HASTA}            { printf("R_HASTA"); }
{R_MIENTRAS}         { printf("R_MIENTRAS"); }
{R_MOD}              { printf("R_MOD"); }
{R_NO}               { printf("R_NO"); }
{R_O}                { printf("R_O"); }
{R_PARA}             { printf("R_PARA"); }
{R_REF}              { printf("R_REF"); }
{R_SAL}              { printf("R_SAL"); }
{R_SI}               { printf("R_SI"); }
{R_SINOSI}           { printf("R_SINOSI"); }
{R_TABLA}            { printf("R_TABLA"); }
{R_TIPO}             { printf("R_TIPO"); }
{R_TUPLA}            { printf("R_TUPLA"); }
{R_VAR}              { printf("R_VAR"); }
{R_VERDADERO}        { printf("R_VERDADERO"); }
{R_Y}                { printf("R_Y"); }
{R_REAL}             { printf("R_REAL"); }
{R_BOOLEANO}         { printf("R_BOOLEANO"); }
{R_CADENA}           { printf("R_CADENA"); }
{R_CARACTER}         { printf("R_CARACTER"); }
{R_ENTERO}           { printf("R_ENTERO"); }
{IDENTIFICADOR}      { printf("IDENTIFICADOR"); }
%%

int yywrap(){}
