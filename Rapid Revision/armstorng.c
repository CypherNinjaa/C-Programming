#include <stdio.h>
int main()
{
    int n, rem, temp, arm = 0;
    printf("Enter the numbner : ");
    scanf("%d", &n);
    temp = n;
    while (n != 0)
    {
        rem = n % 10;
        arm = (rem * rem * rem) + arm;
        n /= 10;
    }
    if (temp == arm)
    {
        printf("%d is an armsstrong number", temp);
    }
    else
        printf("it is not a armstrong number");

    return 0;
}