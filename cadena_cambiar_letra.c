#include<stdio.h>
char cadena[10],buscar,cambiar;
int i;
int main()
{
	
	scanf("%s",cadena);
	scanf("%s",&buscar);
	scanf("%s",&cambiar);
	for(i=0;cadena[i]!=' ';i++)
	{
		if(cadena[i]==buscar)
		{
			cadena[i]=cambiar;
		}
	}
	printf("%s",cadena);
	
}
