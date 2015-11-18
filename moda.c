#include<stdio.h>
int main()
{
	int calificacion[10];
	int y=0;
	int z=0;
	
	for(y=0;y<10;y++)
	{
		printf("calificacion%d:",y-1);
		scanf("%d",&calificacion[y]);
	}
	
	printf("\nla_moda_(numero_mas_repetido) %d",calificacion[z]);
	
}
