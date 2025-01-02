#include <stdio.h>
int main()
{
    int n;
    printf("Enter number b/w 1 & 2 : ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("hello");
        break;
    case 2:
        printf("world!");
        break;
    default:
        printf("invalid input");
        break;
    }
    return 0;
}