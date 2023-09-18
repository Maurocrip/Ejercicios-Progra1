/*
 ============================================================================
 Name        : prueba.c
 Author      : mauro
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void numeroFlotante(float);

int main(void) {
	setbuf(stdout, NULL);
	float numero;

	printf("ingrese un numero:");
	scanf("%f", &numero);

	numeroFlotante(numero);

	return 0;
}

void numeroFlotante(float numero1)
{
	printf("\nel numero flotante es: %f", numero1);
}
