#include <stdio.h>
int main()
{
    char m;
    int M;
    printf("Enter your choice: -\n90-100=> A\n80-90 => B\n70-80 => C\n 60-70 => D\n 50-60 => E\n50 => F\n");
    scanf("%c", &m);
    printf("Enter the Marks : ");
    scanf("%d", &M);
    switch (m)
    {
    case 'A':
        if (M >= 90 && M <= 100)
        {
            printf("Grade = A\n");
        }
        break;
    case 'B':
        if (M >= 80 && M < 90)
        {
            printf("Grade = B\n");
        }
        break;
    case 'C':
        if (M >= 70 && M < 80)
        {
            printf("Grade = C\n");
        }
        break;
    case 'D':
        if (M >= 60 && M < 70)
        {
            printf("Grade = D\n");
        }
        break;

    case 'E':
        if (M >= 50 && M < 60)
        {
            printf("Grade = E\n");
        }
        break;
    case 'F':
        if (M < 50 && M >= 0)
        {
            printf("Grade = F\n");
        }
        break;

    default:
        printf("Invalid marks entered. Please enter marks between 0 and 100.\n");
        break;
    }

    return 0;
}