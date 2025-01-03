#include <stdio.h>
int main()
{
    FILE *Ptr;
    Ptr = fopen("chr.txt", "w");
    char ch = 'v';
    fputc(ch, Ptr);
    fclose(Ptr);
    return 0;
}