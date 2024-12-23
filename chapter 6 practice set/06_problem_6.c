#include <stdio.h>
int *sum(int, int);
float *avg(int, int);
int main()
{
    int x = 4;
    int y = 6;
    int *s;
    s = sum(x, y);
    printf("The address of Sum is %p\n", s);

    float *A;
    A = avg(x, y);
    printf("The address of average = %p\n", A);
    return 0;
}
int *sum(int x, int y)
{
    int s = x + y;
    int *sum = &s;
    printf("Sum = %d\n", s);
    return sum;
}
float *avg(int x, int y)
{
    float A = (x + y) / 2.0;
    float *ptr = &A;
    printf("Average = %.2f\n", A);
    return ptr;
}