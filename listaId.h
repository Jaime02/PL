#pragma once

#define N_MAX_ID 50

typedef struct {
    char nombre[N_MAX_ID];
} Id;

typedef struct {
    Id ids[N_MAX_ID];
    int longitud;
} TipoListaId;

bool listaIdVacia(TipoListaId* listaId);
void listaIdInicializar(TipoListaId* listaId);
void listaIdAnadir(TipoListaId* listaId, char* id);
