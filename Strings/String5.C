#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    char *p = "Rahul";
    printf(p);
    printf("\n");
    p = "Abhi"; // This is valid
    printf(p);

    /*  This is INVALID
    char a[] = "Pankaj";
    a = "Abhi";
    */
}