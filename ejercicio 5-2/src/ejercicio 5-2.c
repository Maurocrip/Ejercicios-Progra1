/*
 ============================================================================
 Name        : ejercicio.c
 Author      : mauro
 DIV	     : D
 Description : Pedir el ingreso de 10 números enteros entre -1000 y 1000. Determinar:
a) Cantidad de positivos y negativos.
b) Sumatoria de los pares.
c) El mayor de los impares.
d) Listado de los números ingresados.
e) Listado de los números pares.
f) Listado de los números de las posiciones impares.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "arrive.h"
#define IND 10

//ejercicio 5-2
/*int main(void)
{
	setbuf(stdout, NULL);
	int numeros[IND];
	int maximo;
	int minimo;
	int positivos;
	int negativos;
	int sumatoriaPares;
	int numeroMayorImpar;

	maximo = 1000;
	minimo = -1000;

	pedirArriveValidadoInt(numeros, IND, maximo, minimo, "ingrese un numero entre -1000 y 1000: ", "ERROR, por favor reingrese solamente un numero entre -1000 y 1000: ");
	positivos= posInt(numeros, IND);
	negativos= negInt(numeros, IND);
	sumatoriaPares= sumaParesArriveInt(numeros, IND);
	numeroMayorImpar=mayorImpares(numeros, IND);

	printf("\nla sumatoria de los pares es: %d \nla cantidad de positivos ingresados fueron: %d "
			"\nla cantidad de negativos ingresados fueron: %d \nel mayor de los impares es: %d", sumatoriaPares, positivos, negativos, numeroMayorImpar);
	mostrarArriveInt(numeros, IND, "\nlos numeros ingresaros fueron: ");
	listadoArriveParesiNT(numeros, IND, "\nlos numeros pares ingresaros fueron: ");
	listadoPosicionesImpares(numeros, IND, "\n la posicion de los numeros impares ingresados fueron: ");


	return 0;
}*/

//*anexo 5-2
int main(void)
{
	setbuf(stdout, NULL);
	int numeros[IND];
	int maximo;
	int minimo;
	int positivos;
	int negativos;
	int sumatoriaPares;
	int numeroMayorImpar;

	maximo = 1000;
	minimo = -1000;

	pedirArriveValidadoInt(numeros, IND, maximo, minimo, "ingrese un numero entre -1000 y 1000: ", "ERROR, por favor reingrese solamente un numero entre -1000 y 1000: ");
	positivos= cantidadPosInt(numeros, IND);
	negativos= cantidadNegInt(numeros, IND);
	sumatoriaPares= sumaParesArriveInt(numeros, IND);
	numeroMayorImpar=mayorImpares(numeros, IND);

	printf("\nla sumatoria de los pares es: %d \nla cantidad de positivos ingresados fueron: %d "
			"\nla cantidad de negativos ingresados fueron: %d \nel mayor de los impares es: %d", sumatoriaPares, positivos, negativos, numeroMayorImpar);
	mostrarArriveInt(numeros, IND, "\nlos numeros ingresaros fueron: ");
	listadoArriveParesiNT(numeros, IND, "\nlos numeros pares ingresaros fueron: ");
	listadoPosicionesImpares(numeros, IND, "\n la posicion de los numeros impares ingresados fueron: ");
	burbujeoIgualacionInt(numeros, IND, "\n Los numeros repetidos ingresados fueron: ");

	burbujeoMenorMayor(numeros, IND);
	burbujeoPos(numeros, IND);
	burbujeoNeg(numeros, IND);

	mostrarArriveIntPos(numeros, IND, "\nlos numeros positivos de forma creciente fueron: ");
	mostrarArriveIntNeg(numeros, IND, "\nlos numeros negativos de manera decreciente fueron: ");

	return 0;
}
