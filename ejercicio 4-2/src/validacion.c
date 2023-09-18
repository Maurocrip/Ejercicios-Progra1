/*
 * validacion.c
 *
 *  Created on: 9 abr. 2022
 *      Author: Usuario
 */
#include <stdio.h>
#include <stdlib.h>

float get_temperaturaC(char* mensaje, char* mensajeError)
{
	float temperatura;
	int contador;
	contador=0;
	do{
		if (contador ==1)
		{
			printf(mensajeError);
			scanf("%f", &temperatura);
			fflush(stdin);
		}
		else
		{
			printf(mensaje);
			scanf("%f", &temperatura);
			fflush(stdin);
			contador=1;
		}

	}
	while(temperatura<0 || temperatura> 99.61);

	return temperatura;
}

float get_temperaturaF(char* mensaje, char* mensajeError)
{
	float temperatura;

	do
	{
		printf(mensaje);
		scanf("%f", &temperatura);
		fflush(stdin);
	}
	while(temperatura<32  || temperatura> 211.3 );

	return temperatura;
}
