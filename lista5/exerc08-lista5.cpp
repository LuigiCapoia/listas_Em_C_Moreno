#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
#include <time.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");

    char str[50];
    char str2[50];
    int tab[100], tab2[9][9];
    char c;
    int x, tmp, y, z, i = 0;

    srand(time(NULL));

    for (x = 0; x < 100; x++)
    {
        tab[x] = rand() % 180;
        tab[x] = tab[x] + 20;
    }

    printf("\n\n");

    tmp = 0;
    for (x = 0; x < 100; x++)
    {
        for (y = 0; y < x + 1; y++)
        {
            if (tab[y] > tab[x])
            {
                tmp = tab[x];
                tab[x] = tab[y];
                tab[y] = tmp;
            }
        }
    }

    printf("Ordem ordenada\n\n");
    for (z = 0; z < 100; z++)
    {

        printf("%i \n", tab[z]);
    }
    x = 0;
    for (i = 0; i <= 9; i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            tab2[i][j] = tab[x];
            x = x + 1;
            if (j == 9)
            {
                printf("%i  ", tab2[i][j]);
                printf("\n");
            }
            else
            {

                printf("%i  ", tab2[i][j]);
            }
        }
    }

    system("PAUSE");
    return (0);
}
