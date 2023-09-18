/*
 ======================================================================================================================================================
 Name        : ejercicio.c
 Author      : mauro
 DIV	     : D
 Description : Realizar un programa que desde el main llame o invoque a la función que muestre el Menú del punto anterior.
Utilizar funciones y bibliotecas.
 ======================================================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

int main(void)
{
	setbuf(stdout, NULL);
	int respuesta;
	do
	{
		menu(&respuesta, "Menu:\n1-Inicializar\n2-Cargar\n3-Mostrar\n4-Calcular Promedio\n5-Ordenar\n6-salir ",
				"\nERROR ingrese una opcion valida(1-5)\n\nMenu:\n1-Inicializar\n2-Cargar\n3-Mostrar\n4-Calcular Promedio\n5-Ordenar\n6-salir ", 1, 6);
		switch(respuesta)
		{
			case 1:
				printf("\nUd. ha seleccionado lo opción 1-Inicializar\n");
			break;

			case 2:
				printf("\nd. ha seleccionado lo opción 2-Cargar\n");
			break;
			case 3:
				printf("\nUd. ha seleccionado lo opción 3-Mostrar\n");
			break;
			case 4:
				printf("\nUd. ha seleccionado lo opción 4-Calcular\n");
			break;
			case 5:
				printf("\nUd. ha seleccionado lo opción 5-Ordenar\n");
			break;
		}
	}while(respuesta!=6);

	return 0;
}
