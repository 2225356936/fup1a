#include <stdio.h>


int main(int argc, char* argv[])
{
	char cadena[50];
	char letra1[50];

	int i=0;
	int n=0;
	int cont=0;
	int cont2=0;


    printf("ingrese la palabra:");
	scanf("%s",cadena);

	printf("ingrese la subcadena:");
	scanf("%s",letra1);
	getchar();

	while(cadena[i]!='\0'){


        while(cadena[i]==letra1[n]){

         i++;
         n++;

          if(letra1[n]=='\0'){
             printf("si existe");
            break;
          }
        }
        i++;
        n=0;


  }
  if(n==0&&i==strlen(cadena)){

    printf("no existe");
  }

}

