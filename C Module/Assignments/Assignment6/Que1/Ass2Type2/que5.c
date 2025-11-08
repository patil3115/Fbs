#include<stdio.h>

int discount();   // function declaration

void main()
{
	int res = discount();   // function call
	// Result is not used because output is printed inside
}

int discount()    // function definition
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
	
	return 0;  // return 0 because output is printed
}

