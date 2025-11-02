#include<stdio.h>

int main()
{
	int start;
	printf("Enter start: ");
	scanf("%d",&start);
	
	int end;
	printf("Enter end: ");
	scanf("%d",&end);
	
	int i,sum=0;
	
	for(i=start;i<=end;i++)
	{
		sum=sum+i;
	}
	
	printf("%d",sum);
}
