#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[20];
    int Roll;
};

int main()
{
    system("cls");
    struct student S1 = {"Raam", 9};

    printf("%s\n", S1.name);
    printf("%d\n", S1.Roll);

    return 0;
}