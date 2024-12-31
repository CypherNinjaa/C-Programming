#include <stdio.h>

int main()
{
    int n, rvrs = 0, rem;

    printf("Enter the number : ");
    scanf("%d", &n);
    while (n != 0)
    {
        rem = n % 10;
        rvrs = rvrs * 10 + rem;
        n = n / 10;
    }
    printf("reversed number : %d", rvrs);
    return 0;
}