#include <stdio.h>
int main()
{
    int n, rem, sum = 0;
    printf("Enter the number : ");
    scanf("%d", &n);
    while (n != 0)
    {
        rem = n % 10;
        sum = sum + rem;
        n /= 10;
    }
    printf("Sum of digit = %d", sum);
    return 0;
}