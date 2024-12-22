#include <stdio.h>

int main()
{
    int a = 0, b = 1, sum = 0, n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    printf("Fibonacci sequence: ");

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a);
        sum = a + b;
        a = b;
        b = sum;
    }

    printf("\n");
    return 0;
}
