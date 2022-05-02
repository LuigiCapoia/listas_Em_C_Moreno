#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
int v[1000];
int x, y, tot, dot;
int main()
{
    for (x = 1; x <= 1000; x++)
    {
        dot = 0;
        for (y = 0; y <= x; y++)
        {
            if (x % y == 0)
            {
                dot++;
            }
            if (dot == 2)
            {
                v[tot] = x;
                tot++;
            }
        }
    }
    printf("\n", v[x]);
    printf("Valor no encontrado!\n");
    system("PAUSE");
    return 0;
}