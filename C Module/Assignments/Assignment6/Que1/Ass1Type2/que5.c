#include<stdio.h>

int checkVotingEligibility();   // declaration

void main()
{
    int result = checkVotingEligibility();   // function call

    if(result == 1)
        printf("Eligible to vote");
    else
        printf("Not eligible for voting");
}

int checkVotingEligibility()    // definition
{
    int age;
    printf("Enter the age: ");
    scanf("%d", &age);

    if(age >= 18)
        return 1;   // eligible
    else
        return 0;   // not eligible
}

