#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 10;
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 1; i <= n; i++)
    {

        ptr[i] = 7 * i;
    }
    printf("%c", '\n');
    for (int i = 1; i <= n; i++)
    {

        printf("%d\n", ptr[i]);
    }

    printf("table inc to 15\n");
    n = 15;
    ptr = (int *)realloc(ptr, 10 * sizeof(int));
    for (int i = 1; i <= n; i++)
    {
        ptr[i] = 7 * i;
    }
    printf("%c", '\n');
    for (int i = 1; i <= n; i++)
    {

        printf("%d\n", ptr[i]);
    }
    free(ptr);
    return 0;
}