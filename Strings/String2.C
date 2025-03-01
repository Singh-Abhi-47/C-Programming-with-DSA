#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    char name[] = "Abhi";
    printf("Printing without data type specifier: ");
    printf(name);
    printf("\nPrinting with data type specifier: %s\n", name);
    printf("\n%c", *(name + 1)); // ===|
                                 //    |==> same
    printf("\n%c", name[1]);     // ===|
}
