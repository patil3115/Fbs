#include<stdio.h>

int main()
{
	char c;
	
	printf("Enter the alphabet: \n");
	scanf("%c",&c);
	
	if(c>='A' && c<='Z')
	{
		printf("Uppercase letter: ");
	}
	else
	{
		printf("Lowercase letter: ");
	}
	
	return 0;	
}
