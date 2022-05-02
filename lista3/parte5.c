#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
// ex:9
// int main()
// {

//     char palavra[50];
//     int x;

//     printf("Digite uma palavra: ");
//     gets(palavra);

//     x = strlen(palavra);

//     for (int y = x - 1; y >= 0; y--)
//     {
//         printf("%c", palavra[y]);
//     }

//     return 0;
// }

// ex:10
int main()
{
    char nome1[11];
    int x;
    printf("Escreva uma frase com menos de 5 a 10 caracteres: ", nome1);
    gets(nome1);
    fflush(stdin);
    for (x = 0; x < strlen(nome1); x++)
        nome1[x] = toupper(nome1[x]);
    for (x = 1; x < strlen(nome1); x = x + 2)
        nome1[x] = tolower(nome1[x]);
    printf("%s\n\t", nome1);
    system("pause");
    return 0;
}