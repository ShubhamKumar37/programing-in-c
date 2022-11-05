#include<stdio.h>
#include<string.h>

int main()
{
    char str[100],data[100],newstr[100];
    int i=0,k=0,pos=0,j=0;
    printf("enter the string = ");
    gets(str);
    printf("Enter the data to be added = ");
    gets(data);
    printf("Enter the position = ");
    scanf("%d",&pos);
    while (str[i]!='\0')
    {
        if (i==pos)
        {
            while (data[k]!='\0')
            {
                newstr[j]=data[k];
                j++;
                k++;
            }
        }
        else
        {
            newstr[j]=str[i];
            j++;
        }
        i++;
    }
    newstr[j]='\0';
    puts(newstr);
}