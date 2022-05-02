#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
// ex:3
// int main()
// {
//     char p[40], c[40];
//     int x, y;

//     do
//     {
//         printf("Digite uma palavra: ");
//         gets(p);
//         fflush(stdin);
//         x = strlen(p);
//     } while (x < 4);

//     for (y = 1; y <= 3; y++)
//     {
//         c[y - 1] = p[y];
//     }

//     c[3] = '\0';

//     printf("%s", c);

//     return 0;
// }

// ex:4
int main()
{
    char p[40], c[40];
    int x, y, z;
    do
    {
        printf("Digite uma palavra com 5 caracteres: ");
        gets(p);
        fflush(stdin);
        x = strlen(p);
    } while (x < 5);

        z = strlen(p);
    for (y = (z-3); y <= z; y++)
    {
        c[y - 1] = p[y];
    }

    c[4] = '\0';

    printf("%s", c);

    return 0;
}