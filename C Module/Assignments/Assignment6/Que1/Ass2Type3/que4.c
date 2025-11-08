#include<stdio.h>

void result(double marks);   // function declaration

void main()
{
	double marks;
	printf("Enter marks: ");
	scanf("%lf",&marks);
	
	result(marks);   // function call with parameter
}

void result(double marks)   // function definition with parameter
{
	if(marks>75)
		printf("Distinction");
	else if(marks>65)
		printf("First class");
	else if(marks>55)
		printf("Second class");
	else if(marks>=40)
		printf("Pass");
	else
		printf("Fail");
}

