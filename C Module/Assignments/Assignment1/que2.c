#include<stdio.h>

int main()
{
	int n;
	int first,last;
	printf("Enter the number: \n");
	scanf("%d",&n);
	
	if(n>=100 && n<=999)
	{
		first=n/100;    //Quotient(first digit)
		last=n%10;     //remainder(last digit)
		
		if(first==last)
		{
			printf("Pallindrome");
		}
		else
		{
			printf("Not a pallindrome");
		}
	}
	else
	{
		printf("enter valid number!!");
	}
}
