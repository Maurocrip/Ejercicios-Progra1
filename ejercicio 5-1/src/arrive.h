/*
 * arrive.h
 *
 *  Created on: 22 abr. 2022
 *  Author: mauro
 */


/**
 * @fn void PedirArriveInt(int[], int)
 * @brief pide un numero para cada indice del vector de forma secuencial
 *
 * @param vector: el nombre de la variable del arrive
 * @param indice: el tamaño del arrive
 * @param mensaje: el mensaje que se va a mostrar cuando se pida el numero al usario
 */
void PedirArriveInt(int vector[], int indice, char* mensaje);

/**
 * @fn int sumaArriveInt(int[], int)
 * @brief suma todos los numeros de los indices que estan dentro de un mismo arrive de forma secuencial
 *
 * @param vector: nombre de la variable del arrive  que se quiera sumar
 * @param indice: tamaño del arrive
 * @return devuelve la suma hecha
 */
int sumaArriveInt(int vector[], int indice);

/**
 * @fn void mostrarArriveInt(int[], int, char*)
 * @brief muestra lo que contiene cada uno de los indices que contiene un arrive de forma progresiva
 *
 * @param vector: el nombre del arrive que se valla a mostrar.
 * @param indice: la cantidad de indices que se quiera mostar.
 * @param mensaje: el mensaje que se mostrara antes de mostrar lo que contiene el indice.
 */
void mostrarArriveInt(int vector[], int indice, char* mensaje);


#ifndef ARRIVE_H_
#define ARRIVE_H_



#endif /* ARRIVE_H_ */
