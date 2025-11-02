#include<stdio.h>

int main()
{
	int no;
	printf("Enter number: ");
	scanf("%d",&no);
	
	int i,sum=0;
	
	for(i=1;i<no;i++)    //a number is perfect if sum of its proper divisors except itself is exactly equals to the number itself
	{
		if(no%i==0)
			sum=sum+i;
	}
	
	if(sum==no)
		printf("Perfect number");
	else
		printf("Not perfect number");
}
