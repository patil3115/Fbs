#include<stdio.h>

int main()
{
	char c;
	
	printf("Enter the letter: \n");
	scanf("%c",&c);
	
	if(c>='A' && c<='Z')
	{
		c=c+32;     //lowercase
	}
	else
	{
		c=c-32;     // UPPERCASE
	}
	
	printf("%c",c);
}
