#include<stdio.h>
#include<string.h>

int main()
{
    int i=0,linec=1,lineS,lineN,j;
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
    printf("NOW.....");
    printf("Enter the starting point and no of line to copy");
    scanf("%d %d",&lineS,&lineN); 
    linec=1;
    while(str[i]!='\0')
    {
        if (linec==lineS)
        {
            j=i;
            while (lineN>0)
            {
                printf("%c",str[j]);
                j++;
                if(str[j]=='\n')
                {
                    lineN--,linec++;
                    printf("%d\t",linec);
                }
            }
        }
        else
        {
            i++;
            if(str[i]=='\n')
            {
                linec++;
            }
        }
    }
    return 0;
}