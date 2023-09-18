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

int Sumar1(int, int);
int Sumar2(void);
void Sumar3(int, int);
void Sumar4(void);

int main(void) {
	setbuf(stdout, NULL);

	int primerNumero;
	int segundoNumero;
	int resultado;

	printf("ingrese primer numero: ");
	scanf("%d", &primerNumero);
	printf("ingrese segundo numero: ");
	scanf("%d", &segundoNumero);

	resultado= Sumar1(primerNumero, segundoNumero);

	printf("su numero es: %d", resultado);


	return 0;
}

int Sumar1(int n1, int n2)
{
	int resultado;

	resultado = n1 + n2;

	return resultado;
}

int Sumar2(void)
{
	int resultado;
	int numero1;
	int numero2;

	printf("ingrese primer numero: ");
	scanf("%d", &numero1);
	printf("ingrese segundo numero: ");
	scanf("%d", &numero2);

	resultado = numero1 + numero2;

	return resultado;
}

void Sumar3(int numero1, int numero2)
{
	int resultado;

	resultado = numero1 + numero2;
	printf("su numero es: %d", resultado);
}

void Sumar4(void)
{
	int resultado;
	int numero1;
	int numero2;

	printf("ingrese primer numero: ");
	scanf("%d", &numero1);
	printf("ingrese segundo numero: ");
	scanf("%d", &numero2);

	resultado = numero1 + numero2;

	printf("su numero es: %d", resultado);
}

