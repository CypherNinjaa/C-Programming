#include <stdio.h>
int main()
{
    int marks[] = {12, 14, 24, 34};

    // int *ptr = &marks[0];
    int *ptr = marks; // same  as above code

    for (int i = 0; i < 4; i++)
    {
        // printf("The marks at index %d is %d \n", i, marks[i]);
        printf("The marks at index %d is %d \n", i, *ptr);
        ptr++;
    }
    return 0;
}