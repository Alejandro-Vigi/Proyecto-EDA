#include <stdio.h>
#include "Cola.h"
#include "Pila.h"


int menu();

int main()
{

	int  op = 0,info;
	Cola *c;
	Pila *p;
	do{
		op = menu();
		switch (op)
		{
		case 1:
			c = crear_cola();
			break;
		case 2:
			printf("Ingresa el dato a insertar en la Cola\n");
			scanf("%d", &info);
			encolar(c, info);
			imprimir_cola(c);
			break;
		case 3:
			desencolar(c);
			imprimir_cola(c);
			break;
		default:
			break;
		}
	}while(op!=6);

	return (0);
}


int menu(){
	int opcion;
	printf("Selecciona una opción\n");
	printf("1. Crear Cola\n");
	printf("2. Encolar\n");
	printf("3. Desencolar\n");
	scanf("%d", &opcion);
	return opcion;
}