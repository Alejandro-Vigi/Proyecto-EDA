#ifndef __PNODO_H__
#define __PNODO_H__
#include <stdbool.h>


typedef struct PNODO
{
    int numero;
    struct PNODO *sig;
    struct PNODO *ant;
} PNODO;

PNODO *crear_nodo_pila(int);
PNODO *borrar_nodo_pila(PNODO*);
bool actualizar_nodo_pila(PNODO*, int);

#endif