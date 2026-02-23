#include<stdio.h>

int main()
{
	int yr;
	printf("Enter a year: ");
	scanf("%d",&yr);
	
	if((yr%400==0) || (yr%4==0 && yr%100!=0))
		printf("Leap");
	else
		printf("Not Leap");
		
	return 0;
}
