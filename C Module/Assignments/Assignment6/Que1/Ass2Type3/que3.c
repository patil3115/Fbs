#include<stdio.h>

void greatest(int a, int b, int c);   // function declaration

void main()
{
	int a=10, b=30, c=20;
	greatest(a, b, c);   // function call with parameters
}

void greatest(int a, int b, int c)   // function definition with parameters
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
}

