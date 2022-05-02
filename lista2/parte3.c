#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    //ex4
    int x, y, z;
    printf("Informe o primeiro valor: ");
    scanf("%i", &x);
    fflush(stdin);
    printf("Informe o segundo valor: ");
    scanf("%i", &y);
    fflush(stdin);
    if (x > y)
    {
        printf("O valor 1 e maior.\n");
    }
    if (x < y)
    {
        printf("O valor 2 e maior.\n");
    }
    if (x == y)
    {
        printf("Os valores sao iguais.\n");
    }
    system("pause");

    return 0;
}