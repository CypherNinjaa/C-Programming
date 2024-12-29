#include <stdio.h>
//function prototype

void gm();
void gan();
void gn();

//function definition
void gm(){
    printf("Good morning\n");
}
void gan(){
    printf("Good after noon\n");
}
void gn(){
    printf("Good evening\n");
}

int main(){
    // int a;
    // printf("enter 1 for GM, 2 for gAN, 3 for gn: ");
    // scanf("%d",&a);
    // if (a==1)
    // {
    //     gm();
    // }else if(a==2){
    //     gan();
    // }else if (a==3)
    // {
    //     gn();
    // }
    gm();
    gan();
    gn();
    return 0;
}