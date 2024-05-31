#include <stdio.h>
#include <string.h>
#include "funcion.h"
 
void ingresarProducto(Producto productos[], int *cantidadProductos) {
    if (*cantidadProductos >= MAX_PRODUCTOS) {
        printf("No se pueden ingresar más productos.\n");
        return;
    }
 
    printf("Ingrese el nombre del producto: ");
    fflush(stdin); // Limpiar el buffer de entrada
    fgets(productos[*cantidadProductos].nombre, sizeof(productos[*cantidadProductos].nombre), stdin);
 
    printf("Ingrese la cantidad: ");
    scanf("%d", &productos[*cantidadProductos].cantidad);
    
    printf("Ingrese el precio: ");
    scanf("%f", &productos[*cantidadProductos].precio);
 
    (*cantidadProductos)++;
    printf("Producto agregado exitosamente.\n");
}
 
void editarProducto(Producto productos[], int cantidadProductos) {
    char nombre[50];
    printf("Ingrese el nombre del producto a editar: ");
    fflush(stdin);
    fgets(nombre, sizeof(nombre), stdin);
    
    for (int i = 0; i < cantidadProductos; i++) {
        if (strcmp(productos[i].nombre, nombre) == 0) {
            printf("Ingrese la nueva cantidad: ");
            scanf("%d", &productos[i].cantidad);
            
            printf("Ingrese el nuevo precio: ");
            scanf("%f", &productos[i].precio);
            
            printf("Producto editado exitosamente.\n");
            return;
        }
    }
    printf("Producto no encontrado.\n");
}
 
void eliminarProducto(Producto productos[], int *cantidadProductos) {
    char nombre[50];
    printf("Ingrese el nombre del producto a eliminar: ");
    fflush(stdin);
    fgets(nombre, sizeof(nombre), stdin);
 
    for (int i = 0; i < *cantidadProductos; i++) {
        if (strcmp(productos[i].nombre, nombre) == 0) {
            for (int j = i; j < *cantidadProductos - 1; j++) {
                productos[j] = productos[j + 1];
            }
            (*cantidadProductos)--;
            printf("Producto eliminado exitosamente.\n");
            return;
        }
    }
    printf("Producto no encontrado.\n");
}
 
void listarProductos(Producto productos[], int cantidadProductos) {
    printf("\nLista de productos en inventario:\n");
    printf("Nombre\t\tCantidad\tPrecio\n");
    for (int i = 0; i < cantidadProductos; i++) {
        printf("%s\t\t%d\t\t%.2f\n", productos[i].nombre, productos[i].cantidad, productos[i].precio);
    }
}
