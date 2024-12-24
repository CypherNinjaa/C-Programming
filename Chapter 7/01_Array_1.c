#include <stdio.h>
int main()
{
    int marks[90]; // reserve space to store 90 ineteger
    marks[0] = 45;
    marks[1] = 95;
    // we can go all the way till marks[89]
    printf("Marks 0 = %d \nMArks 1= %d", marks[0], marks[1]);
    return 0;
}