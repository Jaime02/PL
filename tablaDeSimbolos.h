#ifndef TTTTT
#define TTTTT

#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#define N_SIMBOLOS 100
#define N_NOMBRE 100

typedef struct {
    int id;
    char nombre[N_NOMBRE];
    int tipo;
    int valor;
} Simbolo;

typedef struct {
    int numeroDeSimbolos;
    Simbolo simbolos[N_SIMBOLOS];
} TablaDeSimbolos;

extern TablaDeSimbolos tablaDeSimbolos;

void inicializarTablaDeSimbolos();
int obtenerPosicionSimbolo(char[N_NOMBRE]);
int crearSimbolo(char[N_NOMBRE]);
int crearTemp();
void modificaTipoTablaSimbolos(int, int);
int consultarTipo(char[N_NOMBRE]);
void mostrarTablaSimbolos();
char* obtenerNombreVariable(int);

#endif