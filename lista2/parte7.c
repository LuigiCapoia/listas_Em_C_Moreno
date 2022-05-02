#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    //ex8
    float x, y,z,c,b,q;

    printf("Informe o 1 numero:\n");
    scanf("%f", &x);
    fflush(stdin);
printf("Informe o 2 numero:\n");
    scanf("%f", &y);
    fflush(stdin);
    printf("Informe o 3 numero:\n");
    scanf("%f", &z);
    fflush(stdin);
    printf("Informe o 4 numero:\n");
    scanf("%f", &c);
    fflush(stdin);
    printf("Informe o 5 numero:\n");
    scanf("%f", &b);
    fflush(stdin);
    q=x+y+z+c+b;
    q/5;
    printf("A media e: %.2f\n",q);
    if (x>y && x>z && x>c && x>b)
    {
       printf("O maior numero e: %.2f\n",x);
    }
    if (x<y && x<z && x<c && x<b)
    {
       printf("O maior numero e: %.2f\n",x);
    }
    if (y>x && y>z && y>c && y>b)
    {
       printf("O maior numero e: %.2f\n",y);
    }
    if (y<x && y<z && y<c && y<b)
    {
       printf("O maior numero e: %.2f\n",y);
    }
    if (z>y && z>x && z>c && z>b)
    {
       printf("O maior numero e: %.2f\n",z);
    }
    if (z<y && z<x && z<c && z<b)
    {
       printf("O maior numero e: %.2f\n",z);
    }
    if (c>y && c>z && c>x && c>b)
    {
       printf("O maior numero e: %.2f\n",c);
    }
    if (c<y && c<z && c<x && c<b)
    {
       printf("O maior numero e: %.2f\n",c);
    }
    if (b>y && b>z && b>c && b>x)
    {
       printf("O maior numero e: %.2f\n",b);
    }
    if (b<y && b<z && b<c && b<x)
    {
       printf("O maior numero e: %.2f\n",b);
    }

    return 0;
}