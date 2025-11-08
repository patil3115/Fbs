#include<stdio.h>

void discount(double price, char c);   // function declaration

void main()
{
	double price;
	char c;
	
	printf("Enter the price: ");
	scanf("%lf",&price);
	printf("Are you a student? y/n: ");
	scanf(" %c",&c);
	
	discount(price, c);   // function call with parameters
}

void discount(double price, char c)   // function definition with parameters
{
	double pay;
	
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

