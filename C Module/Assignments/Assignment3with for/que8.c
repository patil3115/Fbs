#include<stdio.h>

int main()                     //incomplete
{
	int no;
	printf("Enter number: ");
	scanf("%d",&no);
	
	int i,fact=1,sum;
	
	for(i=1;i<no;i++)
	{
		no=no/10;
		printf("%d",no);
		for(i=1;i<=no;i++)
		{
			fact=fact*i;           
		}
	
		printf("%d",fact);
	}
}
