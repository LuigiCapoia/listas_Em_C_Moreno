#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
#include<time.h>
//ex6
// int main()
// {



// 	char tabela[5][3][50];
// 	char nome[5][50];
// 	char sexo[5];
// 	char tmp[50], tmp2;
// 	int idade[5];
// 	char c;
// 	int x, y, z, tmp3;

// 	for (x = 0; x < 5; x++)
// 	{
// 		y = x + 1;
// 		printf("Informe o %i nome: \n", y);
// 		gets(nome[x]);
// 		printf("Informe o sexo('F' ou 'M'): \n");
// 		scanf("%c", &sexo[x]);
// 		fflush(stdin);
// 		printf("Informe a idade: \n");
// 		scanf("%i", &idade[x]);
// 		fflush(stdin);
// 	}

// 	printf("\n\n");

// 	for (x = 0; x < 5; x++)
// 	{
// 		for (y = 0; y < x + 1; y++)
// 		{
// 			if (strcmp(nome[x], nome[y]) == -1)
// 			{
// 				strcpy(tmp, nome[x]);
// 				strcpy(nome[x], nome[y]);
// 				strcpy(nome[y], tmp);
// 				tmp2 = sexo[x];
// 				sexo[x] = sexo[y];
// 				sexo[y] = tmp2;
// 				tmp3 = idade[x];
// 				idade[x] = idade[y];
// 				idade[y] = tmp3;
// 			}
// 		}
// 	}

// 	printf("NOME             SEXO            IDADE\n \n \n");
// 	for (z = 0; z < 5; z++)
// 	{
// 		printf("%s               %c                  %i \n", nome[z], sexo[z], idade[z]);
// 	}

// 	printf("\n\n\n");

// 	system("PAUSE");
// 	return (0);
// }
//////////////////////////////////////////////////////////////////////////////////
//ex7
// int main()
// {

// 	setlocale(LC_ALL, "Portuguese");

// 	char str[50];
// 	char str2[50];
// 	int tab[10], tab2[10];
// 	char c;
// 	int x, tmp, y, z, i = 0;

// 	srand(time(NULL));

// 	z = 0;
// 	for (x = 0; x < 10; x++)
// 	{
// 		z = z + 1;
// 		printf("Digite o %i n�mero(N�o repetir n�meros): \n\n", z);
// 		scanf("%i", &tab[x]);
// 		fflush(stdin);
// 	}

// 	do
// 	{
// 		y = 0;
// 		for (int j = 0; j < i; j++)
// 		{
// 			if (tab[j] == tab[i])
// 			{
// 				y = 1;
// 				printf("N�o repita n�meros, digite outro n�mero: \n\n", z);
// 				scanf("%i", &tab[i]);
// 				fflush(stdin);
// 			}
// 		}
// 		if (y == 0)
// 		{
// 			i++;
// 		}
// 	} while (i < 10);

// 	printf("\n\n");

// 	tmp = 0;
// 	for (x = 0; x < 10; x++)
// 	{
// 		for (y = 0; y < x + 1; y++)
// 		{
// 			if (x < 5)
// 			{
// 				if (tab[y] > tab[x])
// 				{
// 					tmp = tab[x];
// 					tab[x] = tab[y];
// 					tab[y] = tmp;
// 				}
// 			}
// 			else
// 			{
// 				if (tab[y] < tab[x])
// 				{
// 					tmp = tab[x];
// 					tab[x] = tab[y];
// 					tab[y] = tmp;
// 				}
// 			}
// 		}
// 	}
// 	printf("Ordem crescente dos 5 primeiros n�meros: \n\n");
// 	for (z = 0; z < 5; z++)
// 	{

// 		printf("%i \n", tab[z]);
// 	}
// 	printf("Ordem decrescente dos 5 �ltimos n�meros: \n\n");
// 	for (z = 5; z < 10; z++)
// 	{
// 		printf("%i \n", tab[z]);
// 	}

// 	system("PAUSE");
// 	return (0);
// }
///////////////////////////////////////////////////////////////////////////////////////////////
//ex8
// int main()
// {

//     setlocale(LC_ALL, "Portuguese");

//     char str[50];
//     char str2[50];
//     int tab[100], tab2[9][9];
//     char c;
//     int x, tmp, y, z, i = 0;

//     srand(time(NULL));

//     for (x = 0; x < 100; x++)
//     {
//         tab[x] = rand() % 180;
//         tab[x] = tab[x] + 20;
//     }

//     printf("\n\n");

//     tmp = 0;
//     for (x = 0; x < 100; x++)
//     {
//         for (y = 0; y < x + 1; y++)
//         {
//             if (tab[y] > tab[x])
//             {
//                 tmp = tab[x];
//                 tab[x] = tab[y];
//                 tab[y] = tmp;
//             }
//         }
//     }

//     printf("Ordem ordenada\n\n");
//     for (z = 0; z < 100; z++)
//     {

//         printf("%i \n", tab[z]);
//     }
//     x = 0;
//     for (i = 0; i <= 9; i++)
//     {
//         for (int j = 0; j <= 9; j++)
//         {
//             tab2[i][j] = tab[x];
//             x = x + 1;
//             if (j == 9)
//             {
//                 printf("%i  ", tab2[i][j]);
//                 printf("\n");
//             }
//             else
//             {

//                 printf("%i  ", tab2[i][j]);
//             }
//         }
//     }

//     system("PAUSE");
//     return (0);
// }
////////////////////////////////////////////////////////////////////////////////////////
//ex9
// int main()
// {

// 	setlocale(LC_ALL, "Portuguese");

// 	char tabela[5][3][50];
// 	char disciplina[20][50];
// 	char nome[20][50];
// 	char sexo[20], media2[20][50];
// 	char tmp[50], tmp2, tmp4[50], tmp5[50];
// 	int idade[20];

// 	int media[20], nota1[20], nota2[20];
// 	char c;
// 	int x, y, z, tmp3;
// 	int m, f;

// 	m = 0;
// 	f = 0;

// 	for (x = 0; x < 20; x++)
// 	{
// 		y = x + 1;

// 		printf("Informe o %i nome: \n", y);
// 		gets(nome[x]);
// 		printf("Informe a disciplina: \n");
// 		gets(disciplina[x]);
// 		printf("Informe o sexo('F' ou 'M'): \n");
// 		scanf("%c", &sexo[x]);
// 		fflush(stdin);
// 		printf("Informe a idade: \n");
// 		scanf("%i", &idade[x]);
// 		printf("Informe a primeira nota: \n");
// 		scanf("%i", &nota1[x]);
// 		fflush(stdin);
// 		printf("Informe a segunda nota: \n");
// 		scanf("%i", &nota2[x]);
// 		fflush(stdin);
// 		media[x] = (nota1[x] + nota2[x]) / 2;
// 		printf("Media: %i \n", media[x]);
// 		if (media[x] >= 60)
// 		{
// 			strcpy(media2[x], "APROVADO");
// 		}
// 		else
// 		{
// 			strcpy(media2[x], "REPROVADO");
// 		}
// 	}

// 	for (x = 0; x < 20; x++)
// 	{
// 		if (sexo[x] == 'F' && strcmp(media2[x], "APROVADO") == 0)
// 		{
// 			f = f + 1;
// 			printf("%d", f);
// 		}
// 		if (sexo[x] == 'M')
// 		{
// 			m = m + 1;
// 			printf("%d", m);
// 		}
// 	}

// 	printf("\n\n");

// 	for (x = 0; x < 20; x++)
// 	{
// 		for (y = 0; y < x + 1; y++)
// 		{
// 			if (strcmp(nome[x], nome[y]) == -1)
// 			{
// 				strcpy(tmp, nome[x]);
// 				strcpy(nome[x], nome[y]);
// 				strcpy(nome[y], tmp);
// 				tmp2 = sexo[x];
// 				sexo[x] = sexo[y];
// 				sexo[y] = tmp2;
// 				tmp3 = idade[x];
// 				idade[x] = idade[y];
// 				idade[y] = tmp3;
// 				strcpy(tmp4, disciplina[x]);
// 				strcpy(disciplina[x], disciplina[y]);
// 				strcpy(disciplina[y], tmp4);
// 				strcpy(tmp5, media2[x]);
// 				strcpy(media2[x], media2[y]);
// 				strcpy(media2[y], tmp5);
// 			}
// 		}
// 	}

// 	printf("NOME--------SEXO--------IDADE--------DISCIPLINA--------SITUA��O: \n \n \n");
// 	for (z = 0; z < 20; z++)
// 	{
// 		printf("%s--------%c--------%i--------%s--------%s\n\n", nome[z], sexo[z], idade[z], disciplina[z], media2[z]);
// 	}

// 	m = (m * 100) / 20;

// 	printf("O total de meninas aprovadas �: %i\n\n", f);

// 	printf("O percentual de homens na sala �: %d %%", m);

// 	printf("\n\n\n");

// 	system("PAUSE");
// 	return (0);
// }
/////////////////////////////////////////////////////////////////////////////////////
//ex10
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
