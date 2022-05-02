#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#define tam 10
// ex9
// int main()
// {
//     int num[tam];
//     int tmp, x;
//     bool existe;
//     srand(time(NULL));

//     for (x = 0; x < tam; x++)
//     {
//         do
//         {
//             existe=false;

//             tmp = (rand() % 10) + 1;
//             for (int y = 0; y < x; y++)
//             {
//                 if (tmp == num[y])
//                 {
//                     existe = true;
//                 }
//             }
//         } while (existe);
//         num[x] = tmp;
//     }
//     for (x = 0; x < tam; x++)
//     {
//         printf("%d \n", num[x]);
//     }

//     return 0;
// }
///////////////////////////////////////////////////////////////////////
// ex5
int main()
{
    int vetor[10];
    int v2[10];
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("informe o valor %i do vetor:  ", i);
        scanf("%i", &vetor[i]);
    }
      v2[i] = vetor[i];
    for (i = 0; i < 10; i++)
    {
        printf("%d - ", v2[i]);
    }

    return 0;
}