#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    // Let's say you need to store 3 strings for names
    char arr[3][10] = {"Thomas", "Arthur", "John"};

    printf("%s\n", arr[0]);
    printf("%s\n", arr[1]);
    printf("%s", arr[2]);
}
// But in here we have some memory wastage
// Also you cannot alter any elements in here, you can just mess with the array content
