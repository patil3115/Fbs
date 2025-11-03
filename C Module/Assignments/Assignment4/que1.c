#include<stdio.h>

int main()
{
	int n;
	printf("Enter range: ");
	scanf("%d",&n);                 //range
	
	int i,flag;
	int j;
	
	for(i=2;i<=n;i++)             // number to be checked
	{
		flag=1;                  // assume i is prime
		
		for(j=2;j<=i/2;j++)      // same as prime or not
		{
			if(i%j==0)
			{
				flag=0;         // not prime
				break;
			}
		}
		
		if(flag==1)
			printf("%d ",i);
	}
}
