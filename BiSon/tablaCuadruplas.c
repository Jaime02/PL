#include tablaCuadruplas.h

void inicializar_tabla_cuadruplas() {
    tablaCuadruplas.tamano = 0;
}

int gen(int operando1, int operador, int operando2, int resultado) {
    int pos = tablaCuadruplas.tamano;
    tablaCuadruplas.tamano++;

    tablaCuadruplas.listaCuadruplas[pos].operando1 = operando1;
    tablaCuadruplas.listaCuadruplas[pos].operador = operador;
    tablaCuadruplas.listaCuadruplas[pos].operando2 = operando2;
    tablaCuadruplas.listaCuadruplas[pos].resultado = resultado;
    tablaCuadruplas.listaCuadruplas[pos].direccionSalto = -1;

    return pos;
};

int gen_nulo(int operando1, int operador, int operando2) {
    return gen(operando1, operador, operando2, OPERADOR_NULO);
};

void print_tabla_cuadruplas(FILE* ) {

};

void backpatch(int* listaCuadruplas, int tamanoLista, int direccionSalto){
    // Recorre la lista de cuadruplas de principio a fin. 
    // Si la direccion de salto es -1, le asigna la direccion pasada.

    for(int i = 0; i < tamanoLista; i++) {
        if (listaCuadruplas.array[listaCuadruplas[i]].direccionSalto == -1) {
            listaCuadruplas.array[listaCuadruplas[i]].direccionSalto = direccionSalto;
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