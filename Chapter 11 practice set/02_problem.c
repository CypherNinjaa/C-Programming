#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 6;
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of array : ");
        scanf("%d", &ptr[i]);
    }
    printf("%c", '\n');
    for (int i = 0; i < n; i++)
    {
        printf("the value of array : ");
        printf("%d\n", ptr[i]);
    }
    free(ptr);
    return 0;
}