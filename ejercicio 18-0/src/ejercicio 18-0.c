/*
 ===================================================================================================================================================
 Name        : ejercicio.c
 Author      : mauro racioppi
 DIV	     : D
 Description : Guardar en una variable nombre y apellido. Guardar el dato en un archivo de texto, leerlo y luego mostrarlo.
 ===================================================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	setbuf(stdout, NULL);
	FILE* pArchivo;
	char nombreApellido[20]= "Mauro Racioppi";
	char datosLeidos[20];
	int tamanio;
	int cantidadEscrito;

	pArchivo=fopen("archivo.txt","w");
	if(pArchivo==NULL)
	{
		printf("ocurrio un error en el programa");
		exit(1);
	}

	printf("Se abrio el archivo\n");

	tamanio=strlen(nombreApellido);
	cantidadEscrito=fwrite(nombreApellido,sizeof(char),tamanio,pArchivo);
	if(cantidadEscrito==tamanio)
	{
		printf("\nSe escribio el archivo\n");
	}

	fclose(pArchivo);

	pArchivo=fopen("archivo.txt","r");
	if(pArchivo==NULL)
	{
		printf("no se pudo abrir el archivo");
		exit(1);
	}

	fgets(datosLeidos,20,pArchivo);
	printf("%s",datosLeidos);

	fclose(pArchivo);

	return EXIT_SUCCESS;
}
