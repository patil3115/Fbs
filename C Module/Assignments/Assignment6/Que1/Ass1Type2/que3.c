#include<stdio.h>

int checkLeapYear();   // declaration

void main()
{
    int result = checkLeapYear();  // function call

    if(result == 1)
        printf("Leap Year");
    else
        printf("Not a Leap Year");
}

int checkLeapYear()    // definition
{
    int year;
    printf("Enter year: ");
    scanf("%d", &year);

    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        return 1;  // leap year
    else
        return 0;  // not leap year
}

