/*
 ===================================================================================================================================================
 Name        : ejercicio.c
 Author      : mauro racioppi
 DIV	     : D
 Description : Crear la estructura alumno (legajo, nombre, nota), un array de este tipo y hardcodearlo con 3
 datos. Escribir en un archivo de texto los datos del array, separando cada campo con una coma y
 cada alumno con un salto de línea. Mostrar los datos luego de haber leído los datos desde el
 archivo, en un array de cadenas.
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
	alumno list[LISTA]= {{15,8,"Carlos\n"},{16,7,"Celeste\n"},{15,5,"Matias\n"}};
	int i;


	EscribirNombresTXT(list,"w","archivoAlumnos.bin",LISTA);
	for(i=1;i<LISTA;i++)
	{
		EscribirNombresTXT((list+i),"a","archivoAlumnos.bin",LISTA);
	}
	LeerNombresTXT("archivoAlumnos.bin","r",LISTA);


	return EXIT_SUCCESS;
}
