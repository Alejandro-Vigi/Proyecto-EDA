#include "Pila.h"
#include <stdlib.h>
#include <stdio.h>

Pila* pila_vacia(){
    Pila* p = (Pila*)malloc(sizeof(Pila));
    p->cima = p->fondo = NULL;
    p->log = 0;
    return p;
}
bool push(Pila* p, int numero){
    if(p->log == 0){
        PNODO *nuevo = crear_nodo_pila(numero);
        p->fondo= p->cima = nuevo;
        p->log++;
        return true;
    }else if(p->log != 0){
        PNODO *nuevo = crear_nodo_pila(nuevo);
        p->fondo = nuevo;
        p->log++;
        return true;
    }
    return false;
}

void imprimir_pila(Pila *p){
    printf("[ ");
    for(PNODO *tmp= p->cima; tmp!=NULL; tmp =tmp->sig){
        printf("%d ", tmp->operador);
    }
    printf("]\n");
}

