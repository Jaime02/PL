%{
#define YYDEBUG 1
#include <ctype.h>
#include <stdio.h>

int yylex();
void yyerror(const char *s);
extern FILE* yyin;

%}
%define parse.error verbose
%token TK_DIGITO
%%
factor : TK_DIGITO { printf("apariciu digito: %s\n", $1); }
;
%%

int main(int argc, char* argv[]) {
    yyin = fopen(argv[1], "r");

    if(!yyin) {
        printf("Fallo al abrir el fichero %s", argv[1]);
        return -1;
    }

    return yyparse();
}

void yyerror (char const *s) {
    fprintf(stderr, "%s\n", s);
}
