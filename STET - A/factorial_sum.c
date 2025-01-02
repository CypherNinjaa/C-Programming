#include <stdio.h>
int fact(int);
int main()
{
    int n, sum = 0;
    printf("Enter the term : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum = sum + fact(i);
    }
    printf("Sum of factorial = %d", sum);
    return 0;
}
int fact(int n)
{
    int facts = 1;
    for (int i = 1; i <= n; i++)
    {
        facts *= i;
    }
    return facts;
}