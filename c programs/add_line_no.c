#include<stdio.h>
#include<string.h>

int main()
{
    int i=0,linec=1;
    char str[100];
    printf("Enter * for end the loop\n");
    printf("Enter the string = ");
    scanf("%c",&str[i]);
    while(str[i]!='*')
    {
        i++;
        scanf("%c",&str[i]);
    }
    str[i]='\0';
    i=0;
    printf("%d ",linec);
    while (str[i]!='\0')
    {
        if(str[i]=='\n')
        {
            linec++;
            printf("\n");
            printf("%d ",linec);
        }
        if(str[i]!='\n')
        {
            printf("%c",str[i]);
        }
        i++;
    }
    return 0;

}