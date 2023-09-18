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
 * @param tam: el tamaño del array.
 * @param inicializador: numero que se quiera inicializar el arraay.
 * @return devuelve si se pudo lograr la inicializacion (1) o no (0).
 */
int inicializacionArray(int vector[], int tam, int inicializador);

/**
 * @fn void CargaAleatoriaArrayValidadoMayorQueNumeroInt(int[], int, int, char*, char*, char*)
 * @brief pide un numero para cada indice del array de forma aleatoria, validandolo que no se ingrese un numero menor al minimo.
 *
 * @param vector: el nombre de la variable del array.
 * @param tam: el tamaño del array.
 * @param minimo: el numero que no se puede ingresar.
 * @param mensaje: el mensaje que se va a mostrar cuando se pida el numero al usario.
 * @param mensjaeError: el mensaje que se va a mostrar cuando ingrese un numero erroneo.
 * @param mensajePosicion: el mensaje que se ingresa para pedir la posicion del array donde se guarde el numero.
 * @param mensajePosicionError: el mensaje que se ingresa para pedir la posicion del array donde se ingrese una posicion erronea.
 */
void CargaAleatoriaArrayValidadoMayorQueNumeroInt(int vector[], int tam, int minimo, char* mensaje, char* mensjaeError, char* mensajePosicion, char* mensajePosicionError);

/**
 * @fn void mostrarArriveInt(int[], int, char*)
 * @brief muestra lo que contiene cada uno de los indices que contiene un array de forma progresiva.
 *
 * @param vector: el nombre del array que se valla a mostrar.
 * @param tam: la cantidad de indices que se quiera mostar.
 * @param mensaje: el mensaje que se mostrara antes de mostrar lo que contiene el indice.
 */
void mostrarArriveInt(int vector[], int tam, char* mensaje);

/**
 * @fn void mostrarUnArriveInt(int[], int, char*)
 * @brief muestra solo el contenido de uno de los indice del array.
 *
 * @param vector: el nombre del array que se valla a mostrar.
 * @param indice: el indice que se quiera mostar.
 * @param mensaje: el mensaje que se mostrara antes de mostrar lo que contiene el indice.
 */
void mostrarUnArriveInt(int vector[], int indice, char* mensaje);

/**
 * @fn int calcularPromedioArrayInt(int[], int)
 * @brief calcula el promedio de los datos de un array.
 *
 * @param vector: el nombre del array que se valla a promediar.
 * @param tam: el tamaño del array.
 * @return devuelve el promedio hecho.
 */
int calcularPromedioArrayInt(int vector[], int tam);

#ifndef ARRAY_H_
#define ARRAY_H_



#endif /* ARRAY_H_ */
