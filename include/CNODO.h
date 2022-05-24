#ifndef __CNODO_H__
#define __CNODO_H__
#include <stdbool.h>

typedef struct CNODO
{
    int numero;
    struct CNODO *sig;
} CNODO;


CNODO *crear_nodo(int);
CNODO *borrar_nodo(CNODO*);
bool actualizar_nodo(CNODO*, int);

#endif


