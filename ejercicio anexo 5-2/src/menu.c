/*
 * menu.c
 *
 *  Created on: 7 may. 2022
 *      Author: Usuario
 */
#include <stdio.h>
#include <stdlib.h>

void menu(int* resultado, char* mensaje, char* mensajeError, int minimo, int maximo)
{
	printf(mensaje);
	scanf("%d", resultado);
	fflush(stdin);
	while(*resultado<minimo || *resultado>maximo)
	{
		printf(mensajeError);
		scanf("%d", resultado);
		fflush(stdin);
	}
}
