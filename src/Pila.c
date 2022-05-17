#include "Pila.h"
#include <stdlib.h>

Pila* pila_vacia(){
    Pila *p = (Pila*)malloc(sizeof(Pila));
    p->cima = p->fondo = NULL;
    p->log = 0;
    return p;
}
bool push(Pila* p, int numero){
    if(es_vacia(p)){
        p->fondo = numero;
        p->log++;
    }else if(!esta_llena(p)){
        p->fondo++;
        p->fondo = numero;
        p->log++;
    }
}
char pop(Pila *p){
    if(!es_vacia(p)){
        
    }
}



lar(Pila *p){
    if (p != NULL){
        free (p);
        p = NULL;
        return true;
    }
    return false;
}

bool esta_llena(Pila *p){
    return (p -> log< MAX - 1)?false
}

