/*
 * temperaturas.c
 *
 *  Created on: 9 abr. 2022
 *      Author: Usuario
 */

float get_fahrenheitCelsius(float temperaturaF)
{
	float temperaturaC;

	temperaturaC = (temperaturaF - 32) * 5/9;

	return temperaturaC;
}
float get_Celsiusfahrenheit(float temperaturaC)
{
	float temperaturaF;

	temperaturaF = (temperaturaC * 9/5) + 32 ;

	return temperaturaF;
}

