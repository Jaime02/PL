#include "tablaDeCuadruplas.h"

void inicializar_tabla_cuadruplas() {
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

void printTablaCuadruplas() {

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