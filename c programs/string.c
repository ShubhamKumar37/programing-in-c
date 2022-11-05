#include<stdio.h>

int fun1(char x[]){
    int i=0;
    while (x[i]!='\0'){
        printf("%c",x[i]);
        i++;
    }

}

int main(){
    //char str[]="shubham";
    //char temp[]={'s','h','u','b','h','a','m','\0'};
    //printf("%s \n",str);
    //printf("%s \n",temp);
    char str[10];
    printf("Enter the string = ");
    gets(str);  //Takes the input.
    fun1(str);
    printf("\n");
    puts(str);  //prints the string.
    return 0;
}