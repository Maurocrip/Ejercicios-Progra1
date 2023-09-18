/*
 ======================================================================================================================================================
 Name        : ejercicio.c
 Author      : mauro racioppi
 DIV	     : D
 Description : Realizar un programa que permita el ingreso de 10 n�meros enteros (positivos y negativos).
Necesito generar un listado de los n�meros positivos de manera creciente y negativos de manera decreciente.
(Como m�ximo 5 estructuras repetitivas).
 ======================================================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "array.h"

#define CANTIDAD 10


int main(void)
{
	setbuf(stdout, NULL);
	int numeros[CANTIDAD];

	PedirArriveInt(numeros,CANTIDAD, "ingrese un numero ");
	sortPositivosNegativos(numeros,CANTIDAD);
	mostrarArriveInt(numeros,CANTIDAD, "\nel numero ingresado es: ");

	return 0;
}


