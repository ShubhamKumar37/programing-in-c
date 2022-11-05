#include<stdio.h>
#include<stdlib.h>
int main(){
    int chr=65;
    int i,j,a,b;
    for (i=1;i<=5;i++)
    {
        for (j=1;j>=5;j--)
            printf(" ");
        
        for (a=1;a<=i;a++)
            printf("%c",chr++);
            chr--;
        for (b=1;b<i;b++)
            printf("%c",--chr);
        printf("\n");
        chr=65;

    }
    return 0;

}