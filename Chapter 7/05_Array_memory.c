#include <stdio.h>
int main()
{
    int marks[5];
    printf("Enter marks of 5 student : \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("the value of marks at index %d is %u\n", i, &marks[i]);
    }
    return 0;
}