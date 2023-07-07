#include <stdio.h>

int main()
{
	int nota;
    
	printf("Introduzca la nota del alumno: \n");
	scanf("%d", &nota);

	if (nota>=0 && nota<=5)
	{
	    printf("Reprueba");
    }
	else if (nota==6)
	{
	    printf("Bien");
    }
	else if (nota==7 ||  nota==8)
	{
	    printf("Destacado");
    }
	else if (nota==9 || nota==10)
	{
	    printf("Sobresaliente");
    }
	else
	{
	    printf("la nota indroducida es inválida");
    }
}