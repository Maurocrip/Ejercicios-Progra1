/*
 ==================================================================================================================================================
 Name        : ejercicio.c
 Author      : mauro
 DIV	     : D
 Description : Realizar un programa que permita el ingreso de 10 números enteros distintos de cero. La carga deberá ser aleatoria
 (todos los elementos se inicializan en cero por default). Determinar el promedio de los positivos,
 y del menor de los negativos la suma de los antecesores (Según la recta numérica de los reales, hasta llegar a cero).
 ==================================================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "arrive.h"
#include "calculos.h"

#define INDICE 10

int main(void)
{
	setbuf(stdout, NULL);
	int numeros[INDICE];
	int promedio;
	int sumatoriaNegativoMenor;

	inicializacionArray(numeros, INDICE, 0);
	CargaAleatoriaArrayValidadoSinUnNumeroInt(numeros, INDICE, 0, "Ingrese un numero: ", "ERROR, por favor reingrese un numeor que no sea 0: ",
			"en que posicion quiere ingresar el numero?", "Error, ingrese un numero entre 0 y 9: ");

	promedio=promedioPositivos(numeros, INDICE);
	sumatoriaNegativoMenor=sumatoriasNegativos(menorNegativos(numeros, INDICE));

	printf("promedio es: %d\nLa sumatoria del menor de los negativos es: %d", promedio, sumatoriaNegativoMenor);

	return 0;
}
