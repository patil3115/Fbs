#include<stdio.h>

int main()
{
	int no;
	printf("Enter no: ");
	scanf("%d",&no);
	
	int n;
	printf("Enter no of digits from first and last to add: ");
	scanf("%d",&n);
	
	if(no/n>=2)
	{	int x=1,i=1;
		
		while(i<=n)
		{
			x=x*10;
			i++;
		}
		
		int ld=no%x;
		
		while(no>x)
		{
			no=no/10;
		}
	}
	else
	{
		printf("invalid no of digits");
	}
}
