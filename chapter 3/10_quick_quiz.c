#include <stdio.h>

/*Quick Quiz: Wite a program to find grade of a student given his marks based on below:
90-100=> A
80-90 => B
70-80 =>C
60-70 => D
50-60 => E
50 = F */
int main()
{
    int m;

    // Prompt the user for marks
    printf("Enter the Marks: ");
    scanf("%d", &m);

    // Determine the grade based on marks
    if (m >= 90 && m <= 100)
    {
        printf("Grade = A\n");
    }
    else if (m >= 80 && m < 90)
    {
        printf("Grade = B\n");
    }
    else if (m >= 70 && m < 80)
    {
        printf("Grade = C\n");
    }
    else if (m >= 60 && m < 70)
    {
        printf("Grade = D\n");
    }
    else if (m >= 50 && m < 60)
    {
        printf("Grade = E\n");
    }
    else if (m < 50 && m >= 0)
    {
        printf("Grade = F\n");
    }
    else
    {
        printf("Invalid marks entered. Please enter marks between 0 and 100.\n");
    }

    return 0;
}
