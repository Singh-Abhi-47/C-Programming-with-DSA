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

    struct student S = {"KishanLaL", 8};
    struct student *ptr;

    ptr = &S;

    printf("Address of Structure: %u", ptr);
    printf("\n%s\n", (*ptr).name); // dot(.) operator
    printf("%d\n", ptr->Roll);     // arrow(->) operator

    return 0;
}