/*
 * archivos.c
 *
 *  Created on: 3 jun. 2022
 *      Author: Usuario
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int EscribirNombresTXT(char* nombres,char* path)
{
	FILE* pArchivo;
	int devuelve;
	int tamanio;
	int cantidadEscrito;

	devuelve=0;
	if(nombres!=NULL)
	{
		devuelve=1;
		pArchivo=fopen("archivo.txt",path);
		if(pArchivo==NULL)
		{
			printf("ocurrio un error en el programa");
			exit(1);
		}

		printf("\nse abrio el archivo\n");


		tamanio=strlen(nombres);
		cantidadEscrito=fwrite(nombres,sizeof(char),tamanio,pArchivo);
		if(cantidadEscrito==tamanio)
		{
			printf("se escribio el archivo\n");
		}

	}

	fclose(pArchivo);

	printf("se cerro el archivo\n");

	return devuelve;
}

int LeerNombresTXT(char* nombres,char* path)
{
	FILE* pArchivo;
	int devuelve;
	char datosLeidos[20];

	devuelve=0;
	if(nombres!=NULL)
	{
		devuelve=1;
		pArchivo=fopen("archivo.txt",path);
		if(pArchivo==NULL)
		{
			printf("ocurrio un error en el programa");
			exit(1);
		}

		printf("\nse abrio el archivo\n");

		while(!feof(pArchivo))
		{
			fgets(datosLeidos,20,pArchivo);
			printf(datosLeidos);
		}
	}

	fclose(pArchivo);

	printf("\nse cerro el archivo\n");

	return devuelve;
}

