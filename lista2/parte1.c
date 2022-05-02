#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    // ex1
    // int x;
    // x = 0;
    // printf("escreva um numero inteiro: ", x);
    // scanf("%i", &x);
    // fflush(stdin);
    // if (x % 2 == 0)
    // {
    //     printf("O numero e par");
    // }
    // else
    // {
    //     printf("O numero e impar");
    // }
    // system("Pause");

    //////////////////////////////////////////////////////////////////////
    // ex2
    float x, w, e, y;
    x, w, e, y = 0;
    printf("Apresente a primeira nota ", x);
    scanf("%f", &x);
    fflush(stdin);
    printf("Apresente a segunda nota ", w);
    scanf("%f", &w);
    fflush(stdin);
    printf("Apresente a terceira nota ", e);
    scanf("%f", &e);
    fflush(stdin);
    y = x + w + e / 3;
    if (y >= 60)
    {
        printf("O aluno esta aprovado\n");
    }
    else
    {
        printf("O aluno esta reprovado\n");
    }
    system("Pause");

    return 0;
}