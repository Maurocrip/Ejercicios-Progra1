/*
 * cadenaArrayChar.h
 *
 *  Created on: 29 abr. 2022
 *      Author: Usuario
 */

/**
 * @fn void tomarValor(char[], char*)
 * @brief le da un valor a la cadena de array pidiendosela al usuario.
 *
 * @param array: el nombre de la cadena de array donde se va a guardar el valor ingresado.
 * @param mensaje: el mensaje que le va a aparecer al usuario antes de que ingrese el valor.
 */
void tomarValor(char devuelve[], char* mensaje);

/**
 * @fn void asignarString(char[], char*)
 * @brief harcodea el valor de la cadena de array.
 *
 * @param array: el nombre de la cadena de array donde se va a guardar el valor harcodeado.
 * @param inicialisar:el valor harcodeado.
 */
void asignarString(char devuelve[], char* inicialisar);

/**
 * @fn int getTamanio(char[])
 * @brief calcula cual es el tamaño del de los vectores ocupados.
 *
 * @param vector: array que se quiera saber el tamaño de los vectores ocupados.
 * @return el tamaño de los vectores ocupados. si devuelve 0 puede que halla habido un error o que el array no tenga un valor ingresado.
 */
int getTamanio(char vector[]);

/**
 * @fn int compararCadenas(char[], char[])
 * @brief compara 2 cadenas de array.
 *
 * @param primeraCadena: el nombre de la primera cadena de array.
 * @param segundaCadena: el nombre de la segunda cadena de array.
 * @return devuelve 0 si son exactamente iguales, y un numero diferente a 0 si no lo son(es afectada por las mayusculas y minusculas).
 */
int compararCadenas(char primeraCadena[], char segundaCadena[]);

/**
 * @fn int convertirCharAInt(char[])
 * @brief convierte un numero en forma de char("2") a int(2).
 *
 * @param vec:nombre del array donde se ubique el numero que se quiera convertir a int.
 * @return el numero ya convertido a int.
 */
int convertirCharAInt(char vec[]);

/**
 * @fn int chequearMayusculas(char[], int)
 * @brief recorre al array y se fija si este contiene alguna mayuscula.
 *
 * @param comprobar: nombre del array que se quiera saber si contiene alguna mayuscula.
 * @param indice: el tamaño del arrayque se quiera saber si contiene alguna mayuscula.
 * @return retorna 0 si no encontro alguna mayuscula en el array, y retorna un numero diferente a 0 si encontro alguna mayuscula en el array.
 */
int chequearMayusculas(char comprobar[], int indice);

/**
 * @fn int chequearMinusculas(char[], int)
 * @brief recorre al array y se fija si este contiene alguna minuscula.
 *
 * @param comprobar: nombre del array que se quiera saber si contiene alguna minuscula.
 * @param indice: el tamaño del arrayque se quiera saber si contiene alguna minuscula.
 * @return retorna 0 si no encontro alguna minuscula en el array, y retorna un numero diferente a 0 si encontro alguna minuscula en el array.
 */
int chequearMinusculas(char comprobar[], int indice);

/**
 * @fn int chequearNumeros(char[], int)
 * @brief recorre al array y se fija si este contiene algun numero.
 *
 * @param comprobar: nombre del array que se quiera saber si contiene algun numero.
 * @param indice: el tamaño del arrayque se quiera saber si contiene algun numero.
 * @return retorna 0 si no encontro algun numero en el array, y retorna un numero diferente a 0 si encontro algun numero en el array.
 */
int chequearNumeros(char comprobar[], int indice);

/**
 * @fn int chequearVocales(char[], int)
 * @brief recorre al array y se fija si este contiene alguna vocal.
 *
 * @param comprobar: nombre del array que se quiera saber si contiene alguna vocal.
 * @param indice: el tamaño del arrayque se quiera saber si contiene alguna vocal.
 * @return retorna 0 si no encontro alguna vocal en el array, y retorna un numero diferente a 0 si encontro alguna vocal en el array.
 */
int chequearVocales(char comprobar[], int indice);

/**
 * @fn void convertirPalabraAMayusculas(char[], int)
 * @brief convierte td las letras de una cadena de array en mayusculas
 *
 * @param comprobar: nombre del array que se quiera convertir en mayusculas.
 * @param indice: el tamaño del array que se quiera convertir en mayusculas.
 */
void convertirPalabraAMayusculas(char comprobar[], int indice);

/**
 * @fn void convertirPalabraAMayusculas(char[], int)
 * @brief convierte td las letras de una cadena de array en minuscula
 *
 * @param comprobar: nombre del array que se quiera convertir en minuscula.
 * @param indice: el tamaño del array que se quiera convertir en minuscula.
 */
void convertirPalabraAMinusculas(char comprobar[], int indice);


#ifndef CADENAARRAYCHAR_H_
#define CADENAARRAYCHAR_H_

#endif /* CADENAARRAYCHAR_H_ */
