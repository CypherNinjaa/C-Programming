/*4. Write a program to calculate simple interest for a set of values representing
‘principal, number of years and rate of interest.*/
#include <stdio.h>
int main(){
    //take input
float si,p,r,t;
printf("Enter the Amount : ");
scanf("%f",&p);
printf("Enter the time (year) : ");
scanf("%f",&t);
printf("Enter the rate (percentage) : ");
scanf("%f",&r);
//calculate
si = (p*r*t)/100;
//display
printf("SI = %.4f",si);
    return 0;
}