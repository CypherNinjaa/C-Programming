#include <stdio.h>
int main()
{
    int n;
    printf("Enter naturalnumber : ");
    scanf("%d",&n);
    int i=1;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <=n);
    return 0;
}