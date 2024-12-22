#include <stdio.h>
int main()
{
    char m;
    printf("Enter your choice: -\n90-100=> A\n80-90 => B\n70-80 => C\n 60-70 => D\n 50-60 => E\n50 => F\n");
    scanf("%c", &m);
        switch (m)
        {
        case 'A':
            if (m >= 90 && m <= 100)
            {
                printf("Grade = A\n");
            }
            break;
        case 'B':
            if (m >= 80 && m < 90)
            {
                printf("Grade = B\n");
            }
            break;
        case 'C':
            if (m >= 70 && m < 80)
            {
                printf("Grade = C\n");
            }
            break;
        case 'D':
            if (m >= 60 && m < 70)
            {
                printf("Grade = D\n");
            }
            break;
        
        case 'E':
            if (m >= 50 && m < 60)
            {
                printf("Grade = E\n");
            }
            break;
        case 'F':
            if (m < 50 && m >= 0)
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