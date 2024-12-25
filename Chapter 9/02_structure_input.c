#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[50];
};
int main()
{
    struct employee e1, e2, e3;
    e1.code;
    printf("Enter the e1 code : ");
    scanf("%d", &e1.code);
    e1.salary;
    printf("Enter the salary : ");
    scanf("%f", &e1.salary);
    e1.name;
    printf("Enter the name: ");
    scanf("%s", &e1.name);

    e2.code;
    printf("Enter the e2 code : ");
    scanf("%d", &e2.code);
    e2.salary;
    printf("Enter the salary : ");
    scanf("%f", &e2.salary);
    e2.name;
    printf("Enter the name : ");
    scanf("%s", &e2.name);

    e3.code;
    printf("Enter the e3 code : ");
    scanf("%d", &e3.code);
    e3.salary;
    printf("Enter the salary : ");
    scanf("%f", &e3.salary);
    e3.name;
    printf("Enter the name : ");
    scanf("%s", &e3.name);

    printf("Employee (1) : - \n Code = %d\nSalary = %.2f\nName = %s\n", e1.code, e1.salary, e1.name);
    printf("\n");
    printf("Employee (2) : - \n Code = %d\nSalary = %.2f\nName = %s\n", e2.code, e2.salary, e2.name);
    printf("\n");
    printf("Employee (3) : - \n Code = %d\nSalary = %.2f\nName = %s\n", e3.code, e3.salary, e3.name);
    printf("\n");
    return 0;
}