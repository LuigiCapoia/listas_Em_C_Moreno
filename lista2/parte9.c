#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    // ex10
    int x;
    float soma = 0;
    const int max = 10;
    for (x = 0; x < max; x++)
    {
        float y;
        printf("Digite o %i valor:", x + 1);
        scanf("%f", &y);
        soma += y;
    }
    printf("\nA media dos numeros e: %.2f\n", soma / max);

    printf("\n");
    system("PAUSE");
    return 0;
}