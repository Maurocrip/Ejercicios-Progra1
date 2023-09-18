/*
 * array.c
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

int inicializacionArray(int vector[], int indice, int inicializador)
{
	int i;
	int resultado;
	resultado=0;

	if(vector != NULL)
	{
		resultado=1;

		for(i=0;i<indice;i++)
		{
			vector[i]=inicializador;
		}
	}

	return resultado;
}

void PedirArriveInt(int vector[], int indice, char* mensaje)
{
	int i;

	if(vector != NULL)
	{
		for(i=0;i<indice;i++)
		{
			printf(mensaje);
			scanf("%d", &vector[i]);
			fflush(stdin);
		}
	}
}
