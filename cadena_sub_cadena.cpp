#include <stdio.h>
#include<string.h>


int main(int argc, char* argv[])
{
	char cadena[10];
	char letra1[10];
	
	int i;
	int n;
	int cont=0;
	int cont2=0;
	

	printf("ingrese la palabra:");
	scanf("%s",cadena);

	printf("ingrese la subcadena:");
	scanf("%s",letra1);
	getchar();
	for(i=0; i<strlen(cadena);i++)
	{
    for(n=0; n<strlen(letra1);n++){


        if(cadena[i]!=letra1[n]){
            cont2=cont2+1;

        }
        if(cadena[i]==letra1[n]){

            cont=cont+1;
            cont2=cont2-3;
        }

    }
 }

    if(cont2>cont){

      printf("no existe la subcadena %s en la cadena %s",letra1,cadena);
    }
    else if(cont<cont2){
      printf("existe la subcadena %s en la cadena %s",letra1,cadena);
    }else if(cont>cont2){
     printf("existe la subcadena %s en la cadena %s",letra1,cadena);
    }
	return 0;
}
//

