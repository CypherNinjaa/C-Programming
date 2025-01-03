#include <stdio.h>
int main()
{
    int a[3][3];
    int issymmetric = 1;
    // taking input
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter [%d][%d]", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    // comparing
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] != a[j][i])
            {
                issymmetric = 0;
                break;
            }
        }
    }
    // printing
    if (issymmetric)
    {
        printf("the mtx is symmetric\n");
    }
    else
        printf("it is not symmetric");

    return 0;
}