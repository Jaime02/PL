#include "tablaDeCuadruplas.h"

typedef enum { OPR_IGUAL = 11, OPR_MAYOR, OPR_MENOR, OPR_MENOR_IGUAL, OPR_MAYOR_IGUAL, OPR_DISTINTO } Oprel;

typedef enum { ENTERO, REAL, CARACTER, CADENA } Literal;

typedef enum { TIPO_CADENA, TIPO_CARACTER, TIPO_REAL, TIPO_BOOLEANO, TIPO_ENTERO } TipoBase;

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
    OPERADOR_GOTO,
} Operaciones;

typedef struct {
    int place;
    int falso[TAMANO_TABLA];
    int numFalsos;
    int verdadero[TAMANO_TABLA];
    int numVerdaderos;
    TipoBase tipo;
} TipoExpresion;

typedef struct {
    int cuadruplas[TAMANO_TABLA];
    int siguiente;
} TipoInstruccion;