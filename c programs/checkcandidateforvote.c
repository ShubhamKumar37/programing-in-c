#include<stdio.h>
int main(){
     int age;
     printf("enter your age");
     scanf("%d",&age);
     if(age>17)
          printf("Congratulation! You are eligible for voting");
     else
          printf("you aare NOT eligible for voting");
     return 0;
}