#include <stdio.h>
#include <string.h>
int main()
{
    char st[30] = "hello";
    char st2[30] = " vikash";
    strcat(st, st2);
    puts(st);
    return 0;
}