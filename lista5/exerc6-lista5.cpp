
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main()
{

	setlocale(LC_ALL, "Portuguese");

	char tabela[5][3][50];
	char nome[5][50];
	char sexo[5];
	char tmp[50], tmp2;
	int idade[5];
	char c;
	int x, y, z, tmp3;

	for (x = 0; x < 5; x++)
	{
		y = x + 1;
		printf("Informe o %i nome: \n", y);
		gets(nome[x]);
		printf("Informe o sexo('F' ou 'M'): \n");
		scanf("%c", &sexo[x]);
		fflush(stdin);
		printf("Informe a idade: \n");
		scanf("%i", &idade[x]);
		fflush(stdin);
	}

	printf("\n\n");

	for (x = 0; x < 5; x++)
	{
		for (y = 0; y < x + 1; y++)
		{
			if (strcmp(nome[x], nome[y]) == -1)
			{
				strcpy(tmp, nome[x]);
				strcpy(nome[x], nome[y]);
				strcpy(nome[y], tmp);
				tmp2 = sexo[x];
				sexo[x] = sexo[y];
				sexo[y] = tmp2;
				tmp3 = idade[x];
				idade[x] = idade[y];
				idade[y] = tmp3;
			}
		}
	}

	printf("NOME             SEXO            IDADE\n \n \n");
	for (z = 0; z < 5; z++)
	{
		printf("%s               %c                  %i \n", nome[z], sexo[z], idade[z]);
	}

	printf("\n\n\n");

	system("PAUSE");
	return (0);
}
