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
#include "calculos 4-1.h"

int main(void)
{
	setbuf(stdout, NULL);

	int numero;
	int factorialNumero;

	numero = entero();

	factorialNumero = factorial(numero);

	printf("el factorial %d", factorialNumero);

	return 0;
}
