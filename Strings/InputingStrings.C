#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    char name[15];

    printf("Enter your name: ");
    scanf("%s", name);
    system("cls");
    printf("Your name is: %s", name);

    // But this won't allow you to have spaces in your string, for that
    // we need to use 'gets()'

    return 0;
}