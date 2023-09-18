/*
 * funcionesMasEstructuras.c
 *
 *  Created on: 6 may. 2022
 *      Author: Usuario
 */

#include <stdio.h>
#include <stdlib.h>
#include "funcionesMasEstructuras.h"

int buscarLegajo(ePersonas vector[], int tamanio, int legajoA_Buscar)
{
	int i;
	int respuesta;

	respuesta =-1;
	if(vector != NULL)
	{
		for(i=0;i<tamanio;i++)
		{
			if(vector[i].legajo ==legajoA_Buscar)
			{
				respuesta=i;
				break;
			}

		}
	}

	return respuesta;
}

int borrarPersonas(ePersonas vector[], int tamanio, ePersonas persona, int borrador)
{
	int indice;
	int respuesta;

	respuesta=0;
	if(vector != NULL)
	{
		indice=buscarLegajo(vector, tamanio, persona.legajo);
		if(indice==-1)
		{
			respuesta=-1;
		}
		else
		{
			vector[indice].legajo=borrador;
			respuesta=1;
		}
	}
	return respuesta;
}

int guardarPersonas(ePersonas vector[], int tamanio, ePersonas personaA_Guardar, int lugarLibre)
{
	int indice;
	int respuesta;

	respuesta=0;
	if(vector != NULL)
	{
		indice=buscarLegajo(vector, tamanio, lugarLibre);
		if(indice==-1)
		{
			respuesta=-1;
		}
		else
		{
			vector[indice]=personaA_Guardar;
			respuesta=1;
		}
	}

	return respuesta;
}


void inicializacionArray(ePersonas vector[], int tamanio, int inicializador)
{
	int i;

	if(vector != NULL)
	{
		for(i=0;i<tamanio;i++)
		{
			vector[i].legajo =inicializador;
		}
	}
}

void ordenamientoPersonasPorLegajo(ePersonas vector[], int tamanio)
{
	int i;
	int j;
	ePersonas guardado;

	if(vector != NULL)
	{
		for(i=0;i<tamanio;i++)
		{
			for(j=i+1;j<tamanio-1;j++)
			{
				if(vector[i].legajo>vector[j].legajo)
				{
					guardado=vector[j];
					vector[j]=vector[i];
					vector[i]=guardado;
				}

			}
		}
	}
}

int mostrarPersonasIngresadas(ePersonas vector[], int tamanio)
{
	int i;
	int validacion;
	int respuesta;

	respuesta=-1;

	if(vector != NULL)
	{
		for(i=0;i<tamanio;i++)
		{
			validacion=buscarLegajo(vector, tamanio, vector[i].legajo);
			if(validacion!=-1 && vector[i].legajo!=-1)
			{
				printf("\nLegajo: %d\nNombre: %s\nApellido: %s\nSueldo: %.2f\n\n", vector[i].legajo, vector[i].nombre,
					vector[i].apellido, vector[i].suelo);
				respuesta=0;
			}
		}
	}
	return respuesta;
}

int ValidacionMaximoMinimo(int* resultado, char* mensaje,char* mensajeError, int minimo, int maximo)
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
	return 0;
}
int ValidacionMayorInt(int* resultado, char* mensaje,char* mensajeError, int numero)
{
	printf(mensaje);
	scanf("%d", resultado);
	fflush(stdin);
	while(*resultado<numero)
	{
		printf(mensajeError);
		scanf("%d", resultado);
		fflush(stdin);
	}
	return 0;
}

int ValidacionMayorfloat(float* resultado, char* mensaje,char* mensajeError, int numero)
{
	printf(mensaje);
	scanf("%f", resultado);
	fflush(stdin);
	while(*resultado<numero)
	{
		printf(mensajeError);
		scanf("%f", resultado);
		fflush(stdin);
	}
	return 0;
}
void tomarValor(char array[], char* mensaje)
{
	if(array!=NULL)
	{
		printf(mensaje);
		fflush(stdin);
		gets(array);
	}
}
