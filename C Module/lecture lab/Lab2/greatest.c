#include<stdio.h>
int main()
{
	int a=10,b=20,c=15;
	
	if(a>b)
	{
		if(a>c)
			printf("a is greatest");
		else
			printf("c is greatest");
	}
	else
	{
		if(b>c)
			printf("b is greatest");
		else
			printf("c is greatest");
	}
	
	return 0;
}
