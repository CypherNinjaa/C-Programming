#include <stdio.h>

int fibonacci(int);

int main()
{
    int n;
    printf("Enter the term : ");
    scanf("%d", &n);
    printf("The fibonacci at %d term is %d", n, fibonacci(n));
    return 0;
}
int fibonacci(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}