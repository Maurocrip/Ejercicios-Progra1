/*
 ============================================================================
 Name        : ejercicio.c
 Author      : mauro
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int numeroParImpar(int);

int main(void) {
	setbuf(stdout, NULL);

	int numero;
	int respuesta;

	printf("ingrese un numero:");
	scanf("%d", &numero);

	respuesta = numeroParImpar(numero);
	if(respuesta==1)
	{
		printf("sun numero es par");
	}
	else
	{
		printf("su numero es impar");
	}

	return 0;
}

int numeroParImpar(int numeroP)
{
	if(numeroP%2 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

