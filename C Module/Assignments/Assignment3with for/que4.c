#include<stdio.h>

int main()
{
	int n;
	printf("Enter n= ");
	scanf("%d",&n);
	
	int i,flag=1;
	
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag=0;
			break;
		}
	}
	
	if(flag==1)
		printf("Prime");
	else
		printf("Not prime");
}
