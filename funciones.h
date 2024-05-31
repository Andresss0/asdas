#ifndef FUNCIONES_H
#define FUNCIONES_H

void ingresarProducto(char nombres[][50], int cantidades[], float precios[], int *cantidadProductos);
void editarProducto(char nombres[][50], int cantidades[], float precios[], int cantidadProductos);
void eliminarProducto(char nombres[][50], int cantidades[], float precios[], int *cantidadProductos);
void listarProductos(char nombres[][50], int cantidades[], float precios[], int cantidadProductos);

#endif
