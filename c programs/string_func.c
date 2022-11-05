#include<stdio.h>
#include<string.h>

int main(){
    char a[]="shubham";
    char b[]="shubham1";
    char f[]={'a','b','c','d','e','\0'};     // '\0' will not include in length of string.
    char t[100];
    char o[40];
    printf("%d\n",strlen(t));
    strcat(t,a);
    printf("%d\n",strlen(t));
    //puts(strcat(t,f));        //strcat(a,b) it mean a+b and null value of a will overwrite and null value of b comes 
                                //in end as usaual. 
    /*
    puts(t);
    printf("%d\n",strlen(t));
    printf("%d\n",strlen(f));
    strrev(a);    //strrev()  it will be permanent change.
    puts(a);
    printf("reversed of variable a is %s \n",strrev(a));  //strrev() reverse the string.
    //     o=strcat(a,b); This will give an error.
    //to solve this we use strcpy().
    strcpy(o,strcat(t,strcat(a,b)));
    puts(o);*/
    printf("after comparing %d \n ",strcmp(a,b));   //If True then it will print 0 and if False it will print -1

    return 0;
}