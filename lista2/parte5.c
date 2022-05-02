#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    //ex6
    int x, y, z;
    char nome[50],nome2[50];
    printf("Informe o nome da 1° pessoa:\n");
   gets(nome);
    fflush(stdin);
    printf("Agora informe a sua idade:\n");
    scanf("%i", &x);
    fflush(stdin);
    printf("Informe o nome da 2° pessoa:\n");
    gets(nome2);
    fflush(stdin);
    printf("Agora informe a sua idade:\n ");
    scanf("%i", &y);
    fflush(stdin);
    if (x > y)
    {
        printf("O %s e mais velho\n",nome);
    }
    if (x < y)
    {
       printf("O %s e mais velho\n",nome2);
    }
    if (x == y)
    {
        printf("Os dois tem a mesma idade\n");
    }
    system("pause");

    return 0;
}