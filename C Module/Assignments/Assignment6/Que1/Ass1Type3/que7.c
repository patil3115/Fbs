#include<stdio.h>

void calculateSalary(double basic);   // declaration

void main()
{
    double basic;
    printf("Enter the basic salary: ");
    scanf("%lf", &basic);

    calculateSalary(basic);   // call with argument
}

void calculateSalary(double basic)   // definition
{
    double da, ta, hra, salary;

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
    printf("Total Salary = %.3lf\n", salary);
}

