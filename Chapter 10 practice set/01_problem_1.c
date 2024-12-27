#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("integer.txt", "r");
    // int num = 123;
    // fprintf(ptr, "%d", num);
    // fclose;

    int num, num2, num3;
    fscanf(ptr, "%d %d %d", &num, &num2, &num3);
    printf("%d %d %d", num, num2, num3);

    return 0;
}