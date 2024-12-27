#include <stdio.h>
#include <stdlib.h>
int main()
{
    float n = 5;
    float *ptr;

    ptr = (float *)malloc(n * sizeof(float));

    ptr[0] = 3;
    ptr[1] = 65;
    ptr[2] = 64;
    ptr[3] = 26;
    ptr[4] = 36;

    printf("%.2f\n", ptr[0]);
    printf("%.2f\n", ptr[1]);
    printf("%.2f\n", ptr[2]);
    printf("%.2f\n", ptr[3]);
    printf("%.2f\n", ptr[4]);
    return 0;
}