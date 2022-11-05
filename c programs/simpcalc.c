#include <stdio.h>
 
int main()
{
	char op;
	float num1, num2, result = 0;
	printf("enter a operater ");
  	scanf("%c", &op);
	printf("enter two number ");
  	scanf("%f %f",&num1,&num2);
  	switch(op){
  		case '+':
  			result=num1+num2;
  			break;
  		case '-':
  			result=num1-num2;
  			break;
  		case '*':
  			result=num1*num2;
  			break;
  		case '/':
  			result=num1/num2;
  			break;
		default:
			printf("you enter a unkown value");
	}
	printf("result of %.2f and %.2f is %.2f",num1,num2,result);
  	return 0;
}