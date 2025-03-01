#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    /*char* means a pointer to modifiable memory, which is incorrect in modern C++.
    In C++, string literals are treated as const char*,
    so assigning them to char* causes a type mismatch warning.
    */
    const char *ptr[3] = {"Thomas", "Arthur", "John"};

    /*This removes the warning because it correctly tells the compiler that
    the strings are constant and should not be modified.*/

    printf("%s\n", ptr[0]);
    printf("%s\n", ptr[1]);
    printf("%s\n", ptr[2]);

    printf("\n---------------------------\n");

    printf("%s\n", *(ptr + 1));
    printf("%s\n", ptr[1]);
    printf("%s\n", ptr[1] + 2);

    return 0;
}