#include <stdio.h>
int main(){
    int n,isprime=1;
    printf("Enter the number : ");
    scanf("%d",&n);
    if(n<=1){
        printf("It is not a prime number ");
        return 0;
    }
    for(int i= 2;i <=n/2;i++){
        if(n%i==0){
            isprime =0;
            break;
        }
    }
    if (isprime)
    {
       printf("It is a prime number");
    }else{
        printf("It is not a prime number ");
    }
       
    return 0;
}