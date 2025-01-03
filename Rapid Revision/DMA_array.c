#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    int *ptr = &n;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element : ", i);
        scanf("%d", &ptr[i]);
    }
    printf("Element of array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }
    return 0;
}