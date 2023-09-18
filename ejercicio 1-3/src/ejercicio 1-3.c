/*
 ============================================================================
 Name        : ejercicio1-3.c
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
	int numero1;
	int numero2;
	int numero3;
	int medio;

	printf("ingresar el primer numero: ");
	scanf("%d", &numero1);
	printf("ingresar el segudo numero: ");
	scanf("%d", &numero2);
	printf("ingresar el tercer numero: ");
	scanf("%d", &numero3);

	if(numero1==numero2||numero1==numero3||numero2==numero3)
	{
		printf("no hay numero el medio");
	}
	else
	{
		if((numero1>numero2 && numero1 <numero3)||(numero1<numero2 && numero1>numero3))
		{
			medio = numero1;
		}
		else
		{
			if((numero2>numero1 && numero2 <numero3)||(numero2<numero1 && numero2>numero3))
			{
				medio = numero2;
			}
			else
			{
				medio=numero3;
			}
		}

		printf("el numero del medio es: %d", medio);

	}
	return 0;
}
