#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int n;
    int *ptr;
    printf("Enter the number of bytes you wanna assing: ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter your elements please: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i));
    }
    system("cls");

    printf("\nPrinting the elements: \n");
    for (int i = 0; i < n; i++)
    {
        printf("Item number %d: %d\n", i, *(ptr + i));
    }

    free(ptr);

    return 0;
}