#include<stdio.h>

union student
{
    int mark;
    int result;
};
int main(){
    union student shubham;//,sparsh;
    shubham.mark=100;  //courrupt the previous variable.
    shubham.result=1;  // Here the memory is shared in one rather then creating different memory for different variable.
    //sparsh.mark=99;
    //sparsh.result=1;
    printf("marks of shubham and result = %d ,%d\n",shubham.mark,shubham.result);
    //printf("marks of sparsh and result = %d ,%d",sparsh.mark,sparsh.result);
    return 0;
    
}