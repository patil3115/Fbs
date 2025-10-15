#include<stdio.h>

int main()
{
	int no;
	int r1,r2;
	printf("Enter number: ");   //541
	scanf("%d",&no);
	
	r1=no%10;  //   1
	no=no/10;  //   54
	r2=no%10;  //   4
	
	printf("%d%d",r2,r1);
	
}
