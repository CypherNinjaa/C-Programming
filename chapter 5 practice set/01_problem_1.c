#include <stdio.h>
// function protocols
float avg(float, float, float);
int main()
{
    float a, b, c;
    printf("Enter three numbers (seprated by space) : ");
    scanf("%f %f %f", &a, &b, &c);
    float average = avg(a, b, c);
    printf("average = %.4f", average);
    return 0;
}
float avg(float a, float b, float c)
{
    float average = (a + b + c) / 3.0;
    return average;
}