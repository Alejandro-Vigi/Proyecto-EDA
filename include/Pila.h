#ifndef __PILA_H__
#define __PILA_H__
#include "PNodo.h"

typedef struct Pila
{
    PNODO *cima;
    PNODO *fondo;
    int log;
}Pila;

Pila* pila_vacia();
bool push(Pila*, int);
int pop(Pila*);
bool es_vacia(Pila *);
bool anular(Pila*);

#endif
