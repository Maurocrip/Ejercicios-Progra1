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

int main(void) {
	setbuf(stdout, NULL);
	int numero1;
	int numero2;
	int suma;

	printf("ingresar el primer numero: ");
	scanf("%d", &numero1);
	printf("ingresar el segundo numero: ");
	scanf("%d", &numero2);

	suma = numero1 + numero2;

	printf("el resultado es: %d", suma);

	return 0;
}
