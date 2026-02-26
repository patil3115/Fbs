#include<stdio.h>

int main()
{
	double marks;
	printf("Enter total marks: ");
	scanf("%lf",&marks);
	
	if(marks>75)
		printf("Distinction");
	else if(marks>65)
		printf("First Class");
	else if(marks>55)
		printf("Second Class");
	else if(marks>=40)
		printf("Pass Class");
	else
		printf("Fail");
	
	return 0;
}
