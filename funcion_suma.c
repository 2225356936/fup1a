#include<stdio.h>
int suma(int x,int y)
{
	int res;
	res=x+y;
	return res;
}
int main()
{
	int res;
	int x,y;
	printf("programa de funciones que suma\n");
	printf("ingresa el primer numero\n");
	scanf("%d",&x);
	printf("ingresa el segundo numero\n");
	scanf("%d",&y);
	res=suma(x,y);
	printf("resultado es: %d\n",res);
}
