#include<stdio.h>

int main()
{
	int no;
	printf("Enter no: ");
	scanf("%d",&no);
	
	int temp=no,rev=0,rem;
	
	while(no>0)
	{
		rem=no%10;
		rev=rev*10+rem;
		no=no/10;
	}
	if(rev==temp)
		printf("Pallindrome");
	else
		printf("Not Pallindrome");
}
