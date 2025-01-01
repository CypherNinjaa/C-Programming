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
    printf("the Factorial upto %d! term is : %d", n, sum);
    return 0;
}
int fact(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}