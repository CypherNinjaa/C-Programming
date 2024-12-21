/* 2. Calculate the area of a circle and modify the same program to calculate the volume of a cylinder given its radius and height.*/
#include <stdio.h>
int main()
{
    // Take inputs
    int r,h;
    float pi = 3.14;
    printf("Enter the radius of Circle : ");
    scanf("%d", &r);
    printf("Enter the height of Circle : ");
    scanf("%d", &h);
    // calculate
    /*  float area = pi*r*r;      */
    //calculate
    float volume = pi*r*r*h;
    // display
    printf("volume of cylinder = %.2f", volume);
    return 0;
}