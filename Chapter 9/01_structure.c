#include <stdio.h>
#include <string.h>
struct employee
{
    int code; // declare a new user defined data type!
    float salary;
    char name[10];
}; // semicolon is important

int main()
{
    struct employee e1, e2; // creating a structure variable
    e1.code = 123;
    strcpy(e1.name, "Harry");
    e1.salary = 54.44;
    printf("%d\n %.2f\n %s\n", e1.code, e1.salary, e1.name);

    printf("\n");

    e2.code = 1243;
    strcpy(e2.name, "Vikas");
    e2.salary = 64.44;
    printf("%d\n %.2f\n %s\n", e2.code, e2.salary, e2.name);
    return 0;
}