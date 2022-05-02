#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

//(nome da disciplina, nome, idade, sexo, nota1, nota2,
// sub). Calcule a m�dia e armazene a situa��o �Aprovado� ou �Reprovado�

int main()
{

	setlocale(LC_ALL, "Portuguese");

	char tabela[5][3][50];
	char disciplina[20][50];
	char nome[20][50];
	char sexo[20], media2[20][50];
	char tmp[50], tmp2, tmp4[50], tmp5[50];
	int idade[20];

	int media[20], nota1[20], nota2[20];
	char c;
	int x, y, z, tmp3;
	int m, f;

	m = 0;
	f = 0;

	for (x = 0; x < 20; x++)
	{
		y = x + 1;

		printf("Informe o %i nome: \n", y);
		gets(nome[x]);
		printf("Informe a disciplina: \n");
		gets(disciplina[x]);
		printf("Informe o sexo('F' ou 'M'): \n");
		scanf("%c", &sexo[x]);
		fflush(stdin);
		printf("Informe a idade: \n");
		scanf("%i", &idade[x]);
		printf("Informe a primeira nota: \n");
		scanf("%i", &nota1[x]);
		fflush(stdin);
		printf("Informe a segunda nota: \n");
		scanf("%i", &nota2[x]);
		fflush(stdin);
		media[x] = (nota1[x] + nota2[x]) / 2;
		printf("Media: %i \n", media[x]);
		if (media[x] >= 60)
		{
			strcpy(media2[x], "APROVADO");
		}
		else
		{
			strcpy(media2[x], "REPROVADO");
		}
	}

	for (x = 0; x < 20; x++)
	{
		if (sexo[x] == 'F' && strcmp(media2[x], "APROVADO") == 0)
		{
			f = f + 1;
			printf("%d", f);
		}
		if (sexo[x] == 'M')
		{
			m = m + 1;
			printf("%d", m);
		}
	}

	printf("\n\n");

	for (x = 0; x < 20; x++)
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
				strcpy(tmp4, disciplina[x]);
				strcpy(disciplina[x], disciplina[y]);
				strcpy(disciplina[y], tmp4);
				strcpy(tmp5, media2[x]);
				strcpy(media2[x], media2[y]);
				strcpy(media2[y], tmp5);
			}
		}
	}

	printf("NOME--------SEXO--------IDADE--------DISCIPLINA--------SITUA��O: \n \n \n");
	for (z = 0; z < 20; z++)
	{
		printf("%s--------%c--------%i--------%s--------%s\n\n", nome[z], sexo[z], idade[z], disciplina[z], media2[z]);
	}

	m = (m * 100) / 20;

	printf("O total de meninas aprovadas �: %i\n\n", f);

	printf("O percentual de homens na sala �: %d %%", m);

	printf("\n\n\n");

	system("PAUSE");
	return (0);
}
