#include <stdio.h>
int main()
{
    char ope;
    float a, b;
    
    // Prompt for the operator
    printf("Enter + for add, - for subtract, * for product, / for division: ");
    scanf(" %c", &ope); // Added a space before %c to handle newline characters

    // Check for valid operators
    if (ope == '+' || ope == '-' || ope == '*' || ope == '/')
    {
        // Prompt for the numbers
        printf("Enter two numbers (separated by space): ");
        scanf("%f %f", &a, &b);

        // Perform the operation
        if (ope == '+')
        {
            printf("Sum = %.2f\n", a + b);
        }
        else if (ope == '-')
        {
            printf("Difference = %.2f\n", a - b);
        }
        else if (ope == '*')
        {
            printf("Product = %.2f\n", a * b);
        }
        else if (ope == '/')
        {
            if (b != 0)
            {
                printf("Quotient = %.2f\n", a / b);
            }
            else
            {
                printf("Error: Division by zero is not allowed\n");
            }
        }
    }
    else
    {
        // Handle invalid operator
        printf("Error: Invalid operator\n");
    }
    return 0;
}
