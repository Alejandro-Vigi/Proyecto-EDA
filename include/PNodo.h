#ifndef __PNODO_H__
#define __PNODO_H__
#include <stdbool.h>


typedef struct PNODO
{
    char operador;
    struct PNODO *sig;
    struct PNODO *ant;
} PNODO;

PNODO *crear_nodo_pila(char);
PNODO *borrar_nodo_pila(PNODO*);
bool actualizar_nodo_pila(PNODO*, char);

#endif