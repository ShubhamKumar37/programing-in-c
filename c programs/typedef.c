/*#include<stdio.h>

typedef struct student
{
    int mark;
    int result;
}pi;
int main(){
    //struct student shubham,sparsh;  insted of of this we can use typedef .
    pi shubham,sparsh;      //here pi is used as new alias name.
    shubham.mark=100;
    shubham.result=1;
    sparsh.mark=99;
    sparsh.result=1;
    printf("marks of shubham and result = %d ,%d\n",shubham.mark,shubham.result);
    printf("marks of sparsh and result = %d ,%d",sparsh.mark,sparsh.result);
    return 0;
    
}*/
#include<stdio.h>
//Every time memory location get changed.
int main(){
    typedef int* pt; 
    //int *a,b;  only a became a pointer not b.
    pt a,b;  //by this we can create more pointers by using alias of int*.
    int c;
    a=&c;
    b=&c;
    printf("%d",b);
}