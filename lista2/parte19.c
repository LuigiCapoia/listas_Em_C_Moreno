#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    // ex21e22

    int n1, n2, m1, m2, i = 2;

    printf("Digite um número: ");
    scanf("%i", &n1);
    fflush(stdin);

    printf("Digite mais um número: ");
    scanf("%i", &n2);
    fflush(stdin);

    m1 = n1 + n1;
    m2 = n2 + n2;

    if (n2 == 0 || n1 == 0)
    {
        printf("O produto desses números é 0");
    }
    else
    {
        if (n2 == 1)
        {
            printf("O produto desses números é %i", n1);
        }
        else
        {
            if (n1 == 1)
            {
                printf("O produto desses números é %i", n2);
            }
            else
            {
                if (n2 == 2)
                {
                    printf("O produto desses números é %i", m1);
                }
                else
                {
                    if (n1 == 2)
                    {
                        printf("O produto desses números é %i", m2);
                    }
                    else
                    {
                        if (n1 > 2)
                        {
                            do
                            {
                                m2 = m2 + n2;
                                i++;
                            } while (i < n1);
                            printf("O produto desses números é %i", m2);
                        }
                        else
                        {
                            if (n2 > 2)
                            {
                                do
                                {
                                    m2 = m2 + n2;
                                    i++;
                                } while (i < n1);
                                printf("O produto desses números é %i", m1);
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}