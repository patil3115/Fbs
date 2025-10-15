#include <stdio.h>

int main()
{
	int a,b,c,d,e;
	int avg;
	
	printf("Enter first number: \n",a);
	scanf("%d",&a);
	
	printf("Enter second number: \n",b);
	scanf("%d",&b);
	
	printf("Enter third number: \n",c);
	scanf("%d",&c);
	
	printf("Enter fourth number: \n",d);
	scanf("%d",&d);
	
	printf("Enter fifth number: \n",e);
	scanf("%d",&e);
	
	avg=(a+b+c+d+e)/5;
	printf("Avg of five numbers is %d",avg);
}
