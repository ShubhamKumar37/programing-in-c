#include<stdio.h>

int sum(int a,int b)
{
    return a+b;
}

int sub(int a,int b)
{
    return a-b;
}

int mul(int a,int b)
{
    return a*b;
}

int (*func[4])(int a,int b);

int main()
{
    int num1,num2,ch;
    func[0]=sum;
    func[1]=sub;
    func[2]=mul;
    do
    {
        /* code */
        printf("Enter the value of 2 numbers = ");
        scanf("%d %d",&num1,&num2);
        printf("press 1 for add\npress 2 for subtract\npress 3 for multiply\n");
        scanf("%d",&ch);
        printf("result = %d\n",(*(func+(ch-1)))(num1,num2));
    } while (ch<=2);
    return 0;
    
}