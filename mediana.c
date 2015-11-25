#include <stdio.h>
int numeros[10];
int i;
int x;
int aux;
int main() 
{
	printf("Programa que ordena y saca la mediana\n");
	printf("inserte los numeros\n");
	for(i=0;i<10;i++) 
	{
		printf("\n numero %d:",i+1);
		scanf("%d",&numeros[i]);
	}
	for(i=0;i<10;i++)
	{
		for(x=0;x<10;x++)
		{
			if(numeros[x]>numeros[i])
			{
				aux=numeros[x];
				numeros[x]=numeros[i];
				numeros[i]=aux;
			}
		}
	}
	printf("\n los numero ordenados ");
	for(i=0;i<10;i++) 
	{
		printf("\n%d\n",numeros[i]);	
	}
	printf("la mediana 1   es: %d\n", numeros[9/2]);

	
	return 0;
}
