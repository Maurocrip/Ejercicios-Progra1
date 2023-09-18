/*
 ======================================================================================================================================================
 Name        : ejercicio.c
 Author      : mauro
 DIV	     : D
 Description : Armar un Men� de Opciones con las siguientes opciones:
1-Inicializar
2-Cargar
3-Mostrar
4-Calcular Promedio
5-Ordenar
Al ingresar a cada opci�n del men� deber� imprimir en pantalla el nombre del mismo. Ej: Si se
presiona la opci�n 1 mostrar por pantalla �Ud. ha seleccionado lo opci�n 1-Inicializar�
 ======================================================================================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout, NULL);
	int respuesta;
	do
	{
		printf("Menu:\n1-Inicializar\n2-Cargar\n3-Mostrar\n4-Calcular Promedio\n5-Ordenar\n6-salir ");
		scanf("%d", &respuesta);
		fflush(stdin);
		while(respuesta<1 || respuesta>6)
		{
			printf("\nERROR ingrese una opcion valida(1-6)\n\nMenu:\n1-Inicializar\n2-Cargar\n3-Mostrar\n4-Calcular Promedio\n5-Ordenar\n6-salir ");
			scanf("%d", &respuesta);
			fflush(stdin);
		}

		switch(respuesta)
		{
			case 1:
				printf("\nUd. ha seleccionado lo opci�n 1-Inicializar\n");
			break;

			case 2:
				printf("\nd. ha seleccionado lo opci�n 2-Cargar\n");
			break;
			case 3:
				printf("\nUd. ha seleccionado lo opci�n 3-Mostrar\n");
			break;
			case 4:
				printf("\nUd. ha seleccionado lo opci�n 4-Calcular\n");
			break;
			case 5:
				printf("\nUd. ha seleccionado lo opci�n 5-Ordenar\n");
			break;
		}
	}while(respuesta!=6);

	return 0;
}
