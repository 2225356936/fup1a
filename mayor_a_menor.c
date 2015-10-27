#include<stdio.h>
int n1;
int n2;
int n3;
int n4;
int main()
{
	printf("dame un numero\n");
	scanf("%d" ,&n1);
{
	printf("dame otro numero\n");
	scanf("%d" ,&n2);
{
	printf("dame el ultimo numero\n");
	scanf("%d" ,&n3);
}
	if(n1<n2)
{
    n4=n1;
    n1=n2;
    n2=n4;
}
    if(n2<n3)
{
    n4=n2;
    n2=n3;
    n3=n4;
}
    if(n1<n2)
{
    n4=n2;
    n2=n3;
    n3=n4;
}
    printf("%d %d %d", n1,n2,n3);
} 
}

