#include<stdio.h>

void evenOdd(int n);   // declaration

void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    evenOdd(num);   // call with argument
}

void evenOdd(int n)   // definition
{
    if(n % 2 == 0)
        printf("Even");
    else
        printf("Odd");
}

