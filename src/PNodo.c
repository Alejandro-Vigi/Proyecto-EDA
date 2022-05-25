#include "PNodo.h"
#include <stdlib.h>

PNODO* crear_nodo_pila(char operador){
    PNODO *nuevo = (PNODO*)malloc(sizeof(PNODO));
    nuevo->ant = NULL;
    nuevo->sig = NULL;
    nuevo->operador = operador;
    return nuevo;
}

PNODO* borrar_nodo_pila(PNODO *n){
    if(n!=NULL){
        if(n->sig == NULL && n->ant == NULL){
            free(n);
            return NULL;
        }
        return n;
    }
    return NULL;
}

bool actualizar_nodo_pila(PNODO *n,  char operador){
    if(n!=NULL){
        n->operador = operador;
        return true;
    }
    return false;
}