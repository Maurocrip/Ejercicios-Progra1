/*
 * producto.h
 *
 *  Created on: 30 may. 2022
 *      Author: Usuario
 */

#define ARGUMENTOS 200

struct
{
	int idProducto;
	char descripcion[ARGUMENTOS];
	float precio;
	int nacionalidad;
	int tipo;
}typedef eProducto;

/**
 * @fn void alta(eProducto*, int, int)
 * @brief permite el ingreso de los datos de un nuevo producto y lo registra.
 *
 * @param producto:array donde se guardaran los datos del producto ingresado.
 * @param id: id del producto.
 * @param tam: el tamaño del array.
 */
void alta(eProducto* producto, int id, int tam);

/**
 * @fn int initProductos(eProducto*, int)
 * @brief Inicializa el ID de los productos en -1.
 *
 * @param list: Puntero del array de la estructura de eProducto.
 * @param tam int: tamaño del array.
 * @return int retorna (-1) si es error [tamaño incorrecto o puntero NULL] - (0) si salio todo bien.
 */
int initProductos(eProducto* list, int tam);

/**
 * @fn int contadorProductosRegistrados(eProducto*, int)
 * @brief cualcula la cantidad de productos que se ingresaron verificando si su ID es mayor a 0.
 *
 * @param list: array de tipo eProducto donde se cuente la cantidad de productos registrados que hay.
 * @param tam: tamaño del array.
 * @return retorna (-1) si es error [tamaño incorrecto o puntero NULL] - la cantidad de productos registrados.
 */
int contadorProductosRegistrados(eProducto* list, int tam);

/**
 * @fn void baja(eProducto*, int)
 * @brief le permite al usuario der de baja/eliminar un producto ya ingresado a traves de su ID.
 *
 * @param list: array de tipo eProducto donde se va a buscar.
 * @param tam: tamaño del array.
 */
void baja(eProducto* lista, int tam);

/**
 * @fn int buscarProducto(eProducto*, int, int)
 * @brief busca un producto segun su id.
 *
 * @param list: array de tipo eProducto donde se va a buscar.
 * @param tam: tamaño del array.
 * @param id: ID del productos que se desea buscar.
 * @return devuelve el indice donde esta ubicado el producto.
 */
int buscarProducto(eProducto* list, int tam,int id);

/**
 * @fn void modificacion(eProducto*, int)
 * @brief Busca un producto por su ID y si este esta guardado en el array, le permite luego al usuario modificar:
 * el precio y el tipo de producto.
 *
 * @param list: array de tipo eProducto donde se va a buscar.
 * @param tam: tamaño del array.
 */
void modificacion(eProducto* lista, int tam);

/**
 * @fn void modificarTipoProducto(eProducto*, int)
 * @brief le permite al usuario modificar el tipo de producto de un producto.
 *
 * @param guardar: array de tipo eProducto donde se encuentra el producto que se valla a modificar.
 * @param indice: el indice donde se encuentra el producto en el array.
 */
void modificarTipoProducto(eProducto* guardar, int indice);

/**
 * @fn void modificarPrecioProducto(eProducto*, int)
 * @brief le permite al usuario modificar el precio del producto.
 *
 * @param guardar: array de tipo eProducto donde se encuentra el producto que se valla a modificar.
 * @param indice: el indice donde se encuentra el producto en el array.
 */
void modificarPrecioProducto(eProducto* guardar, int indice);

/**
 * @fn int ordenamientoIDProductos(eProducto*, int)
 * @brief ordena un aray de tipo eProducto por su ID de manera acendente.
 *
 * @param list: array de tipo eProducto que se valla a ordenar.
 * @param tam: tamaño del array.
 * @return retorna (-1) si es error [tamaño incorrecto o puntero NULL] - (0) si salio todo bien.
 */
int ordenamientoIDProductos(eProducto* list, int tam);

/**
 * @fn int listadoProductos(eProducto*, int)
 * @brief muestra todos los elementos de un array de tipo eProducto, cullas ID sean mayorers a 0.
 *
 * @param list: array de tipo eProducto que se valla a listar.
 * @param tam: tamaño del array.
 * @return retorna (-1) si es error [tamaño incorrecto o puntero NULL] - (0) si salio todo bien.
 */
int listadoProductos(eProducto* list, int tam);

/**
 * @fn int ordenamientoPrecioProductos(eProducto*, int)
 * @brief ordena un aray de tipo eProducto por su precio de manera acendente.
 *
 * @param list: array de tipo eProducto que se valla a ordenar.
 * @param tam: tamaño del array.
 * @return retorna (-1) si es error [tamaño incorrecto o puntero NULL] - (0) si salio todo bien.
 */
int ordenamientoPrecioProductos(eProducto* list, int tam);

/**
 * @fn int ordenamientoDescripcionProductos(eProducto*, int)
 * @brief ordena un aray de tipo eProducto por su descripcion de manera alfabetica.
 *
 * @param list: array de tipo eProducto que se valla a ordenar.
 * @param tam: tamaño del array.
 * @return retorna (-1) si es error [tamaño incorrecto o puntero NULL] - (0) si salio todo bien.
 */
int ordenamientoDescripcionProductos(eProducto* list, int tam);



#ifndef PRODUCTO_H_
#define PRODUCTO_H_



#endif /* PRODUCTO_H_ */
