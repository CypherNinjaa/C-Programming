#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("int.txt", "w");
    int table = 4;
    int table2 = 0;
    for (int i = 1; i <= 10; i++)
    {
        table2 = table * i;
        fprintf(ptr, "%d\n", table2);
    }
    return 0;
}