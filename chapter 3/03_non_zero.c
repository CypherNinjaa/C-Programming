#include <stdio.h>
int main()
{
    if (1)
    {
        printf("This if is executed!\n");
    }
    if (23.45)
    {
        printf("This if is also executed!\n");
    }
    if ('c')
    {
        printf("char is also executed!\n");
    }
    if (0)
    {
        printf("i am zero so iam not executed!\n");
    }

    return 0;
}