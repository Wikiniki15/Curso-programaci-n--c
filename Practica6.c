#include <stdio.h>

int main()
{
	int pbase, km;
	float consumo, total;
	 
	printf("Introduzca el precio base del vehiculo: \n");
	scanf("%d",&pbase);

	printf("Introduzca los kilometros: \n");
	scanf("%d",&km);

	printf("Introduzca el consumo: \n");
	scanf("%f",&consumo);

	if (km<20000 && consumo<=5)
	{
		total=pbase * 1.2;
	}
	else if (km>20000 && consumo<=5)
	{
		total=pbase * 1.1;
	}
	else if (consumo>5)
	{
		total=pbase * 1.05;
	}
	printf("El precio final del vehiculo es %2.f: \n", total);
}