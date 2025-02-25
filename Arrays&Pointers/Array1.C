#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    int a[4] = {10, 20, 30, 40};
    printf("The memory location of our address is: %u\n", a);
    for (int i = 0; i < 4; i++)
    {
        printf("[%d] ", a[i]);
    }
}