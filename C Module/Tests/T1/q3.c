#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	
	int r1;
	
	r1=n%100; //last two digit
	printf("Last two digits are: %d",r1);
	
	return 0;
}
