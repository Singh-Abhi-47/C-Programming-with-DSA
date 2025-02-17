#include <stdio.h>

int main()
{
    int choice;
    int fact = 1, n;
    int sum = 0;
    printf("Enter your choice: \n");

    printf("1. Factorial\n");
    printf("2. Table of the number\n");
    printf("3. Sum till the number\n");

    scanf("%d", &choice);

    switch (choice)
    {
    case 1:

        printf("\n\nEnter the number for the factorial: ");
        scanf("%d", &n);
        for (int i = n; i >= 1; i--)
            fact *= i;
        printf("The factorial of %d is %d", n, fact);
        break;

    case 2:
        printf("Enter the number for which you wanna print the table: ");
        scanf("%d", &n);
        for (int i = 1; i <= 10; i++)
        {
            printf("%d\n", n * i);
        }
        break;

    case 3:

        printf("Enter the number till you want to find the sum: ");
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
        {
            sum = sum + i;
        }
        printf("The sum of numbers till %d is %d", n, sum);
        break;

    default:
        printf("\nWrong choice\n");
        break;
    }
}