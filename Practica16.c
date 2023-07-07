#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    struct jugador
    {
        char nombre[50];
        int edad;
        float altura;
    };

    struct jugador jugadores[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Introduzca el nombre del jugador %d: \n", i+1);
        gets(jugadores[i].nombre);

        printf("Introduzca la edad del jugador %d: \n", i+1);
        scanf("%d", &jugadores[i].edad);

        printf("Introduzca la altura del jugador %d: \n", i+1);
        scanf("%f", &jugadores[i].altura);

        fflush(stdin);
    }

    int opcion=-1;

    while (opcion!=0)
    {
        printf("Introduzca la opcion que desea realizar:\n1.Listar jugador\n2.Buscar jugador\n3.Jugador mas alto\n0.Salir\n");
        scanf("%d", &opcion);

        fflush(stdin);

        if(opcion==1)
        {
            for (int i = 0; i < 5; i++)
            {
                printf("Jugador de nombre %s y altura %.2f\n", jugadores[i].nombre, jugadores[i].altura);
            }
        }

        if (opcion==2)
        {
            char nombre[50];
            printf("Introduzca el nombre del jugador que desea buscar: \n");
            
            gets(nombre);
            int encontrado=0;

            for(int i = 0; i < 5; i++)
            {
                if(strcmp(jugadores[i].nombre, nombre)==0)
                {
                    encontrado=1;
                    printf("La edad del jugador %d y su altura %.2f\n", jugadores[i].edad, jugadores[i].altura);
                }
            }

            if(encontrado==0)
            {
                printf("Jugador no encontrado\n");
            }
        }

        if(opcion==3)
        {
            float maltura=jugadores[0].altura;
            char nmaltura[10];
            int emaltura=jugadores[0].edad;

            strcpy(nmaltura, jugadores[0].nombre);

            for (int i = 1 ; i < 5; i++)
            {
                if(jugadores[i].altura>maltura)
                {
                    strcpy(nmaltura, jugadores[i].nombre);

                    emaltura=jugadores[i].edad;
                    maltura=jugadores[i].altura;
                }
            }
            printf("Nombre del jugador de mayor altura es %s y su edad es %d\n",nmaltura, emaltura);
        }
        
        if(opcion!=0 && opcion!=1 && opcion!=2 && opcion!=3)
        {
            printf("Opcion incorrecta");
        }
    }
}


