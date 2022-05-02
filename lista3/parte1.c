#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
// ex:1
/*int main()
{
    char x[40];
    int y;

    printf("Digite uma palavra: ");
    gets(x);
    fflush(stdin);

    y = strlen(x);

    printf("Essa palavra tem %i caracteres.", y);

    return 0;
}*/
// ex:2
int main()
{
    char x[40], y[40];

    printf("Digite uma palavra: ");
    fflush(stdin);
    gets(x);

    strncpy(y, x, 4);

    printf("Esses sao os 4 primeiros caracteres dessa palavra: %s\n", y);

    return 0;
}