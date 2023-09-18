/*
 ============================================================================
 Name        : structuras.c
 Author      : mauro
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funcionesMasEstructuras.h"

#define CANTIDAD_PERSONAS 5
#define LUGAR_VACIO -1

/*=================================================================MAIN==============================================================================================*/
int main(void)
{
	setbuf(stdout, NULL);
	ePersonas p;
	ePersonas listaDePersonas[CANTIDAD_PERSONAS];
	int respuesta;
	int respuesta2;
	int validacion;

	inicializacionArray(listaDePersonas, CANTIDAD_PERSONAS, LUGAR_VACIO);

	do{
		ValidacionMaximoMinimo(&respuesta, "Menu:\n1-Alta\n2-Baja\n3-Modificacion\n4-Listado\n5-Salir ", "\nERROR ingrese una opcion valida(1-5)\n"
				"\nMenu:\n1-Alta\n2-Baja\n3-Modificacion\n4-Listado\n5-Salir ", 1, 5);
		switch(respuesta)
		{
			case 1:
				ValidacionMayorInt(&p.legajo, "\nIngrese el legajo de la persona: ",
						"\nERROR, por favor reingese el legajo de la persona(numero mayor 0)",0);
				tomarValor(p.nombre, "Ingrese el nombre de la persona: ");
				tomarValor(p.apellido, "Ingrese el apellido de la persona: ");
				ValidacionMayorfloat(&p.suelo, "Ingrese el sueldo de la persona: ",
						"ERROR, por favor reingese el sueldo de la persona(numero mayor 0) ",1);

				validacion=guardarPersonas(listaDePersonas, CANTIDAD_PERSONAS, p, LUGAR_VACIO);
				switch(validacion)
				{
					case 1:
						printf("\nSe ah guardado la persona con exito\n\n");
					break;

					case -1:
						printf("\nNo se ah podido guardar a la persona, probablemente ya no halla espacio para registrar mas personas\n");
					break;

					default:
						printf("\nNo se ah podido guardar la persona, error de codigo\n");
					break;
				}
			break;

			case 2:
				ValidacionMayorInt(&p.legajo, "\ningrese el legajo de la persona que desea borrar: ",
						"\nERROR, por favor reingese el legajo de la persona que desea borrar(numero mayor 0)",0);
				validacion=borrarPersonas(listaDePersonas, CANTIDAD_PERSONAS, p, LUGAR_VACIO);
				switch(validacion)
				{
					case 1:
						printf("\nSe ah borrado la persona con exito\n\n");
					break;

					case -1:
						printf("\nNo se ah podido borrar a la persona, lo mas probable es que su legajo no este registrado\n\n");
					break;

					default:
						printf("\nNo se ah podido borrar a la persona, error de codigo.\n");
					break;
				}
			break;

			case 3:
				ValidacionMayorInt(&p.legajo, "\ningrese el legajo de la persona que desea modificar: ",
						"\nERROR, por favor reingese el legajo de la persona que desea modificar(numero mayor 0)",0);
				validacion=buscarLegajo(listaDePersonas, CANTIDAD_PERSONAS, p.legajo);
				if(validacion==-1)
				{
					printf("\nno se encontro el numero de legajo de la persona ingresada.\n\n");
				}
				else
				{
					do
					{
						ValidacionMaximoMinimo(&respuesta2, "\nMenu:\n1-modificar legajo\n2-modificar nombre\n3-modificar apellido\n4-modificar sueldo\n5-Salir\n",
								"ERROR ingrese una opcion valida(1-5)\n\nMenu:\n1-Alta\n2-Baja\n3-Modificacion\n4-Listado\n5-Salir\n", 1, 5);
						switch(respuesta2)
						{
							case 1:
								ValidacionMayorInt(&listaDePersonas[validacion].legajo, "\ningrese el legajo de la persona: ",
									"\nERROR, por favor reingese el legajo de la persona(numero mayor 0)",0);
							break;

							case 2:
								tomarValor(listaDePersonas[validacion].nombre, "\ningrese el nombre de la persona");
							break;

							case 3:
								tomarValor(listaDePersonas[validacion].apellido, "\ningrese el apellido de la persona");
							break;

							case 4:
								ValidacionMayorfloat(&listaDePersonas[validacion].suelo, "\ningrese el sueldo de la persona: ",
										"\nERROR, por favor reingese el sueldo de la persona(numero mayor 0)",0);
							break;
						}
					}while(respuesta2!=5);

				}

			break;

			case 4:
				ordenamientoPersonasPorLegajo(listaDePersonas, CANTIDAD_PERSONAS);
				validacion=mostrarPersonasIngresadas(listaDePersonas, CANTIDAD_PERSONAS);
				if(validacion==-1)
				{
					printf("\nNo hay personas registradas\n\n");
				}
			break;
		}

	}while(respuesta!=5);

	return 0;
}
