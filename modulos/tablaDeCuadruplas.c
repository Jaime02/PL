#include "tablaDeCuadruplas.h"

#include <string.h>

#include "tablaDeSimbolos.h"

TablaCuadruplas tablaDeCuadruplas;

char* nombresOperaciones[] = {"+", "-", "*", "/", "/", " ", "mod", "int_to_real", "input", "output", "goto", "falso", "verdadero", "if", "+ 1", "=", ">", "<", "<=", ">=", "!="};

void inicializarTablaCuadruplas() { tablaDeCuadruplas.tamano = 0; }

int generarCuadrupla(int operando1, int operador, int operando2, int resultado) {
    int pos = tablaDeCuadruplas.tamano;

    tablaDeCuadruplas.tamano++;

    tablaDeCuadruplas.listaDeCuadruplas[pos].operando1 = operando1;
    tablaDeCuadruplas.listaDeCuadruplas[pos].operador = operador;
    tablaDeCuadruplas.listaDeCuadruplas[pos].operando2 = operando2;
    tablaDeCuadruplas.listaDeCuadruplas[pos].resultado = resultado;

    return pos;
};

void imprimirTablaCuadruplas(FILE* salida) {
    int tamano = tablaDeCuadruplas.tamano;
    fprintf(salida, "\nTabla de cuadruplas:\n\n");

    for (int i = 0; i < tamano; i++) {
        fprintf(salida, "%d)\t", i);

        Cuadrupla cuadrupla = tablaDeCuadruplas.listaDeCuadruplas[i];

        char* nombreOperando1 = cuadrupla.operando1 != -1 ? obtenerNombreVariable(cuadrupla.operando1) : "VACIO";
        char* nombreOperando2 = cuadrupla.operando2 != -1 ? obtenerNombreVariable(cuadrupla.operando2) : "VACIO";
        char* nombreResultado = cuadrupla.resultado != -1 ? obtenerNombreVariable(cuadrupla.resultado) : "VACIO";

        char nombreOperador[100];
        strcpy(nombreOperador, nombresOperaciones[cuadrupla.operador]);
        int resultado = cuadrupla.resultado;

        if (strcmp(nombreOperador, "goto") == 0) {
            fprintf(salida, "goto %d\n", resultado);
        } else if (strcmp(nombreOperador, "input") == 0) {
            fprintf(salida, "input %s\n", nombreOperando1);
        } else if (strcmp(nombreOperador, "output") == 0) {
            fprintf(salida, "output %s\n", nombreOperando1);
        }  else if (strcmp("if", nombreOperador) == 0){
            fprintf(salida, "if %s := true goto %d\n", nombreOperando1, resultado);
        } else if (cuadrupla.operador < 15) {
            fprintf(salida, "%s := ", nombreResultado);
            if(strcmp("VACIO", nombreOperando1) != 0){
                fprintf(salida,"%s", nombreOperando1);
            }
            fprintf(salida, " %s ", nombreOperador);
            if(strcmp("VACIO", nombreOperando2) != 0){
                fprintf(salida,"%s\n", nombreOperando2);
            } else {fprintf(salida,"\n");}
        } else {
            fprintf(salida, "if %s %s %s goto %d\n", nombreOperando1, nombreOperador, nombreOperando2, resultado);
        }
    }
};

void backpatch(int* listaDeCuadruplas, int tamanoLista, int direccionSalto) {
    // Recorre la lista de cuadruplas de principio a fin.
    // Si la direccion de salto es -1, le asigna la direccion pasada.
    for (int i = 0; i < tamanoLista; i++) {
        if (tablaDeCuadruplas.listaDeCuadruplas[listaDeCuadruplas[i]].resultado == -1) {
            tablaDeCuadruplas.listaDeCuadruplas[listaDeCuadruplas[i]].resultado = direccionSalto;
        }
    }
}

void merge(int* lista1, int tam1, int* lista2, int tam2, int* dest) {
    // Mete en dest los elementos de lista1 y lista2
    for (int i = 0; i < tam1; i++) {
        dest[i] = lista1[i];
    }
    for (int i = 0; i < tam2; i++) {
        dest[i + tam1] = lista2[i];
    }
}
