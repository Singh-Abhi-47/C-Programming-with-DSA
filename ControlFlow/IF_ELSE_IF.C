#include <stdio.h>

int main()
{
    int a, b, c;
    printf("\nEnter three numbers and let's have the bigger one: \n");
    printf("Number1: ");
    scanf("%d", &a);
    printf("Number2: ");
    scanf("%d", &b);
    printf("Number3: ");
    scanf("%d", &c);

    if (a > b && a > c)
        printf("\n%d is the bigger one", a);
    else if (b > c)
        printf("\n%d is the bigger one", b);
    else
        printf("\n%d is the bigger one", c);
}