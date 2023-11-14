#include "tablaSimbolos.h"

void inicializarTablaSimbolos() {
    for (int i = 0; i < N_SIMBOLOS; i++)
    {
        strcpy(tablaSimbolos.simbolos[i].nombre, "VACIO");
    }
    tablaSimbolos.numeroDeSimbolos = 0;
}

int obtenerPosicionSimbolo(char nombre[N_NOMBRE]) {
    for (int i = 0; i < tablaSimbolos.numeroDeSimbolos; i++)
    {
        if (strcmp(nombre, tablaSimbolos.simbolos[i].nombre) == 0) 
        {
            return i;
        }
    }
    return -1;
}

int newvar(char nombreVariable[N_NOMBRE]) {
    int pos = tablaSimbolos.numeroDeSimbolos + 1;

    tablaSimbolos.simbolos[pos].id = tablaSimbolos.numeroDeSimbolos;

    // strcpy: Destino, source
    strcpy(tablaSimbolos.simbolos[pos].nombre, nombreVariable);

    tablaSimbolos.numeroDeSimbolos = pos;

    return tablaSimbolos.simbolos[pos].id;
}

int newtemp() {
    char nombreVariable[N_NOMBRE];
    sprintf(nombreVariable, "T%d", tablaSimbolos.sigTemporalLibre);
    (tablaSimbolos.numeroDeSimbolos)++;
    return newvar(nombreVariable);
}
