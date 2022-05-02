#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    // ex23

    for (int n1 = 11; n1 <= 30; n1++)
    {
        if (n1 % 2 == 0)
        {
            printf("%i ", n1);
        }
    }

    return 0;
}