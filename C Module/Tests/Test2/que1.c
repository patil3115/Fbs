#include<stdio.h>

int main()
{
	int units;
	int price;
	printf("Enter units of electricity consumed: ");
	scanf("%d",&units);
	
	if(units>=1 && units<=50)
	{
		price=units*30;
		printf("Bill: Rs.%d",price);
	}
	else if(units>=51 && units<=150)
	{
		price=units*40;
		printf("Bill: Rs.%d",price);
	}
	else
	{
		price=units*50;
		printf("Bill: Rs.%d",price);
	}
}
