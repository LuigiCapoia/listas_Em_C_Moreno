#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    // ex7
    char nome[50], s;
    float y, x, z, w;
    printf("Informe o seu nome:\n");
    gets(nome);
    fflush(stdin);
    printf("Agora informe a sua idade:\n");
    scanf("%f", &x);
    fflush(stdin);
    printf("Informe o seu sexo (f/m):\n");
    scanf("%c", &s);
    fflush(stdin);
    printf("Agora informe o seu salario:\n");
    scanf("%f", &y);
    fflush(stdin);
    if (x > 50)
    {
        z = y * 0.35;
        w = z + y;
        printf("O seu salario foi reajustado para: %.2f \n", w);
    }
    if (x <= 24, s = "f")
    {
        z = y * 0.18;
        w = z + y;
        printf("O seu salario foi reajustado para: %.2f \n", w);
    }
    if (x <= 27, s = "m")
    {
        z = y * 0.175;
        w = z + y;
        printf("O seu salario foi reajustado para: %.2f \n", w);
    }
    if (x >= 25 && x <= 50, s = "f")
    {
        z = y * 0.23;
        w = z + y;
        printf("O seu salario foi reajustado para: %.2f \n", w);
    }
    if (x >= 25 && x <= 38, s = "m")
    {
        z = y * 0.21;
        w = z + y;
        printf("O seu salario foi reajustado para: %.2f \n", w);
    }
    if (x >= 39 && x <= 50, s = "m")
    {
        z = y * 0.23;
        w = z + y;
        printf("O seu salario foi reajustado para: %.2f \n", w);
    }
    system("pause");
    return 0;
}