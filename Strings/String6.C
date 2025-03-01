#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    printf("%c\n", *("Hello" + 2));
    printf("%c", "Hello"[2]);
}