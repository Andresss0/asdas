#include "funciones.h"
#include <stdio.h>
#include <string.h>

void ingresarProducto(char nombres[][50], int cantidades[], float precios[], int *cantidadProductos) {
    printf("Ingrese el nombre del producto: ");
    scanf("%s", nombres[*cantidadProductos]);
    printf("Ingrese la cantidad: ");
    scanf("%d", &cantidades[*cantidadProductos]);
    printf("Ingrese el precio: ");
    scanf("%f", &precios[*cantidadProductos]);
    (*cantidadProductos)++;
    printf("Producto agregado exitosamente.\n");
}

void editarProducto(char nombres[][50], int cantidades[], float precios[], int cantidadProductos) {
    char nombre[50];
    int i;

    printf("Ingrese el nombre del producto a editar: ");
    scanf("%s", nombre);
    for (i = 0; i < cantidadProductos; i++) {
        if (strcmp(nombres[i], nombre) == 0) {
            printf("Ingrese la nueva cantidad: ");
            scanf("%d", &cantidades[i]);
            printf("Ingrese el nuevo precio: ");
            scanf("%f", &precios[i]);
            printf("Producto editado exitosamente.\n");
            return;
        }
    }
    printf("Producto no encontrado.\n");
}

void eliminarProducto(char nombres[][50], int cantidades[], float precios[], int *cantidadProductos) {
    char nombre[50];
    int i, j;

    printf("Ingrese el nombre del producto a eliminar: ");
    scanf("%s", nombre);
    for (i = 0; i < *cantidadProductos; i++) {
        if (strcmp(nombres[i], nombre) == 0) {
            for (j = i; j < *cantidadProductos - 1; j++) {
                strcpy(nombres[j], nombres[j + 1]);
                cantidades[j] = cantidades[j + 1];
                precios[j] = precios[j + 1];
            }
            (*cantidadProductos)--;
            printf("Producto eliminado exitosamente.\n");
            return;
        }
    }
    printf("Producto no encontrado.\n");
}

void listarProductos(char nombres[][50], int cantidades[], float precios[], int cantidadProductos) {
    int i;

    printf("\nLista de productos en inventario:\n");
    printf("Nombre\t\tCantidad\tPrecio\n");
    for (i = 0; i < cantidadProductos; i++) {
        printf("%s\t\t%d\t\t%.2f\n", nombres[i], cantidades[i], precios[i]);
    }
}
