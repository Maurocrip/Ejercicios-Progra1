/*
 * array.h
 *
 *  Created on: 7 may. 2022
 *      Author: Usuario
 */

/**
 * @fn int menu(int*, char*, char*, int, int)
 * @brief le muestra el menu al usuario y le pide que marque una opcion.
 *
 * @param resultado: variable donde se guarda la opcion que ingreso el usuario.
 * @param mensaje: el mensaje del menu.
 * @param mensajeError: el mensaje del menu cuando ingresan una opcion incorrecta.
 * @param minimo: el numero minimo que se epueda ingresar.
 * @param maximo: el numero maximo que se epueda ingresar.
 */
void menu(int* resultado, char* mensaje,char* mensajeError, int minimo, int maximo);

/**
 * @fn void inicializacionArray(int[], int, int)
 * @brief inicializa todo el array en un numero.
 *
 * @param vector: el nombre del array.
 * @param indice: el tamaño del array.
 * @param inicializador: numero que se quiera inicializar el arraay.
 * @return devuelve si se pudo lograr la inicializacion (1) o no (0).
 */
int inicializacionArray(int vector[], int indice, int inicializador);

/**
 * @fn void PedirArriveInt(int[], int)
 * @brief pide un numero para cada indice del array de forma secuencial.
 *
 * @param vector: el nombre del array.
 * @param indice: el tamaño del array.
 * @param mensaje: el mensaje que se va a mostrar cuando se pida el numero al usario.
 */
void PedirArriveInt(int vector[], int indice, char* mensaje);


#ifndef ARRAY_H_
#define ARRAY_H_



#endif /* ARRAY_H_ */
