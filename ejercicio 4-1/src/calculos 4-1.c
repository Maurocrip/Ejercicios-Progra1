/*
 * calculos.c
 *
 *  Created on: 9 abr. 2022
 *      Author: Usuario
 */
#include <stdio.h>
#include <stdlib.h>

int entero(void)
{
	int numero;
	printf("ingrese un numero entre 0 y 5: ");
	scanf("%d", &numero);
	while(numero<0 || numero>5)
	{
		printf("Error, reingrese un numero entre 0 y 5: ");
		scanf("%d", &numero);
	}

	return numero;
}

int factorial(float numero)
{
	int resultado;

	if(numero == 0)
	{
		resultado =0;
	}
	else
	{
		if(numero == 1)
			{
				resultado =1;
			}
			else
			{
				resultado= numero *factorial(numero-1);
			}
	}

	return resultado;
}
