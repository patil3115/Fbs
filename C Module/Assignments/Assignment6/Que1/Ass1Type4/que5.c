#include<stdio.h>

int isEligible(int age)
{
    if(age >= 18)
        return 1;
    else
        return 0;
}

int main()
{
    int age;

    printf("Enter the age: ");
    scanf("%d", &age);

    if(isEligible(age))
        printf("Eligible to vote\n");
    else
        printf("Not eligible for voting\n");

    return 0;
}

