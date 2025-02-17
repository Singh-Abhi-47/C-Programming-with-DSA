#include <stdio.h>

void staticfunc()
{
    static int a = 1;
    a++;
    printf("%d ", a);
}

void func()
{
    int a = 1;
    a++;
    printf("%d ", a);
}

int main()
{
    printf("Static func: ");
    staticfunc();
    staticfunc();
    staticfunc();
    staticfunc();

    printf("\nNormal func: ");
    func();
    func();
    func();
    func();
}