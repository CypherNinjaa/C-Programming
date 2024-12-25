#include <stdio.h>
#include <string.h>
int main()
{
    char c = 'H';
    int count = 0;

    char str[] = "Harryx";
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == c)
        {
            count = 1;
            break;
        }
    }
    if (count == 1)
    {
        printf("character is present");
    }
    else
        printf("Character is not present");

    return 0;
}