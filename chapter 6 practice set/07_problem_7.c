#include <stdio.h>
int main()
{
    int i = 2;
    int *x = &i;
    int **y = &x;
    printf("The address of i = %p\n", &i);
    printf("The address at *x = %p\n", x);
    printf("the address of *x = %p\n", &x);
    printf("Value at *x = %d\n", *x);
    printf("The address of **y = %p\n", &y);
    printf("VAlue  at **y = %d\n", **y);
    printf("address  at **y = %p\n", *y);
    return 0;
}