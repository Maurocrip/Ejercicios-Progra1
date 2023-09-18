/*
 * archivos.h
 *
 *  Created on: 3 jun. 2022
 *      Author: Usuario
 */

#ifndef ARCHIVOS_H_
#define ARCHIVOS_H_

/**
 * @fn int EscribirNombresTXT(int*, char*, char*, int)
 * @brief escribe en un archivo los datos ingresados por un array de tipo int.
 *
 * @param numeros: arraay de tipo int cullos datos se guardaran en el archivo.
 * @param archvoNombre: nombre del archivo.
 * @param path: char que indica que se hace caundo abris un archivo.
 * @param tam: tmaño del array.
 * @return devuelve 0 si no funciono y q si si se logro.
 */
int EscribirNombresTXT(int* numeros,char* archvoNombre,char* path, int tam);


/**
 * @fn int LeerNombresTXT(char*, char*, int)
 * @brief hace un printf de los datos de un archivo.
 *
 * @param aarchvoNombre: nombre del archivo.
 * @param path: char que indica que se hace caundo abris un archivo.
 * @param tam: tmaño del array.
 * @return devuelve 0 si no funciono y q si si se logro.
 */
int LeerNombresTXT(char* archvoNombre,char* path, int tam);

#endif /* ARCHIVOS_H_ */
