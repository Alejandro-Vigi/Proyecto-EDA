#ifndef __CNODO_H__
#define __CNODO_H__
#include <stdbool.h>
/**
 * @brief Realizado el 17/05/2022
 * Osnaya Martinez Emmanuel
 * Palacios Barcelos Juan Antonio
 * Romero Molina David
 * Vigi Garduño Marco Alejandro
 * 
 */

typedef struct CNODO
{
    int numero;
    struct CNODO *sig;
} CNODO;


CNODO *crear_nodo(int);
CNODO *borrar_nodo(CNODO*);
bool actualizar_nodo(CNODO*, int);

#endif


