/*
 * producto.c
 *
 *  Created on: 30 may. 2022
 *      Author: Usuario
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "producto.h"
#include "array.h"

void alta(eProducto* producto, int id, int tam)
{
	int i;
	i=buscarProducto(producto,tam,-1);
	if(i!=-1)
	{
		(producto+i)->idProducto=id;
		UTN_GetValor((producto+i)->descripcion, ARGUMENTOS, "\nIngrese la descripcion del producto: ",
					"ERROR, la descripcion del producto tiene mas de 200 digitos.\nPor favor ingrese la descripcion del producto nuevamente: ",1);
		UTN_getValidacionMayorfloat(&(producto+i)->precio,"Ingrese el precio del producto: ",
					"ERROR, reingrese el precio del producto(numero mayor a 0): ", 0);
		UTN_getValidacionMaximoMinimo(&(producto+i)->nacionalidad, "Ingrese la nacionalidad del producto(1.EEUU - 2.CHINA - 3.OTRO): ",
					"ERROR, reingrese solo el numero correspondiente a la nacionalidad del producto(1.EEUU - 2.CHINA - 3.OTRO): ", 1,3);
		UTN_getValidacionMaximoMinimo(&(producto+i)->tipo, "Ingrese el tipo del producto(1.IPHONE - 2.MAC - 3.IPAD - 4.ACCESORIOS): ",
					"ERROR, reingrese solo el numero correspondiente a el tipo del producto(1.IPHONE - 2.MAC - 3.IPAD - 4.ACCESORIOS): ", 1,4);
		printf("\nSu id es: %d\n", (producto+i)->idProducto);
	}
	else
	{
		printf("\nNo hay espacio disponible para registrar mas productos\n");
	}
}

int initProductos(eProducto* list, int tam)
{
	int i;
	int devuelve;

	devuelve=-1;

	if(list != NULL && tam>0)
	{
		for(i=0;i<tam;i++)
		{
			(list+i)->idProducto =-1;
		}
		devuelve=0;
	}
	return devuelve;
}

int contadorProductosRegistrados(eProducto* list, int tam)
{
	int i;
	int respuesta;

	respuesta=-1;

	if(list != NULL && tam>0)
	{
		respuesta=0;
		for(i=0;i<tam;i++)
		{
			if((list+i)->idProducto!=-1)
			{
				respuesta++;
			}

		}
	}
	return respuesta;
}

void baja(eProducto* lista, int tam)
{
	int idBuscar;
	int validar;

	UTN_getValidacionMayorInt(&idBuscar, "Ingrese el ID del producto que desea dar de baja: ", "ERROR, ingrese un ID valido(numero mayor a 0): ",0);
	validar=buscarProducto(lista,tam,idBuscar);
	if(validar!=-1)
	{
		(lista+validar)->idProducto=-1;
		printf("\nEl ID %d se ah eliminado correctamente.\n", idBuscar);
	}
	else
	{
		printf("\nERROR, el ID %d no se encuentra en la lista.\n", idBuscar);
	}
}

int buscarProducto(eProducto* list, int tam,int id)
{
	int i;
	int devuelve;

	devuelve=-1;

	if(list != NULL && tam>0)
	{
		for(i=0;i<tam;i++)
		{
			if((list+i)->idProducto == id)
			{
				devuelve=i;
				break;
			}
		}
	}
	return devuelve;
}

void modificacion(eProducto* lista, int tam)
{
	int idBuscar;
	int validar;
	int opcion;

	UTN_getValidacionMayorInt(&idBuscar, "Ingrese el ID del producto que desea dar de baja: ", "ERROR, ingrese un ID valido(numero mayor a 0): ",0);
	validar=buscarProducto(lista,tam,idBuscar);
	if(validar!=-1)
	{
		do
		{
			UTN_getValidacionMaximoMinimo(&opcion,"\nIngrese un numero \n"
					" 1. Modifica precio\n"
					" 2. Modifica tipo de producto\n"
					" 3. SALIR ", "\nERROR, Reingrese un numero valido(1-3)\n"
							" 1. Modifica precio\n"
							" 2. Modifica tipo de producto\n"
							" 3. SALIR  ", 1, 3);
			switch(opcion)
			{
				case 1:
					modificarPrecioProducto(lista,validar);
				break;

				case 2:
					modificarTipoProducto(lista,validar);
				break;
			}
		}while(opcion!=3);
	}
	else
	{
		printf("\nERROR, el ID %d no se encuentra en la lista.\n", idBuscar);
	}
}

void modificarTipoProducto(eProducto* guardar, int indice)
{
	UTN_getValidacionMaximoMinimo(&(guardar+indice)->tipo, "Ingrese el tipo del producto(1.IPHONE - 2.MAC - 3.IPAD - 4.ACCESORIOS): ",
						"ERROR, reingrese solo el numero correspondiente a el tipo del producto(1.IPHONE - 2.MAC - 3.IPAD - 4.ACCESORIOS): ", 1,4);
	printf("\nEl tipo de producto se ah cambiado.\n");
}

void modificarPrecioProducto(eProducto* guardar, int indice)
{
	UTN_getValidacionMayorfloat(&(guardar+indice)->precio,"Ingrese el precio del producto: ",
						"ERROR, reingrese el precio del producto(numero mayor a 0): ", 0);;
	printf("\nEl precio del producto se ah cambiado.\n");
}

int ordenamientoIDProductos(eProducto* list, int tam)
{
	int i;
	int j;
	int devuelve;
	eProducto guardado;

	devuelve=-1;

	if(list != NULL && tam>0)
	{
		devuelve=0;
		for(i=0;i<tam;i++)
		{
			for(j=i+1;j<tam-1;j++)
			{
				if((list+i)->idProducto>0 && (list+j)->idProducto>0 && (list+i)->idProducto>(list+j)->idProducto)
				{
						guardado=list[j];
						list[j]=list[i];
						list[i]=guardado;
				}
			}
		 }
	}

	return devuelve;
}

int listadoProductos(eProducto* list, int tam)
{
	int i;
	int respuesta;

	respuesta=-1;

	if(list != NULL && tam>0)
	{
		for(i=0;i<tam;i++)
		{
			if((list+i)->idProducto>0)
			{
				printf("\nDescripcion del producto: %s\nTipo de nacionalidad del producto: %d\nID: %d\nTipo de producto: %d\nPrecio del producto: %2.f\n",
						(list+i)->descripcion, (list+i)->nacionalidad, (list+i)->idProducto, (list+i)->tipo, (list+i)->precio);
				respuesta=0;
			}

		}
	}
	return respuesta;
}

int ordenamientoPrecioProductos(eProducto* list, int tam)
{
	int i;
	int j;
	int devuelve;
	eProducto guardado;

	devuelve=-1;

	if(list != NULL && tam>0)
	{
		devuelve=0;
		for(i=0;i<tam;i++)
		{
			for(j=i+1;j<tam-1;j++)
			{
				if((list+i)->idProducto>0 && (list+j)->idProducto>0 && (list+i)->precio>(list+j)->precio)
				{
						guardado=list[j];
						list[j]=list[i];
						list[i]=guardado;
				}
			}
		 }
	}

	return devuelve;
}

int ordenamientoDescripcionProductos(eProducto* list, int tam)
{
	int i;
	int j;
	int devuelve;
	eProducto guardado;

	devuelve=-1;

	if(list != NULL && tam>0)
	{
		devuelve=0;
		for(i=0;i<tam;i++)
		{
			for(j=i+1;j<tam-1;j++)
			{
				if((list+i)->idProducto>0 && (list+j)->idProducto>0 && strcmp((list+i)->descripcion,(list+j)->descripcion)!=-1)
				{
						guardado=list[j];
						list[j]=list[i];
						list[i]=guardado;
				}
			}
		 }
	}

	return devuelve;
}
