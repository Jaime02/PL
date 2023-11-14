#pragma once

#define TAMANO_TABLA 100

typedef struct {
    int operador;
    int operando1;
    int operando2;
    int resultado;
    int direccionSalto;
} Cuadrupla;

typedef struct {
    Cuadrupla listaCuadruplas[TAMANO_TABLA];
    int tamano;
} TablaCuadruplas;

TablaCuadruplas tablaCuadruplas;

void inicializar_tabla_cuadruplas();
int gen(int, int, int, int);
int gen_nulo(int, int, int);
void print_tabla_cuadruplas(FILE*);
void backpatch(int[], int, int);
void merge(int[], int, int[], int, int[]);
