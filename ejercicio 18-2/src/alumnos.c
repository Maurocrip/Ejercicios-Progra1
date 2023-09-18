/*
 * alumnos.c
 *
 *  Created on: 3 jun. 2022
 *      Author: Usuario
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "alumnos.h"

int EscribirNombresTXT(alumno* array, char* tipo, char* nombreArchivo, int tamanio)
{
	FILE* pArchivo;
	int devuelve;
	int cantidadEscrito;

	devuelve=0;
	if(array!=NULL && nombreArchivo!=NULL && tamanio>0)
	{
		devuelve=1;
		pArchivo=fopen(nombreArchivo,tipo);
		if(pArchivo==NULL)
		{
			printf("ocurrio un error en el programa");
			exit(1);
		}

		printf("\nse abrio el archivo\n");

		cantidadEscrito=fwrite(array,sizeof(alumno),1,pArchivo);
		if(cantidadEscrito==tamanio)
		{
			printf("se escribio el archivo\n");
		}
	}

	fclose(pArchivo);

	printf("se cerro el archivo\n");

	return devuelve;
}

int LeerNombresTXT(char* nombreArchivo,char* tipo,int tam)
{
	FILE* pArchivo;
	int devuelve;
	alumno aux[tam];
	int i;

	devuelve=0;
	if(nombreArchivo!=NULL && tam>0 && nombreArchivo!=NULL)
	{
		devuelve=1;
		pArchivo=fopen(nombreArchivo,tipo);
		if(pArchivo==NULL)
		{
			printf("ocurrio un error en el programa");
			exit(1);
		}

		printf("\nse abrio el archivo\n");


		fread(&aux,sizeof(alumno),tam,pArchivo);
		for(i=0;i<tam;i++)
		{
			printf("\nLegajo: %d, Nota: %d, Nombre:%s",(aux+i)->legajo,(aux+i)->nota,(aux+i)->nombre);
		}


	}

	fclose(pArchivo);

	printf("\nse cerro el archivo\n");

	return devuelve;
}
