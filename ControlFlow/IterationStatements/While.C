#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number and let's jot down its digits(I'll prefer more than 3 digit number):");
    scanf("%d", &n);

    while (n)
    {
        printf("%d ", n % 10);
        n = n / 10;
    }
}