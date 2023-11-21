#include "tablaDeSimbolos.h"

TablaDeSimbolos tablaDeSimbolos;

void inicializarTablaDeSimbolos() {
    for (int i = 0; i < N_SIMBOLOS; i++)
    {
        strcpy(tablaDeSimbolos.simbolos[i].nombre, "VACIO");
    }
    tablaDeSimbolos.numeroDeSimbolos = 0;
}

int obtenerPosicionSimbolo(char nombre[N_NOMBRE]) {
    for (int i = 0; i < tablaDeSimbolos.numeroDeSimbolos; i++)
    {
        if (strcmp(nombre, tablaDeSimbolos.simbolos[i].nombre) == 0) 
        {
            return i;
        }
    }
    return -1;
}

int newvar(char nombreVariable[N_NOMBRE]) {
    int pos = tablaDeSimbolos.numeroDeSimbolos + 1;

    tablaDeSimbolos.simbolos[pos].id = tablaDeSimbolos.numeroDeSimbolos;

    // strcpy: Destino, source
    strcpy(tablaDeSimbolos.simbolos[pos].nombre, nombreVariable);

    tablaDeSimbolos.numeroDeSimbolos = pos;

    return tablaDeSimbolos.simbolos[pos].id;
}

int newtemp() {
    char nombreVariable[N_NOMBRE];
    (tablaDeSimbolos.numeroDeSimbolos)++;
    sprintf(nombreVariable, "T%d", tablaDeSimbolos.numeroDeSimbolos);
    return newvar(nombreVariable);
}
