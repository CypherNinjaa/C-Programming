#include <stdio.h>
int main()
{
    int i = 6;
    int *j = &i;
    int **k = &j;
    printf("the value of i using k = %d\n", **k);
    printf("the address of i  = %p\n", &i);
    printf("the address of j  = %p\n", j);
    printf("the address of k  = %p\n", *k);
    return 0;
}