/*
 * cadenaArrayChar.c
 *
 *  Created on: 29 abr. 2022
 *      Author: Usuario
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void tomarValor(char array[], char* mensaje)
{
	if(array!=NULL)
	{
		printf(mensaje);
		fflush(stdin);
		gets(array);
	}
}

void asignarString(char array[], char* inicialisar)
{
	if(array!=NULL)
	{
		strcpy(array, inicialisar);
	}
}

int getTamanio(char vector[])
{
	int tamanio;

	tamanio=0;
	if(vector!=NULL)
	{
		tamanio =strlen(vector);
	}

	return tamanio;
}

int compararCadenas(char primeraCadena[], char segundaCadena[])
{
	int devuelve;

	if(primeraCadena!=NULL && segundaCadena!=NULL)
	{
		devuelve= strcmp(primeraCadena, segundaCadena);
	}
	return devuelve;
}

int convertirCharAInt(char vec[])
{
	int numero;
	if(vec!=NULL)
	{
		numero=atoi(vec);
	}
	return numero;
}

int chequearMayusculas(char comprobar[], int indice)
{
	int comprobacion;
	int i;

	comprobacion=0;
	if(comprobar != NULL)
	{
		for(i=0;i<indice;i++)
		{
			comprobacion= isupper(comprobar[i]);
			if (comprobacion !=0)
			{
				break;
			}
		}
	}

	return comprobacion;
}

int chequearMinusculas(char comprobar[], int indice)
{
	int comprobacion;
	int i;

	comprobacion=0;
	if(comprobar != NULL)
	{
		for(i=0;i<indice;i++)
		{
			comprobacion= islower(comprobar[i]);
			if (comprobacion !=0)
			{
				break;
			}
		}
	}
	return comprobacion;
}

int chequearNumeros(char comprobar[], int indice)
{
	int comprobacion;
	int i;

	comprobacion=0;
	if(comprobar != NULL)
	{
		for(i=0;comprobar[i]!='\0';i++)
		{
			comprobacion= isdigit(comprobar[i]);
			if (comprobacion !=0)
			{
				break;
			}
		}
	}

	return comprobacion;
}

int chequearVocales(char comprobar[], int indice)
{
	int comprobacion;
	int minusculas[indice];
	int i;

	comprobacion=0;
	if(comprobar != NULL)
	{
		for(i=0;i<indice;i++)
		{
			minusculas[i]=tolower(comprobar[i]);
			if (minusculas[i]=='a' || minusculas[i]=='e' || minusculas[i]=='i' || minusculas[i]=='o' || minusculas[i]=='u')
			{
				comprobacion=1;
				break;
			}
		}
	}

	return comprobacion;
}

void convertirPalabraAMayusculas(char comprobar[], int indice)
{
	int i;

	if(comprobar != NULL)
	{
		for(i=0;i<indice;i++)
		{
			comprobar[i]=toupper(comprobar[i]);
		}
	}
}

void convertirPalabraAMinusculas(char comprobar[], int indice)
{
	int i;

	if(comprobar != NULL)
	{
		for(i=0;i<indice;i++)
		{
			comprobar[i]=tolower(comprobar[i]);
		}
	}
}
