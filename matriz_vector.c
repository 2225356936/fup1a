#include<stdio.h>

int main() {

    int i,j;
	int matriz[3][3];
	int vector[3];


 for(i=0;i<3;i++){
      for(j=0;j<3;j++){

       printf("ingresa el valor  [%d][%d] de la matriz:",i,j);
       scanf("%d",&matriz[i][j]);
        }
        printf("\n");
	}

	for(j=0;j<3;j++){

       printf("ingrese el valor  [%d]del vector:\n",j);
       scanf("%d",&vector[j]);
        }
   printf("la matriz  es:\n");
	for(i=0;i<3;i++){
      for(j=0;j<3;j++){

        printf("%d",matriz[i][j]);
        }
        printf("\n");

	}

   for(i=0;i<3;i++){
      for(j=0;j<3;j++){

          matriz[i][j]=matriz[i][j]*vector[j];
        }

	}

  printf("la matriz resultante es:\n");
	for(i=0;i<3;i++){
      for(j=0;j<3;j++){

        printf("%d",matriz[i][j]);
        }
        printf("\n");
	}
	return 0;
}
