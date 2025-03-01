// gets() is removed from the C standard Lib due to security vulnerabilities (buffer overflow risks).
// hence we use fgets(variable_name, size, stdin);
// variable_name → The character array (string) where input will be stored.
// size → Maximum number of characters (including the null terminator \0) to read.
// stdin → Standard input (keyboard).

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[20];

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin); // Read input including spaces

    printf("Your full name is : %s", name);

    return 0;
}
