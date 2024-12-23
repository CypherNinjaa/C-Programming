#include <stdio.h>
int main()
{
    int i = 2;
    int *ptr = &i;
    printf("the address of i %u\n", &i);
    printf("the address of ptr %u\n", *ptr);
    return 0;
}
