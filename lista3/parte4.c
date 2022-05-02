#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
// ex:7
// int main()
// {
//     char nome1[40];
//     int x;
//     printf("Escreva uma frase com menos de 40 caracteres: ", nome1);
//     gets(nome1);
//     fflush(stdin);

//     for (x = 0; x < strlen(nome1); x++)
//         nome1[x] = toupper(nome1[x]);
//     printf("%s\n\t", nome1);
//     system("pause");
//     return 0;tolower
// }

// ex:8
int main()
{
    char nome1[40];
    int x;
    printf("Escreva uma frase com menos de 40 caracteres: ", nome1);
    gets(nome1);
    fflush(stdin);

    for (x = 0; x < strlen(nome1); x++)
        nome1[x] = tolower(nome1[x]);
    printf("%s\n\t", nome1);
    system("pause");
    return 0;
}