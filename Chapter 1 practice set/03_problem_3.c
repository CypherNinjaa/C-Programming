#include <stdio.h>
int main(){
    //convert a temperature from Celsius (C) to Fahrenheit (F)
   int C;
   //take input
   printf("Enter the Celsius : ");
   scanf("%d",&C);
   //calculate
    float F = (C*9/5)+32;
    //display
    printf("F = %.2f",F);
    return 0;
}