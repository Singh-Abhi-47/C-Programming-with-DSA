#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Date
{
    int day, month, year;
} date;

typedef struct Student
{
    char name[20];
    int Rank;
    date DOB;
} stud;

int main()
{
    system("cls");
    stud S;

    strcpy(S.name, "Abhimanyu Singh");
    S.Rank = 1;
    S.DOB.day = 21;
    S.DOB.month = 5;
    S.DOB.year = 2002;

    printf("Hi %s ", S.name);
    printf("\nYour GATE Rank is: %d", S.Rank);
    printf("\nDOB: %d/%d/%d", S.DOB.day, S.DOB.month, S.DOB.year);

    return 0;
}