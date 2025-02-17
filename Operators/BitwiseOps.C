#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers:\n");
    printf("Number1: ");
    scanf("%d", &a);
    printf("Number2: ");
    scanf("%d", &b);
    printf("\nBitwise OR= %d", a | b);
    printf("\nBitwise AND= %d", a & b);
    printf("\nBitwise XOR= %d", a ^ b);

    printf("\n\n Left Shift- 10<<1: %d", 10 << 1);
    printf("\n\n Right Shift- 10>>1: %d", 10 >> 1);
}