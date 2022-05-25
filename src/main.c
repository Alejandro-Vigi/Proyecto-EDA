#include <stdio.h>
#include "Cola.h"
#include "Pila.h"


int menu();
int menu2();

int main()
{

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
					scanf("%d", numero);
					encolar(c, numero);
					imprimir_cola(c);
					break;
				case 2:
					printf("Introdcue el operador\n:");
					scanf("%s", operador);
					push(p, operador);
					imprimir_pila(p);
					break;
				default:
					break;
				}/* code */
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
	printf("1. Operador\n");
	printf("2. Numero\n");
	printf("3. Salir\n");
	scanf("%d", &opcion);
	return opcion;
}