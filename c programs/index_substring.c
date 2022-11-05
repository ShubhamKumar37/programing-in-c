#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,k,f,l;
    char str[100],s[100];
    k=0;
    printf("Enter the string = ");
    gets(str);
    gets(s);
    l=strlen(str);
    for(i=0;i<=l;i++)
    {
        f=i;
        for (j=0;j<=strlen(s);j++)
        {
            if(str[f]!=s[j])
            {
                break;
            }
            else
            {
                k+=1;
            }
            f++;

        }
    }
    if (k==0)
    {
        printf("number not found");
    }
    return 0;
}
