#include<stdio.h>
int main()
{
	int num1,num2,op,result;
	printf("Enter number1: \n");
	scanf("%d",&num1);
	printf("Enter number2: \n");
	scanf("%d",&num2);
	
	printf("Enter operator choice: 1.+ \n2.- \n3./ \n4.* \n5.%% \n");
	scanf("%d",&op);
	
	if(op==1)
		result=num1+num2;
	else if(op==2)
		result=num1-num2;
	else if(op==3)
		result=num1/num2;
	else if(op==4)
		result=num1*num2;
	else 
		result=num1%num2;
		
	printf("Result: %d",result);
	return 0;
		
}
