#include<stdio.h>

int main()
{
	//int a=10,b=20,c=30;
	int a,b,c;
	printf("enter a,b,c");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>b && a>c)
		printf("a is greater");
		else if(b>a && b>c)
			printf("b is greater");
			else
				printf("c is greater");
				
				return 0;
}
