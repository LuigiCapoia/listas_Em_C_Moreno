#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    // ex13
    int x,y;
    float soma = 0;
    do
{
        printf("Digite um valor entre (10 e 50) valor: ");
        scanf("%i", &x);
        soma=x;
} while (x>=51 || x<=9);
do
{
   printf("Digite um valor que seja 15 unidades maior que o primeiro: ");
        scanf("%i", &y);
        soma=x+y;
} while (y<=x+14);

printf("A soma dos dois valores e %.0f: ",soma);
    printf("\n");
    system("PAUSE");
    return 0;
}