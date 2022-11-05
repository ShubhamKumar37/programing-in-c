#include<stdio.h>
#include<stdio.h>

int main()
{
    int i=0 ;
    char str[20];
    printf("Enter the * to stop \n");
    printf("Enter the string = ");
    scanf("%c",&str);
    while (str[i]!='*')
    {
        i++;
        scanf("%c",&str[i]);
       if(str[i]==',')
       {
        str[i]='-';
       }

    }
    str[i]='\0';
    printf("After manupulation of string ");
    puts(str);
    return 0;
}