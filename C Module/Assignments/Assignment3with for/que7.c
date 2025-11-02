#include<stdio.h>

int main()
{
	int no;
	printf("Enter no: ");
	scanf("%d",&no);
	
	int i,fact=1;
	
	for(i=1;i<=no;i++)
	{
		fact=fact*i;           
	}
	
	printf("%d",fact);
}
