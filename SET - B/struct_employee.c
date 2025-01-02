#include <stdio.h>
typedef struct struct_employee
{
    char name[10];
    int c;
    float salary[20];
} emp;
int main()
{
    emp employee[200];
    for (int i = 0; i < 2; i++)
    {
        printf("Enter details of %d employee\n", i + 1);
        printf("Enter the name : ");
        scanf("%s", employee[i].name);

        printf("Enter the employee code : ");
        scanf("%d", &employee[i].c);

        printf("Enter the salary : ");
        scanf("%f", employee[i].salary);
    }
    for (int i = 0; i < 2; i++)
    {
        printf(" details of %d employee\n", i + 1);
        printf("salary: %s\n", employee[i].salary);
        printf("Employee code: %d\n", employee[i].c);
        printf("Name : %s\n", employee[i].name);
    }

    return 0;
}