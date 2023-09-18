/*
 ============================================================================
 Name        : ejercicio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	char letra;
	int pMinuscula;
	int i;

	pMinuscula = 0;

	for (i=0; i<5; i++)
	{
		printf("ingrese una letra:");
		fflush(stdin);
		scanf("%c", &letra);

		if(letra == 'p')
		{
			pMinuscula++;
		}

	}

	printf("la cantidad de p minusculas ingresadas es de: %d", pMinuscula);

	return 0;
}
