/*
 * array.c
 *
 *  Created on: 17 may. 2022
 *      Author: Usuario
 */

#include <stdio.h>
#include <stdlib.h>

void sortPositivosNegativos(int vector[], int tam)
{
	int comodin;
	int i;
	int j;

	if(vector != NULL)
	{
		for(i=0;i<tam;i++)
		{
			for(j=0;j<tam;j++)
			{
				if(vector[i]<0 && vector[j]<0)
				{
					if(vector[i]>vector[j])
					{
						comodin=vector[i];
						vector[i]=vector[j];
						vector[j]=comodin;
					}
				}
				else
				{
					if(vector[i]>vector[j])
					{
						comodin=vector[i];
						vector[i]=vector[j];
						vector[j]=comodin;
					}
				}
			}
		}
	}
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
