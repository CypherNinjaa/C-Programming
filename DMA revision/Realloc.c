#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    int *ptr = &n;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("enter the %d element : ", i);
        scanf("%d", &ptr[i]);
    }
    printf("Enter element : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("now, reallocating\n");
    // after reallocating
    n = 10;
    ptr = (int *)realloc(ptr, 10 * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("enter the %d element : ", i);
        scanf("%d", &ptr[i]);
    }
    printf("Enter element : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }
    free(ptr);
    return 0;
}