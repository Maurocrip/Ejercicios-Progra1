/*
 ======================================================================================================================================================
 Name        : ejercicio.c
 Author      : mauro racioppi
 DIV	     : D
 Description : Crear un Array de 5 elementos de tipo num�rico donde se cargar�n edades.
 Agregar la funcionalidad para la opci�n 1 del Men� del ejercicio anterior utilizando funciones, es decir una funci�n que inicialice el Array.
 Agregar la funcionalidad para la opci�n 2 del Men� utilizando funciones, es decir una funci�n que le pida los n�meros o
 edades al usuario para cargar el Array de forma secuencial.
 ======================================================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "array.h"
#define ELEMENTOS 5

int main(void) {
	setbuf(stdout, NULL);
	int edades[ELEMENTOS];
	int respuesta;
	int validacion;
	do
	{
		menu(&respuesta, "Menu:\n1-Inicializar\n2-Cargar\n3-Mostrar\n4-Calcular Promedio\n5-Ordenar\n6-salir ",
				"\nERROR ingrese una opcion valida(1-5)\n\nMenu:\n1-Inicializar\n2-Cargar\n3-Mostrar\n4-Calcular Promedio\n5-Ordenar\n6-salir ", 1, 6);
		switch(respuesta)
		{
			case 1:
				validacion=inicializacionArray(edades, ELEMENTOS, 0);
				if(validacion==1)
				{
					printf("\nLa inicializacion del array ha salido exitosa\n");
				}
				else
				{
					printf("\nEROR, no se pudo inicializar el array\n");
				}
			break;

			case 2:
				PedirArriveInt(edades, ELEMENTOS, "Ingrese la edad: ");
			break;
			case 3:
				printf("\nUd. ha seleccionado lo opci�n 3-Mostrar\n");
			break;
			case 4:
				printf("\nUd. ha seleccionado lo opci�n 4-Calcular\n");
			break;
			case 5:
				printf("\nUd. ha seleccionado lo opci�n 5-Ordenar\n");
			break;
		}
	}while(respuesta!=6);

	return 0;
}
