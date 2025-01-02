#include <stdio.h>
int main()
{
    int A[5][5] = {{11, 12}, {12, 13}, {13, 14}, {14, 15}, {15, 16}};
    int B[5][5] = {{17, 12}, {8, 13}, {9, 14}, {10, 15}, {15, 16}};
    int sum[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("The sum of matrices:\n");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}