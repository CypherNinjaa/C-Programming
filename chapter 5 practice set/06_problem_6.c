#include <stdio.h>

int sum_natural(int);

int main()
{
    int n;
    printf("Enter natural number : ");
    scanf("%d", &n);
    printf("The sum of %d natural number is %d", n, sum_natural(n));
    return 0;
}
int sum_natural(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return sum_natural(n - 1) + n;
}