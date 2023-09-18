/*
 ======================================================================================================================================================
 Name        : ejercicio.c
 Author      : mauro racioppi
 DIV	     : D
 Description : 1-Realizar una función que reciba un puntero a char y dos char.
 La función deberá reemplazar en la cadena cada ocurrencia del primer carácter recibido,
 por el segundo. Retornando la cantidad de reemplazos o -1 en caso de error.
 Utilizar aritmetica de punteros
 ======================================================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/*int reemplazo(char* string, char caracterUno, char caracterDos);


int main(void)
{
	setbuf(stdout, NULL);
	char nombre[50];
	char noSirve;
	char cambio;
	int cantidadCambios;

	strcpy(nombre, "fodo");
	noSirve='o';
	cambio='e';

	printf("su nombre es: %s\n", nombre);

	cantidadCambios=reemplazo(nombre,noSirve,cambio);

	printf("\nla canridad de cambios fue de: %d\n %s", cantidadCambios, nombre);

	return 0;
}

int reemplazo(char *string, char caracterUno, char caracterDos)
{
	int devuelve;
	devuelve=-1;

	if(string != NULL)
	{
		devuelve=0;
		while(*(string)!='\0')
		{
			if(*(string)==caracterUno)
			{
				*(string)=caracterDos;
				devuelve++;
			}
			(string++);
		}
	}

	return devuelve;
}*/

/*
 ======================================================================================================================================================
 Name        : ejercicio.c
 Author      : mauro racioppi
 DIV	     : D
 Description : 2-Realizar una función que reciba como parámetros un array de enteros y un entero por referencia.
 La función calculará el valor máximo de ese array y utilizará el valor por referencia para retornar ese valor.
 Utilizar aritmetica de punteros
 ======================================================================================================================================================
 */

/*void maximoArray(int* vector, int* numero);


int main(void)
{
	setbuf(stdout, NULL);
	int numeros[5];
	int max;
	int i;

	for(i=0;i<5;i++)
	{
		printf("ingrese un un numero: ");
		scanf("%d", numeros+i);
	}


	maximoArray(numeros,&max);

	printf("\nEl numero maximo es: %d", max);

	return 0;
}

void maximoArray(int* vector, int* numero)
{
	int bandera;
	int i;

	bandera=0;

	if(vector != NULL)
	{
		for(i=0;i<5;i++)
		{
			if(*(vector+i)>*numero || bandera==0)
			{
				*numero=*(vector+i);
				bandera=1;
			}
		}
	}
}*/

/*
 ======================================================================================================================================================
 Name        : ejercicio.c
 Author      : mauro racioppi
 DIV	     : D
 Description : 3-Dada la siguiente estructura: int legajo; char nombre[20]; int edad;
 Realizar una función que cargue un array de 3 estudiantes.
 Recibe un entero.
 Retorna el estudiante dado de alta y por parámetro 0 si funcionó correctamente -1 mal.
 Una vez devuelto el estudiante cargarlo en una posición del array.
 Al final mostrar el array cargado
 Utilizar aritmetica de punteros
 ======================================================================================================================================================
 */

/*struct
{
	int legajo;
	char name[20];
	int edad;
}typedef ePersonas;

ePersonas alta(int* funciono);


int main(void)
{
	setbuf(stdout, NULL);
	ePersonas estudiantes[3];
	int chequeo;
	int i;

	for(i=0;i<3;i++)
	{
		*(estudiantes+i)=alta(&chequeo);
	}

	for(i=0;i<3;i++)
	{
		printf("\nLegajo %d\nNombre %s\nEdad %d\n", (*(estudiantes+i)).legajo, (*(estudiantes+i)).name, (*(estudiantes+i)).edad);
		i++;
	}

	return 0;
}

ePersonas alta(int* funciono)
{
	ePersonas estudiante;
	*funciono=-1;
	if(funciono != NULL)
	{
		printf("ingrese el legajo del alumno: ");
		scanf("%d", &estudiante.legajo);

		printf("ingrese el nombre del alumno: ");
		fflush(stdin);
		gets(estudiante.name);

		printf("ingrese la edad del alumno: ");
		scanf("%d\n", &estudiante.edad);
		*funciono=0;
	}
	return estudiante;
}*/

struct
{
	int legajo;
	char name[20];
	int edad;
}typedef ePersonas;

int alta(ePersonas* estudiante);


int main(void)
{
	setbuf(stdout, NULL);
	ePersonas estudiantes[3];
	int chequeo;
	int i;

	for(i=0;i<3;i++)
	{
		chequeo=alta(estudiantes+i);
	}

	if (chequeo==0)
	{
		for(i=0;i<3;i++)
		{
			printf("\nLegajo %d\nNombre %s\nEdad %d\n", (*(estudiantes+i)).legajo, (*(estudiantes+i)).name, (*(estudiantes+i)).edad);
		}
	}

	return 0;
}

int alta(ePersonas* estudiante)
{
	int devuelve;
	devuelve=-1;
	if(estudiante != NULL)
	{
		printf("ingrese el legajo del alumno: ");
		scanf("%d", &estudiante->legajo);

		printf("ingrese el nombre del alumno: ");
		fflush(stdin);
		gets(estudiante->name);

		printf("ingrese la edad del alumno: ");
		scanf("%d", &estudiante->edad);
		devuelve=0;
	}
	return devuelve;
}
