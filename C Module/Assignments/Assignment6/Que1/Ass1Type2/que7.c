#include<stdio.h>

double calculateSalary();   // declaration

void main()
{
    double total = calculateSalary();   // function call
    printf("Total Salary = %.3lf\n", total);
}

double calculateSalary()    // definition
{
    double basic, da, ta, hra, salary;

    printf("Enter the basic salary: ");
    scanf("%lf", &basic);

    if(basic <= 5000)
    {
        da = basic * 0.10;
        ta = basic * 0.20;
        hra = basic * 0.25;
    }
    else
    {
        da = basic * 0.15;
        ta = basic * 0.25;
        hra = basic * 0.30;
    }

    salary = da + ta + hra;

    printf("DA = %.3lf\nTA = %.3lf\nHRA = %.3lf\n", da, ta, hra);
    return salary;   // returning total salary
}

