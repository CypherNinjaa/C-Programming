#include <stdio.h>
int ptrs(int *);
int main()
{
    int i = 2;
    int *pter = &i;
    printf("The address of i is %u\n", &i);
    ptrs(pter);
    return 0;
}
int ptrs(int *pter)
{
    printf("The value of ptr is %d\n", pter);
    printf("The value of ptr is %d\n", *pter);
}