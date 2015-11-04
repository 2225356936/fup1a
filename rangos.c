#include<stdio.h>
int n1;
int n2;
int main()
{
	printf("INGRESA EL PRIMER NUMERO\n");
	scanf("%d" ,&n1);
	printf("INGRESA EL SEGUNDO NUMERO\n");
	scanf("%d" ,&n2);
	if(n1<=n2)
{
	while(n1<=n2)
{
	printf("%d\n",n1);
	n1=n1+1;
}
}
	else if (n2<=n1)
{
	while(n2<=n1)
{
	printf("%d\n",n1);
	n1=n1-1;
}
}
	return 0;
}
