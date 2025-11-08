#include<stdio.h>

int greatest(int a, int b, int c);   // function declaration

void main()
{
	int a=10, b=30, c=20;
	int res = greatest(a, b, c);   // function call with parameters and return value
	// Result is not used because output is printed inside
}

int greatest(int a, int b, int c)   // function definition with parameters and return
{
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
	
	return 0;  // return 0 because output is printed inside
}

