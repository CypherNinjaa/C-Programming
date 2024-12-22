#include <stdio.h>

// function protocols
float c2f(float);

int main()
{
    float n;
    printf("Enter the celcius : ");
    scanf("%f", &n);
    // function calls
    float f = c2f(n);
    printf("Fahrenheit = %f", f);

    return 0;
}
float c2f(float n)
{
    float f = ((n * 9) / 5) + 32;
    // printf("Fahrenheit = %f", f);
    return f;
}