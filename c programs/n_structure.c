#include<stdio.h>
#include<string.h>

struct student
{
    int r_no;
    char name[30];
    int fee;
};

int main()
{
    struct student std1={1,"shubham",133000},std2;
    printf("Roll number os student is %d\n",std1.r_no);
    printf("Name of the student is %s\n",std1.name);
    printf("Fees of the student is %d\n",std1.fee);
    printf("Enter Roll number os student = ");
    scanf("\n%d",&std2.r_no);
    printf("Enter Name of the student is = ");
    gets(std2.name);    
    printf("Enter Fees of the student is = ");
    scanf("\n%d",&std2.fee);
    printf("Roll number os student is %d\n",std2.r_no);
    printf("Name of the student is %s\n",std2.name);
    printf("Fees of the student is %d",std2.fee);
    return 0;
}