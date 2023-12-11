#include "tablaDeSimbolos.h"
#include "definiciones.h"

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
        // printf("Comparando %s con %s\n", nombre, tablaDeSimbolos.simbolos[i].nombre);
        if (strcmp(nombre, tablaDeSimbolos.simbolos[i].nombre) == 0) 
        {
            return i;
        }
    }
    return -1;
}

int crearSimbolo(char nombreVariable[N_NOMBRE], int tipo) {
    // Buscar si ya existe un símbolo con el mismo nombre
    int pos = obtenerPosicionSimbolo(nombreVariable);
    if (pos != -1) {
        // Comprobar que el tipo es el mismo
        if (tablaDeSimbolos.simbolos[pos].tipo != tipo) {
            printf("Error: la variable %s ya existe con un tipo diferente.\n", nombreVariable);
            exit(-1);
        }

        // El símbolo ya existe, devolver su id
        return tablaDeSimbolos.simbolos[pos].id;
    }
    
    pos = tablaDeSimbolos.numeroDeSimbolos;

    if (pos > N_SIMBOLOS) {
        printf("Error: se ha superado el número máximo de símbolos.\n");
        exit(-1);
    }

    tablaDeSimbolos.simbolos[pos].id = tablaDeSimbolos.numeroDeSimbolos;
    tablaDeSimbolos.simbolos[pos].tipo = tipo;

    // strcpy: Destino, source
    strcpy(tablaDeSimbolos.simbolos[pos].nombre, nombreVariable);

    tablaDeSimbolos.numeroDeSimbolos = pos + 1;

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
    printf("Tabla de simbolos:\n");
    for (int i = 0; i < tablaDeSimbolos.numeroDeSimbolos; i++)
    {
        char* nombreTipo;
        int tipo = tablaDeSimbolos.simbolos[i].tipo;

        if (tipo == TIPO_CADENA) {
            nombreTipo = "Cadena";
        } else if (tipo == TIPO_CARACTER) {
            nombreTipo = "Caracter";
        } else if (tipo == TIPO_REAL) {
            nombreTipo = "Real";
        } else if (tipo == TIPO_BOOLEANO) {
            nombreTipo = "Booleano";
        } else if (tipo == TIPO_ENTERO) {
            nombreTipo = "Entero";
        } else {
            printf("Error: tipo no encontrado: %d", tipo);
            exit(-1);
        }

        printf("ID: %d, Nombre: %s, Tipo: %s, Valor: %d\n", tablaDeSimbolos.simbolos[i].id, tablaDeSimbolos.simbolos[i].nombre, nombreTipo, tablaDeSimbolos.simbolos[i].valor);
    }
}

char* obtenerNombreVariable(int id) {
    return tablaDeSimbolos.simbolos[id].nombre;
}

