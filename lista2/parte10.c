#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    // ex11
    int x;
    float soma = 0;
    x=0;
do
{
        float y;
        printf("Digite o %i valor:", x + 1);
        scanf("%f", &y);
        soma += y;
        x++;
} while (x<=9);

    printf("\nA media dos numeros e: %.2f\n", soma /10);

    printf("\n");
    system("PAUSE");
    return 0;
}