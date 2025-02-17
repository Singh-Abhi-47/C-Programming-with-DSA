#include <stdio.h>

int main()
{
    float pi = 3.14;
    float radius, area;
    printf("Enter the radius: ");
    scanf("%f", &radius);
    printf("The area is: %.2f", (pi * radius * radius));
}