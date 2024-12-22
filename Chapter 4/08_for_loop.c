#include <stdio.h>
int main()
{
    int n;
    printf("Enter the terms : ");
    scanf("%d", &n);
    for (int i = n; i; i--)
    {
        printf("the value of i = %d\n", i);
    }
    return 0;
}