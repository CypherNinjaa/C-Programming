#include <stdio.h>
int pattern(int);
int main()
{
    int n;
    printf("Enter the terms : ");
    scanf("%d", &n);
    pattern(n);
    return 0;
}
int pattern(int n)
{
    for (int i = 0; i < n; i++)
    { // Loop for rows
        for (int j = 0; j < 2 * i + 1; j++)
        { // Loop for stars in each row
            printf("*");
        }
        printf("\n"); // Move to the next line after each row
    }
}