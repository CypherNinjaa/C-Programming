#include <stdio.h>
int main(){
    int i = 5;
    printf("The value of i is %d\n",i);
    i = i+5; // = 10
    printf("Now i = %d\n",i);
    printf("The value of i is %d\n",++i);
    printf("pre increment = %d\n",i);

    i +=2;   // same as i = i+2
    printf("Now i = %d\n", i);
    /* i++ print i first and then increments i (post increment operator)
    ++i increment first and then prints i (post increment operator) */
    return 0;
}