#include <stdio.h>
int main()
{
    int n, a = 1, b = 1, sum = 0;
    printf("Enter the term : ");
    scanf("%d", &n);
    printf("fibonaci = ");
    if (n >= 1)
        printf("%d ", a); // Print the first term
    if (n >= 2)
        printf("%d ", b); // Print the second term
    for (int i = 3; i <= n; i++)
    {
        sum = a + b;
        printf("%d ", sum);
        a = b;
        b = sum;
    }

    return 0;
}