#include<stdio.h>

int main()
{
	int n;
	printf("Enter number: ");     //armstrong number: 153 => 1^3+5^3+3^3 ==153            9474 => 9^4+4^4+7^4+4^4 ==9474
	scanf("%d",&n);				// a number that is equal to the sum of its own digits, each raised to the power of the total number of digits
	
	int rem,sum=0,temp=n;
	
	while(n>0)
	{
		rem=n%10;
		sum=sum+rem*rem*rem;
		n=n/10;
	}
	
	if(sum==temp)
		printf("Armstrong");
	else
		printf("Not armstrong");
}
