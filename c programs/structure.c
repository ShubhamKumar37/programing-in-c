#include<stdio.h>

struct student
{
    int mark;
    int result;
};
int main(){
    struct student shubham,sparsh;
    shubham.mark=100;
    shubham.result=1;
    sparsh.mark=99;
    sparsh.result=1;
    printf("marks of shubham and result = %d ,%d\n",shubham.mark,shubham.result);
    printf("marks of sparsh and result = %d ,%d",sparsh.mark,sparsh.result);
    return 0;
    
}
