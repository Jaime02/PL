%{

#define YYDEBUG 1
#include <ctype.h>
#include <stdio.h>

int yylex();
void yyerror(const char *s);
extern FILE* yyin;
extern int yydebug;
FILE* salida;
char output[100][100];

#include "listaId.h"
#include "tablaDeCuadruplas.h"
extern TablaCuadruplas tablaDeCuadruplas;

%}

%define parse.error verbose

// Definir los tipos de datos
%code requires {
    #include "tablaDeSimbolos.h"
    #include "tablaDeCuadruplas.h"
    #include "listaId.h"

    typedef enum {
        OPR_IGUAL,
        OPR_MAYOR,
        OPR_MENOR,
        OPR_MENOR_IGUAL,
        OPR_MAYOR_IGUAL,
        OPR_DISTINTO
    } Oprel;

    typedef enum {
        ENTERO,
        REAL,
        CARACTER,
        CADENA
    } Literal;

    typedef enum {
        TIPO_CADENA,
        TIPO_CARACTER,
        TIPO_REAL,
        TIPO_BOOLEANO,
        TIPO_ENTERO
    } TipoBase;

    typedef enum {
        OPERADOR_SUMA,
        OPERADOR_RESTA,
        OPERADOR_PROD,
        OPERADOR_DIV,
        OPERADOR_DIV_REA,
        OPERADOR_ASIGNACION,
        OPERADOR_MOD,
        OPERADOR_INT_A_REAL,
        INPUT,
        OUTPUT,
        OPERADOR_NULO
    } Operaciones;

    typedef struct {
        int place;
        TipoBase tipo;
    } TipoExpresion;

    typedef struct { 
        int cuadruplas[TAMANO_TABLA];
        int numeroCuadruplas;
    } TipoInstruccion;
}

// Conjunto de tipos de datos
%union {
    char* nombreVariable;
    Oprel oprel;
    Literal literal;
    TipoBase tipoBase;
    TipoListaId listaId;
    TipoExpresion expresion;
    TipoInstruccion instruccion;
}

%type<listaId> lista_id
%type<listaId> lista_d_var
%type<expresion> exp_a
%type<expresion> operando
%type<expresion> expresion

%type<instruccion> instrucciones
%type<instruccion> instruccion
%type<instruccion> asignacion
%type<tipoBase> d_tipo

%token TK_ASIGNACION
%token TK_SEPARADOR
%token TK_DEFINICION
%token TK_SUBRANGO
%token TK_ENTONCES
%left TK_SUMA TK_RESTA TK_DIV TK_PROD TK_MOD TK_R_MOD TK_DIV_REA TK_IGUAL TK_O TK_Y
%token TK_MAYOR
%token TK_MENOR
%token TK_MENOR_IGUAL
%token TK_MAYOR_IGUAL
%token TK_DISTINTO
%token TK_ABRIR_TABLA
%token TK_CERRAR_TABLA
%token TK_BOOLEANO
%token TK_ABRIR_PARENTESIS
%token TK_CERRAR_PARENTESIS

%token <tipoBase> TK_TIPO_BASE
%left <oprel> TK_OPREL
%token <literal> TK_LITERAL

%token TK_PUNTO_COMA
%left TK_PUNTO
%token TK_CARACTER
%token TK_CADENA
%token TK_COMENTARIO
%token TK_ACCION
%token TK_ALGORITMO
%token TK_CONST
%token TK_CONTINUAR
%token TK_DE
%token TK_DEV
%token TK_ENT
%token TK_ES
%token TK_FACCION
%token TK_FALGORITMO
%token TK_FALSO
%token TK_FCONST
%token TK_FFUNCION
%token TK_FMIENTRAS
%token TK_FPARA
%token TK_FSI
%token TK_FTIPO
%token TK_FTUPLA
%token TK_FUNCION
%token TK_FVAR
%token TK_HACER
%token TK_HASTA
%token TK_MIENTRAS
%token TK_NO
%token TK_PARA
%token TK_REF
%token TK_SAL
%token TK_SI
%token TK_SINOSI
%token TK_TABLA
%token TK_TIPO
%token TK_TUPLA
%token TK_VAR
%token TK_VERDADERO
%token TK_R_REAL
%token TK_R_BOOLEANO
%token TK_R_CADENA
%token TK_R_CARACTER
%token TK_R_ENTERO
%token<nombreVariable> TK_IDENTIFICADOR

%%

desc_algoritmo : TK_ALGORITMO TK_IDENTIFICADOR TK_PUNTO_COMA cabecera_alg bloque_alg TK_FALGORITMO { 
    mostrarTablaSimbolos();
    int i;
    i = 0;
    while(strcmp(output[i], "-") != 0){
        generarCuadrupla(obtenerPosicionSimbolo(output[i]),OUTPUT,0,200);
        i++;
    }
    printTablaCuadruplas(salida);
    fclose(salida);
}
;
cabecera_alg : decl_globales decl_a_f decl_ent_sal TK_COMENTARIO {}
;
bloque_alg : bloque TK_COMENTARIO {}
;
decl_globales : decl_tipo decl_globales {}
| decl_cte decl_globales {}
| %empty {}
;
decl_a_f : accion_d decl_a_f {}
| funcion_d decl_a_f {}
| %empty {}
;
bloque : declaraciones instrucciones { }
;
declaraciones : decl_tipo declaraciones {}
| decl_cte declaraciones {}
| decl_var declaraciones {}
| %empty {}
;
decl_tipo : TK_TIPO lista_d_tipo TK_FTIPO TK_PUNTO_COMA {}
decl_cte : TK_CONST lista_d_cte TK_FCONST TK_PUNTO_COMA {}
;
decl_var : TK_VAR lista_d_var TK_FVAR TK_PUNTO_COMA {}
;
lista_d_tipo : TK_IDENTIFICADOR TK_IGUAL d_tipo TK_PUNTO_COMA lista_d_tipo {}
| %empty {}
;
d_tipo : TK_TUPLA lista_campos TK_FTUPLA {}
| TK_TABLA TK_ABRIR_TABLA expresion_t TK_SUBRANGO expresion_t TK_CERRAR_TABLA TK_DE d_tipo {}
| TK_IDENTIFICADOR {}
| expresion_t TK_DEFINICION expresion_t {}
| TK_REF d_tipo {}
| TK_TIPO_BASE {$$ = $1;}
;
expresion_t : expresion {}
| TK_LITERAL {}
;
lista_campos : TK_IDENTIFICADOR TK_DEFINICION d_tipo TK_PUNTO_COMA lista_campos {}
| %empty {}
;
lista_d_cte : TK_IDENTIFICADOR TK_OPREL TK_LITERAL TK_PUNTO_COMA lista_d_cte {}
| %empty {}
;
lista_d_var : lista_id TK_DEFINICION TK_IDENTIFICADOR TK_PUNTO_COMA lista_d_var {}
| lista_id TK_DEFINICION d_tipo TK_PUNTO_COMA lista_d_var {
    // Si la lista de identificadores está vacía, no hacer nada
    if (!listaIdVacia(&$1)) {
        // Recorrer lista_id estableciendo TK_IDENTIFICADOR como tipo
        for (int i = 0; i < listaIdTamano(&$1); i++) {
            char* id = listaIdObtener(&$1, i);
            crearSimbolo(id, $3);
            listaIdAnadir(&$5, id);
        }
    }
    $$ = $5;
}
| %empty {}
;
lista_id : TK_IDENTIFICADOR TK_SEPARADOR lista_id {
    if (listaIdVacia(&$3)) {
        listaIdInicializar(&$3);  
    } 
    listaIdAnadir(&$3, $1);
    $$ = $3;
}
| TK_IDENTIFICADOR {
    // Añadir $1 a la lista de identificadores
    if (listaIdVacia(&$$)) {
        listaIdInicializar(&$$);
    }
    listaIdAnadir(&$$, $1);
}
;
decl_ent_sal : decl_ent {}
| decl_ent decl_sal {}
| decl_sal {}
;
decl_ent : TK_ENT lista_d_var { 
    for (int i = 0; i < listaIdTamano(&$2); i++)
        generarCuadrupla(obtenerPosicionSimbolo(listaIdObtener(&$2,i)),INPUT,0,200);
}
;
decl_sal : TK_SAL lista_d_var {
    for (int i = 0; i < listaIdTamano(&$2); i++){
        strcpy(output[i],listaIdObtener(&$2,i));
        strcpy(output[i+1],"-");
    }
}
;
exp_a : exp_a TK_SUMA exp_a {
    int posTemp;
    if ($1.tipo == TIPO_ENTERO && $3.tipo == TIPO_ENTERO) {
        // Resultado: tipo entero
        posTemp = crearTemp(TIPO_ENTERO);
        // La expresión sigue siendo de tipo entero
        $$.tipo = TIPO_ENTERO;
        // Generar cuádrupla
        generarCuadrupla($1.place, OPERADOR_SUMA, $3.place, posTemp);
    } else if ($1.tipo == TIPO_ENTERO && $3.tipo == TIPO_REAL) {
        // Resultado: tipo real
        posTemp = crearTemp(TIPO_REAL);
        $$.tipo = TIPO_REAL;
        // Cambiar $1 a real
        generarCuadrupla($1.place, OPERADOR_INT_A_REAL, 0, posTemp);
        generarCuadrupla(posTemp, OPERADOR_SUMA,  $3.place, posTemp);
    } else if ($1.tipo == TIPO_REAL && $3.tipo == TIPO_ENTERO) {
        // Resultado: tipo real
        posTemp = crearTemp(TIPO_REAL);
        $$.tipo = TIPO_REAL;
        // Cambiar $1 a real
        generarCuadrupla($3.place, OPERADOR_INT_A_REAL, 0, posTemp);
        generarCuadrupla(posTemp, OPERADOR_SUMA,  $1.place, posTemp);
    } else if ($1.tipo == TIPO_REAL && $3.tipo == TIPO_REAL) {
        // Resultado: tipo real
        posTemp = crearTemp(TIPO_REAL);
        $$.tipo = TIPO_REAL;
        generarCuadrupla($1.place, OPERADOR_SUMA,  $3.place, posTemp);
    } else {
        // Error
        yyerror("Error: tipos incompatibles en la expresión\n");
    }
    $$.place = posTemp;
}
| exp_a TK_RESTA exp_a {
    int posTemp;
    if ($1.tipo == TIPO_ENTERO && $3.tipo == TIPO_ENTERO) {
        // Resultado: tipo entero
        posTemp = crearTemp(TIPO_ENTERO);
        // La expresión sigue siendo de tipo entero
        $$.tipo = TIPO_ENTERO;
        // Generar cuádrupla
        generarCuadrupla($1.place, OPERADOR_RESTA, $3.place, posTemp);
    } else if ($1.tipo == TIPO_ENTERO && $3.tipo == TIPO_REAL) {
        // Resultado: tipo real
        posTemp = crearTemp(TIPO_REAL);
        $$.tipo = TIPO_REAL;
        // Cambiar $1 a real
        generarCuadrupla($1.place, OPERADOR_INT_A_REAL, 0, posTemp);
        generarCuadrupla(posTemp, OPERADOR_RESTA,  $3.place, posTemp);
    } else if ($1.tipo == TIPO_REAL && $3.tipo == TIPO_ENTERO) {
        // Resultado: tipo real
        posTemp = crearTemp(TIPO_REAL);
        $$.tipo = TIPO_REAL;
        // Cambiar $1 a real
        generarCuadrupla($3.place, OPERADOR_INT_A_REAL, 0, posTemp);
        generarCuadrupla(posTemp, OPERADOR_RESTA,  $1.place, posTemp);
    } else if ($1.tipo == TIPO_REAL && $3.tipo == TIPO_REAL) {
        // Resultado: tipo real
        posTemp = crearTemp(TIPO_REAL);
        $$.tipo = TIPO_REAL;
        generarCuadrupla($1.place, OPERADOR_RESTA,  $3.place, posTemp);
    } else {
        // Error
        yyerror("Error: tipos incompatibles en la expresión\n");
    }
    $$.place = posTemp;
}
| exp_a TK_PROD exp_a {
    int posTemp;
    if ($1.tipo == TIPO_ENTERO && $3.tipo == TIPO_ENTERO) {
        // Resultado: tipo entero
        posTemp = crearTemp(TIPO_ENTERO);
        // La expresión sigue siendo de tipo entero
        $$.tipo = TIPO_ENTERO;
        // Generar cuádrupla
        generarCuadrupla($1.place, OPERADOR_PROD, $3.place, posTemp);
    } else if ($1.tipo == TIPO_ENTERO && $3.tipo == TIPO_REAL) {
        // Resultado: tipo real
        posTemp = crearTemp(TIPO_REAL);
        $$.tipo = TIPO_REAL;
        // Cambiar $1 a real
        generarCuadrupla($1.place, OPERADOR_INT_A_REAL, 0, posTemp);
        generarCuadrupla(posTemp, OPERADOR_PROD,  $3.place, posTemp);
    } else if ($1.tipo == TIPO_REAL && $3.tipo == TIPO_ENTERO) {
        // Resultado: tipo real
        posTemp = crearTemp(TIPO_REAL);
        $$.tipo = TIPO_REAL;
        // Cambiar $1 a real
        generarCuadrupla($3.place, OPERADOR_INT_A_REAL, 0, posTemp);
        generarCuadrupla(posTemp, OPERADOR_PROD,  $1.place, posTemp);
    } else if ($1.tipo == TIPO_REAL && $3.tipo == TIPO_REAL) {
        // Resultado: tipo real
        posTemp = crearTemp(TIPO_REAL);
        $$.tipo = TIPO_REAL;
        generarCuadrupla($1.place, OPERADOR_PROD,  $3.place, posTemp);
    } else {
        // Error
        yyerror("Error: tipos incompatibles en la expresión\n");
    }
    $$.place = posTemp;
}
| exp_a TK_DIV_REA exp_a {
    int posTemp;
    if ($1.tipo == TIPO_ENTERO && $3.tipo == TIPO_ENTERO) {
        // Resultado: tipo entero
        posTemp = crearTemp(TIPO_ENTERO);
        // La expresión sigue siendo de tipo entero
        $$.tipo = TIPO_ENTERO;
        // Generar cuádrupla
        generarCuadrupla($1.place, OPERADOR_DIV_REA, $3.place, posTemp);
    } else if ($1.tipo == TIPO_ENTERO && $3.tipo == TIPO_REAL) {
        // Resultado: tipo real
        posTemp = crearTemp(TIPO_REAL);
        $$.tipo = TIPO_REAL;
        // Cambiar $1 a real
        generarCuadrupla($1.place, OPERADOR_INT_A_REAL, 0, posTemp);
        generarCuadrupla(posTemp, OPERADOR_DIV_REA,  $3.place, posTemp);
    } else if ($1.tipo == TIPO_REAL && $3.tipo == TIPO_ENTERO) {
        // Resultado: tipo real
        posTemp = crearTemp(TIPO_REAL);
        $$.tipo = TIPO_REAL;
        // Cambiar $1 a real
        generarCuadrupla($3.place, OPERADOR_INT_A_REAL, 0, posTemp);
        generarCuadrupla(posTemp, OPERADOR_DIV_REA,  $1.place, posTemp);
    } else if ($1.tipo == TIPO_REAL && $3.tipo == TIPO_REAL) {
        // Resultado: tipo real
        posTemp = crearTemp(TIPO_REAL);
        $$.tipo = TIPO_REAL;
        generarCuadrupla($1.place, OPERADOR_DIV_REA,  $3.place, posTemp);
    } else {
        // Error
        yyerror("Error: tipos incompatibles en la expresión\n");
    }
    $$.place = posTemp;
}
| exp_a TK_R_MOD exp_a {
    int posTemp;
    if ($1.tipo == TIPO_ENTERO && $3.tipo == TIPO_ENTERO) {
        // Resultado: tipo entero
        posTemp = crearTemp(TIPO_ENTERO);
        // La expresión sigue siendo de tipo entero
        $$.tipo = TIPO_ENTERO;
        // Generar cuádrupla
        generarCuadrupla($1.place, OPERADOR_MOD, $3.place, posTemp);
    } else {
        // Error
        yyerror("Error: tipos incompatibles en la expresión\n");
    }
    $$.place = posTemp;
}
| exp_a TK_DIV exp_a {
    int posTemp;
    if ($1.tipo == TIPO_ENTERO && $3.tipo == TIPO_ENTERO) {
        // Resultado: tipo entero
        posTemp = crearTemp(TIPO_ENTERO);
        // La expresión sigue siendo de tipo entero
        $$.tipo = TIPO_ENTERO;
        // Generar cuádrupla
        generarCuadrupla($1.place, OPERADOR_DIV, $3.place, posTemp);
    } else {
        // Error
        yyerror("Error: tipos incompatibles en la expresión\n");
    }
    $$.place = posTemp;
}
| TK_ABRIR_PARENTESIS exp_a TK_CERRAR_PARENTESIS {
    $$ = $2;
}
| operando {
    // Guardar place y tipo
    $$.place = $1.place;
    $$.tipo = $1.tipo;
}
| TK_LITERAL {}
| TK_RESTA exp_a  {
    int posTemp;
    if ($2.tipo == TIPO_ENTERO) {
        // Resultado: tipo entero
        // La expresión sigue siendo de tipo entero
        posTemp = crearTemp(TIPO_ENTERO);
        $$.tipo = TIPO_ENTERO;
    } else if ($2.tipo == TIPO_REAL) {
        // Resultado: tipo real
        posTemp = crearTemp(TIPO_REAL);
        $$.tipo = TIPO_REAL;
    } else {
        // Error
        yyerror("Error: tipos incompatibles en la expresión\n");
    }
    $$.place = posTemp;
    // Generar cuádrupla
    generarCuadrupla(0, OPERADOR_RESTA, $2.place, posTemp);
}
| exp_a TK_Y exp_a {}
| exp_a TK_O exp_a {}
| TK_NO exp_a {}
| TK_VERDADERO {}
| TK_FALSO {}
| expresion TK_OPREL expresion {}
;
expresion : exp_a {}
| funcion_ll {}
;
operando : TK_IDENTIFICADOR {
    $$.place = obtenerPosicionSimbolo($1);
    $$.tipo = consultarTipo($1);
}
| operando TK_PUNTO operando {}
| operando TK_ABRIR_PARENTESIS expresion TK_CERRAR_PARENTESIS {}
| operando TK_REF {}
;
instrucciones : instruccion TK_PUNTO_COMA instrucciones {}
| instruccion {
    // Solo hay una instrucción, instrucciones es instrucción
    $$ = $1;
}
;
instruccion : TK_CONTINUAR {}
| asignacion {
    $$ = $1;
}
| alternativa {}
| iteracion {}
| accion_ll {}
;
asignacion : operando TK_ASIGNACION expresion {
    // Guardar en operando $1 expresión $3
    // Evita asignar por ejemplo un booleano a un entero
    if ($1.tipo == $3.tipo || 
        ($1.tipo == TIPO_REAL && $3.tipo == TIPO_ENTERO) ||
        ($1.tipo == TIPO_ENTERO && $3.tipo == TIPO_REAL)) {
        generarCuadrupla($3.place, OPERADOR_ASIGNACION, 0, $1.place);
    } else {
        yyerror("Error en la asignación\n");
    }
}
;
alternativa : TK_SI expresion TK_ENTONCES instrucciones lista_opciones TK_FSI {
    // backpatch($2.verdadero, 
}
;
lista_opciones : TK_SINOSI expresion TK_ENTONCES instrucciones lista_opciones {}
| %empty {}
;
iteracion : it_cota_fija {}
| it_cota_exp {}
;
it_cota_fija : TK_PARA TK_IDENTIFICADOR TK_ASIGNACION expresion TK_HASTA expresion TK_HACER instrucciones TK_FPARA {}
;
it_cota_exp : TK_MIENTRAS expresion TK_HACER instrucciones TK_FMIENTRAS {}
;
accion_d : TK_ACCION a_cabecera bloque TK_FACCION {}
;
funcion_d : TK_FUNCION f_cabecera bloque TK_DEV expresion TK_FFUNCION {}
;
a_cabecera : TK_IDENTIFICADOR TK_ABRIR_PARENTESIS d_par_form TK_CERRAR_PARENTESIS TK_PUNTO_COMA {}
;
f_cabecera : TK_IDENTIFICADOR TK_ABRIR_PARENTESIS lista_d_var TK_CERRAR_PARENTESIS TK_DEV d_tipo TK_PUNTO_COMA {}
;
d_par_form : d_p_form TK_PUNTO_COMA d_par_form {}
| %empty {}
;
d_p_form : TK_ENT lista_id TK_DEFINICION d_tipo {}
| TK_SAL lista_id TK_DEFINICION d_tipo {}
| TK_ES lista_id TK_DEFINICION d_tipo {}
;
accion_ll : TK_IDENTIFICADOR TK_ABRIR_PARENTESIS l_ll TK_CERRAR_PARENTESIS {}
;
funcion_ll : TK_IDENTIFICADOR TK_ABRIR_PARENTESIS l_ll TK_CERRAR_PARENTESIS {}
;
l_ll : expresion TK_SEPARADOR l_ll {}
| expresion {}
;

%%

int main(int argc, char* argv[]) {
    // Activar modo debug
    //yydebug = 1;

    salida = fopen("salida.txt", "w");
    if (salida == NULL) {
        printf("Error: No se puede crear el fichero de salida");
        return -1;
    }

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

    return yyparse();
}

void yyerror(char const *s) {
    fprintf(stderr, "Error: %s\n", s);
    exit(-1);
}
