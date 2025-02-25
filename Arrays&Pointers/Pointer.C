#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    int x = 10;
    int *ptr = (int *)0;
    ptr = &x;

    printf("The address of our variable is: %u", ptr);
    printf("\nThe value of our variable is: %d", *ptr);
}