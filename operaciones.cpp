#include<stdio.h>


int suma;
int resta;
int multiplicacion;
int division;

int n1;
int n2;

int main()

{
	printf("operaciones basicas\n");
	printf("dame un numero\n");
	scanf("%d",&n1);
	printf("dame otro numero\n");
	scanf("%d",&n2);
	 suma=n1+n2;
	 resta =n1-n2;
	 multiplicacion=n1*n2;
	 division=n1/n2;

	printf("el resultado de la suma es:%d\n",suma);
	printf("el resultado de la resta es:%d\n",resta);
	printf("el resultado de la multiplicacion es:%d\n",multiplicacion);
	printf("el resultado de la division es:%d\n",division);
	
	
}
