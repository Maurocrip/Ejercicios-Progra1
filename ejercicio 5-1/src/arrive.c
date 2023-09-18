/*
 * arrive.c
 *
 *  Created on: 22 abr. 2022
 *   Author: mauro
 */
#include <stdio.h>
#include <stdlib.h>

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

void pedirArriveValidadoInt(int vector[], int indice, int max, int min, char* mensaje, char* mensjaeError)
{
	int i;

	if(vector != NULL)
	{
		for(i=0;i<indice;i++)
		{
			printf(mensaje);
			scanf("%d", &vector[i]);
			fflush(stdin);

			while(vector[i]<min || vector[i]>max)
			{
				printf(mensjaeError);
				scanf("%d", &vector[i]);
				fflush(stdin);
			}
		}
	}
}

int sumaArriveInt(int vector[], int indice)
{
	int contador;
	int i;
	contador =0;

	if(vector != NULL)
	{
		for(i=0;i<indice;i++)
		{
			contador = contador + vector[i];
		}
	}
	return contador;
}
void mostrarArriveInt(int vector[], int indice, char* mensaje)
{
	int i;

	if(vector != NULL)
	{
		for(i=0;i<indice;i++)
		{
			printf(mensaje);
			printf("%d", vector[i]);
		}
	}
}

