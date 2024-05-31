#ifndef FUNCION_H
#define FUNCION_H
 
#define MAX_PRODUCTOS 100
 
typedef struct {
    char nombre[50];
    int cantidad;
    float precio;
} Producto;
 
void ingresarProducto(Producto productos[], int *cantidadProductos);
void editarProducto(Producto productos[], int cantidadProductos);
void eliminarProducto(Producto productos[], int *cantidadProductos);
void listarProductos(Producto productos[], int cantidadProductos);
 
#endif