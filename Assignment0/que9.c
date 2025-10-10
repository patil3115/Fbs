#include<stdio.h>

int main()
{
	int b,h,area;
	
	printf("Enter the base of a triangle: \n");
	scanf("%d",&b);
	
	printf("Enter the height of a triangle: \n");
	scanf("%d",&h);
	
	area=(b*h)/2;
	printf("Area of triangle is: %d",area);
}
