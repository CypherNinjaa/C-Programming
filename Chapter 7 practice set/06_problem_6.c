#include <stdio.h>

int main()
{
    int n;
    printf("Enter no of table : ");
    scanf("%d", &n);
    int arr[n][10];

    int mul[n];
    printf("Enter the no (seprated by space): ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &mul[i]);
    }

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = mul[i] * (j + 1);
        }
    }
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < 10; j++)
        {
            printf("the valu of arr[%d][%d] is %d\n", i, j, arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}