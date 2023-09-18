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

int entero(void);

int main(void) {
	setbuf(stdout, NULL);

	printf("su numero es: %d", entero());
	return 0;
}

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
