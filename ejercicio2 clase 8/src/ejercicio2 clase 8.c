/*
 ============================================================================
 Name        : ejercicio2.c
 Author      : mauro
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct
{
	int altura;
	char calle[51];
}typedef eDireccion;

struct
{
	int idProveedor;
	char razonSocial[51];
	eDireccion direccion;
}typedef proveedor;

struct
{
	int idProducto;
	char descripcion[51];
	float price;
	int idProveedor; //fk
}typedef producto;

struct
{
	char raza[51];
}typedef eRaza;

struct
{
	int idDuenio;
	char nombre[51];
	char sexo;
	int edad;
}typedef duenio;

struct
{
	int idMascota;
	char nombre[51];
	char sexo;
	eRaza raza;
	int idDuenio; //fk
}typedef mascota;



struct
{
	int idAlumno;
	char nombre[51];
	int idLocalidad; //fk
}typedef alumno;

struct
{
	int idLocalidad;
	char descripcion[51];
	int codigoPostal;
}typedef localidad;



int main(void) {

	return EXIT_SUCCESS;
}
