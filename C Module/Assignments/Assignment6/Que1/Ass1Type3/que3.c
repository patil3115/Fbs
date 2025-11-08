#include<stdio.h>

void checkLeapYear(int year);   // declaration

void main()
{
    int y;
    printf("Enter year: ");
    scanf("%d", &y);

    checkLeapYear(y);   // call with argument
}

void checkLeapYear(int year)   // definition
{
    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        printf("Leap Year");
    else
        printf("Not a Leap Year");
}

