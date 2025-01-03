#include <stdio.h>
int arr(int arr[5][5]);
int main()
{
    int a[5][5];
    arr(a);
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
int arr(int arr[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("enter the [%d],[%d] term : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}