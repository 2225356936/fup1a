#include<stdio.h>

int main(){
	
	int n1;
	int i;
	int n;
	
	
	printf("ingrese un numero:");
	scanf("%d",&n1);
	for(i=1;i<=n1;i++){
		
		if(i%2==0){
			
			
			for(n=1;n<=i;n++){
				
				printf("%d",i);
				
				
				
			}         
			
		}else{        
			
			printf("%d",i);            
			
		}
	}
	
	return 0;
}
