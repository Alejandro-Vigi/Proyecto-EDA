#ifndef __COLA_H_
#define __COLA_H_
#include "CNODO.h"

typedef struct Cola
{
    int lon;
    CNODO* primero;
    CNODO* ultimo;
} Cola;

Cola* crear_cola();
void encolar(Cola*, int);
void desencolar(Cola*);
void imprimir_cola(Cola*);







#endif