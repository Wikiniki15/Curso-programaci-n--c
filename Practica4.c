#include <stdio.h>

int main()
{
   float euros;

   printf("Introduzca los euros que desea convertir: \n");
   scanf("%f", &euros);

   printf("%.2f euros equivale a %.2f pesetas", euros, euros*166.386);
}
