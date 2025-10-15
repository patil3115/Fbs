#include<stdio.h>

void main()
{
	int no=73285;
	int r1,r2,r3,r4,r5,sum;
	
	r1=no%10;   //5
	no=no/10;   //7328
	r2=no%10;   //8
	no=no/10;   //732
	r3=no%10;   //2
	no=no/10;   //73
	r4=no%10;   //3
	r5=no/10;   //7
	
	sum=r1+r2+r3+r4+r5;
	
	printf("Sum= %d",sum);
}
