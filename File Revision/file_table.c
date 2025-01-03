#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("int.txt", "w");
    int table = 4;
    for (int i = 1; i <= 10; i++)
    {
        table = table * i;
        fprintf(ptr, "%d\n", table);
    }

    return 0;
}