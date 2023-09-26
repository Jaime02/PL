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
OPR_DIV_ENT          div
OPR_DIV_REA          \/
OPR_IGUAL            =
OPR_MAYOR            >
OPR_MENOR            <
OPR_MENOR_IGUAL      <=
OPR_MAYOR_IGUAL      >=
OPR_DISTINTO         <>

ABRIR_TABLA          \[
CERRAR_TABLA         \]
  
IDENTIFICADOR        {LETRAS}({LETRA}|{CIFRA})*

ENTERO               [+|-]?{CIFRA} {CIFRA}*([e|E]{CIFRA} {CIFRA}*)?
REAL                 [+|-]?{CIFRA} {CIFRA}*(\.{CIFRA} {CIFRA}*)?([e|E]{CIFRA} {CIFRA}*)?
CARACTER             '.'
CADENA               '(\/.|[^'])*'
COMENTARIO           \{(\/.|[^}])*\}

/* Palabras reservadas */

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

%%

{R_FALGORITMO}       { printf("F_ALGORITMO\n"); tokens++; }

%%

int yywrap(){}

int main(int argc, char *argv[]) {
	yyin = fopen(argv[1], "r");
	yylex();
	printf("FIN DEL ESCANEO\nTokens encontrados: %d\n", tokens);
	fclose(yyin);
	return 0;
}
