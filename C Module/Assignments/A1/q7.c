#include<stdio.h>

int main()
{
	double basic;
	printf("Enter basic salary: ");
//	scanf("%.3lf",&basic);  // "scanf never uses precisions like .3lf only printf takes precisions"
	scanf("%lf",&basic);
	
	double da,ta,hra,salary;
	
	if(basic<=5000)
	{
		da=0.10*basic;
		ta=0.20*basic;
		hra=0.25*basic;
		
		salary=da+ta+hra;
		
		printf("da: %.3lf\nta: %.3lf\nhra: %.3lf\n",da,ta,hra);
		printf("Salary is %.3lf",salary);

	}
	else
	{
		da=0.15*basic;
		ta=0.25*basic;
		hra=0.30*basic;
		
		salary=da+ta+hra;
		
		printf("da: %.3lf\nta: %.3lf\nhra: %.3lf\n",da,ta,hra);
		printf("Salary is %.3lf",salary);

	}
	
	return 0;
}
