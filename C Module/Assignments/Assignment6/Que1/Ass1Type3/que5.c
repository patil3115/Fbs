#include<stdio.h>

void checkVotingEligibility(int age);   // declaration

void main()
{
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    checkVotingEligibility(age);   // call with argument
}

void checkVotingEligibility(int age)   // definition
{
    if(age >= 18)
        printf("Eligible to vote");
    else
        printf("Not eligible for voting");
}

