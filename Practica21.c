#include <stdio.h>
#include <math.h>

int main()
{   

    float pi =3.1416;

    struct cilindro
    {
        float diametro;
        float carrera;
    };

    struct motor
    {
        int identificador;
        struct cilindro cilindro1;
        int num_cilindros;
        float cilindrada;
    };

    struct motor motor1;

    printf("Introduzca el identificador: \n");
    scanf("%d", &motor1.identificador);

    printf("Introduzca el diámetro del cilindro (mm): \n");
    scanf("%f", &motor1.cilindro1.diametro);

    printf("Introduzca la carrera del cilindro (mm): \n");
    scanf("%f", &motor1.cilindro1.carrera);

    printf("Introduzca el número de cilindros: \n");
    scanf("%d", &motor1.num_cilindros);
     
    motor1.cilindrada = (motor1.num_cilindros * (motor1.cilindro1.carrera / 10) * pi * pow((motor1.cilindro1.diametro / 10), 2)) / 4;

    printf("Identificador: %d\n", motor1.identificador);
    printf("Diametro (mm): %.2f\n", motor1.cilindro1.diametro);
    printf("Carrera (mm): %.2f\n", motor1.cilindro1.carrera);
    printf("Numero de cilindros: %d\n", motor1.num_cilindros);
    printf("Cilindrada: %.2f\n", motor1.cilindrada);
}