#include<stdio.h>

int main()
{
	int start,end;
	printf("Enter start: ");
	scanf("%d",&start);
	printf("Enter end: ");
	scanf("%d",&end);
	
	int i,sum=0;
	
	for(i=start;i<=end;i=i+2)
	{
		sum=sum+i;
	}
	printf("sum=%d",sum);
}
