#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    // ex9
    int x;
    printf("Informe um numero:\n");
    scanf("%i", &x);
    fflush(stdin);
    if (x >= 50 && x <= 100)
    {
        printf("O numero: %i esta entre 50 e 100.\n", x);
    }
    else
    {
        printf("O numero: %i nao esta entre 50 e 100.\n", x);
    }

    system("pause");
    return 0;
}