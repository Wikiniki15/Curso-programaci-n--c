#include <stdio.h>
#include <stdlib.h>

struct producto
{
    int codigo;
    char descripcion[50];
    float precio;
};

int main()
{
    struct producto *prod;

    prod=malloc(sizeof(struct producto));

    printf("Introduzca el codigo: \n");
    scanf("%d", &prod->codigo);

    printf("Introduzca la descripcion: \n");
    scanf("%s", prod->descripcion);

    printf("Introduzca el precio: \n");
    scanf("%f", &prod->precio);

    printf("El codigo del articulo: %d\n", prod->codigo);
    printf("La descripcion: %s\n", prod->descripcion);
    printf("El precio: %.2f\n", prod->precio);
    
    free(prod);
    prod=NULL;
}
