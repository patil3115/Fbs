#include<stdio.h>

int triangleType(float a, float b, float c);   // function declaration

void main()
{
	float a, b, c;
	printf("Enter the first side: ");
	scanf("%f",&a);
	printf("Enter the second side: ");
	scanf("%f",&b);
	printf("Enter the third side: ");
	scanf("%f",&c);
	
	int res = triangleType(a, b, c);   // function call with parameters and return value
	// Result is not used because output is printed inside
}

int triangleType(float a, float b, float c)   // function definition with parameters and return
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
	
	return 0;  // just return 0 because output is printed inside
}

