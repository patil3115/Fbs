#include<stdio.h>

void checkEligibility();   // function declaration

void main()
{
    checkEligibility();    // function call
}

void checkEligibility()    // function definition
{
    int age;
    printf("Enter the age: ");
    scanf("%d", &age);

    if(age >= 18)
        printf("Eligible to vote");
    else
        printf("Not eligible for voting");
}

