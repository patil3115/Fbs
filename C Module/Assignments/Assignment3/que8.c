#include<stdio.h>

int main()
{
	int n;
	printf("Enter number: ");
	scanf("%d",&n);
	
	int rem,temp=n,sum=0;
	
	while(n>0)
	{
		rem=n%10;
		int i=1;
		int fact=1;
		
		while(i<=rem)
		{
			fact=fact*i;
			
			i++;
		}
		
		sum=sum+fact;
		n=n/10;
	}
	
	if(sum==temp)
		printf("Strong number");
	else
		printf("Not Strong number");
}
