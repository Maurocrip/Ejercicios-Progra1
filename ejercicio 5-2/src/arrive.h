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
 * @fn void pedirArriveValidadoInt(int[], int, int, int, char*, char*)
 * @brief pide un numero para cada indice del vector de forma secuencial, validandolo entre un maximo y un minimo.
 *
 * @param vector: el nombre de la variable del array.
 * @param indice: el tamaño del array.
 * @param max: el numero maximo que pueda ingresar.
 * @param min: el numero minimo que pueda ingresar.
 * @param mensaje:  el mensaje que se va a mostrar cuando se pida el numero al usario.
 * @param mensjaeError: el mensaje que se va a mostrar cuando ingrese un numero erroneo.
 */
void pedirArriveValidadoInt(int vector[], int indice, int max, int min, char* mensaje, char* mensjaeError);

/**
 * @fn int sumaArriveInt(int[], int)
 * @brief suma todos los numeros pares de los indices que estan dentro de un mismo arrive de forma secuencial
 *
 * @param vector: nombre de la variable del arrive  que se quiera sumar
 * @param indice: tamaño del arrive
 * @return devuelve la suma hecha
 */
int sumaParesArriveInt(int vector[], int indice);

/**
 * @fn void mostrarArriveInt(int[], int, char*)
 * @brief muestra lo que contiene cada uno de los indices que contiene un array de forma progresiva
 *
 * @param vector: el nombre del array que se valla a mostrar.
 * @param indice: el tamaño del arrive.
 * @param mensaje: el mensaje que se mostrara antes de mostrar lo que contiene el indice.
 */
void mostrarArriveInt(int vector[], int indice, char* mensaje);

/**
 * @fn void mostrarArriveIntPos(int[], int, char*)
 * @brief muestra solo los numeros positivos del array
 *
 * @param vector: el nombre del array que se valla a mostrar.
 * @param indice: el tamaño del arrive.
 * @param mensaje: el mensaje que se mostrara antes de mostrar los numeros del array.
 */
void mostrarArriveIntPos(int vector[], int indice, char* mensaje);

/**
 * @fn void mostrarArriveIntNeg(int[], int, char*)
  * @brief muestra solo los numeros negativos del array
 *
 * @param vector: el nombre del array que se valla a mostrar.
 * @param indice: el tamaño del arrive.
 * @param mensaje: el mensaje que se mostrara antes de mostrar los numeros del array.
 */
void mostrarArriveIntNeg(int vector[], int indice, char* mensaje);

/**
 * @fn int cantidadNegInt(int[], int)
 * @brief calcula la cantidad de los numeros negativos que hay en los indice del vector.
 *
 * @param vector: el nombre de la variable del arrive.
 * @param indice: el tamaño del arrive.
 * @return devuelve la cantidad de negativos
 */
int cantidadNegInt(int vector[], int indice);

/**
 * @fn int cantidadPosInt(int[], int)
  * @brief calcula la cantidad de los numeros positivos que hay en los indice del vector.
 *
 * @param vector: el nombre de la variable del array.
 * @param indice: el tamaño del array.
 * @return devuelve la cantidad de positivos
 */
int cantidadPosInt(int vector[], int indice);

/**
 * @fn int mayorImpares(int[], int)
 * @brief calcula cual es el numero mas grade de los impares del array
 *
 * @param vector: el nombre de la variable del array.
 * @param indice: el tamaño del array.
 * @return devuelve cual es el numero impar mayor.
 */
int mayorImpares(int vector[], int indice);

/**
 * @fn void listadoArriveParesiNT(int[], int, char*)
 * @brief muestra los numeros pares del array.
 *
 * @param vector: el nombre del array que se valla a mostrar.
 * @param indice: el tamaño del arrive.
 * @param mensaje: el mensaje que se mostrara antes de mostrar los numeros pares del array.
 */
void listadoArriveParesiNT(int vector[], int indice, char* mensaje);

/**
 * @fn void listadoPosicionesImpares(int[], int, char*)
 * @brief muestra la posicion (el indice del vector) de los numeros impares del array.
 *
 * @param vector: el nombre del array que se valla a mostrar.
 * @param indice: el tamaño del array.
 * @param mensaje: el mensaje que se mostrara antes de mostrar la posicion de los numeros impares del array.
 */
void listadoPosicionesImpares(int vector[], int indice, char* mensaje);


//anexo
/**
 * @fn void burbujeoMenorMayor(int[], int)
 * @brief te ordena un array de numeros de menor a mayor
 *
 * @param vec: el nombre del array que se quiera ordenar.
 * @param indice: el tamaño del array.
 */
void burbujeoMenorMayor(int vec[], int indice);

/**
 * @fn void burbujeoPos(int[], int)
 * @brief te ordena de menor a mayor solo los numeros positivos de un array de numeros(incluyendo el 0).
 *
 * @param vec: el nombre del array que se quiera ordenar.
 * @param indice: el tamaño del array.
 */
void burbujeoPos(int vec[], int indice);

/**
 * @fn void burbujeoNeg(int[], int)
 * @brief te ordena de mayor a menor (-1;-infinito) solo los numeros negativos de un array de numeros(no incluye el 0).
 *
 * @param vec: el nombre del array que se quiera ordenar.
 * @param indice: el tamaño del array.
 */
void burbujeoNeg(int vec[], int indice);

/**
 * @fn void burbujeoIgualacionInt(int[], int, char*)
 * @brief te muestra que numeros se repetin en el array
 *
 * @param vec: el nombre del array que se quiera ordenar.
 * @param indice: el tamaño del array.
 * @param mensaje: el mensaje que se quiera mostrar antes de mostrar los numeros repetidos.
 */
void burbujeoIgualacionInt(int vec[], int indice, char* mensaje);

/**
 * @fn int chequearNumeroEnArray(int[], int, int)
 * @brief busca si un numero esta dentro del array.
 *
 * @param vec: el nombre del array que se quiera ordenar.
 * @param indice: el tamaño del array.
 * @param numero: el numero que quieras buscar.
 * @return devuelve 1 si esta en el array y 0 si no esta.
 */
int chequearNumeroEnArray(int vec[], int indice, int numero);


#ifndef ARRIVE_H_
#define ARRIVE_H_

#endif /* ARRIVE_H_ */
