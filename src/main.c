#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int eleccion, menu=0;
	system("cls");
	
	do{

	printf("*--------------------------------------------------*\n");
	printf("*-----------------------Menú-----------------------*\n");
	printf("*1.- Notación infija a postfija--------------------*\n");
	printf("*2.- Salir-----------------------------------------*\n");
	printf("*--------------------------------------------------*\n");
	printf("*Ingrese su elección: ");
	scanf("%d", &eleccion);

	switch(eleccion){

		case 1:
			printf("Caso 1");
			menu++;

		break;

		case 2:
			printf("Caso 2");
			menu++;

		break;

		default:
			printf("Verifique su elección");

		break;
	}

	}while(menu==0);


	return (0);
}