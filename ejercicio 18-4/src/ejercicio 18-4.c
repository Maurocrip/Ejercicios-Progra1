/*
 ===================================================================================================================================================
 Name        : ejercicio.c
 Author      : mauro racioppi
 DIV	     : D
 Description : Escribir y leer un archivo binario con 5 alumnos (utilizar la estructura del ejercicio 18-2).
 Mostrar los datos luego de la lectura del archivo.
 ===================================================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "alumnos.h"

#define LISTA 3

int main(void)
{
	setbuf(stdout, NULL);
	alumno list[LISTA]= {{15,8,"Juan\n"},{16,7,"Lucas\n"},{15,5,"Sofia\n"}};
	int i;


	EscribirNombresTXT(list,"wb","archivoAlumnos.bin",LISTA);
	for(i=1;i<LISTA;i++)
	{
		EscribirNombresTXT((list+i),"ab","archivoAlumnos.bin",LISTA);
	}
	LeerNombresTXT("archivoAlumnos.bin","rb",LISTA);


	return EXIT_SUCCESS;
}
