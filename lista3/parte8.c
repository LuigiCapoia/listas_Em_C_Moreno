#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
// ex:16
// int main()
// {
//     char palavra1[50], palavra2[50];
//     int x;

//     printf("Digite uma palavra: ");
//     gets(palavra1);

//     printf("Digite mais uma palavra: ");
//     gets(palavra2);

//     x = strcmp(palavra1, palavra2);

//     if (x == -1)
//     {
//         printf("%s\n", palavra1);
//     }
//     else
//     {
//         printf("%s\n", palavra2);
//     }

//     return 0;
// }

// ex:17
int main()
{
    char p[40], c[40];
    int x, y, z;

    do
    {
        printf("Digite uma palavra com no minimo3 caracteres: ");
        gets(p);
        x = strlen(p);
    } while (x < 3);

    for (int y = x - 1; y >= 0; y--)
    {
        c[y] = p[y];
    }

    c[x] = '\0';

    z = strcmp(p, c);

    if (z == 0)
    {
        printf("Essa palavra e um palidromo.");
    }
    else
    {
        printf("Essa palavra nao e um palidromo.");
    }

    return 0;
}