#include <stdio.h>

// Function prototypes
int sum(int, int);
float avgs(float, float);

int main()
{
    int n = 1; // Control variable for the loop

    while (n)
    {
        int x, y, c;
        float a, b;

        printf("Enter 2 for sum or 3 for average: ");
        scanf("%d", &c);

        switch (c)
        {
        case 2:
            printf("Enter the first number: ");
            scanf("%d", &x);
            printf("Enter the second number: ");
            scanf("%d", &y);
            printf("Sum = %d\n", sum(x, y));
            break;

        case 3:
            printf("Enter the first number: ");
            scanf("%f", &a);
            printf("Enter the second number: ");
            scanf("%f", &b);
            printf("Average = %.2f\n", avgs(a, b));
            break;

        case 0:
            printf("Thank you!\n");
            n = 0; // Exit the loop
            break;

        default:
            printf("Invalid choice. Please enter 2, 3, or 0.\n");
        }

        if (c != 0) // Ask for continuation only if not exiting
        {
            printf("For exit enter 0, to continue enter 1: ");
            scanf("%d", &n);
        }
    }

    return 0;
}

// Function to calculate sum of two integers
int sum(int x, int y)
{
    return x + y;
}

// Function to calculate average of two floating-point numbers
float avgs(float a, float b)
{
    return (a + b) / 2.0;
}
