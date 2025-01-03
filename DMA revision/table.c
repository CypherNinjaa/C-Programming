#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, table;
    printf("Enter the number : ");
    scanf("%d", &table);

    int *ptr = &n;
    n = 10; // to print table upto 10 terms;
    ptr = (int *)malloc(n * sizeof(int));

    printf("Tbale upto 1oterms :\n");
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", table * i);
    }

    printf("after reallocating\n"); // after reallocating

    n = 15;
    ptr = (int *)realloc(ptr, 15 * sizeof(int));
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", table * i);
    }

    return 0;
}