#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
//#define tam 10
// ex1
//  int main()
//  {
//  int vetor[10];
//  int i;
//  for (i = 0; i < 10; i++)
//  {
//  printf("informe o valor %i do vetor:  ", i);
//  scanf("%i", &vetor[i]);
//  }
//  for ( i = 0; i < 10; i++)
//  {
//  printf("%d - ", vetor[i]);
//  }

//     return 0;
// }
/////////////////////////////////////////////////////////////////
// ex2
// int main()
// {
//     int vetor[21];
//     int i;
//     for (i = 0; i < 21; i++)
//     {
//         printf("informe o valor %i do vetor:  ", i);
//         scanf("%i", &vetor[i]);
//     }
//     for (i = 20; i >= 0 ; i--)
//     {
//         printf("%d - ", vetor[i]);
//     }

//     return 0;
// }
/////////////////////////////////////////////////////////////////////////
// ex3
// int main()
// {
//     int vetor[21];
//     int i;
//     int soma = 0;
//     float media;
//     for (i = 0; i < 7; i++)
//     {
//         printf("informe a idade:  ", i);
//         scanf("%i", &vetor[i]);
//         soma = soma + vetor[i];
//     }
//     media = soma / 7;
//     printf("A media e: %.2f",media);
//     return 0;
// }
/////////////////////////////////////////////////////////////////
// ex4
//  int main()
//   {
//   int vetor[15];
//   int i;
//   for (i = 14; i >=0; i--)
//   {
//   printf("informe o valor %i do vetor:  ", i);
//   scanf("%i", &vetor[i]);
//   fflush(stdin);
//   }
//   for ( i = 0; i < 15; i++)
//   {
//   printf("%d - ", vetor[i]);
//   fflush(stdin);
//   }

//     return 0;
// }
//////////////////////////////////////////////////////////////////////
// ex14
int main()
{
    char nomes[10][50];
   // char maior[50];
    int x, imae;
    // srand(time(NULL));
    // x = rand()%100;
    for (x = 0; x < 10; x++)
    {
        printf("informe o %d nome: ", x + 1);
        gets(nomes[x]);
    }
    //strcpy(maior, nomes[0]);
    imae = 0;
    for (x = 1; x < 10; x++)
    {
        if (strcmp(nomes[x], nomes[imae]) == 1)
       // if (strlen(nomes[x])>strlen (nomes[imae]))
        //-1 se quiser o menor
        {
            //strcpy(maior, nomes[x]);
            imae = x;
        }
    }
printf("maior elemento %s esta no indice %d \n \n ",nomes[imae],imae);
    return 0;
}