#include<stdio.h>

int main()
{
	int n;
	printf("Enter number to print table of: ");
	scanf("%d",&n);
	int a=1;
	int r;
	
	while(a>0 && a<=10)
	{
		r=n*a;
		printf("%d ",r);
		a++;
	}
}
