#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[30];
};
int main()
{
    struct employee facebook[100]; // an array of structures
    // we can access the data using:
    facebook[0].code = 100;
    facebook[1].code = 77;
    // struct employee harry = {100, 71.22, "harry"};
    // printf("%d %f %s", harry.code, harry.salary, harry.name);
    facebook[0].salary = 500;
    strcpy(facebook[0].name, "vikash");
    printf("%d %f %s", facebook[0].code, facebook[0].salary, facebook[0].name);
    return 0;
}