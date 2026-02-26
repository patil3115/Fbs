#include<stdio.h>

int main()
{
	double price;
	printf("Enter total purchase in INR: ");
	scanf("%lf",&price);
	
	char c;
	printf("Are you a Student?(y/n): ");
	scanf(" %c",&c);
	
	if(c=='y')
	{
		if(price>500)
		{
			price=price-(price*0.20);
			printf("Congratulations!!!You get 20%% discount. \nTotal: %.3lf",price);
		}
		else
		{
			price=price-(price*0.10);
			printf("Congratulations!!!You get 10%% discount. \nTotal: %.3lf",price);
		}
	}
	else
	{
		if(price>600)
		{
			price=price-(price*0.15);
			printf("Congratulations!!!You get 15%% discount. \nTotal: %.3lf",price);
		}
		else
		{
			printf("Sorry!!! No discount. \nTotal: %.3lf",price);
		}
	}
	
	return 0;
}
