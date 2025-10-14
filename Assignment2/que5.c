#include<stdio.h>

int main()
{
	double price;
	double pay;
	char c;
	
	printf("Enter the price: ");
	scanf("%lf",&price);
	
	printf("Are you a student? y/n: ");
	scanf(" %c",&c);
	
	if(c=='y')
	{	
		if(price>500)
		{
			printf("20%% discount\n");
			pay=price-(price*0.2);
			printf("Pay %lf",pay);
		}
		else
		{
			printf("10%% discount\n");
			pay=price-(price*0.1);
			printf("Pay %lf",pay);
		}
	}
	else
	{
		if(price>600)
		{
			printf("15%% discount\n");
			pay=price-(price*0.15);
			printf(" Pay %lf",pay);
		}
		else
		{
			printf("No discount");
		}
	}
	
}
