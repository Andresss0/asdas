#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcion.h"
 
int main() {
    Producto productos[MAX_PRODUCTOS];
    int cantidadProductos = 0;
    int opcion;
 
    do {
        printf("\nSistema de Inventarios\n");
        printf("1. Ingresar producto\n");
        printf("2. Editar producto\n");
        printf("3. Eliminar producto\n");
        printf("4. Listar productos\n");
        printf("5. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);
 
        switch (opcion) {
            case 1:
                ingresarProducto(productos, &cantidadProductos);
                break;
            case 2:
                editarProducto(productos, cantidadProductos);
                break;
            case 3:
                eliminarProducto(productos, &cantidadProductos);
                break;
            case 4:
                listarProductos(productos, cantidadProductos);
                break;
            case 5:
                printf("Saliendo del sistema...\n");
                break;
            default:
                printf("Opción no válida. Intente de nuevo.\n");
        }
    } while (opcion != 5);
 
    return 0;
}
 

