#include<stdio.h>
float division(float x,float y)
{
	float res;
	res=x/y;
	return res;
}
int main()
{
	int res;
	int x,y;
	printf("programa de funciones que divide\n");
	printf("ingresa el primer numero\n");
	scanf("%d",&x);
	printf("ingresa el segundo numero\n");
	scanf("%d",&y);
	res=division(x,y);
	printf("resultado es: %d\n",res);
}

