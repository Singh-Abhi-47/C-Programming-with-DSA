#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    int a[5];

    printf("Enter 5 array elements: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("a[%d]= ", i);
        scanf("%d", &a[i]);
    }

    printf("Printing your array now: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("[%d]: %d\n", i, a[i]);
    }
}
