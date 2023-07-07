#include <stdio.h>

int main()
{
	int alumnos, aprobados=0, reprobados=0;
	float nota;
	
	printf("Introduzca el numero de alumnos: \n");
	scanf("%d", &alumnos);
	
	for (int i = 1; i <= alumnos;i++)
	{
		printf("Introduzca la nota del alumno %d: \n", i);
		scanf("%f",&nota);
	
		if (nota>=5)
		{
			aprobados++;
		}
		else
		{
			reprobados++;
		}
	}   
	printf ("El numero de alumnos aprobados es: %d y el de alumnos reprobados es: %d\n", aprobados, reprobados);
}