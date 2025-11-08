#include<stdio.h>

int evenOdd();   // declaration

void main()
{
    int result = evenOdd();   // function call
    if(result == 1)
        printf("Even");
    else
        printf("Odd");
}

int evenOdd()   // definition
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n % 2 == 0)
        return 1;   // 1 for even
    else
        return 0;   // 0 for odd
}

