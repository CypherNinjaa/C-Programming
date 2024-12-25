#include <stdio.h>

int main()
{
    int arr[4][10];
    int mul[] = {2, 7, 9, 4};
    for (int i = 0; i < 4; i++)
    {

        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = mul[i] * (j + 1);
        }
    }
    for (int i = 0; i < 4; i++)
    {

        for (int j = 0; j < 10; j++)
        {
            printf("the valu of arr[%d][%d] is %d\n", i, j, arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}