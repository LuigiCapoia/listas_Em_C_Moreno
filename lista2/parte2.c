#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    //ex3
    float x, y, z, t, w;
    char sub, nome;
    printf("primeira nota: ");
    scanf("%f", &x);
    fflush(stdin);
    printf("segunda nota: ");
    scanf("%f", &y);
    fflush(stdin);
    z = (x + y) / 2;
    if (z >= 60)
    {
        printf("APROVADO\n");
    }
    else
    {
        printf("REPROVADO\n");
    }
    printf("Deseja fazer prova substitutiva?\n(S/N): ", nome);
    scanf("%c", &nome);
    fflush(stdin);
    if (nome == 'S')
    {
        printf("Apresente a nota: ", t);
        scanf("%f", &t);
        fflush(stdin);
        w = z + t / 2;
        printf("Media: %.2f\n", w);
    }
    else
    {
        z = (x + y) / 2;
        printf("Media: %.2f\n", z);
    }

    system("pause");
    return (0);
}