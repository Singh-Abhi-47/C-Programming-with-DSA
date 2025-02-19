#include <stdio.h>
#include <stdlib.h>

int D2B(int n)
{
    if (n < 1)
    {
        return n;
    }
    else
    {
        D2B(n / 2);
        printf("%d ", n % 2);
    }
}

int main()
{
    char choice;
    do
    {
        system("cls");
        int a;
        printf("Enter a decimal number to be converted to binary: ");
        scanf("%d", &a);
        printf("\nThe answer is: ");
        D2B(a);

        printf("\n\nWanna run it agian?(Y/N)");
        scanf(" %c", &choice);
    } while (choice == 'Y');
    system("cls");
    printf("Thanks for using the program");
}