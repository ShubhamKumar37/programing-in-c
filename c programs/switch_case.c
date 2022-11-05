#include<stdio.h>

int main(){
    int marks;
    printf("enter your jee marks \n");
    scanf("%d",&marks);
    switch (marks){
        case 30:
            printf("you are appearing for retest \n");
        break;
        case 50:
            printf("you are going in private college \n");
        break;
        case 90:
            printf("you are going in goverment college \n");
        break;
        default:
            printf("you are going in IITs \n");
    }
    return 0;
}