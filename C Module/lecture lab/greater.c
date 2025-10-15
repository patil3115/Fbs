#include<stdio.h>

int main()
{
	double a;
	double b;
	double c;
	
	printf("Enter a: \n");
	scanf("%lf",&a);
	printf("Enter b: \n");
	scanf("%lf",&b);
	printf("Enter c: \n");
	scanf("%lf",&c);
	
	if(a>b)
	{
		if(a>c)
		{
			printf("a is greater");
		}
		else
		{
			printf("c is greater");
		}
	}
	else
	{
		if(b>c)
		{
			printf("b is greater");
		}
		else
		{
			printf("c is greater");
		}
	}
}
