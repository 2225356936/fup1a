#include <stdio.h>

int main()
{
	int cantidad_ropa;
	int tipo;
	printf("Cuantos kg. de ropa cargara");
	scanf("%d", &cantidad_ropa);
		
	
	if (cantidad_ropa>0 && cantidad_ropa<=20)

	{
		if(cantidad_ropa>=0 && cantidad_ropa<=15)
		{
			if(cantidad_ropa>=0 && cantidad_ropa<=10)
			{
				printf("Agua Minima\n");
			}
		
			else
			{
				printf("Agua Media\n");
			}
		}
		else
		{
			printf("Agua Maxima\n");
		}
	}
	else
	{
		printf("Demaciada cargar\n");
	}
	
	printf("Quetipo de ropa es\n");
	printf("1=delicada\n");
	printf("2=Normal\n");
	printf("3=Sucia\n");
	scanf("%i", &tipo);
	printf("%i",tipo);	
	
	if (tipo>0 && tipo<=3)
	{
		if(tipo>0 && tipo<=2)
		{
			if(tipo>0 && tipo<=1)
			{
				printf("su ropa se lavara durante5min.");
			}
			else
			{
				printf("su ropa se lavara durante 10min");
			}
			
		}
		else
		{
			printf("su ropa se lavara durante 20min");
		}
	}
	else
	{
		printf("Opcion Invalida");
	}

	
	
}
