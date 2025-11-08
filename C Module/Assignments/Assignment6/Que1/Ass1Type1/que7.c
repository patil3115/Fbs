#include<stdio.h>

void calculateSalary();   // function declaration

void main()
{
    calculateSalary();    // function call
}

void calculateSalary()    // function definition
{
    double basic;
    double da, ta, hra;
    double salary;

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
    printf("Total Salary = %.3lf\n", salary);
}

