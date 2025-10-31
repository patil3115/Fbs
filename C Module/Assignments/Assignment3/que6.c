#include<stdio.h>

int main()
{
	int n;
	printf("Enter number: ");
	scanf("%d",&n);
	
	int i=1;					//if a number is exctly equals to a sum of its proper divisors except itself,is a perfect number.
	int temp=n;
	int sum=0;
	
	while(i<=n/2)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
		i++;
	}
	
	if(sum==temp)
		printf("Perfect number");
	else
		printf("Not Perfect number");
}
