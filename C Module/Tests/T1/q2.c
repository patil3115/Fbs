#include<stdio.h>
int main()
{
	int yr;
	printf("Enter year to check: ");
	scanf("%d",&yr);
	
	if((yr%400==0) || (yr%4==0 && yr%100!=0))
		printf("Leap Year");
	else
		printf("Not a leap year");

	return 0;
}
