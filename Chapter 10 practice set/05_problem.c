#include <stdio.h>
int main()
{
    FILE *ptr;
    int num;
    ptr = fopen("int.txt", "r");
    if (ptr == NULL)
    {
        printf("File doesn't exist");
    }

    fscanf(ptr, "%d", &num);
    fclose(ptr);

    num = num * 2;
    ptr = fopen("int.txt", "w");
    fprintf(ptr, "%d", num);
    fclose(ptr);
    printf("int doubled successfully");
    return 0;
}