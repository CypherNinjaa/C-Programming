#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("int.txt", "r");
    int a;
    fscanf(ptr, "%d", &a);
    printf("%d", a);

    fscanf(ptr, "%d", &a);
    printf("%d ", a);
    return 0;
}