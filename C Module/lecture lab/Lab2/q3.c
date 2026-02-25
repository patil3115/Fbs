#include<stdio.h>

int main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	
	if(n==0)
		printf("Number is zero");
	else
	{
		if(n<0)
			printf("No is negative");
		else
			printf("No is positive");
	}
	
	return 0;
}
