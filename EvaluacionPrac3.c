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
}

int main(void)
{
    FILE *ing;
    ing = fopen("producto.txt", "a+");

    int opcion;
    printf("Ingrese la opcion que desea realizar.\n");
    printf("MENU:\n");
    printf("1) Ingresar un prducto:\n");
    printf("2) Mostrar los datos:\n");
    printf("3) Salir:\n");
    scanf("%d", &opcion);

    switch (opcion)
    {
    case 1:
        ingresoProductos(ing);
        break;
    case 2:

        break;

    case 3:

        break;

    default:
        break;
    }
    return 0;
}