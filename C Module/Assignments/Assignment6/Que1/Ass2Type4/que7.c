#include<stdio.h>

char* ageCategory(float age);   // function declaration

void main()
{
	float age;
	printf("Enter age: ");
	scanf("%f",&age);
	
	char* category = ageCategory(age);   // function call with parameter and return value
	printf("%s", category);
}

char* ageCategory(float age)   // function definition with parameter and return
{
	if(age<12)
	{
		return "Child";
	}
	else if(age>=12 && age<=19)
	{
		return "Teenager";
	}
	else if(age>=20 && age<=59)
	{
		return "Adult";
	}
	else
	{
		return "Senior";
	}
}

