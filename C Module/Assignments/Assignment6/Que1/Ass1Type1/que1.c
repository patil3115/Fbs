#include<stdio.h>

void evenOdd();  // declaration

void main()
{
    evenOdd();   // function call
}

void evenOdd()   // definition
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n % 2 == 0)
        printf("Even");
    else
        printf("Odd");
}

