/* 1. Write a C program torcalculate area of a rectangle:
    a. Using hard coded inputs.
    b. Using inputs suppliad by the user.
*/
#include <stdio.h>
int main(){
    int l,b;
//take inputs
printf("Enter the Lenghth Of Rectangle : ");
scanf("%d",&l);
printf("Enter the Breadth Of Rectangle : ");
scanf("%d",&b);
// int L = 12,B = 12;       hard coded
//calculate area 
int Area = l*b;
//display it 
printf("Area of rectangle = %d",Area);
    return 0;
}