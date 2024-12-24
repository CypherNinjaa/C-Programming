#include <stdio.h>
int main()
{
    // for integer pointer arithmetic
    int a = 5;
    int *ptr = &a;
    printf("the address of a is %u\n", &a);
    printf("the address of a is %u\n", ptr);
    ptr++; // 4 times increase
           // karega kyunki integer 4 bytes leta
    printf("the address of a is %u\n", ptr);
    printf("\n\n");
    // now, for char pointer arithmetic
    char b = 'A';
    char *ptr2 = &b;
    printf("the address of a is %u\n", &b);
    printf("the address of a is %u\n", ptr2);
    ptr2++;
    printf("the address of a is %c\n", ptr2);
    return 0;
}