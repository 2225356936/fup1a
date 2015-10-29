#include<stdio.h>
int  x;
int  y;
int  z;
int main()
{
	printf("tienda\n");
	printf("¿Que necesita? \n");
	printf("1.Vender \n");
	printf("2.Mostrar ganancias \n");
	scanf("%d", &x);
	switch(x)
	{
		case 1: { 
			printf("1.soda $10 \n");
			printf("2.frituras $8 \n");
			printf("3.cigarro $6 \n");
			printf("4.Chicles $1 \n");
			printf("5.pan $2 \n");
			printf("¿Que desea comprar? \n");
			scanf("%d", &y);
			switch(y)
			{
				case 1: {
				printf("¿Cuantas sodas desea comprar? \n");
				scanf("%d", &z);
				z=z*10;
				printf("El total a pagar es de: %d", z);
						}break;
				case 2: {
				printf("¿Cuantas frituras desea comprar? \n");
				scanf("%d", &z);
				z=z*8;
				printf("El total a pagar es de: %d", z);
						}break;
				case 3: {
				printf("¿Cuantos cigarros desea comprar? \n");
				scanf("%d", &z);
				z=z*6;
				printf("El total a pagar es de: %d", z);
						}break;
				case 4: {
				printf("¿Cuantos chicles desea comprar? \n");
				scanf("%d", &z);
				z=z*1;
				printf("El total a pagar es de: %d", z);
						}break;
				case 5: {
				printf("¿Cuantos panes desea comprar? \n");
				scanf("%d", &z);
				z=z*2;
				printf("El total a pagar es de: %d", z);
						}break;
				default: {
							printf("error");
						}break;
			}
				}break;
		case 2: { 
			printf("Las ganancias son de $500");
				}break;
		default: {
					printf("error");
				}
	}
}
