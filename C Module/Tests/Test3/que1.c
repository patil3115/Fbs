#include<stdio.h>

int main()
{
	int start,end;
	printf("Enter start: ");
	scanf("%d",&start);
	printf("Enter end: ");
	scanf("%d",&end);
	
	int i;
	
	printf("Even numbers are: ");
	for(i=start;i<=end;i++)
	{
		if(i%2==0)
			printf("%d ",i);
	}
	printf("\n");
	
	printf("Odd numbers are: ");
	for(i=start;i<=end;i++)
	{
		if(i%2!=0)
			printf("%d ",i);
	}
}
