#include <stdio.h>
int times(int *);

int main()
{
    int n;
    printf("Enter the n = ");
    scanf("%d", &n);

    times(&n);
    printf("Increases = %d", n);
    return 0;
}
int times(int *i)
{
    return *i = *i * 10;
}