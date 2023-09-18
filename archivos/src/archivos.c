/*
 ============================================================================
 Name        : archivos.c
 Author      : mauro
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	int legajo;
	char nombre[50];
	float suelo;
}ePersonas;

int main(void)
{
	setbuf(stdout, NULL);

	//ARCHIVOS TXT(DE TEXTO)


	//COMO ESCRIBIR TEXTO

	FILE* pArchivo;
	char cadena[20]= "hola mundo";
	int tamanio;
	int cantidadEscrito;

	pArchivo=fopen("archivo.txt","w");
	if(pArchivo==NULL)
	{
		printf("ocurrio un error en el programa");
		exit(1);
	}

	printf("\nse abrio el archivo\n");

	tamanio=strlen(cadena);
	cantidadEscrito=fwrite(cadena,sizeof(char),tamanio,pArchivo);
	if(cantidadEscrito==tamanio)
	{
		printf("se escribio el archivo\n");
	}

	fclose(pArchivo);

	printf("se cerro el archivo\n");



	//COMO LEER TEXTO

	//FILE* pArchivo;
	char datosLeidos[20];
	//char datosLeido;
	pArchivo=fopen("archivo.txt","r");
	if(pArchivo==NULL)
	{
		printf("no se pudo abrir el archivo");
		exit(1);
	}

	while(!feof(pArchivo))
	{
		fgets(datosLeidos,20,pArchivo);
		printf("%s",datosLeidos);
	}

	/*while(!feof(pArchivo))
	{
		fread(datosLeidos,sizeof(char), strlen(cadena),pArchivo);
		printf(datosLeidos);
	}

	fclose(pArchivo);*/

/*--------------------------------------------------------------------------------------------------------------------------------------------------

//ARCHIVO BIN(BINARIO)

	ePersonas per ={20,"juan",45};
	FILE* pArchivo;
	int cantidadEscrita;
	ePersonas aux;

	pArchivo=fopen("archivo.bin","wb");
	if(pArchivo==NULL)
	{
		printf("ocurrio un error en el programa");
		exit(1);
	}

	cantidadEscrita=fwrite(&per,sizeof(ePersonas),1,pArchivo);
	if(cantidadEscrita==1)
	{
		printf("se escribio el archivo");
	}

	fclose(pArchivo);

	pArchivo=fopen("archivo.bin","rb");
	if(pArchivo==NULL)
	{
		printf("ocurrio un error en el programa");
		exit(1);
	}

	fread(&aux,sizeof(ePersonas),1,pArchivo);
	printf("\nnombre:%s\nLegajo: %d\nSueldo: %2.f",aux.nombre,aux.legajo,aux.suelo);

	fclose(pArchivo);

	printf("se cerro el archivo");*/
	return 0;
}
