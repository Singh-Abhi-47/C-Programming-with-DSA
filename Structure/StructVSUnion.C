#include <stdio.h>
#include <stdlib.h>

struct student
{
    char a;
    int b;
    float c;
};

union stud
{
    char x;
    int y;
    float z;
};

int main()
{
    system("cls");
    struct student S;
    union stud St;

    printf("Size of char: %d\n", sizeof(char));
    printf("Size of int: %d\n", sizeof(int));
    printf("Size of float: %d\n", sizeof(float));

    printf("\nSize of structure: %d\n", sizeof(S));
    printf("Size of union: %d\n", sizeof(St));

    return 0;
}