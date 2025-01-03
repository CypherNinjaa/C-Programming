#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("int.txt", "r");
    if (ptr == NULL)
    {
        printf("The file doesn't exist");
    }

    return 0;
}