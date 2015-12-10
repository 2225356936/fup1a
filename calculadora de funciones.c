#include<stdio.h>
int suma(int a,int b)
{
	int res;
	res=a+b;
	return res;
}
int resta(int a,int b)
{
	int res;
	res=a-b;
	return res;
}
int mult(int a,int b)
{
	int res;
	res=a*b;
	return res;
}
float divi(float a,float b)
{
	float res;
	res=a/b;
	return res;
}
int main()
{
	
	int res;
	int a,b;
	printf("calculadora\n");
	printf("ingresa el primer numero\n");
	scanf("%d",&a);
	printf("ingresa el segundo numero\n");
	scanf("%d",&b);
	res=suma(a,b);
	printf("suma es:%d\n",res);
	res = resta(a,b);
	printf("resta es:%d\n",res);
	res=mult(a,b);
	printf("multiplicacion es:%d\n",res);
	
	res=divi(a,b);
	if(res>=0)
	{
		printf("division es:%d\n",res);
	}
	else{
		printf("el numero es menor a cero y no se muestra");
	}
	
}
