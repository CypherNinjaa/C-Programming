#include <stdio.h>
int main()
{
    int a;
    printf("Enter a : ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("you have Entered 1\n");
        break;
    case 2:
        printf("you have Entered 2\n");
        break;
    case 3:
        printf("you have Entered 3\n");
        break;
    case 4:
        printf("you have Entered 4\n");
        break;
    default:
        printf("Nothing Matched");
    }
    return 0;
}