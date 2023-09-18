/*
 * arrive.c
 *
 *  Created on: 22 abr. 2022
 *   Author: mauro
 */
#include <stdio.h>
#include <stdlib.h>
#include "arrive.h"
#include <string.h>
#include <ctype.h>


//INICIALIZADORES
void inicializacionArray(int vector[], int indice, int inicializador)
{
	int i;

	if(vector != NULL)
	{
		for(i=0;i<indice;i++)
		{
			vector[i]=inicializador;
		}
	}
}

// INGRESO DE DATOS POR USUARIO
int UTN_GetValor(char* array, int tam, char* mensaje, char* mensajeError, int conNumero)
{
	int i;
	int devuelve;
	int comprobacion;
	devuelve=-1;
	if(array!=NULL && tam>0)
	{
		devuelve=0;

		printf(mensaje);
		fflush(stdin);
		gets(array);

		while(strlen(array)>tam)
		{
			printf(mensajeError);
			gets(array);
			fflush(stdin);

		}
		if(conNumero==0)
		{
			do
			{
				for(i=0;i<tam;i++)
				{
					comprobacion= isdigit(*(array+i));
					if (comprobacion !=0)
					{
						printf(mensajeError);
						gets(array);
						fflush(stdin);
						break;
					}
				}
			}while(comprobacion!=0);
		}
	}
	return devuelve;
}
void pedirArriveValidadoEntreMaximoMinimoInt(int* vector, int indice, int max, int min, char* mensaje, char* mensjaeError)
{
	int i;

	if(vector != NULL)
	{
		for(i=0;i<indice;i++)
		{
			printf(mensaje);
			scanf("%d", &*(vector+i));
			fflush(stdin);

			while(*(vector+i)<min || *(vector+i)>max)
			{
				printf(mensjaeError);
				scanf("%d", &vector[i]);
				fflush(stdin);
			}
		}
	}
}

void CargaAleatoriaArrayValidadoSinUnNumeroInt(int* vector, int indice, int num, char* mensaje, char* mensjaeError, char* mensajePosicion, char* mensajePosicionError)
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
			scanf("%d", &*(vector+i));
			fflush(stdin);
			while(*(vector+i)==num)
			{
				printf(mensjaeError);
				scanf("%d", &*(vector+i));
				fflush(stdin);
			}

			printf("desea vover a ingresar un numero?(s/n)");
			scanf("%c", &respuesta);
			fflush(stdin);
		}
		while(respuesta == 's');
	}
}

// CALCULOS
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

int sumaImparesArriveInt(int vector[], int indice)
{
	int contador;
	int i;
	contador =0;

	if(vector != NULL)
	{
		for(i=0;i<indice;i++)
		{
			if(vector[i]%2 !=0)
			{
				contador = contador + vector[i];
			}
		}
	}
	return contador;
}

int sumaPositivosArriveInt(int vector[], int indice)
{
	int contador;
	int i;
	contador =0;

	if(vector != NULL)
	{
		for(i=0;i<indice;i++)
		{
			if(vector[i] >=0)
			{
				contador = contador + vector[i];
			}
		}
	}
	return contador;
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

int cantidadParesInt(int vector[], int indice)
{
	int i;
	int n;

	n =0;

	if(vector != NULL)
	{
		for(i=0;i<indice;i++)
		{
			if(vector[i]%2 ==0)
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

int menorImpares(int vector[], int indice)
{
	int bandera;
	int i;
	int imparMenor;

	bandera =0;
	imparMenor=0;

	for(i=0;i<indice;i++)
	{
		if (vector[i]%2 !=0)
		{
			if(vector[i]<imparMenor|| bandera ==0)
			{
				imparMenor=vector[i];
				bandera=1;
			}
		}
	}

	return imparMenor;
}

int mayorPares(int vector[], int indice)
{
	int bandera;
	int i;
	int imparMayor;

	bandera =0;
	imparMayor=0;

	for(i=0;i<indice;i++)
	{
		if (vector[i]%2 ==0)
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

int menorPares(int vector[], int indice)
{
	int bandera;
	int i;
	int imparMenor;

	bandera =0;
	imparMenor=0;

	for(i=0;i<indice;i++)
	{
		if (vector[i]%2 ==0)
		{
			if(vector[i]<imparMenor|| bandera ==0)
			{
				imparMenor=vector[i];
				bandera=1;
			}
		}
	}

	return imparMenor;
}

int menorNegativos(int vector[], int indice)
{
	int bandera;
	int i;
	int negativoMenor;

	bandera =0;
	negativoMenor=0;

	for(i=0;i<indice;i++)
	{
		if (vector[i] <0)
		{
			if(vector[i]<negativoMenor|| bandera ==0)
			{
				negativoMenor=vector[i];
				bandera=1;
			}
		}
	}

	return negativoMenor;
}

int promedioPares(int vector[], int indice)
{
	int resultado;
	int cantidadPares;
	int sumaPares;

	cantidadPares=cantidadParesInt(vector, indice);
	sumaPares=sumaParesArriveInt(vector, indice);
	resultado=sumaPares/cantidadPares;

	return resultado;
}
int promedioPositivos(int vector[], int indice)
{
	int resultado;
	int cantidadPositivos;
	int sumaPositivos;

	cantidadPositivos=cantidadPosInt(vector, indice);
	sumaPositivos=sumaPositivosArriveInt(vector, indice);
	resultado=sumaPositivos/cantidadPositivos;

	return resultado;
}

// MUESTRAS DE ARRAY
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

void mostrarArriveIntPares(int vector[], int indice, char* mensaje)
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

void mostrarArriveIntImpares(int vector[], int indice, char* mensaje)
{
	int i;

	if(vector != NULL)
	{
		printf(mensaje);
		for(i=0;i<indice;i++)
		{
			if(vector[i]%2 !=0)
			{
				printf("\n%d", vector[i]);
			}

		}
	}
}

void mostrarPosicionesImpares(int vector[], int indice, char* mensaje)
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

void mostrarPosicionesPares(int vector[], int indice, char* mensaje)
{
	int i;

	if(vector != NULL)
	{
		printf(mensaje);
		for(i=0;i<indice;i++)
		{
			if(vector[i]%2 ==0 || vector[i]%2 ==0)
			{
				printf("\n%d", i);
			}

		}
	}
}

void mostrarPosicionesPositivos(int vector[], int indice, char* mensaje)
{
	int i;

	if(vector != NULL)
	{
		printf(mensaje);
		for(i=0;i<indice;i++)
		{
			if(vector[i]>=0 || vector[i]>=0)
			{
				printf("\n%d", i);
			}

		}
	}
}

void mostrarPosicionesNegativos(int vector[], int indice, char* mensaje)
{
	int i;

	if(vector != NULL)
	{
		printf(mensaje);
		for(i=0;i<indice;i++)
		{
			if(vector[i]<0 || vector[i]<0)
			{
				printf("\n%d", i);
			}

		}
	}
}

//BURBUJEO (ORDENAMIENTO)

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

void burbujeoMayorMenor(int vec[], int indice)
{
	int i;
	int j;
	int aux;

	for(i=0;i<indice-1;i++)
	{
		for(j=i+1;j<indice;j++)
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
