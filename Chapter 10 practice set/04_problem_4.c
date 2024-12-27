#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("employee.txt", "w");
    if (ptr == NULL)
    {
        printf("Error: Could not open the file.\n");
        return 1;
    }

    char name1[34], name2[34];
    int salary1, salary2;

    // Input details for employee 1
    printf("Enter name of Employee 1: ");
    scanf("%s", name1);

    printf("Enter the salary of Employee 1: ");
    scanf("%d", &salary1);

    // Input details for employee 2
    printf("Enter name of Employee 2: ");
    scanf("%s", name2);

    printf("Enter the salary of Employee 2: ");
    scanf("%d", &salary2);

    // Write employee details to the file
    fprintf(ptr, "Employee 1: %s, Salary: %d\n", name1, salary1);
    fprintf(ptr, "Employee 2: %s, Salary: %d\n", name2, salary2);

    fclose(ptr); // Close the file
    printf("Data successfully written to employee.txt.\n");

    return 0;
}
