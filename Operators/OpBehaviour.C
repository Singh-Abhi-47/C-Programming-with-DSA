// The dtype of the result might change on the basis
// of the operands.

#include <stdio.h>

int main()
{
    printf("The behaviour of operators: \n");
    printf("5+2:-- %d\n", (5 + 2));
    printf("5.0 + 2.0:-- %.1f\n", (5.0 + 2.0));
    printf("5.0 + 2:-- %.1f\n", (5.0 + 2));
    printf("5 + 2.0:-- %.1f\n", (5 + 2.0));
}