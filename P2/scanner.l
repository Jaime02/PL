%option caseless

%{
#include <stdio.h>
#include "gramatica.tab.h"

%}

LETRA                [a-z]
CIFRA                [0-9]
ENTERO               {CIFRA}{CIFRA}*([e|E]{CIFRA}{CIFRA}*)?

%%
{ENTERO}             { return TK_DIGITO; }
%%

int yywrap(){}
