#include <stdio.h>
#include <string.h>
typedef struct employee
{
    int code;
    float salary;
    char name[10];
} emp;
int main()
{
    // typedef struct employee emp;  //ye bhi possible hai
    emp e1;
    emp *ptr = &e1;
    e1.code = 4511;
    strcpy(e1.name, "harry");
    e1.salary = 54.44;
    printf("%d %f %s\n", e1.code, e1.salary, e1.name);
    printf("%d %f %s", ptr->code, ptr->salary, ptr->name);
    return 0;
}