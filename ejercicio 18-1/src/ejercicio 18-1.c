/*
 ===================================================================================================================================================
 Name        : ejercicio.c
 Author      : mauro racioppi
 DIV	     : D
 Description : Crear una función que reciba como parámetros un array con 5 nombres (que estarán previamente hardcodearlos).
 La función deberá guardar la lista de nombres en un archivo de texto.

 int EscribirNombresTXT(char* nombres, char* path);

 Otra función se encargará de la lectura de dicha lista.

 int LeerNombresTXT(char* nombres, char* path);
 ===================================================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "archivos.h"

int main(void)
{
	setbuf(stdout, NULL);
	char nombre[5][20]= {"Juan\n","Lucas\n","Sofia\n","Penelope\n","Nahuel"};
	int i;


	EscribirNombresTXT(*(nombre),"w");
	for(i=1;i<5;i++)
	{
		EscribirNombresTXT(*(nombre+i),"a");
	}

	LeerNombresTXT(*nombre,"r");

	return EXIT_SUCCESS;
}
