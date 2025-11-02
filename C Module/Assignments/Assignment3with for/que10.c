#include<stdio.h>

int main()
{
	int no;
	printf("Enter number: ");
	scanf("%d",&no);
	
	int i,last;
	
	last=no%10;       //last integer
	
	for(;i<no;i++)
	{
		no=no/10;
	}
	
	int sum;
	sum=no+last;
	printf("%d (%d+%d)",sum,no,last);
}
