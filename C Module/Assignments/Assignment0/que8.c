#include<stdio.h>

int main()
{
	int l,b,perimeter;
	
	printf("Enter the length of rectangle: \n");
	scanf("%d",&l);
	
	printf("Enter the breadth of rectangle: \n");
	scanf("%d",&b);
	
	perimeter=2*(l+b);
	printf("Perimeter is : %d",perimeter);
	
}
