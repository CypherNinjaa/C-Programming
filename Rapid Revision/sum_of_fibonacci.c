#include <stdio.h>
int main()
{
    int n, a = 1, b = 1, sum = 0, fibSum = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n >= 1)
        fibSum += a; // Add the first term
    if (n >= 2)
        fibSum += b; // Add the second term

    for (int i = 3; i <= n; i++)
    {
        sum = a + b;
        fibSum += sum; // Add the current Fibonacci number to the total sum
        a = b;
        b = sum;
    }

    printf("The sum of the first %d terms of the Fibonacci sequence is: %d\n", n, fibSum);
    return 0;
}
