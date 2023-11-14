#pragma once

#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#define N_SIMBOLOS 100
#define N_NOMBRE 100

typedef struct {
    char* nombre;
    int tipo;
    int valor;
} Simbolo;

typedef struct {
    int numeroDeSimbolos;
    Simbolo[N_SIMBOLOS] simbolos;
} TablaDeSimbolos;

TablaDeSimbolos tablaDeSimbolos;

void inicializarTablaSimbolos();
int obtenerPosicionSimbolo(char*);
int newtemp();
int newvar(char*);
void modificaTipoTablaSimbolos(int, int);
int consultarTipo(char*);
void mostrarTablaSimbolos();
char* obtenerNombreVariable(int);