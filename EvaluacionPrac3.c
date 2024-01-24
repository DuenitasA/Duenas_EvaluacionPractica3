#include <stdio.h>
struct producto
{
    char codigo[5];
    char nombreProductoProducto[50];
    char descripcion[50];
    int cantidad;
    float precioProducto;
};
void ingresoProductos(FILE *ing)
{

    struct producto opcion1;
    printf("Ingrese el nombre del producto.\n");
    scanf("%s", &opcion1.nombreProductoProducto);
    fprintf(ing, "%s\t", opcion1.nombreProductoProducto);

    printf("Ingrese el codigo del producto.\n");
    scanf("%s", &opcion1.codigo);
    fprintf(ing, "%s\t", opcion1.codigo);

    printf("Ingrese la descripcion del producto.\n");
    scanf("%s", &opcion1.descripcion);
    fprintf(ing, "%s\t", opcion1.descripcion);

    printf("Ingrese la cantidad del producto.\n");
    scanf("%d", &opcion1.cantidad);
    fprintf(ing, "%d\t", opcion1.cantidad);

    printf("Ingrese el precio del producto.\n");
    scanf("%f", &opcion1.precioProducto);
    fprintf(ing, "%.02f\t", opcion1.precioProducto);

    fprintf(ing, "\n");
}

void mostrarProductos(FILE *ing)
{

    struct producto opcion2;

    while (fscanf(ing, "%s %s %s %d %f", opcion2.nombreProductoProducto, opcion2.codigo, opcion2.descripcion, &opcion2.cantidad, &opcion2.precioProducto) != EOF)
    {
        printf("Nombre del producto: %s\n", opcion2.nombreProductoProducto);
        printf("Código del producto: %s\n", opcion2.codigo);
        printf("Descripción del producto: %s\n", opcion2.descripcion);
        printf("Cantidad del producto: %d\n", opcion2.cantidad);
        printf("Precio del producto: %.02f\n", opcion2.precioProducto);
        printf("\n");
    }
}
    int main(void)
    {
        FILE *ing;
        ing = fopen("producto.txt", "a+");
        ;
        int opcion;
        printf("Ingrese la opcion que desea realizar.\n");
        printf("MENU:\n");
        printf("1) Ingresar un prducto:\n");
        printf("2) Mostrar los datos:\n");
        printf("3) Salir:\n");
        scanf("%d", &opcion);
        while (opcion != 3)
        {
            switch (opcion)
            {
            case 1:
                ingresoProductos(ing);
                break;
            case 2:
                mostrarProductos(ing);
                break;

            case 3:

                break;

            default:
                break;
            }
        }
    fclose(ing);
        return 0;
    }