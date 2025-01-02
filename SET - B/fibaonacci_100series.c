#include <stdio.h>
int main()
{
    int n, a = 1, b = 1, sum = 0;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("fibonacci : ");
    if (n >= 1)
    {
        printf("%d ", a);
    }
    if (n >= 2)
    {
        printf("%d ", b);
    }

    for (int i = 3; i <= n; i++)
    {
        sum = a + b;
        printf("%d ", sum);
        a = b;
        b = sum;
    }

    return 0;
}