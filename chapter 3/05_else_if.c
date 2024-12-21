#include <stdio.h>
int main()
{
    int age = 70;
    if (age > 18)
    {
        printf("YOU CAN DRIVE\n");
    }
    else if (age > 60)
    {
        printf("YOU CAN DRIVE and you are senior citizen\n");
    }
    else if (age > 40)
    {
        printf("YOU CAN DRIVE and you are elder\n");
    }

    else
    {
        printf("YOU CAN't DRIVE\n");
    }
    return 0;
}