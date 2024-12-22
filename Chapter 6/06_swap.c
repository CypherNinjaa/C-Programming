#include <stdio.h>
void swap(int *, int *);
int main()
{
    int a = 4, b = 5;
    swap(&a, &b);
    printf("A = %d and B= %d", a, b);
    return 0;
}
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}