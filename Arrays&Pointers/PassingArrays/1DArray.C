#include <stdio.h>
#include <stdlib.h>

void fun(int *p)
{
    p++;
    *p = *p * *p;
}

int main()
{
    system("cls");
    int a[5] = {10, 20, 30, 40, 50};
    fun(a);
    printf("%d", a[1]);
}