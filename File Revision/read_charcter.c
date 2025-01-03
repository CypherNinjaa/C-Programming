#include <stdio.h>
int main()
{
    FILE *Ptr;
    Ptr = fopen("chr.txt", "r");
    char ch;
    while (1)
    {
        ch = fgetc(Ptr);
        printf("%c", ch);
        if (ch == EOF)
        {
            break;
        }
    }

    return 0;
}