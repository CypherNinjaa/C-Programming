#include <stdio.h>

// function prototype
int sum(int, int);

// function definition
int sum(int x, int y)
{
    // printf("Sum = %d\n", x + y);
    return x + y;
}
int main()
{
    int a = 12; // 12 arguments
    int b = 12;
    // function call     a and b are parameters
    printf("sum = %d", sum(a, b));
    return 0;
}
