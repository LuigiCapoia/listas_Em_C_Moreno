#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main()
{

	setlocale(LC_ALL, "Portuguese");

	char str[10][50];
	char str2[10][50];
	char tmp[50];
	int tab[10];
	char c;
	int x, y, z;

	for (x = 0; x < 10; x++)
	{
		y = x + 1;
		printf("Informe o %i nome: \n", y);
		gets(str[x]);
		printf("%s\n\n", str[x]);
	}

	printf("\n\n");

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < x + 1; y++)
		{
			if (strcmp(str[x], str[y]) == -1)
			{
				strcpy(tmp, str[x]);
				strcpy(str[x], str[y]);
				strcpy(str[y], tmp);
			}
		}
	}

	for (z = 0; z < 10; z++)
	{
		printf("%s \n", str[z]);
	}
	system("PAUSE");
	return (0);
}
