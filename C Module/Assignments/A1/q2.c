#include<stdio.h>

int main()
{
	int n;
	printf("Enter a three digit number to check if pallindrome: ");    //123
	scanf("%d",&n);
	
	int temp=n;  //123
	
	int r1,n1,r2,r3,rev;
	
	r1=n%10;  //3
	n1=n/10;  //12
	r2=n1%10;  //2
	r3=n1/10;  //1
	
	rev=r3+r2*10+r1*100;
	
	if(rev==temp)
		printf("Pallindrome");
	else
		printf("Not Pallindrome");
	
	return 0;
}
