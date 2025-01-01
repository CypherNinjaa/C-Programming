#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int array[5] = {6, 7, 8, 9, 10};

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", array[j]);
        }
        printf("\n");
    }

    return 0;
}