#include<stdio.h>

int main()
{
	int no,sum;
	printf("Enter no: ");
	scanf("%d",&no);
	
	int last=no%10;    //last integer
	
	while(no>=10)      //loop will continue till no is greater that 10 is exit we get only one digit standing first 
	{
		no=no/10;     //first digit
	}
	
	sum=last+no;
	
	printf("%d (%d + %d)",sum,no,last);
}
