#include<stdio.h>

int main(){
    int i=1,j=1;
    for (;i<=10,j<=100;i++){   //expression 2 execute all equation but only stop or consider last term.
        printf("hi %d %d \n",i,j);
        j++;
        //i--,j--; Can make for loop an infinite loop
    }
    return 0;
}