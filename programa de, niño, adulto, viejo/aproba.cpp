#include<stdio.h>
int calificacion;
int main()
{
	printf("dame la calificacion");
	scanf("%d",&calificacion);
	if (calificacion>=7)
	{
		printf("aprobado");

	}
	
	else
	{
		printf("reprobado");
	}

}
