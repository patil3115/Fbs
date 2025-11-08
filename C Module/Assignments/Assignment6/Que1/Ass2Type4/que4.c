#include<stdio.h>

int result(double marks);   // function declaration

void main()
{
	double marks;
	printf("Enter marks: ");
	scanf("%lf",&marks);
	
	int res = result(marks);   // function call with parameter and return value
	// Result is not used because output is printed inside
}

int result(double marks)   // function definition with parameter and return
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
	
	return 0;  // return 0 because output is printed inside
}

