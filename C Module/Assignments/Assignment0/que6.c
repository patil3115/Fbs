#include <stdio.h>

int main()
{
	int a;
	int square,cube;
	
	printf("Enter the number: \n");
	scanf("%d",&a);
	
	square=a*a;
	cube=a*a*a;
	
	printf("Square is %d and cube is %d",square,cube);
}
