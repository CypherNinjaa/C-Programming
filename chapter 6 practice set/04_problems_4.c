#include <stdio.h>
int refrence(int *);
int main()
{
    int n = 10;
    refrence(&n);
    printf("X = %d\n", n);
    return 0;
}
int refrence(int *x)
{
    printf("THe value of n = %d\n", *x);
    *x = *x * 10;
}