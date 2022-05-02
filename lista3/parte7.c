#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
// ex:14
//  int main()
//  {
//      char p[50];
//      int x;

//     printf("Digite uma palavra: ");
//     fflush(stdin);
//     gets(p);

//     x = strlen(p);

//     for (int y = 0; y < x; y++)
//     {
//         if ((y == 0) || (y = x - 1))
//         {
//             p[y] = toupper(p[y]);
//         }
//         else
//         {
//             p[y] = tolower(p[y]);
//         }
//     }

//     printf("%s", p);

//     return 0;
// }

// ex:15
int main()
{
    char Word[50], word1[50];
    int x, y;

    printf("Digite uma palavra: ");
    gets(Word);
    fflush(stdin);
    x = strlen(Word);

    printf("Digite mais uma palavra: ");
    gets(word1);
    fflush(stdin);
    y = strlen(word1);

    if (x > y)
    {
        printf("%s\n", Word);
        fflush(stdin);
    }
    else
    {
        printf("%s\n", word1);
        fflush(stdin);
    }

    return 0;
}