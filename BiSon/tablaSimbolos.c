#include "tablaSimbolos.h"

void inicializarTablaSimbolos(){
    // todos los nombres de las variables las inicializo con un token que no puede ser identificador
    for (int i = 0; i < tablaSimbolos.numeroDeSimbolos; i++)
    {
        strcpy(tablaSimbolos.array[i].nombre, "-");
    }
    tablaSimbolos.sigPosLibre = 0;
    tablaSimbolos.sigIdLibre = 0;
    tablaSimbolos.sigTemporalLibre = 0;
}

int obtenerPosicionSimbolo(char nombre[tamNombre]){
    for (int i = 0; i < tamTabla; i++)
    {
        if(strcmp(nombre, tablaSimbolos.array[i].nombre) == 0){
            return i;
        }
    }
    return -1;
}

int newvar(char nombreVariable[tamNombre]){
    int pos = tablaSimbolos.sigPosLibre;
    tablaSimbolos.array[pos].id = tablaSimbolos.sigIdLibre;
    strcpy(tablaSimbolos.array[pos].nombre,nombreVariable);
    //el tipo no lo sabemos todavía
    tablaSimbolos.sigIdLibre++;
    tablaSimbolos.sigPosLibre++;
    return tablaSimbolos.array[pos].id;
}

int newtemp(){
    char nombreVariable[tamNombre];
    sprintf(nombreVariable,"T%d", tablaSimbolos.sigTemporalLibre);
    tablaSimbolos.sigTemporalLibre++;
    return newvar(nombreVariable);
}

void modificaTipoTablaSimbolos(int id, int tipo){
    //la posicion en la TS al no borrar simbolos es la misma que el id
    tablaSimbolos.array[id].tipo = tipo;
}

int consultaTipo(char nombre[tamNombre]){
    int pos = obtenerPosicionSimbolo(nombre);
    int tipo = tablaSimbolos.array[pos].tipo;
    return tipo;
}

void mostrarTablaSimbolos(){
    int pos_ultimoSimbolo = tablaSimbolos.sigPosLibre;
    printf("\nTABLA DE SIMBOLOS:\n\n");
    printf("nombre:\t");
    for (int i = 0; i < pos_ultimoSimbolo; i++) {
        printf("%s", tablaSimbolos.array[i].nombre);
        if(i != pos_ultimoSimbolo-1){
            printf("   \t");
        }
    }
    printf("\n");
    printf("id:\t");
    for (int i = 0; i < pos_ultimoSimbolo; i++) {
        printf("%d", tablaSimbolos.array[i].id);
        if(i != pos_ultimoSimbolo-1){
            printf(" ->\t");
        }
    }
    printf("\n");
    printf("tipo:\t");
    for (int i = 0; i < pos_ultimoSimbolo; i++) {
        printf("%s", nombresTipos[tablaSimbolos.array[i].tipo]);
        if(i != pos_ultimoSimbolo-1){
            printf("\t");
        }
    }
    printf("\n\n");
}

char* obtenerNombreVariable(int id){
    
}