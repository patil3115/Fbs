#include<stdio.h>

int main()
{
	int n;
	printf("Enter a 5 digit number: ");
	scanf("%d",&n);
	
	int r1,n1,r2,n2,r3,n3,r4,r5,sum;
	
	r1=n%10;
	n1=n/10;
	r2=n1%10;
	n2=n1/10;
	r3=n2%10;
	n3=n2/10;
	r4=n3%10;
	r5=n3/10;
	
	sum=r1+r2+r3+r4+r5;
	printf("Sum: %d",sum);
	
	return 0;
}
