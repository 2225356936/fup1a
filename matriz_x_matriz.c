#include<stdio.h>
int matriz[3][3];
int aux[3][3];
int da[3][3];
int x,y;
main()
{
	printf("multiplicacion de matricez 3x3 \n");
	
	for(x=0; x<3; x++)
	for(y=0; y<3; y++)
{	printf("primera matriz");
	printf("INTRODUCE LA PRIMERA MATRIZ %d %d :", x,y);
	scanf("%d",&matriz[x][y]);
}

	
	for(x=0; x<3; x++)
	for(y=0; y<3; y++)
{	printf("segunda matriz");
	printf("INTRODUCE  LA SEGUNDA MATRIZ %d %d :", x,y);
	scanf("%d",&aux[x][y]);
}

		da[0][0]=aux[0][0]*matriz[0][0];
		da[0][1]=aux[0][1]*matriz[0][1];
		da[0][2]=aux[0][2]*matriz[0][2];

		da[1][0]=aux[1][0]*matriz[1][0];
		da[1][1]=aux[1][1]*matriz[1][1];
		da[1][2]=aux[1][2]*matriz[1][2];

		da[2][0]=aux[2][0]*matriz[2][0];
		da[2][1]=aux[2][1]*matriz[2][1];
		da[2][2]=aux[2][2]*matriz[2][2];
		
	printf("EL RESULTADO DE LA MULTIPLICACION ES:\n");
	for(x=0; x<3; x++)
	{
	for(y=0; y<3; y++)
	{
        printf("% d ",da[x] [y]);
	}
	}
}


