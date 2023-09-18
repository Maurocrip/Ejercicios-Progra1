/*
 ============================================================================
 Name        : ejerccio.c
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

	int numero;
	int contador;
	int acumulador;
	float promedio;

	contador=5;
	acumulador=0;

	while(contador>0)
	{
		printf("ingrese el numero: ");
		scanf("%d", &numero);

		acumulador=numero+acumulador;

		contador--;
	}

	promedio=acumulador/5;

	printf("el promedio es: %f", promedio);


	return 0;
}
