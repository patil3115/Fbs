#include<stdio.h>

int main()
{
	double basic;
	double da,ta,hra;
	double salary;
	
	printf("Enter the basic: \n");
	scanf("%lf",&basic);
	
	if(basic<=5000)
	{
		da=basic*0.10;
		ta=basic*0.20;
		hra=basic*0.25;
		
		salary=da+ta+hra;
		
		printf("da=%.3lf\nta=%.3lf\nhra=%.3lf \n",da,ta,hra);
		printf("Total Salary is %.3lf \n",salary);
	}
	else
	{
		da=basic*0.15;
		ta=basic*0.25;
		hra=basic*0.30;
		
		salary=da+ta+hra;
		
		printf("da=%.3lf\nta=%.3lf\nhra=%.3lf \n",da,ta,hra);
		printf("Total Salary is %.3lf \n",salary);
	}
	
	return 0;
}
