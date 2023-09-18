/*
 * array.c
 *
 *  Created on: 7 may. 2022
 *      Author: Usuario
 */

#include <stdio.h>
#include <stdlib.h>
#include "array.h"

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

void CargaAleatoriaArrayValidadoMayorQueNumeroInt(int vector[], int indice, int minimo, char* mensaje, char* mensjaeError, char* mensajePosicion, char* mensajePosicionError)
{
	int i;
	char respuesta;
	if(vector != NULL)
	{
		do
		{
			printf(mensajePosicion);
			scanf("%d", &i);
			fflush(stdin);
			while(i<0||i>indice-1)
			{
				printf(mensajePosicionError);
				scanf("%d", &i);
				fflush(stdin);
			}

			printf(mensaje);
			scanf("%d", &vector[i]);
			fflush(stdin);
			while(vector[i]<minimo)
			{
				printf(mensjaeError);
				scanf("%d", &vector[i]);
				fflush(stdin);
			}

			printf("desea vover a ingresar una edad?(s/n)");
			scanf("%c", &respuesta);
			fflush(stdin);
		}
		while(respuesta == 's');
	}
}

void mostrarArriveInt(int vector[], int indice, char* mensaje)
{
	int i;

	if(vector != NULL)
	{
		for(i=0;i<indice;i++)
		{
			mostrarUnArriveInt(vector,i,mensaje);
		}
	}
}

void mostrarUnArriveInt(int vector[], int indice, char* mensaje)
{
	if(vector != NULL)
	{
		printf(mensaje);
		printf("%d\n", vector[indice]);

	}
}
