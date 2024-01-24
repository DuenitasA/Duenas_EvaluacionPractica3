#include <stdio.h>
struct producto
{
    char codigo[5];
    char nombreProductoProducto[50];
    char descripcion[50];
    int cantidad;
    float precioProducto;
};
int main(void)
{

    int opcion;
    printf("Ingrese la opcion que desea realizar.\n");
    printf("MENU:\n");
    printf("1) Ingresar un prducto:\n");
    printf("2) Mostrar los datos:\n");
    printf("3) Salir:\n");
    scanf("%d", opcion);

    switch (opcion)
    {
    case 1:

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