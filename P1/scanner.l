%option caseless

%{
#include <stdio.h>

int tokens = 0;

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

ENTERO               [+|-]?{CIFRA}{CIFRA}*([e|E]{CIFRA}{CIFRA}*)?
REAL                 [+|-]?{CIFRA}{CIFRA}*(\.{CIFRA}{CIFRA}*)?([e|E]{CIFRA}{CIFRA}*)?
CARACTER             '.'
CADENA               '(\/.|[^'])*'
COMENTARIO           \{(\/.|[^}])*\}

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

BOOLEANO             (R_VERDADERO)|(R_FALSO)

IDENTIFICADOR        {LETRA}({LETRA}|{CIFRA})*

SALTO                \n
%%

{ASIGNACION}         { printf("ASIGNACION"); tokens++; }
{SEPARADOR}          { printf("SEPARADOR"); tokens++; }
{DEFINICION}         { printf("DEFINICION"); tokens++; }
{SUBRANGO}           { printf("SUBRANGO"); tokens++; }
{ENTONCES}           { printf("ENTONCES"); tokens++; }
{ABRIR_PARENTESIS}   { printf("ABRIR_PARENTESIS"); tokens++; }
{CERRAR_PARENTESIS}  { printf("CERRAR_PARENTESIS"); tokens++; }
{OPR_SUMA}           { printf("OPR_SUMA"); tokens++; }
{OPR_RESTA}          { printf("OPR_RESTA"); tokens++; }
{OPR_PROD}           { printf("OPR_PROD"); tokens++; }
{OPR_MOD}            { printf("OPR_MOD"); tokens++; }
{OPR_DIV_REA}        { printf("OPR_DIV_REA"); tokens++; }
{OPR_IGUAL}          { printf("OPR_IGUAL"); tokens++; }
{OPR_MAYOR}          { printf("OPR_MAYOR"); tokens++; }
{OPR_MENOR}          { printf("OPR_MENOR"); tokens++; }
{OPR_MENOR_IGUAL}    { printf("OPR_MENOR_IGUAL"); tokens++; }
{OPR_MAYOR_IGUAL}    { printf("OPR_MAYOR_IGUAL"); tokens++; }
{OPR_DISTINTO}       { printf("OPR_DISTINTO"); tokens++; }
{ABRIR_TABLA}        { printf("ABRIR_TABLA"); tokens++; }
{CERRAR_TABLA}       { printf("CERRAR_TABLA"); tokens++; }
{BOOLEANO}           { printf("BOOLEANO"); tokens++; }
{SALTO}              { printf("\n"); }
{ENTERO}             { printf("ENTERO"); tokens++; }
{REAL}               { printf("REAL"); tokens++; }
{CARACTER}           { printf("CARACTER"); tokens++; }
{CADENA}             { printf("CADENA"); tokens++; }
{COMENTARIO}         { printf("COMENTARIO"); tokens++; }
{R_ACCION}           { printf("R_ACCION"); tokens++; }
{R_ALGORITMO}        { printf("R_ALGORITMO"); tokens++; }
{R_CONST}            { printf("R_CONST"); tokens++; }
{R_CONTINUAR}        { printf("R_CONTINUAR"); tokens++; }
{R_DE}               { printf("R_DE"); tokens++; }
{R_DEV}              { printf("R_DEV"); tokens++; }
{R_DIV}              { printf("R_DIV"); tokens++; }
{R_ENT}              { printf("R_ENT"); tokens++; }
{R_ES}               { printf("R_ES"); tokens++; }
{R_FACCION}          { printf("R_FACCION"); tokens++; }
{R_FALGORITMO}       { printf("R_FALGORITMO"); tokens++; }
{R_FALSO}            { printf("R_FALSO"); tokens++; }
{R_FCONST}           { printf("R_FCONST"); tokens++; }
{R_FFUNCION}         { printf("R_FFUNCION"); tokens++; }
{R_FMIENTRAS}        { printf("R_FMIENTRAS"); tokens++; }
{R_FPARA}            { printf("R_FPARA"); tokens++; }
{R_FSI}              { printf("R_FSI"); tokens++; }
{R_FTIPO}            { printf("R_FTIPO"); tokens++; }
{R_FTUPLA}           { printf("R_FTUPLA"); tokens++; }
{R_FUNCION}          { printf("R_FUNCION"); tokens++; }
{R_FVAR}             { printf("R_FVAR"); tokens++; }
{R_HACER}            { printf("R_HACER"); tokens++; }
{R_HASTA}            { printf("R_HASTA"); tokens++; }
{R_MIENTRAS}         { printf("R_MIENTRAS"); tokens++; }
{R_MOD}              { printf("R_MOD"); tokens++; }
{R_NO}               { printf("R_NO"); tokens++; }
{R_O}                { printf("R_O"); tokens++; }
{R_PARA}             { printf("R_PARA"); tokens++; }
{R_REF}              { printf("R_REF"); tokens++; }
{R_SAL}              { printf("R_SAL"); tokens++; }
{R_SI}               { printf("R_SI"); tokens++; }
{R_SINOSI}           { printf("R_SINOSI"); tokens++; }
{R_TABLA}            { printf("R_TABLA"); tokens++; }
{R_TIPO}             { printf("R_TIPO"); tokens++; }
{R_TUPLA}            { printf("R_TUPLA"); tokens++; }
{R_VAR}              { printf("R_VAR"); tokens++; }
{R_VERDADERO}        { printf("R_VERDADERO"); tokens++; }
{R_Y}                { printf("R_Y"); tokens++; }
{R_REAL}             { printf("R_REAL"); tokens++; }
{R_BOOLEANO}         { printf("R_BOOLEANO"); tokens++; }
{R_CADENA}           { printf("R_CADENA"); tokens++; }
{R_CARACTER}         { printf("R_CARACTER"); tokens++; }
{R_ENTERO}           { printf("R_ENTERO"); tokens++; }
{IDENTIFICADOR}      { printf("IDENTIFICADOR"); tokens++; }
%%

int yywrap(){}

int main(int argc, char *argv[]) {
	yyin = fopen(argv[1], "r");
	yylex();
	printf("\nFIN DEL ESCANEO\nTokens encontrados: %d\n", tokens);
	fclose(yyin);
	return 0;
}
