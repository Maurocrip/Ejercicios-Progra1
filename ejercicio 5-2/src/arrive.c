/*
 * arrive.c
 *
 *  Created on: 22 abr. 2022
 *   Author: mauro
 */
#include <stdio.h>
#include <stdlib.h>
#include "arrive.h"

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

int sumaParesArriveInt(int vector[], int indice)
{
	int contador;
	int i;
	contador =0;

	if(vector != NULL)
	{
		for(i=0;i<indice;i++)
		{
			if(vector[i]%2 ==0)
			{
				contador = contador + vector[i];
			}
		}
	}
	return contador;
}
void mostrarArriveInt(int vector[], int indice, char* mensaje)
{
	int i;

	if(vector != NULL)
	{
		printf(mensaje);
		for(i=0;i<indice;i++)
		{
			printf("\n%d", vector[i]);
		}
	}
}

void mostrarArriveIntPos(int vector[], int indice, char* mensaje)
{
	int i;

	if(vector != NULL)
	{
		printf(mensaje);
		for(i=0;i<indice;i++)
		{
			if(vector[i]>0)
			{
				printf("\n%d", vector[i]);
			}
		}
	}
}

void mostrarArriveIntNeg(int vector[], int indice, char* mensaje)
{
	int i;

	if(vector != NULL)
	{
		printf(mensaje);
		for(i=0;i<indice;i++)
		{
			if(vector[i]<0)
			{
				printf("\n%d", vector[i]);
			}
		}
	}
}

int cantidadNegInt(int vector[], int indice)
{
	int i;
	int n;

	n =0;

	if(vector != NULL)
	{
		for(i=0;i<indice;i++)
		{
			if(vector[i]<0)
			{
				n++;
			}
		}
	}
	return n;
}

int cantidadPosInt(int vector[], int indice)
{
	int i;
	int n;

	n =0;

	if(vector != NULL)
	{
		for(i=0;i<indice;i++)
		{
			if(vector[i]>-1)
			{
				n++;
			}
		}
	}
	return n;
}

int mayorImpares(int vector[], int indice)
{
	int bandera;
	int i;
	int imparMayor;

	bandera =0;
	imparMayor=0;

	for(i=0;i<indice;i++)
	{
		if (vector[i]%2 ==1)
		{
			if(vector[i]>imparMayor|| bandera ==0)
			{
				imparMayor=vector[i];
				bandera=1;
			}
		}
	}

	return imparMayor;
}

void listadoArriveParesiNT(int vector[], int indice, char* mensaje)
{
	int i;

	if(vector != NULL)
	{
		printf(mensaje);
		for(i=0;i<indice;i++)
		{
			if(vector[i]%2 ==0)
			{
				printf("\n%d", vector[i]);
			}

		}
	}
}

void listadoPosicionesImpares(int vector[], int indice, char* mensaje)
{
	int i;

	if(vector != NULL)
	{
		printf(mensaje);
		for(i=0;i<indice;i++)
		{
			if(vector[i]%2 ==1 || vector[i]%2 ==-1)
			{
				printf("\n%d", i);
			}

		}
	}
}
//anexo 5-1
void burbujeoMenorMayor(int vec[], int indice)
{
	int i;
	int j;
	int aux;

	for(i=0;i<indice-1;i++)
	{
		for(j=i+1;j<indice;j++)
		{
			if(vec[i]>vec[j])
			{
				aux=vec[i];
				vec[i]=vec[j];
				vec[j]=aux;
			}
		}
	}
}

void burbujeoPos(int vec[], int indice)
{
	int i;
	int j;
	int aux;

	for(i=0;i<indice-1;i++)
	{
		for(j=i+1;j<indice;j++)
		{
			if(vec[i]>=0 && vec[j]>=0)
			{
				if(vec[i]>vec[j])
				{
					aux=vec[i];
					vec[i]=vec[j];
					vec[j]=aux;
				}
			}

		}
	}
}

void burbujeoNeg(int vec[], int indice)
{
	int i;
	int j;
	int aux;

	for(i=0;i<indice-1;i++)
	{
		for(j=i+1;j<indice;j++)
		{
			if(vec[i]<0 && vec[j]<0)
			{
				if(vec[i]<vec[j])
				{
					aux=vec[i];
					vec[i]=vec[j];
					vec[j]=aux;
				}
			}

		}
	}
}

void burbujeoIgualacionInt(int vec[], int indice, char* mensaje)
{
	int i;
	int j;
	int contador;
	int numero[indice];

	if(vec != NULL)
	{
		printf(mensaje);

		for(i=0;i<indice-1;i++)
		{
			contador=0;
			for(j=i+1;j<indice;j++)
			{
				if(vec[i]==vec[j])
				{
					contador++;
					if(contador==1 && chequearNumeroEnArray(numero, i, vec[i])==0)
					{
						numero[i]=vec[i];
						printf("\n%d", vec[i]);
					}
				}
			}
		}
	}
}

int chequearNumeroEnArray(int vec[], int indice, int numero)
{
	int i;
	int respuesta;

	respuesta=0;
	if(vec != NULL)
	{
		for(i=0;i<indice;i++)
		{
			if(vec[i]==numero)
			{
				respuesta=1;
			}
		}
	}

	return respuesta;
}

