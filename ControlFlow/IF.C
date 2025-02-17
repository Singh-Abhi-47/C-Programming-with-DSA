#include <stdio.h>

int main()
{

    int a, b;
    printf("\nEnter two numbers and let's check the bigger one: \n");
    printf("Number1: ");
    scanf("%d", &a);
    printf("Number2: ");
    scanf("%d", &b);

    if (a > b)
        printf("\n%d is greater", a);
    if (b > a)
        printf("\n%d is greater", b);
}