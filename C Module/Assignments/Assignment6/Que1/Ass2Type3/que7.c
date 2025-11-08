#include<stdio.h>

void ageCategory(float age);   // function declaration

void main()
{
	float age;
	printf("Enter age: ");
	scanf("%f",&age);
	
	ageCategory(age);   // function call with parameter
}

void ageCategory(float age)   // function definition with parameter
{
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
}

