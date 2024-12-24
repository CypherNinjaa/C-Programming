#include <stdio.h>
int pointer(int *);
int main()
{
    int arr[5];
    pointer(arr);
    for (int i = 0; i < 5; i++)
    {
        printf("Tha value at index %d Is %d \n", i, arr[i]);
    }

    return 0;
}
int pointer(int *ptr)
{
    printf("Fill this array : \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &*ptr);
        ptr++;
    }
}