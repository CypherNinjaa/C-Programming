#include <stdio.h>
int main()
{
    char i = 'A';
    char *j = &i; // chararcter poiter
    printf("The address of i = %p\n", &i);
    printf("The address of j = %p\n", &j);
    printf("The address At j = %p\n", j);
    printf("The value at j = %c\n", *j);
    printf("\n");
    float K = 44;
    float *L = &K;
    printf("The address of K = %p\n", &K);
    printf("The address of L = %p\n", &L);
    printf("The address At L = %p\n", L); // important
    printf("The value at L = %f\n", *L);
    return 0;
}