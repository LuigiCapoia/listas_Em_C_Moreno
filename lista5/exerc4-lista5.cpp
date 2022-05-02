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
	int x, tmp, y, z;

	srand(time(NULL));

	for (x = 0; x < 10; x++)
	{
		tab2[x] = rand() % 90;
		tab2[x] = tab2[x] + 10;
		tab[x] = tab2[x];
	}

	printf("\n\n");

	tmp = 0;
	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < x + 1; y++)
		{
			if (tab[y] < tab[x])
			{
				tmp = tab[x];
				tab[x] = tab[y];
				tab[y] = tmp;
			}
		}
	}

	printf("Ordem decrescente    Ordem normal \n");
	for (z = 0; z < 10; z++)
	{

		printf("%i ------------------ %i\n", tab[z], tab2[z]);
	}

	system("PAUSE");
	return (0);
}
