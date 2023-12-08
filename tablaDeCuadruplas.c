#include "tablaDeCuadruplas.h"
#include "tablaDeSimbolos.h"
#include <string.h>

TablaCuadruplas tablaDeCuadruplas;

char * nombresOperaciones[] = {" + ", " - ", " * ", " div ", " / ", " ", " mod ",  " int_to_real ", "input", "output", "NULO"};

void inicializarTablaCuadruplas() {
    tablaDeCuadruplas.tamano = 0;
}

int generarCuadrupla(int operando1, int operador, int operando2, int resultado) {
    int pos = tablaDeCuadruplas.tamano;
    
    tablaDeCuadruplas.tamano++;

    tablaDeCuadruplas.listaDeCuadruplas[pos].operando1 = operando1;
    tablaDeCuadruplas.listaDeCuadruplas[pos].operador = operador;
    tablaDeCuadruplas.listaDeCuadruplas[pos].operando2 = operando2;
    tablaDeCuadruplas.listaDeCuadruplas[pos].resultado = resultado;

    return pos;
};

void printTablaCuadruplas(FILE* salida) {
    int tamano = tablaDeCuadruplas.tamano;
    printf("\nTABLA DE CUADRUPLAS:\n\n");
    for (int i = 0; i < tamano; i++) {
        printf("%d)\t", i);
        int resultado, direccion_salto;
        char nombreOperador[100];
        char* nombreOperando1 = obtenerNombreVariable(tablaDeCuadruplas.listaDeCuadruplas[i].operando1);
        char* nombreOperando2 = obtenerNombreVariable(tablaDeCuadruplas.listaDeCuadruplas[i].operando2);
        char* nombreResultado = obtenerNombreVariable(tablaDeCuadruplas.listaDeCuadruplas[i].resultado);
        strcpy(nombreOperador,nombresOperaciones[tablaDeCuadruplas.listaDeCuadruplas[i].operador]);
        resultado = tablaDeCuadruplas.listaDeCuadruplas[i].resultado;
        if (resultado != 200){
            printf("%s := ", nombreResultado);
            if(strcmp("VACIO", nombreOperando1) != 0){
                printf("%s", nombreOperando1);
            }
            printf("%s", nombreOperador);
            if(strcmp("VACIO", nombreOperando2) != 0){
                printf("%s\n", nombreOperando2);
            }else{printf("\n");}
        } else if (strcmp(nombreOperador,"input") == 0){
            printf("input %s\n", nombreOperando1);
        } else if (strcmp(nombreOperador,"output") == 0){
            printf("output %s\n", nombreOperando1);
        }
    }

    //fichero 
    for (int i = 0; i < tamano; i++) {
        fprintf(salida, "%d)\t", i);
        int resultado, direccion_salto;
        char nombreOperador[100];
        char* nombreOperando1 = obtenerNombreVariable(tablaDeCuadruplas.listaDeCuadruplas[i].operando1);
        char* nombreOperando2 = obtenerNombreVariable(tablaDeCuadruplas.listaDeCuadruplas[i].operando2);
        char* nombreResultado = obtenerNombreVariable(tablaDeCuadruplas.listaDeCuadruplas[i].resultado);
        strcpy(nombreOperador,nombresOperaciones[tablaDeCuadruplas.listaDeCuadruplas[i].operador]);
        resultado = tablaDeCuadruplas.listaDeCuadruplas[i].resultado;
        if (resultado != 200){
            fprintf(salida, "%s := ", nombreResultado);
            if(strcmp("VACIO", nombreOperando1) != 0){
                fprintf(salida, "%s", nombreOperando1);
            }
            fprintf(salida, "%s", nombreOperador);
            if(strcmp("VACIO", nombreOperando2) != 0){
                fprintf(salida, "%s\n", nombreOperando2);
            }else{fprintf(salida, "\n");}
        } else if (strcmp(nombreOperador,"input") == 0){
            fprintf(salida, "input %s\n", nombreOperando1);
        } else if (strcmp(nombreOperador,"output") == 0){
            fprintf(salida, "output %s\n", nombreOperando1);
        }
    }

};

void backpatch(int* listaDeCuadruplas, int tamanoLista, int direccionSalto){
    // Recorre la lista de cuadruplas de principio a fin. 
    // Si la direccion de salto es -1, le asigna la direccion pasada.

    for(int i = 0; i < tamanoLista; i++) {
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
