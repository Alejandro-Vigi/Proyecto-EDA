#include "Cola.h"
#include <stdlib.h>
#include <stdio.h>

Cola* crear_cola(){
    Cola* c = (Cola*)malloc(sizeof(Cola));
    c->lon = 0;
    c->primero = c->ultimo = NULL;
    return c;
}
void encolar(Cola* c, int numero){
    if (c->lon == 0)
    {
        CNODO *nuevo = crear_nodo(numero);
        nuevo->sig = c->primero;
        c->primero = c->ultimo = nuevo;
        c->lon++;
    }else if(c->primero == c->ultimo){
        CNODO *nuevo = crear_nodo(numero);
        c->primero->sig = nuevo;
        c->ultimo = nuevo;
        c->lon++;
    }else{
        CNODO *nuevo = crear_nodo(numero);
        c->ultimo->sig = nuevo;
        c->ultimo = nuevo;
        c->lon++;
    }

}
void desencolar(Cola* c){
    if (c->lon != 0)
    {
        CNODO *tmp;
        tmp = c->primero;
        c->primero = c->primero->sig;
        free(tmp);
        tmp = NULL;
        c->lon--;
    }
}
void imprimir_cola(Cola *c){
    printf("[ ");
    for(CNODO *tmp= c->primero; tmp!=NULL; tmp =tmp->sig){
        printf("%d ", tmp->numero);
    }
    printf("]\n");
}