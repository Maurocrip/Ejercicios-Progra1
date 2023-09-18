/*
 * calculos.c
 *
 *  Created on: 5 may. 2022
 *      Author: Usuario
 */

int sumatoriasNegativos(int numero)
{
	int resultado;

	if(numero==-1)
	{
		resultado=-1;
	}
	else
	{
		resultado= numero + sumatoriasNegativos(numero+1);
	}

	return resultado;
}

