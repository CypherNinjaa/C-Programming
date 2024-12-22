#include <stdio.h>
//function protocals

int factorial(int);

//function definition
int factorial(int n){
    if (n==1 || n==0)   //base condition
    {
       return 1;
    }
    return factorial(n-1)*n;
}
int main(){
    int a = 6;
    printf("the factorial of %d is %d", a, factorial(a));
    return 0;
}