#include<stdio.h>

void triangleType(float a, float b, float c);   // function declaration

void main()
{
	float a, b, c;
	printf("Enter the first side: ");
	scanf("%f",&a);
	printf("Enter the second side: ");
	scanf("%f",&b);
	printf("Enter the third side: ");
	scanf("%f",&c);
	
	triangleType(a, b, c);   // function call with parameters
}

void triangleType(float a, float b, float c)   // function definition with parameters
{
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

