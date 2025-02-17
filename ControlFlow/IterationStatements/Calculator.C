#include <stdio.h>
#include <stdlib.h>

int main()
{

    int choice, a, b;
    char choice2;
    printf("So you wanna run the calculator program eh?(Y/N): ");
    scanf(" %c", &choice2);

    if (choice2 == 'Y')

        while (choice2 == 'Y')
        {
            printf("What would you like to calculate: \n");
            printf("1. Addition\n");
            printf("2. Substraction\n");
            printf("3. Multiplication\n");
            printf("4. Division\n");
            printf("5. Modulo\n");
            printf("6. Square\n\n");

            scanf("%d", &choice);

            switch (choice)
            {
            case 1:
                printf("Enter first number: ");
                scanf("%d", &a);
                printf("Enter second number: ");
                scanf("%d", &b);
                printf("\nThe sum is: %d\n", a + b);
                break;

            case 2:
                printf("Enter first number: ");
                scanf("%d", &a);
                printf("Enter second number: ");
                scanf("%d", &b);
                printf("\nThe difference is: %d\n", a - b);
                break;

            case 3:
                printf("Enter first number: ");
                scanf("%d", &a);
                printf("Enter second number: ");
                scanf("%d", &b);
                printf("\nThe sum is: %d\n", a * b);
                break;

            case 4:
                printf("Enter dividend number: ");
                scanf("%d", &a);
                printf("Enter divisor number: ");
                scanf("%d", &b);
                printf("\nThe sum is: %d\n", a / b);
                break;

            case 5:
                printf("Enter dividend number: ");
                scanf("%d", &a);
                printf("Enter divisor number: ");
                scanf("%d", &b);
                printf("\nThe sum is: %d\n", a % b);
                break;

            case 6:
                printf("Enter the number whose sum is to be determined: ");
                scanf("%d", &a);
                printf("\nThe sum is: %d\n", a * a);
                break;

            default:
                printf("Wrong choice!\n");
                break;
            }

            printf("\nSo you wanna run it again?(Y/N): ");
            scanf(" %c", &choice2);

            system("cls");
        }
}