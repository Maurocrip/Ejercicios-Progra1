/*
 * archivos.c
 *
 *  Created on: 3 jun. 2022
 *      Author: Usuario
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int EscribirNombresTXT(int* numeros,char* archvoNombre,char* path, int tam)
{
	FILE* pArchivo;
	int devuelve;
	int cantidadEscrito;

	devuelve=0;
	if(numeros!=NULL && archvoNombre!=NULL)
	{
		devuelve=1;
		pArchivo=fopen(archvoNombre,path);
		if(pArchivo==NULL)
		{
			printf("ocurrio un error en el programa");
			exit(1);
		}

		printf("\nse abrio el archivo\n");

		cantidadEscrito=fwrite(numeros,sizeof(int),tam,pArchivo);
		if(cantidadEscrito==tam)
		{
			printf("se escribio el archivo\n");
		}

	}

	fclose(pArchivo);

	printf("se cerro el archivo\n");

	return devuelve;
}

int LeerNombresTXT(char* archvoNombre,char* path, int tam)
{
	FILE* pArchivo;
	int devuelve;
	int datosLeidos[tam];
	int i;

	devuelve=0;
	if(archvoNombre!=NULL)
	{
		devuelve=1;
		pArchivo=fopen(archvoNombre,path);
		if(pArchivo==NULL)
		{
			printf("ocurrio un error en el programa");
			exit(1);
		}

		printf("\nse abrio el archivo\n");

		fread(&datosLeidos,sizeof(int),tam,pArchivo);
		for(i=0;i<tam;i++)
		{
			printf("%d",*(datosLeidos+i));
			printf("\n");
		}
	}

	fclose(pArchivo);

	printf("\nse cerro el archivo\n");

	return devuelve;
}

