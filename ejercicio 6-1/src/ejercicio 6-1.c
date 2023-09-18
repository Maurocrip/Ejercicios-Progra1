/*
 ======================================================================================================================================================
 Name        : ejercicio.c
 Author      : mauro racioppi
 DIV	     : D
 Description : Disponemos de dos variables numéricas (a y b). Realizar un algoritmo que permita el intercambio de valores de dichas variables.
 ======================================================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void cambioValores(int* primeroValor, int* segundoValor);


int main(void)
{
	setbuf(stdout, NULL);
	int a;
	int b;

	a=12;
	b=23;
	printf("la variable a es: %d\n", a);
	printf("la variable b es: %d\n", b);

	cambioValores(&a,&b);

	printf("\nla variable a es: %d\n", a);
	printf("la variable b es: %d\n", b);
	return 0;
}

void cambioValores(int* primeroValor, int* segundoValor)
{
	int comodin;

	comodin=*primeroValor;
	*primeroValor=*segundoValor;
	*segundoValor=comodin;
}
