/*
 ======================================================================================================================================================
 Name        : ejercicio.c
 Author      : mauro racioppi
 DIV	     : D
 Description : Pedirle al usuario su nombre y apellido (en variables separadas, una para el nombre y otra para el apellido).
 Ninguna de las dos variables se puede modificar.
 Debemos lograr guardar en una tercer variable el apellido y el nombre con el siguiente formato:
 Por ejemplo:

 Si el nombre es juan ignacio y el apellido es gOmEz, la salida debería ser:
 Gomez, Juan Ignacio
 ======================================================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "array.h"

#define CANTIDAD 100
#define NOMBREFINAL 200

int main(void)
{
	setbuf(stdout, NULL);
	char nombre[CANTIDAD];
	char apellido[CANTIDAD];
	char nombreCompleto[NOMBREFINAL];

	UTN_GetValor(nombre, CANTIDAD,"ingrese su nombre ", "ERROR, porfavor reingrese su nombre sin ningun numero ",0);
	UTN_GetValor(apellido, CANTIDAD,"ingrese su apellido ", "ERROR, porfavor reingrese su apellido sin ningun numero ",0);

	juntarNombreApellido(nombreCompleto,nombre,apellido);

	convertirPalabraAMinusculas(nombreCompleto, NOMBREFINAL);
	convertirPrimerLetraAMayusculas(nombreCompleto,NOMBREFINAL);

	printf("%s",nombreCompleto);

	return 0;
}
