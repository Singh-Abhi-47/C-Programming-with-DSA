#include <stdio.h>
#include <stdlib.h>

int add(int x, int y)
{
    if (y < 1)
    {
        return x;
    }
    else
    {
        return add(x + 1, y - 1);
    }
}

int main()
{
    char choice;
    do
    {
        system("cls");
        int a, b;
        int sum;

        printf("Enter two numbers:\n");
        printf("First number: ");
        scanf("%d", &a);
        printf("Second Number: ");
        scanf("%d", &b);

        sum = add(a, b);
        printf("Sum is: %d\n\n", sum);

        printf("Wanna run it again?(Y/N): ");
        scanf(" %c", &choice);
    } while (choice == 'Y');
    system("cls");
    printf("Thank you for using the program\n\n");
}