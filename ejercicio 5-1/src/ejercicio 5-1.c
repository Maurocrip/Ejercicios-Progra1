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
#include "arrive.h"
#define MAX 5

int main(void)
{
	int contador;
	setbuf(stdout, NULL);
	int numero[MAX];

	PedirArriveInt(numero, MAX, "ingrese un nº");
	contador= sumaArriveInt(numero, MAX);
	mostrarArriveInt( numero,  MAX, "\nel numero ingresado fue ");

	printf("\nla suma de los vectores es: %d\n",contador);

	return 0;
}
