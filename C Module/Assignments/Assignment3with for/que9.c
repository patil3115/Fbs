#include<stdio.h>

int main()
{
	int no;
	printf("Enter number: ");
	scanf("%d",&no);
	
	int rev=0,rem;
	int temp=no;
	
	for(;no>0;no=no/10)
	{
		rem=no%10;
		rev=rev*10+rem;
//		no=no/10;             //it is increment operation 
	}
	if(rev==temp)
		printf("Palindrome");
	else
		printf("Not palindrome");
}
