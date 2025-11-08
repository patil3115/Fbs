#include<stdio.h>

int ageCategory();   // function declaration

void main()
{
	int res = ageCategory();   // function call
	// Result is not used because output is printed inside
}

int ageCategory()    // function definition
{
	float age;
	printf("Enter age: ");
	scanf("%f",&age);
	
	if(age<12)
	{
		printf("Child");
	}
	else if(age>=12 && age<=19)
	{
		printf("Teenager");
	}
	else if(age>=20 && age<=59)
	{
		printf("Adult");
	}
	else
	{
		printf("Senior");
	}
	
	return 0;  // return 0 because output is printed
}

