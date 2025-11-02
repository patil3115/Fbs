#include<stdio.h>

int main()
{
	int no,temp;
	printf("Enter number: ");
	scanf("%d",&no);
	
	int i;
	
	for(i=1;i<=10;i++)
	{
		temp=no*i;
		
		printf("%d ",temp);      // printf inside loop prints output of each iteration till loop exit 
	}
	
	//printf("%d ",temp);       // printf outside loop prints only the output of last possible iteration
}
