#pragma once
#include <stdbool.h>
#define N_MAX_ID 50

typedef struct {
    char ids[N_MAX_ID][N_MAX_ID];
    int longitud;
} TipoListaId;

bool listaIdVacia(TipoListaId* listaId);
void listaIdInicializar(TipoListaId* listaId);
void listaIdAnadir(TipoListaId* listaId, char* id);
char* listaIdObtener(TipoListaId* listaId, int posicion);
int listaIdTamano(TipoListaId* listaId);
void listaIdCopiar(TipoListaId* listaIdDestino, TipoListaId* listaIdOrigen);
