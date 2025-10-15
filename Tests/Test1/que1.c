#include<stdio.h>

int main()
{
	int hh,mm,ss;
	int seconds;
	
	printf("Enter the time in hh:mm:ss : ");   //01:01:01=>01+60+3600=>3661
	scanf("%d:%d:%d",&hh,&mm,&ss);
	
	//seconds=ss;   //0+1=>1
	//seconds=seconds+(mm*60);  //1+(1*60)=>61
	//seconds=seconds+(hh*60*60);  //61+(1*60*60)=>3661
	
	seconds=(hh*3600)+(mm*60)+ss;
	
	printf("Total seconds are: %d",seconds);
}
