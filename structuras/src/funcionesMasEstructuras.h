/*
 * funcionesMasEstructuras.h
 *
 *  Created on: 6 may. 2022
 *      Author: Usuario
 */

#define NOMBRE 20
//ESTRUCTURAS
typedef struct
{
	int legajo;
	char nombre[NOMBRE];
	char apellido[NOMBRE];
	float suelo;
}ePersonas;

//PROTOTIPOS DE FUNCIONES
void inicializacionArray(ePersonas vector[], int tamanio, int inicializador);
int buscarLegajo(ePersonas vector[], int tamanio, int legajoA_Buscar);
int guardarPersonas(ePersonas vector[], int tamanio, ePersonas listaPersonas,  int lugarLibre);
int borrarPersonas(ePersonas vector[], int tamanio, ePersonas listaPersonas, int borrador);
void ordenamientoPersonasPorLegajo(ePersonas vector[], int tamanio);
int ValidacionMaximoMinimo(int* resultado, char* mensaje,char* mensajeError, int minimo, int maximo);
int ValidacionMayorInt(int* resultado, char* mensaje,char* mensajeError, int numero);
int ValidacionMayorfloat(float* resultado, char* mensaje,char* mensajeError, int numero);
void tomarValor(char array[], char* mensaje);
int mostrarPersonasIngresadas(ePersonas vector[], int tamanio);

#ifndef FUNCIONESMASESTRUCTURAS_H_
#define FUNCIONESMASESTRUCTURAS_H_



#endif /* FUNCIONESMASESTRUCTURAS_H_ */
