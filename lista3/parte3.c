#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
// ex:6
// int main()
// {
//     char x[50], y[50], z[50];

//     printf("Digite uma frase: ");
//     gets(x);
//    fflush(stdin);

//     printf("Digite mais uma frase: ");
//     gets(y);
//      fflush(stdin);
//     strcpy(z, "");

//     printf("%s \n", z);

//     strcat(z, x);
//     strcat(z, y);

//     printf("%s", z);

//     return 0;
// }

// ex:5
int main()
{
    char p[50];
    int x, y;

    printf("Digite uma palavra: ");
    gets(p);
    fflush(stdin);
    x = strlen(p);
    for (y = 0; y < x; y++)
    {
        printf("%c \n", p[y]);
    }
    return 0;
}