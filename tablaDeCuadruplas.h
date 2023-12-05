#pragma once
#include <stdio.h>
#include <stdlib.h>

#define TAMANO_TABLA 100

typedef struct {
    int operador;
    int operando1;
    int operando2;
    int resultado;
} Cuadrupla;

typedef struct {
    Cuadrupla listaDeCuadruplas[TAMANO_TABLA];
    int tamano;
} TablaCuadruplas;

TablaCuadruplas tablaDeCuadruplas;

void inicializar_tabla_cuadruplas();
int generarCuadrupla(int, int, int, int);
void printTablaCuadruplas();
void backpatch(int[], int, int);
void merge(int[], int, int[], int, int[]);
