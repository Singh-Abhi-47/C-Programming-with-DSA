// let's try to make a calculator kind of functions here:
#include <stdio.h>
#include <stdlib.h>

int add(int, int);
int sub(int, int);
int prod(int, int);
int divv(int, int);
int mod(int, int);

int main()
{
    char choice;
    do
    {
        system("cls");
        int ch;
        int a, b;

        printf("Enter first number: ");
        scanf("%d", &a);
        printf("Enter the second number: ");
        scanf("%d", &b);

        printf("Chhose what kind of operation you wanna perform:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulo\n");

        printf("Your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Your answer is: %d\n\n", add(a, b));
            break;

        case 2:
            printf("Your answer is: %d\n\n", sub(a, b));
            break;

        case 3:
            printf("Your answer is: %d\n\n", prod(a, b));
            break;

        case 4:
            printf("Your answer is: %d\n\n", div(a, b));
            break;

        case 5:
            printf("Your answer is: %d\n\n", mod(a, b));
            break;

        default:
            printf("Wrong choice!!\n\n");
            break;
        }
        printf("Do you wanna run it again?(Y/N): ");
        scanf(" %c", &choice);
    } while (choice == 'Y');
    system("cls");
    printf("Thanks for using :)\n");
}

int add(int x, int y)
{
    return x + y;
}

int sub(int x, int y)
{
    return x - y;
}

int prod(int x, int y)
{
    return x * y;
}

int divv(int x, int y)
{
    return x / y;
}

int mod(int x, int y)
{
    return x % y;
}