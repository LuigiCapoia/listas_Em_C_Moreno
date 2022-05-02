#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
#include<time.h>
//ex1
// int main()
// {

// 	setlocale(LC_ALL, "Portuguese");

// 	char str[50];
// 	char str2[50];
// 	int tab[10];
// 	char c;
// 	int x, tmp, y, z;

// 	for (x = 0; x < 10; x++)
// 	{
// 		printf("Informe o %i elemento: \n", x);
// 		scanf("%i", &tab[x]);
// 		fflush(stdin);
// 	}

// 	printf("\n\n");

// 	tmp = 0;
// 	for (x = 0; x < 10; x++)
// 	{
// 		for (y = 0; y < x + 1; y++)
// 		{
// 			if (tab[y] > tab[x])
// 			{
// 				tmp = tab[x];
// 				tab[x] = tab[y];
// 				tab[y] = tmp;
// 			}
// 		}
// 	}
// 	for (z = 0; z < 10; z++)
// 	{
// 		printf("%i \n", tab[z]);
// 	}
// 	system("PAUSE");
// 	return (0);
// }
///////////////////////////////////////////////////////////////////
//ex2
// int main()
// {

// 	setlocale(LC_ALL, "Portuguese");

// 	char str[10][50];
// 	char str2[10][50];
// 	char tmp[50];
// 	int tab[10];
// 	char c;
// 	int x, y, z;

// 	for (x = 0; x < 10; x++)
// 	{
// 		y = x + 1;
// 		printf("Informe o %i nome: \n", y);
// 		gets(str[x]);
// 		printf("%s\n\n", str[x]);
// 	}

// 	printf("\n\n");

// 	for (x = 0; x < 10; x++)
// 	{
// 		for (y = 0; y < x + 1; y++)
// 		{
// 			if (strcmp(str[x], str[y]) == -1)
// 			{
// 				strcpy(tmp, str[x]);
// 				strcpy(str[x], str[y]);
// 				strcpy(str[y], tmp);
// 			}
// 		}
// 	}

// 	for (z = 0; z < 10; z++)
// 	{
// 		printf("%s \n", str[z]);
// 	}
// 	system("PAUSE");
// 	return (0);
// }
/////////////////////////////////////////////////////////////////////////////////////////
//ex 3
// int main()
// {

// 	setlocale(LC_ALL, "Portuguese");

// 	char str[50];
// 	char str2[50];
// 	int tab[23];
// 	char c;
// 	int x, tmp, y, z;

// 	srand(time(NULL));

// 	for (x = 0; x < 23; x++)
// 	{
// 		tab[x] = rand() % 100;
// 	}

// 	printf("\n\n");

// 	tmp = 0;
// 	for (x = 0; x < 23; x++)
// 	{
// 		for (y = 0; y < x + 1; y++)
// 		{
// 			if (tab[y] < tab[x])
// 			{
// 				tmp = tab[x];
// 				tab[x] = tab[y];
// 				tab[y] = tmp;
// 			}
// 		}
// 	}

// 	for (z = 0; z < 23; z++)
// 	{
// 		printf("%i \n", tab[z]);
// 	}

// 	system("PAUSE");
// 	return (0);
// }
/////////////////////////////////////////////////////////////////////////////////
//ex4
// int main()
// {

// 	char str[50];
// 	char str2[50];
// 	int tab[10], tab2[10];
// 	char c;
// 	int x, tmp, y, z;

// 	srand(time(NULL));

// 	for (x = 0; x < 10; x++)
// 	{
// 		tab2[x] = rand() % 90;
// 		tab2[x] = tab2[x] + 10;
// 		tab[x] = tab2[x];
// 	}

// 	printf("\n\n");

// 	tmp = 0;
// 	for (x = 0; x < 10; x++)
// 	{
// 		for (y = 0; y < x + 1; y++)
// 		{
// 			if (tab[y] < tab[x])
// 			{
// 				tmp = tab[x];
// 				tab[x] = tab[y];
// 				tab[y] = tmp;
// 			}
// 		}
// 	}

// 	printf("Ordem decrescente    Ordem normal \n");
// 	for (z = 0; z < 10; z++)
// 	{

// 		printf("%i ------------------ %i\n", tab[z], tab2[z]);
// 	}

// 	system("PAUSE");
// 	return (0);
// }
////////////////////////////////////////////////////////////////////////////////////
//ex5
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