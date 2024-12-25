#include <stdio.h>
#include <string.h>
void pointer(char *);
int main()
{
    char st[30];
    gets(st);
    pointer(st);
    printf("%d", strlen(st));
    return 0;
}
void pointer(char *ptr)
{
    printf("%s", ptr);
}