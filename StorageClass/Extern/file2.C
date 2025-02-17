#include <stdio.h>

extern int ExternVar;

int main()
{
    printf("\nBuddy this is an extern variable\nAnd the value is %d", ExternVar);
}