#include <stdio.h>

int main()
{
    int choice;
    printf("\nChoose a number from 1 to 5: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("\nYou chose 1\n");
        break;
    case 2:
        printf("\nYou chose 2\n");
        break;
    case 3:
        printf("\nYou chose 3\n");
        break;

    case 4:
        printf("\nYou chose 4\n");
        break;
    case 5:
        printf("\nYou chose 5\n");
        break;
    default:
        printf("You chose %d which is out of the ranage of 1 to 5", choice);
        break;
    }
}
