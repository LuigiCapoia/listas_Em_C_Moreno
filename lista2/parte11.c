#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    // ex12
    int x;
    float soma = 0;
    x=0;
    while (x<=9)
    {
       float y;
        printf("Digite o %i valor:", x + 1);
        scanf("%f", &y);
        soma += y;
        x++;
    }

    printf("\nA media dos numeros e: %.2f\n", soma /10);

    printf("\n");
    system("PAUSE");
    return 0;
}