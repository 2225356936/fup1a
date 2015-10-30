#include<stdio.h>

int final;
int i;
int resultado;

int main()
	
{
	printf("programa que suma en ciclo\n");
	printf("ingresa un numero:");
	scanf("%d",&final);
	i=1;
	
	while(i<=final)
	{
		printf("%d\n", i);
		resultado=resultado+i;
		i=i+1;
	}
	
	printf("%d", resultado);
}
