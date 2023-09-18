/*
 ============================================================================
 Name        : parcialito.c
 Author      : mauro
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int funcionMayorMenor(int numero1, int numero2, int* numeroMayor);

int main(void)
{
	int nA;
	int nB;
	int menor;
	int mayor;

	nA=40;
	nB=32;

	menor = funcionMayorMenor(nA, nB, &mayor);

	printf("numero menor %d, numero mayor %d", menor, mayor);

	return 0;
}

int funcionMayorMenor(int numero1, int numero2, int* numeroMayor)
{
	int numeroMenor;

	if(numero1<numero2)
	{
		*numeroMayor=numero2;
		numeroMenor=numero1;
	}
	else
	{
		*numeroMayor=numero1;
		numeroMenor=numero2;
	}
	return numeroMenor;

}
