#include<stdio.h>

double calcSalary(double basic)
{
    double da, ta, hra, total;

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

    total = da + ta + hra;

    printf("DA = %.2lf\nTA = %.2lf\nHRA = %.2lf\n", da, ta, hra);
    return total;
}

int main()
{
    double basic, salary;

    printf("Enter the basic salary: ");
    scanf("%lf", &basic);

    salary = calcSalary(basic);

    printf("Total Salary = %.2lf\n", salary);

    return 0;
}

