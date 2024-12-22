#include <stdio.h>
int sum(int, int);
int main()
{
    int x = 4, y = 4;

    printf("X+Y = %d", sum(x, y));
    return 0;
}
int sum(int x, int y)
{
    return x + y;
}