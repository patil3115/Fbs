#include<stdio.h>

int isLeap(int year)
{
    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        return 1;
    else
        return 0;
}

int main()
{
    int year;

    printf("Enter year: ");
    scanf("%d", &year);

    if(isLeap(year))
        printf("Leap year\n");
    else
        printf("Not a leap year\n");

    return 0;
}

