#include<stdio.h>

int main()
{
	int no;
	printf("Enter a number to check: ");
	scanf("%d",&no);
	
	if(no%2==0)
		printf("Even");
	else
		printf("Odd");
		
	return 0;
}
