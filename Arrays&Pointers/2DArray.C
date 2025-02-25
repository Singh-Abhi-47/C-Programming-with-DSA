#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int a[2][3] = {1, 2, 3, 4, 5, 6};
    printf("Size of int here is: %d\n\n", sizeof(a[0][0]));

    printf("Let's just print some addresses -->\n");
    printf("a: %u\n", a);
    printf("&a: %u\n", &a);
    printf("a[0]: %u\n", a[0]);
    printf("a+1: %u\n", a + 1);
    printf("&a+1: %u\n", &a + 1);
    printf("a[0]+1: %u\n", a[0] + 1);

    printf("\nLet's just print those addresses' sizes -->\n");
    printf("a: %u\n", sizeof(a));
    printf("&a: %u\n", sizeof(&a));
    printf("a[0]: %u\n", sizeof(a[0]));
    printf("a+1: %u\n", sizeof(a + 1));
    printf("&a+1: %u\n", sizeof(&a + 1));
    printf("a[0]+1: %u\n", sizeof(a[0] + 1));
}