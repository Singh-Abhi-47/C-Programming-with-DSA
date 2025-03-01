#include <stdio.h>
#include <stdlib.h>

int One()
{
    char arr[3] = {'R', 'A', 'M'};
    printf("%s\n", arr);
    return 0;
}

int Two()
{
    char arr[4] = {'R', 'A', 'M'};
    printf("%s\n", arr);
    return 0;
}

int main()
{
    system("cls");
    One();
    Two();
    return 0;
}