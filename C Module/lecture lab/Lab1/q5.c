#include<stdio.h>

int main()
{
	int p=121;
	int r1,n1,r2,r3;
	
	r1=p%10;
	n1=p/10;
	r2=n1%10;
	r3=n1/10;
	
	int rev=r1+r2*10+r3*100;
	
	if(rev==p)
		printf("Pallindrome");
	else
		printf("Not Pallindrome");
}
