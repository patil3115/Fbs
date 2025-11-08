#include<stdio.h>

char* divisible(int n);   // function declaration

void main()
{
	int n;
	printf("Enter number: ");
	scanf("%d",&n);
	
	char* result = divisible(n);   // function call with parameter and return value
	printf("%s", result);
}

char* divisible(int n)   // function definition with parameter and return
{
	if(n%3==0 && n%5==0)
	{
		return "Divisible by both";
	}
	else if(n%3==0 && n%5 !=0)
	{
		return "Divisible by 3 but not by 5";
	}
	else if(n%5==0 && n%3 !=0)
	{
		return "Divisible by 5 but not by 3";
	}
	else
	{
		return "Divisible by none";
	}
}

