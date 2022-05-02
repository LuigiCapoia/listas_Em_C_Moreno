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
	int tab[10], tab2[10];
	char c;
	int x, tmp, y, z, i = 0;

	srand(time(NULL));

	z = 0;
	for (x = 0; x < 10; x++)
	{
		z = z + 1;
		printf("Digite o %i n�mero(N�o repetir n�meros): \n\n", z);
		scanf("%i", &tab[x]);
		fflush(stdin);
	}

	do
	{
		y = 0;
		for (int j = 0; j < i; j++)
		{
			if (tab[j] == tab[i])
			{
				y = 1;
				printf("N�o repita n�meros, digite outro n�mero: \n\n", z);
				scanf("%i", &tab[i]);
				fflush(stdin);
			}
		}
		if (y == 0)
		{
			i++;
		}
	} while (i < 10);

	printf("\n\n");

	tmp = 0;
	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < x + 1; y++)
		{
			if (x < 5)
			{
				if (tab[y] > tab[x])
				{
					tmp = tab[x];
					tab[x] = tab[y];
					tab[y] = tmp;
				}
			}
			else
			{
				if (tab[y] < tab[x])
				{
					tmp = tab[x];
					tab[x] = tab[y];
					tab[y] = tmp;
				}
			}
		}
	}
	printf("Ordem crescente dos 5 primeiros n�meros: \n\n");
	for (z = 0; z < 5; z++)
	{

		printf("%i \n", tab[z]);
	}
	printf("Ordem decrescente dos 5 �ltimos n�meros: \n\n");
	for (z = 5; z < 10; z++)
	{
		printf("%i \n", tab[z]);
	}

	system("PAUSE");
	return (0);
}
