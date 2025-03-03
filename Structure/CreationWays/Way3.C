#include <stdio.h>
#include <stdlib.h>

typedef struct student
{
    char name[20];
    int Roll;
} stud;

int main()
{
    system("cls");
    stud s = {"Mahadev", 14};

    printf("%s\n", s.name);
    printf("%d\n", s.Roll);

    return 0;
}