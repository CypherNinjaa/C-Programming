#include <stdio.h>

int main()
{
    char ope;
    printf("Enter the operator (+ for addition, - for subtraction, * for multiplication, / for division): ");
    scanf(" %c", &ope); // Added a space before %c to ignore any newline character

    float a, b;
    printf("Enter two numbers (separated by space): ");
    scanf("%f %f", &a, &b);

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
            printf("Error: Division by zero is not allowed.\n");
        }
    }
    else
    {
        printf("Invalid operator.\n");
    }

    return 0;
}
