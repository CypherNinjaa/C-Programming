#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 7, 5, 6};
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (int i = 5; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
