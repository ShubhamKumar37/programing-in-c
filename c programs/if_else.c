#include<stdio.h>

void main(){
    int a,b;
    printf("do you pass in maths \n");
    scanf("%d",&a);
    printf("do you pass in science \n");
    scanf("%d",&b);
    if (a==1 && b==1){
        printf("you got 50rs ");
    }
    else if (a==1 || b==0){
        printf("you got 25 rs");
    }
    else if (a==0 || b==1){
        printf("you got 25 rsd ");
    }
    else {
        printf("bhaaag bhikari");
    }
}