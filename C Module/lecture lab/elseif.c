#include<stdio.h>

int main()
{
	double marks;
	printf("Enter marks: \n");
	scanf("%lf",&marks);
	
	if(marks>=75)
		printf("A+");
	else if(marks>=65)
		printf("B+");
		else if(marks>=45)
			printf("C+");
			else if(marks>=35)
				printf("Pass");
				else
					printf("Fail");
}
