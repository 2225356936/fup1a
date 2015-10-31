#include <stdio.h>

int main() 
{
	
	
	int n,n2,resultado;
	int i=1;
	
	printf("ingrese el primer numero:");
	scanf("%d",&n);
	printf("ingrese el segundo numero:");
	scanf("%d",&n2);
	
	do{
		
		resultado=resultado+n2;
		i=i+1;
		
	}while(i<=n);
	
	printf("el resultado es: %d",resultado);
	
	return 0;
}
