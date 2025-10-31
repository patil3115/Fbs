#include<stdio.h>

int main()
{
	int start,end,sum=0;
	int n=start;
	
	printf("Enter the start value: ");
	scanf("%d",&start);
	printf("Enter the end value: ");
	scanf("%d",&end);
	
	while(n<=end)
	{
		sum=sum+n;
		//  printf("%d",sum);    //prints running sum
		n++;
	}
	
	printf("%d",sum);
	
	return 0;
}
