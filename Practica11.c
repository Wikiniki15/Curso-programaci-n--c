#include <stdio.h>

int main()
{
    float pesos[5];
    float suma=0;

    for(int i = 0; i < 5; i++)
    {
        printf ("Introduzca un peso para almacenarlo: \n");
        scanf("%f", &pesos[i]);

        suma=suma+pesos[i];
    }

    float promedio=suma/5;
    int mayor=0;
    int menor=0;

    for(int i = 0; i < 5; i++){

        if(pesos[i]>=promedio)
        {
            mayor++;
        }
        else
        {
            menor++;
        }
    }
    printf ("El promedio de pesos es: %.2f\n", promedio);
    printf("Numero de pesos mayores o iguales que el promedio: %d, Numero menores que el promedio es %d",mayor, menor);
}