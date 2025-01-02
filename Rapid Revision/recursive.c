#include <stdio.h>
int fact(int);
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("Factorial = %d", fact(n));
    return 0;
}
int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
        return fact(n - 1) * n;
}