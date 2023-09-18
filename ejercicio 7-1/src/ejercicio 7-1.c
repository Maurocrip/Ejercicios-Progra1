/*
 ======================================================================================================================================================
 Name        : ejercicio.c
 Author      : mauro racioppi
 DIV	     : D
 Description : Una empresa importadora que comercializa productos Apple, decide registrar de sus productos los
siguientes datos:
* idProducto (numerico)
* descripcion (alfanumérico)
* nacionalidad (numérico, por el momento utilizaremos un define: EEUU - CHINA - OTRO)
* tipo (numérico, por el momento utilizaremos un define: IPHONE -MAC - IPAD -
ACCESORIOS)
* precio (numérico decimal)
Realizar un programa que permita interactuar con un menú de usuarios con las siguientes
opciones:
i) ALTA Producto: Se ingresan los datos de UN solo producto. Siempre y cuando haya espacio
disponible en el array.
j) BAJA Producto: A partir del ingreso del ID. Si existe el producto desaparece de la lista,
dejando espacio disponible para un nuevo producto.
k) MODIFICACIÓN Producto: A partir del ingreso del ID. Si existe se podrá modificar el precio
o el tipo.
l) LISTADO Productos.
m) LISTADO ordenado por precio.
n) LISTADO ordenado por descripción.
 ======================================================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "array.h"
#include "producto.h"

#define CANTIDAD 100
#define NOMBREFINAL 200

int main(void)
{
	setbuf(stdout, NULL);
	int opcion;
	int id;
	int validacion;
	eProducto productos[CANTIDAD];
	id=0;

	initProductos(productos,CANTIDAD);
	do
	{
		UTN_getValidacionMaximoMinimo(&opcion,"\nIngrese un numero \n"
					" 1. ALTAS\n"
					" 2. BAJA\n"
					" 3. MODIFICAR\n"
					" 4. LISTADO Productos\n"
					" 5. LISTADO ordenado por precio\n"
					" 6. LISTADO ordenado por descripción\n"
					" 7. SALIR ", "\nERROR, Reingrese un numero valido(1-7)\n"
						" 1. ALTAS\n"
						" 2. BAJA\n"
						" 3. MODIFICAR\n"
						" 4. LISTADO Productos\n"
						" 5. LISTADO ordenado por precio\n"
						" 6. LISTADO ordenado por descripción\n"
						" 7. SALIR ", 1, 7);
		validacion=contadorProductosRegistrados(productos,CANTIDAD);
		switch(opcion)
		{
			case 1:
				//INGRESO DE PRODUCTOS
				id++;
				alta(productos,id,CANTIDAD);
			break;

			case 2:
				//DAR DE BAJA UN PRODUCTO
				if(validacion>0)
				{
					baja(productos,CANTIDAD);
				}
				else
				{
					printf("\nIngrese un producto antes\n");
				}
			break;

			case 3:
				//MODIFICA UN PRODUCTO
				if(validacion!=0)
				{
					modificacion(productos,CANTIDAD);
				}
				else
				{
					printf("\nIngrese un producto antes\n");
				}
			break;

			case 4:
				// LISTADO
				if(validacion!=0)
				{
					ordenamientoIDProductos(productos,CANTIDAD);
					listadoProductos(productos,CANTIDAD);
				}
				else
				{
					printf("\nIngrese un producto antes\n");
				}
			break;

			case 5:
				//LISTADO POR PRECIO
				if(validacion!=0)
				{
					ordenamientoPrecioProductos(productos,CANTIDAD);
					listadoProductos(productos,CANTIDAD);
				}
				else
				{
					printf("\nIngrese un producto antes\n");
				}
			break;

			case 6:
				//LISTADO POR DESCRIPCION
				if(validacion!=0)
				{
					ordenamientoDescripcionProductos(productos,CANTIDAD);
					listadoProductos(productos,CANTIDAD);
				}
				else
				{
					printf("\nIngrese un producto antes\n");
				}
			break;
		}
	}while(opcion!=7);

	return 0;
}
