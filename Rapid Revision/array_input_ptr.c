#include <stdio.h>
int arr(int *);
int main()
{
    int a[5];
    arr(a);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
int arr(int *ptr)
{
    for (int i = 0; i < 5; i++)
    {
        printf("Enter %d element : ", i);
        scanf("%d", &*ptr);
        ptr++;
    }
}