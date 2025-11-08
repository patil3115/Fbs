#include<stdio.h>

void calc(int a, int b, char c);   // function declaration

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
	
	calc(a, b, c);   // function call with parameters
}

void calc(int a, int b, char c)   // function definition with parameters
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
		return;
	}
	
	printf("Ans is: %d",ans);
}

