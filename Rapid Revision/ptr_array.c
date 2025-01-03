#include <stdio.h>
int arr(int *);
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    arr(a);
    return 0;
}
int arr(int *ptr)
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *ptr);
        ptr++;
    }
}