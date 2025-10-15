#include<stdio.h>

int main()
{
	int sub1,sub2,sub3,sub4,sub5;
	int maxmarks;
	int marks;
	float percentage;
	
	maxmarks=500;
	
	printf("Enter marks of sub1: \n");
	scanf("%d",&sub1);
	
	printf("Enter marks of sub2: \n");
	scanf("%d",&sub2);
	
	printf("Enter marks of sub3: \n");
	scanf("%d",&sub3);
	
	printf("Enter marks of sub4: \n");
	scanf("%d",&sub4);
	
	printf("Enter marks of sub5: \n");
	scanf("%d",&sub5);
	
	marks=sub1+sub2+sub3+sub4+sub5;
	percentage=(marks/(float)maxmarks)*100;
	
	printf("Total marks obtained: %d \n",marks);
	printf("Percentage obtained: %.2f",percentage);
}
