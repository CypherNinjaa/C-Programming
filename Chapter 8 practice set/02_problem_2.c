#include <stdio.h>
int main()
{
    char str[7];
    // by loop
    for (int i = 0; i < 6; i++)
    {
        scanf("%c", &str[i]);
        fflush(stdin);
    }
    str[6] = '\0';
    // by scanf
    //  scanf("%s", str);
    printf("%s", str);
    return 0;
}