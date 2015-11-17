#include<stdio.h>

int main()
{
    int x,i,suma;
    float promedio;
    
    printf("De cuantos Alumnos sera el promedio:\n");
    scanf("%i", &x);
    
    
    int a[x];
    
    suma=0;
    
    for(i=0;i<x;i++)
    {
        printf("Da la %i calificaion:\n",i+1);
        scanf("%i", &a[i]);
        suma+= a[i];
    }
    
    for(i=0;i<x;i++)
    {
        printf("las calificaciones son:%i\n\n", a[i]);
    }
    
    printf("la suma es: %d\n", suma);
    
    promedio=(float)suma/x;
    printf("El total de alumnos es:%d\n",x);   
    printf("El promedio es:%f\n",promedio);   
}

