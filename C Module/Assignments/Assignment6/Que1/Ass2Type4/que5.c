#include<stdio.h>

double discount(double price, char c);   // function declaration

void main()
{
	double price;
	char c;
	
	printf("Enter the price: ");
	scanf("%lf",&price);
	printf("Are you a student? y/n: ");
	scanf(" %c",&c);
	
	double pay = discount(price, c);   // function call with parameters and return value
	printf("Final amount to pay: %lf", pay);
}

double discount(double price, char c)   // function definition with parameters and return
{
	double pay = price;
	
	if(c=='y')
	{	
		if(price>500)
		{
			printf("20%% discount\n");
			pay=price-(price*0.2);
		}
		else
		{
			printf("10%% discount\n");
			pay=price-(price*0.1);
		}
	}
	else
	{
		if(price>600)
		{
			printf("15%% discount\n");
			pay=price-(price*0.15);
		}
		else
		{
			printf("No discount\n");
			pay = price;
		}
	}
	
	return pay;
}

