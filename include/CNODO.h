#ifndef __CNODO_H__
#define __CNODO_H__
#include <stdbool.h>

typedef struct CNODO
{
    char operador;
    struct CNODO *sig;
    struct CNODO *ant;
} CNODO;

CNODO *crear_nodo(char);
CNODO *borrar_nodo(CNODO*);
bool actualizar_nodo(CNODO*, char);

#endif


