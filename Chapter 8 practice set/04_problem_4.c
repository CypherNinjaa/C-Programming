#include <stdio.h>
#include <string.h>
void stringcopy(char *, char *);
int main()
{
    char st1[] = "vikash";
    char st2[10] = " bhai";
    stringcopy(st1, st2);
    printf("%s", st2);
    return 0;
}
void stringcopy(char *st1, char *st2)
{
    strcpy(st1, st2);
}