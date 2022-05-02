#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    // ex25
    int x, num, i, resultado = 0;

    for (x = 1; x <= 500; x++)
    {

        for (i = 1; i <= x; i++)
        {
            resultado = 0;
            if (x % i == 0)
                resultado++;

            if (resultado == x)
            {
                printf("%i é número primo\n", x);
            }
        }
    }
    return 0;
}