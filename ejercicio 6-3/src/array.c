/*
 * array.c
 *
 *  Created on: 30 may. 2022
 *      Author: Usuario
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


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
				for(i=0;*(array+i)!='\0';i++)
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

void convertirPalabraAMinusculas(char* comprobar, int tam)
{
	int i;

	if(comprobar != NULL)
	{
		for(i=0;i<tam;i++)
		{
			*(comprobar+i)=tolower(*(comprobar+i));
		}
	}
}

void convertirPrimerLetraAMayusculas(char* comprobar, int tam)
{
	int i;
	int flag;

	flag=1;

	if(comprobar != NULL)
	{
		for(i=0;i<tam;i++)
		{
			if(flag==1)
			{
				*(comprobar+i)=toupper(*(comprobar+i));
				flag=0;
			}

			if(isspace(*(comprobar+i))!=0) //isspace sirve para detectar el espacio.
			{
				flag=1;
			}
		}
	}
}

void juntarNombreApellido(char* nombreCompleto, char* nombre, char* apellido)
{
	strcat(nombreCompleto, apellido);
	strcat(nombreCompleto, ",");
	strcat(nombreCompleto, " ");
	strcat(nombreCompleto, nombre);
}
