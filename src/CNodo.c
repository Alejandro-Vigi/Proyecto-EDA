#include "CNODO.h"
#include <stdlib.h>


CNODO *crear_nodo(int numero){
    CNODO *nuevo = (CNODO*)malloc(sizeof(CNODO));
    nuevo->sig = NULL;
    nuevo->numero = numero;
    return nuevo;
}

CNODO *borrar_nodo(CNODO *n){
    if(n!=NULL){
        if(n->sig == NULL){
            free(n);
            return NULL;
        }
        return n;
    }
    return NULL;
}

bool actualizar_nodo(CNODO *n, int numero){
    if(n!=NULL){
        n->numero = numero;
        return true;
    }
    return false;
}