#include <stdio.h>
int main()
{
    int n, temp, isprime = 1;
    printf("Enter the number : ");
    scanf("%d", &n);
    if (n <= 1)
    {
        isprime = 0; // Numbers less than or equal to 1 are not prime
    }
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            isprime = 0;
            break;
        }
    }
    if (isprime)
    {
        printf("It is a prime number");
    }
    else
        printf("It is not a prime number");

    return 0;
}