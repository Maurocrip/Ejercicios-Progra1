/*
 ============================================================================
 Name        : ejercicio.c
 Author      : mauro
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	char respuesta;
	char estadoCivil;
	char genero;
	char bandera;
	int edad;
	int cliente;
	int precio;
	int personasViudas;
	int clienteSolteraJoven;
	int edadSolteraJoven;
	int viajeTotal;
	int descuento;
	int precioFinal;
	int contadorPasajerosMas60;
	int porcentajePasajerosMas60;
	int cantidadPasajeros;
	float temperatura;

	respuesta='s';
	precio = 600;
	personasViudas=0;
	descuento=25;
	bandera = 's';
	viajeTotal = 0;
	contadorPasajerosMas60=0;
	cantidadPasajeros=0;

	while(respuesta=='s')
	{
		printf("cual es su numero de cliente?: ");
		scanf("%d", &cliente);

		printf("cual es su estado civil?(s/c/v): ");
		fflush(stdin);
		scanf("%c", &estadoCivil);
		while(estadoCivil != 's'&& estadoCivil != 'c'&& estadoCivil != 'v')
		{
			printf("Error, ingrese su estado civil?(s para solteros/ c para casados/ v para viudos): ");
			fflush(stdin);
			scanf("%c", &estadoCivil);
		}

		printf("cual es su edad?: ");
		scanf("%d", &edad);
		while(edad<18)
		{
			printf("Error, debe de ser mayor de edad. Cual es su edad?: ");
			scanf("%d", &edad);
		}

		printf("cual es su temperatura?: ");
		scanf("%f", &temperatura);
		while(temperatura<36.1 || temperatura>37.2)
		{
			printf("Error, no se encuentra en buen estado. Cual es su temperatura?: ");
			scanf("%f", &temperatura);
		}

		printf("cual es su genero?(m/f/o): ");
		fflush(stdin);
		scanf("%c", &genero);
		while(genero != 'm'&& genero != 'f'&& genero != 'o')
		{
			printf("Error, ingrese su genero?(m para masculino/ f para femenino/ o para no binario): ");
			fflush(stdin);
			scanf("%c", &genero);
		}

		switch(estadoCivil)
		{
		case 'v':
			if(edad>59)
			{
				personasViudas++;
			}
		break;

		case 's':
			if(genero == 'f' && (bandera == 's' || edad<edadSolteraJoven))
			{
				edadSolteraJoven = edad;
				clienteSolteraJoven = cliente;
				bandera = 'n';
			}
		}

		if(edad>59)
		{
			contadorPasajerosMas60++;
		}


		viajeTotal = viajeTotal + precio;

		cantidadPasajeros++;

		printf("desea ingresar otro pasajero?(s/n): ");
		fflush(stdin);
		scanf("%c", &respuesta);
	}

	if(personasViudas>0)
	{
		printf("La cantidad de personas con estado viudo de mas de 60 años es de: %d\n",personasViudas);
	}

	if(edadSolteraJoven>17)
	{
		printf("la mujer soltera mas joven tiene: %d y su numero de cliente es: %d\n", edadSolteraJoven, clienteSolteraJoven);
	}

	printf("El viaje total sin descuento sale: %d\n",viajeTotal);

	porcentajePasajerosMas60 = cantidadPasajeros/contadorPasajerosMas60;
	if(porcentajePasajerosMas60==2)
	{
		precioFinal= viajeTotal-(viajeTotal * descuento)/100;
		printf("Pero el precio total con el descuento del 25 por ciento es de: %d", precioFinal);

	}


	return 0;
}
