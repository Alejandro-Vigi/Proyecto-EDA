#include "PNodo.h"
#include <stdlib.h>

PNODO *crear_nodo_pila(int numero){
    PNODO *nuevo = (PNODO*)malloc(sizeof(PNODO));
    nuevo->ant = NULL;
    nuevo->sig = NULL;
    nuevo->numero = numero;
    return nuevo;
}

PNODO *borrar_nodo_pila(PNODO *n){
    if(n!=NULL){
        if(n->sig == NULL && n->ant == NULL){
            free(n);
            return NULL;
        }
        return n;
    }
    return NULL;
}

bool actualizar_nodo_pila(PNODO *n, int numero){
    if(n!=NULL){
        n->numero = numero;
        return true;
    }
    return false;
}