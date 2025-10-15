#include<stdio.h>

int main()
{
	char c;
	printf("Enter character: \n");
	scanf("%c",&c);
	
	if(c>='a' && c<='z' || c>='A' && c<='Z')
	{
		printf("%c ic a Alphabet",c);
	}
	else
	{
		if(c>='0' && c<='9')
		{
			printf("%c is a Digit",c);
		}
		else
		{
			if(c=' ')
			{
				printf("%c is a space",c);
			}
			else
			{
				printf("%c is a Symbol",c);
			}
			
		}
	}
}
