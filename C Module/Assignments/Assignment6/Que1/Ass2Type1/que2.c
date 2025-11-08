#include<stdio.h>

void triangleType();   // function declaration

void main()
{
	triangleType();    // function call
}

void triangleType()    // function definition
{
	float a,b,c;
	printf("Enter the first side: ");
	scanf("%f",&a);
	printf("Enter the second side: ");
	scanf("%f",&b);
	printf("Enter the third side: ");
	scanf("%f",&c);
	
	if(a+b>c && a+c>b && b+c>a)
	{
		if(a==b && b==c)
		{
			printf("This is Equilateral triangle");
		}
		else if(a==b || b==c || c==a)   
		{
			printf("This is Isosceles triangle");
		}
		else
		{
			printf("This is Scalene triangle");
		}
	}
	else
	{
		printf("It is not a triangle");
	}
}

