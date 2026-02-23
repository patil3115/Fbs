#include<stdio.h>

int main()
{
	int yr=2000;
	
	if((yr%400==0) || (yr%4==0 && yr%100 !=0))
		printf("Leap");
	else
		printf("Not a leap year");
		
	return 0;
}
