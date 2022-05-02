#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main()
{

      setlocale(LC_ALL, "Portuguese");

      char produto[9][50];
      char cat[5][5][50];
      int x;

      strcpy(cat[0][0], "Azul");
      strcpy(cat[0][1], "Verde");
      strcpy(cat[0][2], "Vermelho");
      strcpy(cat[0][3], "Preto");
      strcpy(cat[0][4], "Branco");
      fflush(stdin);

      strcpy(produto[0], "Camiseta");
      strcpy(produto[1], "Regata");
      strcpy(produto[2], "Camisa");
      strcpy(produto[3], "Camisa polo");
      strcpy(produto[4], "Blusa");
      strcpy(produto[5], "Jaqueta");
      strcpy(produto[6], "Cal�a");
      strcpy(produto[7], "Shorts");
      strcpy(produto[8], "Pijama");
      strcpy(produto[9], "Samba-can��o");

      for (int i = 0; i < 5; i++)
      {
            for (int j = 0; j < 5; j++)
            {
                  if (i != 0)
                  {
                        switch (i)
                        {
                        case 1:
                              strcpy(cat[i][j], "P     ");
                              break;
                        case 2:
                              strcpy(cat[i][j], "M     ");
                              break;
                        case 3:
                              strcpy(cat[i][j], "G     ");
                              break;
                        case 4:
                              strcpy(cat[i][j], "GG    ");
                              break;
                        }
                  }
            }
      }

      for (x = 0; x < 10; x++)
      {
            printf("Produto: %s\n\n", produto[x]);
            printf("--------------------------------------------------------------------\n");
            for (int i = 0; i < 5; i++)
            {
                  for (int j = 0; j < 5; j++)
                  {
                        if (j == 4)
                        {
                              printf("%s", cat[i][j]);
                              printf("\n\n");
                        }
                        else
                        {
                              printf("%s   ", cat[i][j]);
                        }
                  }
            }
            printf("-------------------------------------------------------------------\n");
      }

      printf("\n\n\n");

      system("PAUSE");
      return (0);
}
