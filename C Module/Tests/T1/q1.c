#include<stdio.h>
int main()
{
	int hh;
	int mm;
	int ss;
	int total_sec;
	
	printf("Enter hh:mm:ss .: ");
	scanf("%d:%d:%d",&hh,&mm,&ss);
	
	total_sec=hh*60*60+mm*60+ss;
	
	printf("Total seconds: %d",total_sec);
	
	return 0;
}
