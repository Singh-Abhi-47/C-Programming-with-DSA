#include <stdio.h>
#include <stdlib.h>

struct my_struct
{
    int i;
    struct my_struct *ptr;
};

int main()
{
    system("cls");
    struct my_struct s1, s2, s3;
    s1.i = 10;
    s2.i = 20;
    s3.i = 30;

    s1.ptr = &s2;
    s2.ptr = &s3;
    s3.ptr = NULL;

    struct my_struct *temp;
    temp = &s1;

    while (temp != NULL)
    {
        printf("%d ", temp->i);
        temp = temp->ptr;
    }

    return 0;
}
