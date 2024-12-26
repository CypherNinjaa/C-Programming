#include <stdio.h>
struct employee
{
    int code;
    float salary;
    char name[40];
};
int main()
{
    struct employee e1;
    struct employee e2 = {1234, 50000, "vikash"};
    struct employee *ptr;
    ptr = &e2;
    printf("%d %.2f %s\n", (*ptr).code, (*ptr).salary, (*ptr).name);
    printf("%d %.2f %s", ptr->code, ptr->salary, ptr->name); // dono same hai
    return 0;
}