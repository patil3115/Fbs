#include<stdio.h>

int main()
{
	int m,h,remain;
	
	printf("Given minutes: \n");
	scanf("%d",&m);
	
	h=m/60;
	remain=m%60;
	
	printf("%d minutes = %d hours %d minutes",m,h,remain);
}
