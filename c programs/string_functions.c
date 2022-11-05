#include<stdio.h>
#include<string.h>

int main()
{
    char str[100]="python is a good 234";
    int t;
    //t=strspn(str,"32424"); kab nahi milaga s2
    //t=strcspn(str,"23434"); kab milaga s2
    printf("element found at %d",t);
    return 0;
}