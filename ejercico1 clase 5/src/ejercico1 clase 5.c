/*
 ============================================================================
 Name        : ejercico1.c
 Author      : mauro
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout, NULL);
	int edad[10];
	float sueldo[10];
	int i;
	float sueldoPromedio;
	int acumulador;
	char respuesta;

	acumulador =0;

	/*for(i=0;i<10;i++)
	{
		printf("ingrese la edad del legajo nº %d", i);
		scanf("%d", &edad[i]);

		printf("ingrese el sueldo del legajo nº %d", i);
		scanf("%f", &sueldo[i]);

		acumulador = acumulador + sueldo[i];
	}*/

	do
	{
		printf("ingrese el nº del legajo");
		fflush(stdin);
		scanf("%d", &i);

		while(i<0||i>9)
		{
			printf("ERROR, reingrese el nº del legajo (entre 0 y 9)");
			fflush(stdin);
			scanf("%d", &i);
		}

		printf("ingrese la edad del legajo nº %d", i);
		scanf("%d", &edad[i]);

		printf("ingrese el sueldo del legajo nº %d", i);
		scanf("%f", &sueldo[i]);

		acumulador = acumulador + sueldo[i];

		printf("desea ingresar los datos de otro legajo? (s/n)");
		fflush(stdin);
		scanf("%c", &respuesta);
	}
	while(respuesta == 's');

	sueldoPromedio = acumulador / 10;

	printf("el promedio es de: %f", sueldoPromedio);

	return 0;
}
