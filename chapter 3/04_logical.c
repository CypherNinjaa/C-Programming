#include <stdio.h>
int main()
{
    int a = 0, b = 1;
    printf("the value of a and b is %d\n", a && b);
    printf("the value of a and b is %d\n", a || b);
    printf("the value of not (a) %d\n", !a);

    /*haar kar jitne wale ko bajigar kehte hain
            jo false ko true or
        true ko false bana de use not operator kehte hain*/

    return 0;
}