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
#include "validacion.h"
#include "temperaturas.h"

int main(void)
{
	setbuf(stdout, NULL);

	float temperaturaC;
	float resultadoC;
	float temperaturaF;
	float resultadoF;

	temperaturaC = get_temperaturaC("ingrese temperatura en celcius: ", "ERROR, reingrese una temperatura en grados celcius: ");
	temperaturaF = get_temperaturaF("ingrese temperatura en fahrenheit: ", "ERROR, reingrese una temperatura en grados fahrenheit: ");

	resultadoC = get_fahrenheitCelsius(temperaturaF);
	resultadoF = get_Celsiusfahrenheit(temperaturaC);

	printf("%.2f� celsius son %.2f� fahrenheit y %.2f� fahrenheit son %.2f� celsius", temperaturaC, resultadoF, temperaturaF,
			resultadoC);

	return 0;
}
