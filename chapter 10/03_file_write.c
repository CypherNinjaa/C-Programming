#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("harry.txt", "w");
    int num = 4444;
    fprintf(ptr, "%d", num);
    fclose(ptr);
    return 0;
}