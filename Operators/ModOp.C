#include <stdio.h>

int main()
{
    printf("The modulus operations of 5 and 2 :\n");
    printf("-ve %% -ve: %d\n", (-5) % (-2));
    printf("+ve %% -ve: %d\n", (+5) % (-2));
    printf("-ve %% +ve: %d\n", ((-5) % 2));
    printf("+ve %% +ve: %d\n", ((-5) % -2));
}