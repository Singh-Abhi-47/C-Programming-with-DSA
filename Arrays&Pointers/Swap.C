#include <stdio.h>
#include <stdlib.h>

int swap(int *, int *);

int main()
{
    system("cls");
    int a, b;
    printf("Enter the value of 'a': ");
    scanf("%d", &a);
    printf("Enter the value of 'b': ");
    scanf("%d", &b);

    swap(&a, &b);

    printf("So we swapped a and b\na: %d\nb: %d", a, b);
}

int swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}