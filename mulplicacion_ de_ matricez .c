#include<stdio.h>
int matriz[2][3];
int sub[3][2];
int igual[2][2];
int z,x;
main()
{
	printf("programa_multiplicacion_de_matricez");
	printf("LA PRIMERA_MATRIZ_ES_DE_2X3\n");
	for(z=0; z<2; z++)
	for(x=0; x<3; x++)
{
	printf("INTRODUCE_LOS_VALORES_DE_LA PRIMERA_ MATRIZ [%d][%d] :", z,x);
	scanf("%d",&matriz[z][x]);
}

	
	printf("LA_SEGUNDA_MATRIZ_ES_DE_3X2\n");
	for(z=0; z<3; z++)
	for(x=0; x<2; x++)
{
	printf("INTRODUCE_LOS_VALORES_DE_LA_SEGUNDA_MATRIZ [%d] [%d] :", z,x);
	scanf("%d",&sub[z][x]);
}
	
	
	
		igual[0][0]=(matriz[0][0]*sub[0][0])+(matriz[0][1]*sub[1][0])+(matriz[0][2]*sub[2][0]);
		igual[0][1]=(matriz[0][0]*sub[0][1])+(matriz[0][1]*sub[1][1])+(matriz[0][2]*sub[2][1]);
		igual[1][0]=(matriz[1][0]*sub[0][0])+(matriz[1][1]*sub[1][0])+(matriz[1][2]*sub[2][0]);
		igual[1][1]=(matriz[1][0]*sub[0][1])+(matriz[1][1]*sub[1][1])+(matriz[1][2]*sub[2][1]);
		
	printf("EL_RESULTADO _ES:\n");
	for(z=0; z<2; z++)
{
	for(x=0; x<2; x++)
{
    printf("%d",igual[z][x]);
}
    printf("\n");
}
}



