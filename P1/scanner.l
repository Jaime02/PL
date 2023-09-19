%{
#include <stdio.h>

int tokens = 0;

%}

/* Definiciones gramaticales */
DIGITO    [0-9]
NOMBRE_VARIABLE       [a-z][a-z0-9]*
ASIGNACION =

%%
[ \t\r] {printf("ESPACIO\n");}
{DIGITO}|{NOMBRE_VARIABLE}|{ASIGNACION} { printf("Aparició token: %s\n", yytext); tokens++; }
\n    {printf("saltico de linea pues\n");}

%%

int yywrap(){}

int main(int argc, char *argv[]) {
	yyin = fopen(argv[1], "r");
	yylex();
	printf("FIN DEL ESCANEO\nTokens encontrados: %d\n", tokens);
	fclose(yyin);
	return 0;
}
