#include<stdio.h>
#include<string.h>

int parser(char * string)
{
     int i;
     int index=0;
     int in=0;
     for (i = 0;i < strlen(string);i++)
     {
        if (string[i]=='<')
        {
            index=1;
            continue;
        }
        else if (string[i]=='>')
        {
            index=0;
            continue;
        }
        if (index==0)
        {
            
            string[in]=string[i];
            in ++;
        }
    }
    string[in]='\0';
    while (string[0]==' ')
    {
        for (i=0;i<strlen(string);i++)
        {
            string[i]=string[i+1];
        }
    }
    while (string[strlen(string)-1]==' ')
    {
        string[strlen(string)-1]='\0';
    }
}

int main(){
    char string[]="<h1>   shubham  <h1>";
    parser(string);
    printf("after removing space and header syntax --%s--",string);
    return 0;
}