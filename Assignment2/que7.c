#include<stdio.h>

int main()
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
}
