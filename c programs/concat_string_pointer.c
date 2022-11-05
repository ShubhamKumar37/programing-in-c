#include<stdio.h>
#include<string.h>

int main()
{
    char str[99],arr[99],carr[99],*ptr,*num,*temp;
    temp=carr;
    ptr=str;
    num=arr;
    printf("Enter the string 1 = ");
    gets(ptr);
    printf("Enter the string 2 = ");
    gets(num);
    while(*ptr!='\0')
    {
        *temp=*ptr;
        temp++,ptr++;
    }
    while (*num!='\0')
    {
        *temp=*num;
        temp++,num++;
    }
    temp++;
    *temp='\0';
    temp=carr;
    while(*temp!='\0')
    {
        printf("%c",*temp);
        temp++;
    }
    return 0;
    
}