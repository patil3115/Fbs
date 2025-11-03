#include<stdio.h>

int main()
{
	int n;
	printf("Enter range: ");
	scanf("%d",&n);
	
	int i,j,sum,rem,temp,fact;
	
	for(i=1;i<=n;i++)
	{
		sum=0;
		temp=i;

		while(temp>0)
		{
			rem=temp%10;
			fact=1;
				
			for(j=1;j<=rem;j++)
			{
				fact=fact*j;
			}
				
			sum=sum+fact;
			temp=temp/10;
		}
			
		if(sum==i)
			printf("%d ",i);
	}
}
