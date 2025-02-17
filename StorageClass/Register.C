#include <stdio.h>

int main()
{
    register int a = 100;
    for (int i = 1; i <= a; i++)
    {
        if (i % 10 == 1)
            printf("\n");

        printf("%d ", i);
    }
}