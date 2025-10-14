#include<stdio.h>

int main()
{
	int a,b,ans;
	char c;
	
	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	printf("Enter desired operation among +,-,/,*,%%: ");  //to print % use %%
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
	}
	
	printf("Ans is: %d",ans);
	
	return 0;
}
