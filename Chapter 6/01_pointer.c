#include <stdio.h>
int main()
{
    int i = 72;
    int *j = &i; // j is a pointer  pointing to i (integer pointer)
    printf("the address of is %p\n", &i);
    printf("the address of is %p\n", &j);
    printf("the address of is %p\n", j);
    printf("the address of is %d\n", *j);

    return 0;
}