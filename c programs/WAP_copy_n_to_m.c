#include<stdio.h>
#include<string.h>

int main()
{
    int i=0,n,m;
    char str[100],newstr[100];
    printf("Enter the string = ");
    scanf("%c",&str[i]);
    while (str[i]!='*')
    {
        i++;
        scanf("%c",&str[i]);
    }
    str[i]='\0';
    printf("Enter the number and position from where to copy = ");
    scanf("%d %d",&n,&m);
    i=0;
    for(i=0;i<n;i++)
    {
        newstr[i]=str[m-1];
        m++;
    }
    newstr[i]='\0';
    printf("new string is %s",newstr);
    return 0;
}