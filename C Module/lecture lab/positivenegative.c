#include<stdio.h>

int main()
{
	double n;
	printf("Enter number: \n");
	scanf("%lf",&n);
	
	if(n==0)
	{
		printf("Number is exactly equal to 0");
	}
	else
	{
		if(n<0)
		{
			printf("Number is negative");
		}
		else
		{
			printf("Number is positive");
		}
	}
	
	return 0;
}
