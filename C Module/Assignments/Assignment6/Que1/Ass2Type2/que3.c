#include<stdio.h>

int greatest();   // function declaration

void main()
{
	int res = greatest();   // function call
	// The result is not used because output is printed inside the function
}

int greatest()    // function definition
{
	int a=10,b=30,c=20;
	
	if(a>b && a>c)
	{
		printf("a is greatest");
	}
	else
	{
		if(b>c && b>a)
		{
			printf("b is greatest");
		}
		else
		{
			printf("c is greatest");
		}
	}
	
	return 0;  // return 0 because output is already printed
}

