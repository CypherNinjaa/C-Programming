#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("harry.txt", "r");
    if (ptr == NULL)
    {
        printf("The file doesn't exist! ");
    }
    else
    {
        int num;
        fscanf(ptr, "%d", &num);
        printf("The value of num is %d\n", num);
    }
    fclose(ptr);

    return 0;
}