#include <stdio.h>
int sum(int *, int *);
int main()
{
    int x = 4, y = 4;

    printf("X+Y = %d\n", sum(&x, &y));
    printf("X =%d\n", x);
    return 0;
}

int sum(int *x, int *y)
{
    *x = 10;
    return *x + *y;
}