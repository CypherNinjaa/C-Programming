#include <stdio.h>

int main()
{
    char ch;
    FILE *ptr;
    ptr = fopen("harry.txt", "r");
    if (ptr == NULL)
    {
        printf("The file doesn't exist! ");
    }
    while (1)
    {
        ch = fgetc(ptr);
        printf("%c", ch);
        // when all the content of file has been read;break
        if (ch == EOF)
        {
            break;
        }
    }
    fclose(ptr);
    return 0;
}