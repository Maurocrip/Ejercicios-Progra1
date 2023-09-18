/*
 * arrive.h
 *
 *  Created on: 22 abr. 2022
 *  Author: mauro
 */

//INICIALIZADORES
/**
 * @fn void inicializacionArray(int[], int, int)
 * @brief inicializa todo el array en un numero.
 *
 * @param vector: el nombre del array.
 * @param indice: el tamaño del array.
 * @param inicializador: numero que se quiera inicializar el arraay.
 */
void inicializacionArray(int vector[], int indice, int inicializador);

// INGRESO DE DATOS POR USUARIO
/**
 * @fn void PedirArriveInt(int[], int)
 * @brief pide un numero para cada indice del array de forma secuencial.
 *
 * @param vector: el nombre del array.
 * @param indice: el tamaño del array.
 * @param mensaje: el mensaje que se va a mostrar cuando se pida el numero al usario.
 */
void PedirArriveInt(int vector[], int indice, char* mensaje);

/**
 * @fn void pedirArriveValidadoInt(int[], int, int, int, char*, char*)
 * @brief pide un numero para cada indice del array de forma secuencial, validandolo entre un maximo y un minimo.
 *
 * @param vector: el nombre de la variable del array.
 * @param indice: el tamaño del array.
 * @param max: el numero maximo que pueda ingresar.
 * @param min: el numero minimo que pueda ingresar.
 * @param mensaje:  el mensaje que se va a mostrar cuando se pida el numero al usario.
 * @param mensjaeError: el mensaje que se va a mostrar cuando ingrese un numero erroneo.
 */
void pedirArriveValidadoEntreMaximoMinimoInt(int vector[], int indice, int max, int min, char* mensaje, char* mensjaeError);

/**
 * @fn void pedirArriveValidadoSoloMinimoInt(int[], int, int, char*, char*)
 * @brief pide un numero para cada indice del array de forma secuencial, validandolo que no se ingrese un numero.
 *
 * @param vector: el nombre de la variable del array.
 * @param indice: el tamaño del array.
 * @param num: el numero que no se puede ingresar.
 * @param mensaje:  el mensaje que se va a mostrar cuando se pida el numero al usario.
 * @param mensjaeError: el mensaje que se va a mostrar cuando ingrese un numero erroneo.
 */
void pedirArriveValidadoSinUnNumeroInt(int vector[], int indice, int num, char* mensaje, char* mensjaeError);

/**
 * @fn void CargaAleatoriaArrayValidadoSinUnNumeroInt(int[], int, int, char*, char*, char*)
 * @brief pide un numero para cada indice del array de forma aleatoria, validandolo que no se ingrese un numero en especifico.
 *
 * @param vector: el nombre de la variable del array.
 * @param indice: el tamaño del array.
 * @param num: el numero que no se puede ingresar.
 * @param mensaje: el mensaje que se va a mostrar cuando se pida el numero al usario.
 * @param mensjaeError: el mensaje que se va a mostrar cuando ingrese un numero erroneo.
 * @param mensajePosicion: el mensaje que se ingresa para pedir la posicion del array donde se guarde el numero.
 * @param mensajePosicionError: el mensaje que se ingresa para pedir la posicion del array donde se ingrese una posicion erronea.
 */
void CargaAleatoriaArrayValidadoSinUnNumeroInt(int vector[], int indice, int num, char* mensaje, char* mensjaeError, char* mensajePosicion, char* mensajePosicionError);

// CALCULOS
/**
 * @fn int sumaArriveInt(int[], int)
 * @brief suma todos los numeros de los indices que estan dentro de un mismo array de forma secuencial.
 *
 * @param vector: nombre de la variable del array que se quiera sumar.
 * @param indice: tamaño del array.
 * @return devuelve la suma hecha.
 */
int sumaArriveInt(int vector[], int indice);

/**
 * @fn int sumaParesArriveInt(int[], int)
 * @brief suma todos los numeros pares de los indices que estan dentro de un mismo array de forma secuencial.
 *
 * @param vector: nombre de la variable del array que se quiera sumar.
 * @param indice: tamaño del array.
 * @return devuelve la suma hecha.
 */
int sumaParesArriveInt(int vector[], int indice);

/**
 * @fn int sumaImparesArriveInt(int[], int)
 * @brief suma todos los numeros impares de los indices que estan dentro de un mismo array de forma secuencial.
 *
 * @param vector: nombre de la variable del array que se quiera sumar.
 * @param indice: tamaño del array.
 * @return devuelve la suma hecha.
 */
int sumaImparesArriveInt(int vector[], int indice);

/**
 * @fn int sumaPositivosArriveInt(int[], int)
 * @brief suma todos los numeros positivos de los indices que estan dentro de un mismo array de forma secuencial.
 *
 * @param vector: nombre de la variable del array que se quiera sumar.
 * @param indice: tamaño del array.
 * @return devuelve la suma hecha.
 */
int sumaPositivosArriveInt(int vector[], int indice);

/**
 * @fn int cantidadNegInt(int[], int)
 * @brief calcula la cantidad de los numeros negativos que hay en los indice del array.
 *
 * @param vector: el nombre de la variable del array.
 * @param indice: el tamaño del array.
 * @return devuelve la cantidad de negativos.
 */
int cantidadNegInt(int vector[], int indice);

/**
 * @fn int posInt(int[], int)
 * @brief calcula la cantidad de los numeros positivos que hay en los indice del array.
 *
 * @param vector: el nombre de la variable del array.
 * @param indice: el tamaño del array.
 * @return devuelve la cantidad de positivos.
 */
int cantidadPosInt(int vector[], int indice);

/**
 * @fn int cantidadParesInt(int[], int)
 * @brief calcula la cantidad de los numeros pares que hay en los indice del array.
 *
 * @param vector: el nombre de la variable del array.
 * @param indice: el tamaño del array.
 * @return devuelve la cantidad de pares.
 */
int cantidadParesInt(int vector[], int indice);

/**
 * @fn int mayorImpares(int[], int)
 * @brief calcula cual es el numero mas grade de los impares del array.
 *
 * @param vector: el nombre de la variable del array.
 * @param indice: el tamaño del array.
 * @return devuelve cual es el numero impar mayor.
 */
int mayorImpares(int vector[], int indice);

/**
 * @fn int menorImpares(int[], int)
 * @brief calcula cual es el numero mas pqueño de los impares del array.
 *
 * @param vector: el nombre de la variable del array.
 * @param indice: el tamaño del array.
 * @return devuelve cual es el numero impar menor.
 */
int menorImpares(int vector[], int indice);

/**
 * @fn int mayorPares(int[], int)
 * @brief calcula cual es el numero mas grade de los pares del array.
 *
 * @param vector: el nombre de la variable del array.
 * @param indice: el tamaño del array.
 * @return devuelve cual es el numero par mayor.
 */
int mayorPares(int vector[], int indice);

/**
 * @fn int menorPares(int[], int)
 * @brief calcula cual es el numero mas pqueño de los pares del array.
 *
 * @param vector: el nombre de la variable del array.
 * @param indice: el tamaño del array.
 * @return devuelve cual es el numero par menor.
 */
int menorPares(int vector[], int indice);

/**
 * @fn int menorNegativos(int[], int)
 * @brief calcula cual es el numero mas pqueño de los negativos del array.
 *
 * @param vector: el nombre de la variable del array.
 * @param indice: el tamaño del array.
 * @return devuelve cual es el numero negativo menor.
 */
int menorNegativos(int vector[], int indice);

/**
 * @fn int promedioPares(int[], int)
 * @brief calculo el promedio de los numero pares del array.
 *
 * @param vector: el nombre de la variable del array.
 * @param indice: el tamaño del array.
 * @return devuelve cual es el promedio de los numero pares.
 */
int promedioPares(int vector[], int indice);

/**
 * @fn int promedioPositivos(int[], int)
 *  @brief calculo el promedio de los numero positivos del array.
 *
 * @param vector: el nombre de la variable del array.
 * @param indice: el tamaño del array.
 * @return devuelve cual es el promedio de los numero positivos.
 */
int promedioPositivos(int vector[], int indice);


// MUESTRAS DE ARRAY
/**
 * @fn void mostrarArriveInt(int[], int, char*)
 * @brief muestra lo que contiene cada uno de los indices que contiene un array de forma progresiva.
 *
 * @param vector: el nombre del array que se valla a mostrar.
 * @param indice: la cantidad de indices que se quiera mostar.
 * @param mensaje: el mensaje que se mostrara antes de mostrar lo que contiene el indice.
 */
void mostrarArriveInt(int vector[], int indice, char* mensaje);

/**
 * @fn void mostrarArriveIntPos(int[], int, char*)
 * @brief muestra solo los numeros positivos del array.
 *
 * @param vector: el nombre del array que se valla a mostrar.
 * @param indice: el tamaño del arrive.
 * @param mensaje: el mensaje que se mostrara antes de mostrar los numeros del array.
 */
void mostrarArriveIntPos(int vector[], int indice, char* mensaje);

/**
 * @fn void mostrarArriveIntNeg(int[], int, char*)
  * @brief muestra solo los numeros negativos del array.
 *
 * @param vector: el nombre del array que se valla a mostrar.
 * @param indice: el tamaño del arrive.
 * @param mensaje: el mensaje que se mostrara antes de mostrar los numeros del array.
 */
void mostrarArriveIntNeg(int vector[], int indice, char* mensaje);

/**
 * @fn void mostrarArriveIntPares(int[], int, char*)
 * @brief muestra los numeros pares del array.
 *
 * @param vector: el nombre del array que se valla a mostrar.
 * @param indice: el tamaño del arrive.
 * @param mensaje: el mensaje que se mostrara antes de mostrar los numeros pares del array.
 */
void mostrarArriveIntPares(int vector[], int indice, char* mensaje);

/**
 * @fn void mostrarArriveIntImpares(int[], int, char*)
 * @brief muestra los numeros impares del array.
 *
 * @param vector: el nombre del array que se valla a mostrar.
 * @param indice: el tamaño del arrive.
 * @param mensaje: el mensaje que se mostrara antes de mostrar los numeros impares del array.
 */
void mostrarArriveIntImpares(int vector[], int indice, char* mensaje);

/**
 * @fn void mostrarPosicionesImpares(int[], int, char*)
 * @brief muestra la posicion (el indice del vector) de los numeros impares del array.
 *
 * @param vector: el nombre del array que se valla a mostrar.
 * @param indice: el tamaño del array.
 * @param mensaje: el mensaje que se mostrara antes de mostrar la posicion de los numeros impares del array.
 */
void mostrarPosicionesImpares(int vector[], int indice, char* mensaje);

/**
 * @fn void mostrarPosicionesPares(int[], int, char*)
 * @brief muestra la posicion (el indice del vector) de los numeros pares del array.
 *
 * @param vector: el nombre del array que se valla a mostrar.
 * @param indice: el tamaño del array.
 * @param mensaje: el mensaje que se mostrara antes de mostrar la posicion de los numeros pares del array.
 */
void mostrarPosicionesPares(int vector[], int indice, char* mensaje);

/**
 * @fn void mostrarPosicionesPositivos(int[], int, char*)
 * @brief muestra la posicion (el indice del vector) de los numeros positivos del array.
 *
 * @param vector: el nombre del array que se valla a mostrar.
 * @param indice: el tamaño del array.
 * @param mensaje: el mensaje que se mostrara antes de mostrar la posicion de los numeros positivos del array.
 */
void mostrarPosicionesPositivos(int vector[], int indice, char* mensaje);

/**
 * @fn void mostrarPosicionesNegativos(int[], int, char*)
 * @brief muestra la posicion (el indice del vector) de los numeros negativos del array.
 *
 * @param vector: el nombre del array que se valla a mostrar.
 * @param indice: el tamaño del array.
 * @param mensaje: el mensaje que se mostrara antes de mostrar la posicion de los numeros negativos del array.
 */
void mostrarPosicionesNegativos(int vector[], int indice, char* mensaje);


//BURBUJEO (ORDENAMIENTO)

/**
 * @fn void burbujeoMenorMayor(int[], int)
 * @brief te ordena un array de numeros de menor a mayor.
 *
 * @param vec: el nombre del array que se quiera ordenar.
 * @param indice: el tamaño del array.
 */
void burbujeoMenorMayor(int vec[], int indice);

/**
 * @fn void burbujeoMayorMenor(int[], int)
 * @brief te ordena un array de numeros de mayor a menor.
 *
 * @param vec: el nombre del array que se quiera ordenar.
 * @param indice: el tamaño del array.
 */
void burbujeoMayorMenor(int vec[], int indice);

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
 * @param vec: el nombre del array que se quiera buscar numeros repetidos.
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
