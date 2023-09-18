/*
 ======================================================================================================================================================
 Name        : ejercicio.c
 Author      : mauro racioppi
 DIV	     : D
 Description : Modificar la funcionalidad de la opción 3 del Menú de forma que existan 2 funciones
 una que muestre solamente un elemento o edad y otra que muestre todos los elementos o edades.
 La función que muestra todos los elementos o edades debe llamar a la que muestra solo uno.
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
		menu(&respuesta, "\nMenu:\n1-Inicializar\n2-Cargar\n3-Mostrar\n4-Calcular Promedio\n5-Ordenar\n6-salir ",
				"\nERROR ingrese una opcion valida(1-6)\n\nMenu:\n1-Inicializar\n2-Cargar\n3-Mostrar\n4-Calcular Promedio\n5-Ordenar\n6-salir ", 1, 6);
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
				CargaAleatoriaArrayValidadoMayorQueNumeroInt(edades, ELEMENTOS, 0, "Ingrese la edad: ", "ERROR, por favor ingrese una edad positiva: ",
						"En que posicion desea guardar la edad: ", "ERROR, por favor ingrese en que posicion desea guardar la edad (0-4)");
			break;
			case 3:
				menu(&respuesta, "\n1-Mostrar una edad\n2-Mostrar todas las edades\n",
								"\nERROR ingrese una opcion valida(1-6)\n\nMenu:\n1-Mostrar una edad\n2-Mostrar todas las edades ", 1, 2);
				switch(respuesta)
				{
					case 1:
						mostrarUnArriveInt(edades,0,"la edad es: ");
					break;

					case 2:
						mostrarArriveInt(edades, ELEMENTOS, "la edad es:");
					break;

				}
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
