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
	int tab[23];
	char c;
	int x, tmp, y, z;

	srand(time(NULL));

	for (x = 0; x < 23; x++)
	{
		tab[x] = rand() % 100;
	}

	printf("\n\n");

	tmp = 0;
	for (x = 0; x < 23; x++)
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

	for (z = 0; z < 23; z++)
	{
		printf("%i \n", tab[z]);
	}

	system("PAUSE");
	return (0);
}
