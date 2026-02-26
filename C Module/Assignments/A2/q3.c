#include<stdio.h>

int main()
{
	int a,b,c;
	printf("Enter number1: ");
	scanf("%d",&a);
	
	printf("Enter number2: ");
	scanf("%d",&b);
	
	printf("Enter number3: ");
	scanf("%d",&c);
	
	if(a>b)
	{
		if(a>c)
			printf("%d is greatest",a);
		else
			printf("%d is greates",c);
	}
	else
	{
		if(b>c)
			printf("%d is greatest",b);
		else
			printf("%d is greatest",c);
	}
	
	return 0;
}
