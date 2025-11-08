#include<stdio.h>

int calc(int a, int b, char c);   // function declaration

void main()
{
	int a, b;
	char c;
	
	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	printf("Enter desired operation among +,-,/,*,%%: ");
	scanf(" %c",&c);
	
	int ans = calc(a, b, c);   // function call with parameters and return value
	printf("Ans is: %d", ans);
}

int calc(int a, int b, char c)   // function definition with parameters and return
{
	int ans;
	
	if(c=='+')
		ans=a+b;
	else if(c=='-')
		ans=a-b;
	else if(c=='/')
		ans=a/b;
	else if(c=='*')
		ans=a*b;
	else if(c=='%')
		ans=a%b;
	else
	{
		printf("Enter valid operator");
		return 0;
	}
	
	return ans;
}

