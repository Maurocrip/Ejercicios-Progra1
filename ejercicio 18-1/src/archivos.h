/*
 * archivos.h
 *
 *  Created on: 3 jun. 2022
 *      Author: Usuario
 */

#ifndef ARCHIVOS_H_
#define ARCHIVOS_H_

/**
 * @fn int EscribirNombresTXT(char*, char*)
 * @brief escribe en un archivo los datos ingresados por un array.
 *
 * @param nombres: arraay de tipo cahr cullos datos se guardaran en el archivo.
 * @param path: char que indica que se hace caundo abris un archivo.
 * @return devuelve 0 si no funciono y q si si se logro
 */
int EscribirNombresTXT(char* nombres,char* path);

/**
 * @fn int LeerNombresTXT(char*, char*)
 * @brief  hace un printf de los datos de un archivo.
 *
 * @param nombres: arraay de tipo cahr.
 * @param path: char que indica que se hace caundo abris un archivo.
 * @return devuelve 0 si no funciono y q si si se logro
 */
int LeerNombresTXT(char* nombres,char* path);

#endif /* ARCHIVOS_H_ */
