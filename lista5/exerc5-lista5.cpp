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
	int tab[100], tab2[10];
	char c;
	int x, tmp, y, z, i = 0;

	srand(time(NULL));

	do
	{
		tab[i] = rand() % 300;
		y = 0;
		for (int j = 0; j < i; j++)
		{
			if (tab[j] == tab[i])
			{
				y = 1;
			}
		}
		if (y == 0)
		{
			i++;
		}
	} while (i < 100);

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

	for (z = 0; z < 100; z++)
	{

		printf("%i \n", tab[z]);
	}

	printf("Qual o valor deseja procurar? ");
	scanf("%i", &z);
	for (x = 0; x < 100; x++)
	{
		if (tab[x] == z)
		{
			printf("\n \n");
			printf("O valor foi localizado no �ndice: %i\n", x);
			y = 1;
		}
	}
	printf("\n\n");
	if (y != 1)
	{
		printf("Valor n�o encontrado!\n");
	}

	system("PAUSE");
	return (0);
}
