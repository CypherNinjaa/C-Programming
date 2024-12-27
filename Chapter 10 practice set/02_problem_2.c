#include <stdio.h>
int main()
{
    int num = 4;
    FILE *ptr;
    ptr = fopen("table.txt", "w");
    for (int i = 1; i <= 10; i++)
    {
        fprintf(ptr, "%d", num * i);
        fprintf(ptr, "%c", '\n');
    }
    fclose(ptr);
    return 0;
}