#include <stdio.h>

int main()
{
    int a, b;
    printf("\nEnter two numbers and let's see the bigger one: \n");
    printf("Number1: ");
    scanf("%d", &a);
    printf("Number2: ");
    scanf("%d", &b);

    if (a > b)
        printf("%d is the bigger one.", a);
    else
        printf("%d is the bigger one.", b);
}