#include "CNODO.h"
#include <stdlib.h>


CNODO *crear_nodo(char operador){
    CNODO *nuevo = (CNODO*)malloc(sizeof(CNODO));
    nuevo->ant = NULL;
    nuevo->sig = NULL;
    nuevo->operador = operador;
    return nuevo;
}

CNODO *borrar_nodo(CNODO *n){
    if(n!=NULL){
        if(n->sig == NULL && n->ant == NULL){
            free(n);
            return NULL;
        }
        return n;
    }
    return NULL;
}

bool actualizar_nodo(CNODO *n, char operador){
    if(n!=NULL){
        n->operador = operador;
        return true;
    }
    return false;
}