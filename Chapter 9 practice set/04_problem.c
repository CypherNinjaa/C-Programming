#include <stdio.h>
typedef struct complex
{

    int imaginary;
    int real;
} c;
int main()
{
    c c1;
    c *ptr = &c1;
    ptr->imaginary = 1;
    ptr->real = 2;

    printf("the value of complex is %d + i%d", ptr->imaginary, ptr->real);
    return 0;
}