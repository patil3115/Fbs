#include<stdio.h>
int main()
{
	double units,bill;
	printf("Enter units of electricity: ");
	scanf("%lf",&units);
	
	if(units>=1 && units<=50)
	{
		bill=units*30;
		printf("Bill: %.3lf",bill);
	}
	else if(units>=51 && units<=150)
	{
		bill=units*40;
		printf("Bill: %.3lf",bill);
	}
	else
	{
		bill=units*50;
		printf("Bill: %.3lf",bill);
	}
		
}


