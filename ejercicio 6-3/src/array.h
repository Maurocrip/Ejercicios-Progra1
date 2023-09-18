/*
 * array.h
 *
 *  Created on: 30 may. 2022
 *      Author: Usuario
 */

/**
 * @fn int UTN_GetValor(char*, int, char*, char*, int);
 * @brief le pide al usuario un dato de tipo string y valida que no contenga un numero si es que se lo requiere.
 *
 * @param array: el array de caracteres donde se guardara el dato ingresado.
 * @param tam: el tamaño del array.
 * @param mensaje: el mensaje que se mostrara antes de que el usuario ingrese un dato.
 * @param mensajeError: el mensaje que se mostrara cuando el usuario ingrese un dato invalido.
 * @param conNumero: se ingresa 0 si se desea uqe el dato ingresado no lleve numeros.
 * @return devuelve -1 si no si el array es invalido o el tamaño es menor que 0, y devuelve 0 si se pudo pedir el dato.
 */
int UTN_GetValor(char* array, int tam, char* mensaje, char* mensajeError, int conNumero);

/**
 * @fn void convertirPalabraAMayusculas(char*, int);
 * @brief combierte un td el string a minuscula.
 *
 * @param comprobar: array donde se encuentra el string.
 * @param tam: tamaño del array.
 */
void convertirPalabraAMinusculas(char* comprobar, int tam);

/**
 * @fn void convertirPrimerLetraAMayusculas(char*, int)
 * @brief convierte la primer letra luego de un espacio en mayuscula.
 *
 * @param comprobar: array donde se encuentra el string.
 * @param tam: tamaño del array.
 */
void convertirPrimerLetraAMayusculas(char* comprobar, int tam);

/**
 * @fn void juntarNombreApellido(char*, char*, char*)
 * @brief junta el nombre del usuario con el apellido para que quede: "apellido, nombre".
 *
 * @param nombreCompleto: array de tipo char donde se guarde el resultado final.
 * @param nombre: array de tipo char donde esta guardado el nombre.
 * @param apellido: array de tipo char donde esta guardado el apellido.
 */
void juntarNombreApellido(char* nombreCompleto, char* nombre, char* apellido);



#ifndef ARRAY_H_
#define ARRAY_H_



#endif /* ARRAY_H_ */
