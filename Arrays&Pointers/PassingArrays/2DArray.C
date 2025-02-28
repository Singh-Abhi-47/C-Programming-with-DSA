#include <stdio.h>
#include <stdlib.h>

void fun(int *p)
{
    p = p + 2;
    *p = *p * *p;
}

int main()
{
    system("cls");
    int a[2][3] = {1, 2, 3, 4, 5, 6};
    fun(a[0]);
    printf("%d", a[0][2]);
}