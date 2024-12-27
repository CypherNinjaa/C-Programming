#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 5;
    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));
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

    printf("the arrays 10 size\n");
    n = 10;
    ptr = (int *)realloc(ptr, 10 * sizeof(int));
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