#include<stdio.h>

int divisible();   // function declaration

void main()
{
	int res = divisible();   // function call
	// Result is not used because output is printed inside
}

int divisible()    // function definition
{
	int n;
	printf("Enter number: ");
	scanf("%d",&n);
	
	if(n%3==0 && n%5==0)
	{
		printf("Divisible by both");
	}
	else if(n%3==0 && n%5 !=0)
	{
		printf("Divisible by 3 but not by 5");
	}
	else if(n%5==0 && n%3 !=0)
	{
		printf("Divisible by 5 but not by 3");
	}
	else
	{
		printf("Divisible by none");
	}
	
	return 0;  // return 0 because output is printed
}

