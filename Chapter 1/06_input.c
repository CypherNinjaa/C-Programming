#include <stdio.h>
int main(){
int a;
char c;
float b;
printf("Enter the value of  : ");
scanf("%d %f %c",&a,&b,&c);
printf("A =  : %d\n",a);

printf("B = : %.2f\n", b);

printf("C = : %c\n", c);
return 0;
}