#pragma once

#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h>

typedef struct {
    char* nombre;
    int tipo;
    int valor;
    Simbolo* siguienteSimbolo;
} Simbolo;

typedef struct {
    int numeroDeSimbolos;
    Simbolo* primerSimbolo;
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