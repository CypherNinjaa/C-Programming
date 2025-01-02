#include <stdio.h>
int main()
{
    int n, arm = 0, rem, temp;
    printf("Enter the number : ");
    scanf("%d", &n);
    temp = n;
    while (n != 0)
    {
        rem = n % 10;
        arm = (rem * rem * rem) + arm;
        n = n / 10;
    }

    if (temp == arm)
    {
        printf("%d is an armstrong number", temp);
    }
    else
        printf("%d is not a armstrong number", temp);

    return 0;
}