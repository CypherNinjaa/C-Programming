#include <stdio.h>
int main()
{
    int n, temp, rem, rvrs = 0;
    printf("Enter the numebr : ");
    scanf("%d", &n);
    temp = n;
    while (n != 0)
    {
        rem = n % 10;
        rvrs = rvrs * 10 + rem;
        n /= 10;
    }
    if (temp == rvrs)
    {
        printf("%d is a plindrome number", temp);
    }
    else
        printf("%d is not a plaindrome number", temp);

    return 0;
}