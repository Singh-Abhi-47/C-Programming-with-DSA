#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    char choice;
    int n;
    int *ptr;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));
    do
    {

        printf("Enter your elements: ");
        for (int i = 0; i < n; i++)
        {
            scanf("%d", (ptr + i));
        }
        printf("\nPrinting your elements: \n");
        for (int i = 0; i < n; i++)
        {
            printf("Element %d: %d\n", (i + 1), *(ptr + i));
        }

        printf("Do you wanna run the program again?(Y/N)");
        scanf(" %c", &choice);

        if (choice == 'Y')
        {
            printf("Renter the number of elements: ");
            scanf("%d", &n);

            ptr = (int *)realloc(ptr, n * sizeof(int));
        }

    } while (choice == 'Y');

    free(ptr);
}