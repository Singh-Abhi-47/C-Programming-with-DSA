#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student
{
    char name[20];
    int Roll;
} stud;

int main()
{
    system("cls");
    stud s[2];
    s[0].Roll = 1;
    s[1].Roll = 2;
    strcpy(s[0].name, "Abhi");
    strcpy(s[1].name, "Abhimanyu");

    for (int i = 0; i < 2; i++)
    {
        printf("%s\n", s[i].name);
        printf("%d\n", s[i].Roll);
    }

    return 0;
}