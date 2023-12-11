#include "listaId.h"

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool listaIdVacia(TipoListaId* listaId) {
    return listaId->longitud == 0; 
}

void listaIdInicializar(TipoListaId* listaId) {
    listaId->longitud = 0; 
}

void listaIdAnadir(TipoListaId* listaId, char* id) {
    strcpy(listaId->ids[listaId->longitud], id);

    if (listaId->longitud > N_MAX_ID) {
        printf("Error: se ha superado el número máximo de identificadores.\n");
        exit(-1);
    }
    listaId->longitud++;

}

int listaIdTamano(TipoListaId* listaId) {
    return listaId->longitud;
}

char* listaIdObtener(TipoListaId* listaId, int posicion) {
    return ((listaId->ids)[posicion]);
}

void listaIdCopiar(TipoListaId* listaIdDestino, TipoListaId* listaIdOrigen) {
    listaIdInicializar(listaIdDestino);
    for (int i = 0; i < listaIdTamano(listaIdOrigen); i++) {
        listaIdAnadir(listaIdDestino, listaIdObtener(listaIdOrigen, i));
    }
}
