#include <stdio.h>

struct employee
{
    int code;
    float salary;
    char name[30];
};

void show(struct employee e);

int main()
{
    struct employee e = {1234, 50.25, "Vikash"}; // Initialize structure

    show(e); // Pass the structure to the function
    return 0;
}

void show(struct employee e)
{
    printf("Code: %d, Salary: %.2f, Name: %s\n", e.code, e.salary, e.name);
}
