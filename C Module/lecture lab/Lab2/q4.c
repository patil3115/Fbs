#include<stdio.h>

int main()
{
	char c;
	printf("Enter char,symbol or digit to check: ");
	scanf("%c",&c);
	
	if(c>'0' && c<'9')
	{
		printf("is a digit");
	}
	else
	{
		if((c>'a' && c<'z') || (c>'A' && c<'Z'))
			printf("is a character");
		else
			printf("is a special symbol");
	}
	
	return 0; 
}
