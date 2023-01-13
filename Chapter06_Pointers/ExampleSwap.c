#include <stdio.h>

void swap(int *x, int *y)
{

    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 1;
    int b = 2;

    swap(&a, &b);

    int *c = &a;
    int *d = &b;

    swap(c, d);

    return 0;
}
