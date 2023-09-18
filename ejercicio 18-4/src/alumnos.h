/*
 * alumnos.h
 *
 *  Created on: 3 jun. 2022
 *      Author: Usuario
 */

#ifndef ALUMNOS_H_
#define ALUMNOS_H_

#define NOMBRE 50

struct{

	int legajo;
	int nota;
	char nombre[NOMBRE];
}typedef alumno;

/**
 * @fn int EscribirNombresTXT(alumno*, char*, char*, int)
 * @brief guarda un array de tipo alumno en un archivo.
 *
 * @param array: array de tipo alumno donde estan los datos a guardar.
 * @param tipo: forma en la que se abre el archivo.
 * @param nombreArchivo: nombre del archivo a abrir.
 * @param tamanio: tamaño del array.
 * @return retorna 0 si el array es NULL o el temaño menor a 0, retorna 1 si esta todo bien.
 */
int EscribirNombresTXT(alumno* array, char* tipo, char* nombreArchivo, int tamanio);

/**
 * @fn int LeerNombresTXT(char*, char*, int)
 * @brief lee las estructura de tipo alumno que hay dentro de un archivo.
 *
 * @param nombreArchivo: nombre del archivo a abrir.
 * @param tipo: forma en la que se abre el archivo.
 * @param tam: tamaño del array.
 * @return retorna 0 si el array es NULL o el temaño menor a 0, retorna 1 si esta todo bien.
 */
int LeerNombresTXT(char* nombreArchivo,char* tipo,int tam);
#endif /* ALUMNOS_H_ */
