#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("harry.txt", "a");
    char c;
    c = fgetc(ptr); // read charcter only one
    // printf("%c", c);
    // fclose(ptr);
    fputc('V', ptr);
    return 0;
}