#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter side1: \n");
	scanf("%d",&a);
	printf("Enter side2: \n");
	scanf("%d",&b);
	printf("Enter side3: \n");
	scanf("%d",&c);
	
	if(a==b && b==c)
		printf("Equilateral triangle");
	else if(a==b || a==c || b==c)
		printf("Isoscalen triangle");
	else
		printf("scalen triangle");
}
