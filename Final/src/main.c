#include <stdio.h>
#include <stdlib.h>
#include "Cola.h"
#include "Pila.h"

/**
 * @brief Realizado el 24/05/2022
 * 
 * Osnaya Martinez Emmanuel
 * Palacios Barcelos Juan Antonio
 * Romero Molina David
 * Vigi Garduño Marco Alejandro
 * 
 */

//Prototipo de funciones
void notacionFinal(Cola *c, Pila * p);
int menu();
int menu2();

int main()
{
	//Declarar variables
	int  op = 0,numero=0, opcion = 0 ;
	char operador= '\0';
	Cola *c;
	Pila *p;
	do{
		op = menu();
		switch (op)
		{
		case 1:
			c = crear_cola();
			p = pila_vacia();
			do
			{
				opcion = menu2();
				switch (opcion)
				{
				case 1:
					printf("Introduce el numero:\n");
					scanf("%d", &numero);
					encolar(c,numero);
					break;
				case 2:
					printf("Introduce el operador:\n");
					scanf("%s", &operador);
					push(p, operador);
					break;
				case 3:
					notacionFinal(c, p);
					break;				
				default:
					break;
				}
			} while (opcion !=3);
			break;
		default:
			break;
		}
	}while(op!=2);

	return (0);
}


int menu(){
	int opcion;
	printf("Selecciona una opción\n");
	printf("1. Introducir una notación\n");
	printf("2. salir\n");
	scanf("%d", &opcion);
	return opcion;
}

int menu2() {
	int opcion;
	printf("¿Que información va introducir?\n");
	printf("1. Numero\n");
	printf("2. Operador\n");
	printf("3. Notación final\n");
	scanf("%d", &opcion);
	return opcion;
}

void notacionFinal(Cola *c, Pila * p){
	while (c->lon != 0)
	{
		printf("%d", desencolar(c));
	}
	free(c);

	while (p->log !=0)
	{
		printf("%c", pop(p));
	}
	free(p);
	printf("\n");
}