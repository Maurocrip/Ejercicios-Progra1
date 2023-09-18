/*
 ============================================================================
 Name        : memoria.c
 Author      : mauro
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void eliminacion(int* array, int tam, int entero);
void incrustar(int* array, int tam, int entero, int indice);

int main(void) {
	setbuf(stdout, NULL);

	int i;
	int* numero;
	numero=(int*)malloc(sizeof(int)*5); //carga en memoria dinamica
	if(numero!=NULL)
	{
		*(numero+0)=5;
		*(numero+1)=4;
		*(numero+2)=2;
		*(numero+3)=1;
		*(numero+4)=3;
	}

	eliminacion(numero,5,2);
	for(i=0;i<4;i++)
	{
		printf("%d\n",*(numero+i));
	}

	incrustar(numero,4,10,2);

	for(i=0;i<5;i++)
	{
		printf("\n%d",*(numero+i));
	}

	free(numero);
	return 0;
}

void eliminacion(int* array, int tam, int entero)
{
	int i;
	int flag;
	int* aux;

	flag=0;
	if(array!=NULL)
	{
		if(*(array+tam)!=entero)
		{
			for(i=0;i<tam;i++)
			{
				if(*(array+i)==entero||flag==1) //si el valor de esa pocion es igual al numero buscado,
				{                              //lo cambia por el valor de la pocicion de adelante
					*(array+i)=*(array+i+1);
					flag=1;
				}
			}
		}

		aux=(int*)realloc(array,sizeof(int)*tam-1);
		if(aux!=NULL)
		{
			array=aux;
		}
	}
}

void incrustar(int* array, int tam, int entero, int indice)
{
	int i;
	int* aux;

	if(array!=NULL)
	{
		aux=(int*)realloc(array,sizeof(int)*tam+1);
		if(aux!=NULL)
		{
			for(i=indice;i<tam;i++)
			{
				*(array+i+1)=*(array+i);
			}
			*(array+indice)=entero;
		}
	}
}


