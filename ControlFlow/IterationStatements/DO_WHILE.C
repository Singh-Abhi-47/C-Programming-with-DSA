#include <stdio.h>

int main()
{
    char choice;
    do
    {
        int choice2;
        printf("The Menu\n");
        printf("1. Hellow 1\n");
        printf("2. Hellow 2\n");
        printf("3. Hellow 3\n");
        printf("4. Hellow 4\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice2);
        switch (choice2)
        {
        case 1:
            printf("You chose 1\n");
            break;
        case 2:
            printf("You chose 1\n");
            break;
        case 3:
            printf("You chose 1\n");
            break;
        case 4:
            printf("You chose 1\n");
            break;

        default:
            printf("Wrong choice!!");
            break;
        }
        printf("Wanna run it again?(Y/N): ");
        scanf(" %c", &choice);

    } while (choice == 'Y');
}