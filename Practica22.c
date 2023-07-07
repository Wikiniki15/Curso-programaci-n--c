#include <stdio.h>
#include <math.h>

int main()
{
    struct hora_entrada
    {
        int hora;
        int minuto;
    };

    struct entrada
    {
        struct hora_entrada hora1;
        int asistentes;
        float precio;
    };

    struct entrada e1;

    char continuar='S';

    while(continuar=='S')
    {
       printf("Introduzca la hora de entrada: \n");
       scanf("%d", &e1.hora1.hora);

       printf("Introduzca el minuto de entrada: \n");
       scanf("%d", &e1.hora1.minuto);

       printf("Introduzca el numero asistentes: \n");
       scanf("%d", &e1.asistentes);

       int total=0;

       for ( int i = 0; i < e1.asistentes; i++)
       {
            int edad;

            printf("Introduzca la edad del asistente %d: \n", (i+1));
            scanf("%d", &edad);

            if(edad<6)
            {
                total=total+0;
            }
            else if(edad>=6 && edad<=15)
            {
                total=total+5;
            }
            else if((edad>=16 && edad<=26) || edad>65)
            {
                total=total+8;
            }
            else 
            {
                total=total+10;
            }
        }

        if(e1.asistentes>=5){
        e1.precio=total-total*0.1;
        }
        else{
            e1.precio=total;
        }
        printf("La hora de entrada del grupo es: %d\n", e1.hora1.hora);
        printf("El minuto de entrada del grupo es: %d\n", e1.hora1.minuto);
        printf("El precio de las entradas del grupo es: %.2f\n", e1.precio);
        printf("Desea continuar con otro grupo? (S/N)\n");
        scanf("%c", &continuar);

        while(continuar=='\n')
        {
            scanf("%c", &continuar);
        }
    }
    
    printf("Hasta la proxima\n");

}