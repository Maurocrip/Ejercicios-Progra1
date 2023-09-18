/*
 ===================================================================================================================================================
 Name        : ejercicio.c
 Author      : mauro racioppi
 DIV	     : D
 Description : Escribir y leer un archivo binario con 5 números enteros. Mostrar los datos luego de la lectura del archivo.
 ===================================================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "archivos.h"

#define CANTIDAD 5

int main(void)
{
	setbuf(stdout, NULL);
	int nombre[CANTIDAD]= {5,7,8,1,56};
	int i;


	EscribirNombresTXT(nombre,"archivo.txt","wb", CANTIDAD);
	for(i=1;i<5;i++)
	{
		EscribirNombresTXT(nombre+i,"archivo.txt","ab", CANTIDAD);
	}

	LeerNombresTXT("archivo.txt","rb",CANTIDAD);

	return EXIT_SUCCESS;
}
