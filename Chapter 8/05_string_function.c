#include <stdio.h>
#include <string.h>
int main()
{
    char st[30];
    gets(st);
    printf("%d", strlen(st));
    return 0;
}