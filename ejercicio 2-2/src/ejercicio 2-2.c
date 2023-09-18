/*
 ============================================================================
 Name        : ejercicio2-2.c
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
	int cantidadPares;
	int cantidadImpares;
	int acumuladorPositivos;
	int productoNegativos;
	int numeroMenor;
	int numeroMayor;
	char d;
	char b;


	b = 's';
	d= 's';
	contador=10;
	cantidadPares=0;
	cantidadImpares=0;
	acumuladorPositivos=0;
	productoNegativos=1;


	while(contador>0)
	{
		printf("ingrese el numero que no sea 0: ");
		scanf("%d", &numero);
		while(numero==0)
		{
			printf("ERROR, reingrese el numero que no sea 0: ");
			scanf("%d", &numero);
		}

		if(numero%2 == 0)
		{
			cantidadPares++;
			if(d=='s'||numero>numeroMayor)
			{
				numeroMayor=numero;
				d='n';
			}
		}
		else
		{
			cantidadImpares++;
		}

		if(b=='s'||numero<numeroMenor)
		{
			numeroMenor=numero;
			b='n';
		}

		if(numero>=0)
		{
			acumuladorPositivos=acumuladorPositivos+numero;
		}
		else
		{
			productoNegativos=productoNegativos*numero;
		}


		contador--;
	}

	printf("la cantidad de pares es de: %dy la de impares es de: %d \n", cantidadPares, cantidadImpares);
	printf("El menor numero ingresado: %d \n", numeroMenor);
	printf("El mayor numero par ingresado: %d \n", numeroMayor);
	printf("La suma de los popsitivos es de: %d \n", acumuladorPositivos);
	printf("El Producto de los negativos es de:%d \n", productoNegativos);

	return 0;
}
