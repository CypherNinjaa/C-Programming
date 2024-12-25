#include <stdio.h>
#include <string.h>
int main()
{
    char st[] = "vikash";
    printf("%d\n", strlen(st));

    char source[] = "hello";
    char target[30];
    strcpy(target, st);
    printf("%s %s", st, target);
    return 0;
}