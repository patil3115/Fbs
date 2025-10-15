#include<stdio.h>

void main()
{
	int no=73285;
	int r1,r2,r3,r4,r5,p1,p2,p3,sum;
	
	r1=no%10;   //5
	p1=no/10;   //7328
	r2=p1%10;   //8
	p2=p1/10;   //732
	r3=p2%10;   //2
	p3=p2/10;   //73
	r4=p3%10;   //3
	r5=p3/10;   //7
	
	sum=r1+r2+r3+r4+r5;
	
	printf("Sum= %d",sum);
}
