#include<stdio.h>
float b;
float by;
float kb;
float mb;
float gb;
float tb;
float mbu;

int main()
{
    b=1;
    by=8;
    kb=1024;
    mb=1024;
    gb=1024;
    tb=1024;
    printf("Ingrese los Mb:\n");
    scanf("%f" , &mbu);
    b=(mbu*mb*kb*by);
    printf("en bit equivale a: %f\n",b);
    by=(mbu*mb*kb);
    printf("en byte equivale a: %f\n",by);
    gb=(mbu*gb);
    printf("en Gigabytes equivale a: %f\n",gb);
    tb=(mbu/gb*tb);
    printf("en Terabyte equivale a: %f\n",tb);
    
    
}
