#include <stdio.h>
int main()
{
    int n, isPrime = 1; // Assume the number is prime (isPrime = 1)
    printf("Enter the number: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        // Numbers less than or equal to 1 are not prime
        printf("It is not a prime number.\n");
        return 0;
    }

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0; // Found a divisor, not prime
            break;
        }
    }

    if (isPrime)
    {
        printf("It is a prime number.\n");
    }
    else
    {
        printf("It is not a prime number.\n");
    }

    return 0;
}
