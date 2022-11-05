#include<stdio.h>
#include<string.h>

int main()
{
    int i=0,wordc=0,charc=0,linec=0;
    char str[100];
    printf("To exit the string write *");
    printf("Enter the string = ");
    scanf("%c",&str[i]);
    while (str[i]!='*')
    {
        i++;
        scanf("%c",&str[i]);
    }
    str[i]='\0';
    i=0;
    while(str[i]!='\0')
    {
        if(str[i]=='\n')
        {
            linec++;
        }
        if (str[i]==' ' && str[i+1]!=' ')
        {
            wordc++;
        }
        charc++;
        i++;
    }
    printf("No of word in string is %d\n",wordc);
    printf("No of character in string is %d\n",charc);
    printf("No of lines in the string are %d\n",linec);
    return 0;
}