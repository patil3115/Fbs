#include<stdio.h>

int calc();   // function declaration

void main()
{
	int ans = calc();   // function call
	printf("Ans is: %d", ans);
}

int calc()    // function definition
{
	int a,b,ans;
	char c;
	
	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	printf("Enter desired operation among +,-,/,*,%%: ");
	scanf(" %c",&c);
	
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
		return 0;   // return 0 for invalid operator
	}
	
	return ans;
}

