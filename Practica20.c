#include <stdio.h>

int main () 
{
    FILE *fichero;

    fichero=fopen("numeros.txt", "w+");

    int suma=0, numero;

    while (feof(fichero)==0)
    {
        fscanf(fichero, "%d", &numero);
        suma=suma+numero;
    }
    
    fprintf(fichero, "La suma de todos los numeros es: %d\n", suma);

    fclose (fichero);
}