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
    for (int i = 0; i <= tablaDeSimbolos.numeroDeSimbolos; i++)
    {
        if (strcmp(nombre, tablaDeSimbolos.simbolos[i].nombre) == 0) 
        {
            return i;
        }
    }
    return -1;
}

int crearSimbolo(char nombreVariable[N_NOMBRE], int tipo) {
    int pos = tablaDeSimbolos.numeroDeSimbolos + 1;
    if (pos > N_SIMBOLOS) {
        printf("Error: se ha superado el número máximo de símbolos.\n");
        exit(-1);
    }
    tablaDeSimbolos.simbolos[pos].id = tablaDeSimbolos.numeroDeSimbolos + 1;
    tablaDeSimbolos.simbolos[pos].tipo = tipo;

    // strcpy: Destino, source
    strcpy(tablaDeSimbolos.simbolos[pos].nombre, nombreVariable);

    tablaDeSimbolos.numeroDeSimbolos = pos;

    return tablaDeSimbolos.simbolos[pos].id;
}

int crearTemp(int tipo) {
    char nombreVariable[N_NOMBRE];
    sprintf(nombreVariable, "T%d", tablaDeSimbolos.numeroDeSimbolos);
    return crearSimbolo(nombreVariable, tipo);
}

int consultarTipo(char nombre[N_NOMBRE]) {
    int pos = obtenerPosicionSimbolo(nombre);
    if (pos == -1) {
        printf("Error: la variable %s no existe.\n", nombre);
        exit(-1);
    }
    return tablaDeSimbolos.simbolos[pos].tipo;
}

void mostrarTablaSimbolos() {
    printf("Tabla de símbolos:\n");
    for (int i = 0; i <= tablaDeSimbolos.numeroDeSimbolos; i++)
    {
        printf("ID: %d, Nombre: %s, Tipo: %d, Valor: %d\n", tablaDeSimbolos.simbolos[i].id, tablaDeSimbolos.simbolos[i].nombre, tablaDeSimbolos.simbolos[i].tipo, tablaDeSimbolos.simbolos[i].valor);
    }
}

char* obtenerNombreVariable(int id) {
    return tablaDeSimbolos.simbolos[id].nombre;
}

