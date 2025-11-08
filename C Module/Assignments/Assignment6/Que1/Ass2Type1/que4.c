#include<stdio.h>

void result();   // function declaration

void main()
{
	result();     // function call
}

void result()    // function definition
{
	double marks;
	
	printf("Enter marks: ");
	scanf("%lf",&marks);
	
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

