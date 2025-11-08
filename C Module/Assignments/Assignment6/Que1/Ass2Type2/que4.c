#include<stdio.h>

int result();   // function declaration

void main()
{
	int res = result();   // function call
	// Result is not used because output is printed inside
}

int result()    // function definition
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
	
	return 0;  // return 0 because output is printed
}

