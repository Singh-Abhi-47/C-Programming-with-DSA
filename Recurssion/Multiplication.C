#include <stdio.h>
#include <stdlib.h>

int product(int x, int y)
{
    if (y < 1)
        return y;
    else
    {
        return x + product(x, y - 1);
    }
}

int main()
{
    char choice;
    do
    {
        system("cls");
        int a, b;
        int prod;

        printf("Enter the numbers for product.\n");
        printf("First number: ");
        scanf("%d", &a);
        printf("Second number: ");
        scanf("%d", &b);

        prod = product(a, b);
        printf("Product is: %d", prod);

        printf("\nDo you want to run it agian?(Y/N): ");
        scanf(" %c", &choice);

    } while (choice == 'Y');

    system("cls");
    printf("Thank you for using the program!!\n\n");
}